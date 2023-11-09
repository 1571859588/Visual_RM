// topic_subscriber.hpp
#ifndef TOPIC_SUBSCRIBER_HPP
#define TOPIC_SUBSCRIBER_HPP

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class TopicSubscriber : public rclcpp::Node {
public:
    TopicSubscriber();

private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;

    void messageCallback(const std_msgs::msg::String::SharedPtr msg);
};

#endif // TOPIC_SUBSCRIBER_HPP