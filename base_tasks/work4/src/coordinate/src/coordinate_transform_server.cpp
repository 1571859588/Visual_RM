#include "rclcpp/rclcpp.hpp"
#include "relative_interface/srv/relate.hpp"
#include "coordinate/srv/relate.hpp"
using namespace std::placeholders;

class CoordinateTransformServer : public rclcpp::Node
{
public:
  CoordinateTransformServer() : Node("coordinate_transform_server")
  {
    srv_ = create_service<coordinate_transform::srv::relate>("coordinate_transform",
      std::bind(&CoordinateTransformServer::handle_service, this, _1, _2, _3));
  }

private:
  void handle_service(const std::shared_ptr<rmw_request_id_t> request_header,
    const std::shared_ptr<coordinate_transform::srv::relate::Request> request,
    const std::shared_ptr<coordinate_transform::srv::relate::Response> response)
  {
    // TODO: Implement coordinate transformation logic here
    response->x = request->x + 1.0;
    response->y = request->y + 1.0;
    response->z = request->z + 1.0;
  }

  rclcpp::Service<coordinate_transform::srv::relate>::SharedPtr srv_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<CoordinateTransformServer>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
