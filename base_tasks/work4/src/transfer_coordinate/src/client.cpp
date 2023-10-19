#include "rclcpp/rclcpp.hpp"
#include "relative_interface/srv/relate_coordinate.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  if (argc != 6) {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: coordinate_transform_client : offset_theta offset_x offset_y x y ");
      return 1;
  }

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("coordinate_transform_client");
  rclcpp::Client<relative_interface::srv::RelateCoordinate>::SharedPtr client =
    node->create_client<relative_interface::srv::RelateCoordinate>("coordinate_transform");

  auto request = std::make_shared<relative_interface::srv::RelateCoordinate::Request>();
  request->offset_theta = atoll(argv[1]);
  request->offset_x = atoll(argv[2]);
  request->offset_y = atoll(argv[3]);
  request->x = atoll(argv[4]);
  request->y = atoll(argv[5]);


  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    auto future_result = result.get();
    
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), " x: %lf", future_result.get()->x);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), " y: %lf", future_result.get()->y);

   
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service coordinate_transform");
  }

  rclcpp::shutdown();
  return 0;
}