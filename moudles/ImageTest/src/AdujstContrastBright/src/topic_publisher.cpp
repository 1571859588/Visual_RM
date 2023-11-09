// topic_publisher.cpp
#include "AdujstContrastBright/topic_publisher.hpp"

TopicPublisher::TopicPublisher() : Node("topic_publisher_node") {
    publisher_ = this->create_publisher<std_msgs::msg::String>("topic_name", 10);
}

void TopicPublisher::publishMessage(const std::string& message) {
    auto msg = std_msgs::msg::String();
    msg.data = message;
    publisher_->publish(msg);
}