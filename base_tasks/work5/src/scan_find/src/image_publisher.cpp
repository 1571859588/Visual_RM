#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("image_publisher");

    // 加载需要处理的图像
    cv::Mat image = cv::imread("/home/lenck/RM/base_tasks/Image/apple_process.jpeg", cv::IMREAD_COLOR);
    if (image.empty())
    {
        RCLCPP_ERROR(node->get_logger(), "Failed to load image");
        return -1;
    }

    // 创建图像消息并发布
    auto pub = node->create_publisher<sensor_msgs::msg::Image>("image", 10);
    sensor_msgs::msg::Image msg;
    msg.header.frame_id = "camera";
    msg.height = image.rows;
    msg.width = image.cols;
    msg.encoding = "bgr8";
    msg.step = image.cols * image.elemSize();
    size_t size = msg.step * image.rows;
    msg.data.resize(size);
    memcpy(msg.data.data(), image.data, size);
    pub->publish(msg);

    rclcpp::shutdown();
    return 0;
}