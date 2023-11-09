// topic_publisher.hpp
#ifndef TOPIC_PUBLISHER_HPP
#define TOPIC_PUBLISHER_HPP

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class TopicPublisher : public rclcpp::Node {
public:
    TopicPublisher();

    void publishMessage(const std::string& message);

private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
};

#endif // TOPIC_PUBLISHER_HPP