#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
#include <vector>
 
using namespace cv;
using namespace std;
 
const int ANGLE_TO_UP = 1;
const int WIDTH_GREATER_THAN_HEIGHT = 0;
 
#define DELAT_MAX 30 //定义限幅滤波误差最大值
 
typedef int64 filter_type; //定义限幅滤波数据类型
filter_type filter(filter_type effective_value, filter_type new_value, filter_type delat_max);
filter_type filter(filter_type effective_value, filter_type new_value, filter_type delat_max)
{
    if ((new_value - effective_value > delat_max) || (effective_value - new_value > delat_max))
    {
        new_value = effective_value;
        return effective_value;
    }
    else
    {
        new_value = effective_value;
        return new_value;
    }
}
 
// 为辅助筛选装甲板，提高算法运行速度，做一次筛选预处理
RotatedRect &adjustRec(cv::RotatedRect &rec, const int mode)
{
    using std::swap;
 
    float &width = rec.size.width;
    float &height = rec.size.height;
    float &angle = rec.angle;
 
    if (mode == WIDTH_GREATER_THAN_HEIGHT)
    {
        if (width < height)
        {
            swap(width, height);
            angle += 90.0;
        }
    }
 
    while (angle >= 90.0)
        angle -= 180.0;
    while (angle < -90.0)
        angle += 180.0;
 
    if (mode == ANGLE_TO_UP)
    {
        if (angle >= 45.0)
        {
            swap(width, height);
            angle -= 90.0;
        }
        else if (angle < -45.0)
        {
            swap(width, height);
            angle += 90.0;
        }
    }
    return rec;
} //由于灯条是竖着的，借此纠正不是竖着的轮廓，方便算法查找
 
int main(int argc, char* argv[]){
    //导入图像
    Mat imgOriginal;
    imgOriginal = imread("C:/Users/86139/Desktop/target.png", IMREAD_COLOR);
    if (imgOriginal.empty())
    {
        cout << "Could not open or find the image" << std::endl;
        return -1;
    }
 
    //转HSV图像，重新合并两通道，为了方便后面寻找图像中所有的轮廓
    Mat imgHSV;
    vector<Mat> hsvSplit;
    cvtColor(imgOriginal, imgHSV, COLOR_BGR2HSV);//将RGB转换为HSV，便于识别
    split(imgHSV, hsvSplit);
    equalizeHist(hsvSplit[2], hsvSplit[2]);
    merge(hsvSplit, imgHSV);//重新合并
 
    //图像二值化处理，摒弃环境光干扰
    Mat thresHold;
    threshold(hsvSplit[2], thresHold,240,245,THRESH_BINARY);
 
    //模糊/膨胀处理，让图像变得圆润
    blur(thresHold, thresHold, Size(3,3));
    Mat element = getStructuringElement(MORPH_ELLIPSE,Size(3,3));//膨胀
    dilate(thresHold, element, element);
 
    //开始寻找轮廓
    vector<RotatedRect> vc;
    vector<RotatedRect> vRec;
    vector<vector<Point>> Light_Contour;// 发现的轮廓
    findContours(element.clone(), Light_Contour, RETR_EXTERNAL,CHAIN_APPROX_SIMPLE);
 
    //从面积上选轮廓
    for (unsigned int i = 0; i < Light_Contour.size();i++)
    {
        //求轮廓面积
        double Light_Contour_Area = contourArea(Light_Contour[i]);
        //去除较小轮廓fitllipse的限制条件
        if (Light_Contour_Area < 15 || Light_Contour[i].size() <= 10)
            continue;
        // 用椭圆拟合区域得到外接矩形
        RotatedRect Light_Rec = fitEllipse(Light_Contour[i]);
        Light_Rec = adjustRec(Light_Rec, ANGLE_TO_UP);
 
        if (Light_Rec.angle > 20 )
            continue;
        // 长宽比和轮廓面积比限制
        if (Light_Rec.size.width / Light_Rec.size.height > 3
                || Light_Contour_Area / Light_Rec.size.area() < 0.3)
            continue;
        // 扩大灯柱的面积
        Light_Rec. size.height *= 1.1;
        Light_Rec.size.width *= 1.1;
        vc.push_back(Light_Rec);
    }
 
    //从灯条长宽比上来筛选轮廓
    for (size_t i = 0; i < vc.size(); i++)
    {
        for (size_t j = i + 1; (j < vc.size()); j++)
        {
            //判断是否为相同灯条
            float Contour_angle = abs(vc[i].angle - vc[j].angle); //角度差
            if (Contour_angle >= 30)
                continue;
            //长度差比率
            float Contour_Len1 = abs(vc[i].size.height - vc[j].size.height) / max(vc[i].size.height, vc[j].size.height);
            //宽度差比率
            float Contour_Len2 = abs(vc[i].size.width - vc[j].size.width) / max(vc[i].size.width, vc[j].size.width);
            if (Contour_Len1 > 0.5 || Contour_Len2 > 0.5)
                continue;
 
            RotatedRect ARMOR;
            ARMOR.center.x = (vc[i].center.x + vc[j].center.x) / 2.; //x坐标
            ARMOR.center.y = (vc[i].center.y + vc[j].center.y) / 2.; //y坐标
            ARMOR.angle = (vc[i].angle + vc[j].angle) / 2.; //角度
            float nh, nw, yDiff, xDiff;
            nh = (vc[i].size.height + vc[j].size.height) / 2; //高度
            // 宽度
            nw = sqrt((vc[i].center.x - vc[j].center.x) * (vc[i].center.x - vc[j].center.x) + (vc[i].center.y - vc[j].center.y) * (vc[i].center.y - vc[j].center.y));
            float ratio = nw / nh; //匹配到的装甲板的长宽比
            xDiff = abs(vc[i].center.x - vc[j].center.x) / nh; //x差比率
            yDiff = abs(vc[i].center.y - vc[j].center.y) / nh; //y差比率
            if (ratio < 1.0 || ratio > 5.0 || xDiff < 0.5 || yDiff > 2.0)
                continue;
            ARMOR.size.height = nh;
            ARMOR.size.width = nw;
            vRec.push_back(ARMOR);
            Point2f point1;
            Point2f point2;
            point1.x=vc[i].center.x;point1.y=vc[i].center.y+20;
            point2.x=vc[j].center.x;point2.y=vc[j].center.y-20;
            int xmidnum = (point1.x+point2.x)/2;
            int ymidnum = (point1.y+point2.y)/2;
            //此时轮廓已筛选完毕，为了方便输出，我们将得到的数据就此输出处理
            ARMOR.center.x = filter(ARMOR.center.x,xmidnum, DELAT_MAX);
            ARMOR.center.y = filter(ARMOR.center.y,ymidnum, DELAT_MAX);
            //随机颜色拟合线
            Scalar color(100, 100, 55);
            rectangle(imgOriginal, point1,point2, color, 2);//将装甲板框起来
            circle(imgOriginal,ARMOR.center,10,color);//在装甲板中心画一个圆
        }
    }
 
    imshow("Armor", imgOriginal);
    waitKey(0);
}