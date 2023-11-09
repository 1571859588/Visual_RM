#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>
#include <bits/stdc++.h>
using namespace std;
using namespace cv;
class LightDescriptor // 用于描述灯条的特征
{
public:
    LightDescriptor(){};
    LightDescriptor(const cv::RotatedRect &light)
    {
        width = light.size.width;
        length = light.size.height;
        center = light.center;
        angle = light.angle;
        area = light.size.area();
    }
    const LightDescriptor &operator=(const LightDescriptor &ld)
    {
        this->width = ld.width;
        this->length = ld.length;
        this->center = ld.center;
        this->angle = ld.angle;
        this->area = ld.area;
        return *this;
    }

public:
    float width;
    float length;
    cv::Point2f center;//表示一个二维平面中的点，其中包括x和y坐标
    float angle;
    float area;
};

class ArmorDetectionNode : public rclcpp::Node
{
public:
    ArmorDetectionNode() : Node("armor_detection_node") // 创建图像消息的订阅者
    {
        subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/color/image_raw",
            10,
            std::bind(&ArmorDetectionNode::imageCallback, this, std::placeholders::_1));
        // 当接收到图像消息时，会调用imageCallback函数进行装甲板识别算法处理，并显示处理后
    }

private:
    void imageCallback(const sensor_msgs::msg::Image::SharedPtr msg) // 实现imageCallback函数，用于处理接收到的图像消息并进行装甲板识别算法处理
    {
        cv_bridge::CvImagePtr cv_ptr;
        try
        {
            cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8); // 使用cv_bridge将ROS图像消息转换为OpenCV图像格式
        }
        catch (cv_bridge::Exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what()); // 输出异常信息
            return;
        }

        // 装甲板颜色识别 对图像进行装甲板颜色识别，提取红色通道并进行Canny边缘检测、高斯模糊、膨胀等处理
        // cv::Mat hsv_image;
        cv::Mat frame;
        // way2(cv_ptr->image);
        cv::cvtColor(cv_ptr->image, frame, cv::COLOR_BGR2HSV); // 将图像转换为HSV颜色空间
        vector<cv::Mat> channels;
        split(frame, channels);                                                    // 分离通道
        cv::Mat red = channels.at(2);                                              // 提取红色通道
        cv::inRange(red, cv::Scalar(0, 160, 255), cv::Scalar(179, 255, 255), red); // 设定红色区域的阈值范围
        cv::Canny(red, red, 0, 30, 3);                                             // Canny边缘检测
        cv::GaussianBlur(red, red, cv::Size(3, 3), 0);                             // 高斯模糊
        Mat element = getStructuringElement(MORPH_ELLIPSE, Size(5, 5));
        cv::dilate(red, red, element);                  // 膨胀操作
        cv::morphologyEx(red, red, cv::MORPH_CLOSE, 0); // 闭运算
        vector<vector<cv::Point>> contours;
        vector<cv::Vec4i> hierachy;

        cv::findContours(red, contours, hierachy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE); // 寻找轮廓
        vector<LightDescriptor> lightInfos;                                                    // 对处理后的图像进行轮廓检测，提取灯条的特征信息并存储在LightDescriptor类中
        for (int i = 0; i < contours.size(); i++)
        {
            // 求轮廓面积
            double area = cv::contourArea(contours[i]); // 计算轮廓面积
            // 去除较小轮廓&fitEllipse的限制条件
            if (area < 5 || contours[i].size() <= 1)
                continue;
            // 用椭圆拟合区域得到外接矩形
            cv::RotatedRect Light_Rec = fitEllipse(contours[i]); // 用椭圆拟合

            // 长宽比和轮廓面积比限制
            if (Light_Rec.size.width / Light_Rec.size.height > 5)
                continue;
            // 扩大灯柱的面积
            Light_Rec.size.height *= 1.1;
            Light_Rec.size.width *= 1.1;
            lightInfos.push_back(LightDescriptor(Light_Rec));
        }

        for (size_t i = 0; i < lightInfos.size(); i++)
        {
            for (size_t j = i + 1; (j < lightInfos.size()); j++)
            {
                LightDescriptor &leftLight = lightInfos[i];
                LightDescriptor &rightLight = lightInfos[j];

                // 角差
                float angleDiff_ = abs(leftLight.angle - rightLight.angle);
                // 长度差比率
                float LenDiff_ratio = abs(leftLight.length - rightLight.length) / max(leftLight.length, rightLight.length);
                // 筛选
                if (angleDiff_ > 10 || LenDiff_ratio > 0.8)
                {
                    continue;
                }

                // 左右灯条相距距离
                float dis = pow(pow((leftLight.center.x - rightLight.center.x), 2) + pow((leftLight.center.y - rightLight.center.y), 2), 0.5);
                // 左右灯条长度的平均值
                float meanLen = (leftLight.length + rightLight.length) / 2;
                // 左右灯条长度差比值
                float lendiff = abs(leftLight.length - rightLight.length) / meanLen;
                // 左右灯条中心点y的差值
                float yDiff = abs(leftLight.center.y - rightLight.center.y);
                // y差比率
                float yDiff_ratio = yDiff / meanLen;
                // 左右灯条中心点x的差值
                float xDiff = abs(leftLight.center.x - rightLight.center.x);
                // x差比率
                float xDiff_ratio = xDiff / meanLen;
                // 相距距离与灯条长度比值
                float ratio = dis / meanLen;
                // 筛选条件：通过计算得到的各种比率和长度差来筛选符合条件的装甲板
                if (lendiff > 0.5 ||     // 长度差超过阈值
                    yDiff_ratio > 1.2 || // y差比率超过阈值
                    xDiff_ratio > 2 ||   // x差比率超过阈值
                    xDiff_ratio < 0.6 || // x差比率低于阈值
                    ratio > 3.5 ||       // 距离与灯条长度比值超过阈值
                    ratio < 0.5)         // 距离与灯条长度比值低于阈值
                {
                    continue; // 不符合条件，跳过当前装甲板
                }

                // 计算装甲板中心点
                Point center = Point((leftLight.center.x + rightLight.center.x) / 2, (leftLight.center.y + rightLight.center.y) / 2);

                // 构建旋转矩形
                cv::RotatedRect rect = cv::RotatedRect(center, Size(dis, meanLen), (leftLight.angle + rightLight.angle) / 2);

                // 获取旋转矩形的四个顶点
                cv::Point2f vertices[4];
                rect.points(vertices);

                // 在原图上绘制装甲板轮廓
                for (int i = 0; i < 4; i++)
                {
                    line(frame, vertices[i], vertices[(i + 1) % 4], Scalar(0, 0, 255), 2); // 使用红色线条绘制装甲板轮廓
                }

                // 显示绘制了装甲板轮廓的图像
                cv::imshow("装甲板识别1", red);  // 显示二值化后的图像
                cv::imshow("装甲板识别", frame); // 显示原图
                cv::imshow("Armor Detection", cv_ptr->image);
                cv::waitKey(1);
                // cv::waitKey(1);是一个用于等待用户按键输入的函数。它的参数表示等待按键的时间（以毫秒为单位），
                // 如果设置为0或负数，则表示一直等待用户按键输入。
                // 当参数为正数时，表示等待指定的时间后继续执行程序。
                // 在这个特定的情况下，cv::waitKey(1);是为了等待1毫秒，以便允许窗口显示并等待用户按键输入。如果没有这行代码，窗口可能会在显示后立即关闭，用户无法看到图像。
            }
        }
    }
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
};
int main(int argc, char **argv)
{
    // 初始化ROS节点并创建ArmorDetectionNode实例
    rclcpp::init(argc, argv);

    // 创建ArmorDetectionNode实例
    auto node = std::make_shared<ArmorDetectionNode>();
    // rclcpp::spin(node)是一个很重要的函数。它会让程序进入一个无限循环，等待并处理来自ROS的消息。
    // 当有消息到达时，它会调用相应的回调函数来处理消息。这种事件驱动的方式让ROS节点能够异步地处理消息，而不需要使用显式的循环。
    // 进入ROS事件循环处理，等待并处理来自ROS的消息
    rclcpp::spin(node);

    // 关闭ROS节点
    rclcpp::shutdown();

    // 返回0表示main函数执行成功
    return 0;
}