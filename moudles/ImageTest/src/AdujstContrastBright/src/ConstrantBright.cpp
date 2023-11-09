#include <opencv2/opencv.hpp>
#include "rclcpp/rclcpp.hpp"
using namespace cv;
using namespace std;
class ConstrantBright : public rclcpp::Node         
{
public:
    ConstrantBright(std::string name) : Node(name)
    {
        // 读入图像，判断读入是否成功
        string fileName = samples::findFile("/home/RM/material/deck.png");
        Mat src = imread(fileName, IMREAD_COLOR);

        Mat dst1, dst2, dst3;
        dst1 = Mat::zeros(src.size(), src.type());
        double alpha = 1.0;
        double beta = 0.0;
        double gama = 1.0;

        // 提示并输入 α  β  γ  的值
        cout << " Basic Linear Transforms " << endl;
        cout << "-------------------------" << endl;
        cout << "* Enter the alpha value [1.0-3.0]: ";
        cin >> alpha;
        cout << "* Enter the beta value [0-100]: ";
        cin >> beta;
        cout << "* Enter the gamma value [-1,1]: ";
        cin >> gama;
        // 直接使用循环遍历每一个像素，应用公式
        double t1 = (double)getTickCount();
        for (int row = 0; row < src.rows; ++row)
            for (int col = 0; col < src.cols; ++col)
                for (int channel = 0; channel < src.channels(); ++channel)
                {
                    dst1.at<Vec3b>(row, col)[channel] = saturate_cast<uchar>(alpha * src.at<Vec3b>(row, col)[channel] + beta);
                }
        double time1 = ((double)getTickCount() - t1) / getTickFrequency();
        cout << "Method by pixel use time:" << time1 << "(ms)" << endl;

        // 调用 convertTo() 函数调整对比度和亮度
        double t2 = (double)getTickCount();
        src.convertTo(dst2, -1, alpha, beta);
        double time2 = ((double)getTickCount() - t2) / getTickFrequency();
        cout << "Method by pixel use time:" << time2 << "(ms)" << endl;

        // 构建查找表
        Mat lookUpTable(1, 256, CV_8U);
        uchar *p = lookUpTable.ptr();
        for (int i = 0; i < 256; ++i)
            p[i] = saturate_cast<uchar>(pow(i / 255.0, gama) * 255.0);

        // 使用查找表进行对比度亮度调整
        double t3 = (double)getTickCount();
        LUT(src, lookUpTable, dst3);
        double time3 = ((double)getTickCount() - t3) / getTickFrequency();
        cout << "Method by Gamma correct use time:" << time3 << "(ms)" << endl;

        // 调整窗体大小，显示调整效果
        namedWindow("original", WINDOW_NORMAL);
        resizeWindow("original", Size(src.cols, src.rows));
        imshow("original", src);
        namedWindow("pixel set", WINDOW_NORMAL);
        resizeWindow("pixel set", Size(src.cols, src.rows));
        imshow("pixel set", dst1);
        namedWindow("convertTo", WINDOW_NORMAL);
        resizeWindow("convertTo", Size(src.cols, src.rows));
        imshow("convertTo", dst2);
        namedWindow("Gamma correct", WINDOW_NORMAL);
        resizeWindow("Gamma correct", Size(src.cols, src.rows));
        imshow("Gamma correct", dst3);
        waitKey(0);
    }
};

int
main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    /*创建对应节点的共享指针对象*/
    auto node = std::make_shared<ConstrantBright>("ConstrantBright");
    /* 运行节点，并检测退出信号*/
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
