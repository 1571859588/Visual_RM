#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>

class ArmorDetectionNode : public rclcpp::Node
{
public:
    ArmorDetectionNode() : Node("armor_detection_node")
    {
        subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/color/image_raw",
            10,
            std::bind(&ArmorDetectionNode::imageCallback, this, std::placeholders::_1));
    }

private:
    void imageCallback(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        cv_bridge::CvImagePtr cv_ptr;
        try
        {
            cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
        }
        catch (cv_bridge::Exception& e)
        {
            RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
            return;
        }

        // 装甲板颜色识别
        cv::Mat hsv_image;
        cv::cvtColor(cv_ptr->image, hsv_image, cv::COLOR_BGR2HSV);
// 定义了两个范围，分别是红色的HSV范围，因为红色在HSV颜色空间中跨越了0度的边界，所以需要分成两个范围。
        cv::Scalar lower_red1(0, 160, 255);
        cv::Scalar upper_red1(179, 255, 255);
        cv::Scalar lower_red2(0, 160, 255);
        cv::Scalar upper_red2(179, 255, 255);
// 使用cv::inRange函数根据定义的范围创建两个掩模图像red_mask1和red_mask2，用于提取图像中的红色部分。
        cv::Mat red_mask1, red_mask2;
        cv::inRange(hsv_image, lower_red1, upper_red1, red_mask1);
        cv::inRange(hsv_image, lower_red2, upper_red2, red_mask2);
        // 将两个掩模图像进行逻辑或运算，得到最终的红色掩模图像red_mask。
        cv::Mat red_mask = red_mask1 | red_mask2;
// 使用cv::bitwise_and函数将原始图像和红色掩模图像进行按位与操作，得到只包含红色部分的结果图像result_image
        cv::Mat result_image;
        cv::bitwise_and(cv_ptr->image, cv_ptr->image, result_image, red_mask);

        // 装甲板框选
        std::vector<cv::Vec4i> hierarchy;
        std::vector<std::vector<cv::Point>> contours;
        // 使用cv::findContours函数找到红色部分的轮廓。
        cv::findContours(red_mask.clone(), contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
// 遍历找到的轮廓，使用cv::boundingRect函数得到每个轮廓的边界矩形，然后在原始图像上绘制矩形框。
        for (size_t i = 0; i < contours.size(); i++)
        {
            cv::Rect bounding_rect = cv::boundingRect(contours[i]);
            cv::rectangle(cv_ptr->image, bounding_rect, cv::Scalar(0, 255, 0), 2);
        }

        // 显示结果图像
        cv::imshow("Armor Detection", cv_ptr->image);
        cv::waitKey(1);
    }

    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ArmorDetectionNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}