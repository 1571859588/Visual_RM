// main_subscriber.cpp
#include "rclcpp/rclcpp.hpp"
#include "AdujstContrastBright/topic_subscriber.hpp"

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TopicSubscriber>();

    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}