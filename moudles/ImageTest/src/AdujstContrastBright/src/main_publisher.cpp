// main_publisher.cpp
#include "rclcpp/rclcpp.hpp"
#include "AdujstContrastBright/topic_publisher.hpp"

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TopicPublisher>();

    // Your code to publish messages
    while(true)
    node->publishMessage("Hello, ROS 2!");

    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}