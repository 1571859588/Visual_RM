// topic_subscriber.cpp
#include "AdujstContrastBright/topic_subscriber.hpp"

TopicSubscriber::TopicSubscriber() : Node("topic_subscriber_node") {
    subscription_ = this->create_subscription<std_msgs::msg::String>(
        "topic_name", 10, std::bind(&TopicSubscriber::messageCallback, this, std::placeholders::_1));
}

void TopicSubscriber::messageCallback(const std_msgs::msg::String::SharedPtr msg) {
    RCLCPP_INFO(this->get_logger(), "Received message: '%s'", msg->data.c_str());
}