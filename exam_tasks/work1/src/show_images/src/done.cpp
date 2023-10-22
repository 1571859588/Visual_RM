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

        cv::Scalar lower_red1(0, 100, 100);
        cv::Scalar upper_red1(10, 255, 255);
        cv::Scalar lower_red2(160, 100, 100);
        cv::Scalar upper_red2(179, 255, 255);

        cv::Mat red_mask1, red_mask2;
        cv::inRange(hsv_image, lower_red1, upper_red1, red_mask1);
        cv::inRange(hsv_image, lower_red2, upper_red2, red_mask2);
        cv::Mat red_mask = red_mask1 | red_mask2;

        cv::Mat result_image;
        cv::bitwise_and(cv_ptr->image, cv_ptr->image, result_image, red_mask);

        // 装甲板框选
        std::vector<cv::Vec4i> hierarchy;
        std::vector<std::vector<cv::Point>> contours;
        cv::findContours(red_mask.clone(), contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

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