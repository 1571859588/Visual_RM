#include "rclcpp/rclcpp.hpp"
#include "relative_interface/srv/relate_coordinate.hpp"
#include <cmath>
using namespace std::placeholders;

class CoordinateTransformServer : public rclcpp::Node
{
public:
  CoordinateTransformServer() : Node("coordinate_transform_server")
  {
    srv_ = create_service<relative_interface::srv::RelateCoordinate>("coordinate_transform",
      std::bind(&CoordinateTransformServer::handle_service, this, _1, _2, _3));
  }

private:
  void handle_service(const std::shared_ptr<rmw_request_id_t> request_header,
    const std::shared_ptr<relative_interface::srv::RelateCoordinate::Request> request,
    const std::shared_ptr<relative_interface::srv::RelateCoordinate::Response> response)
  {
    // TODO: Implement coordinate transformation logic here

    double theta=request->offset_theta;// 两坐标系的相对偏移量 ，以逆时针方向为正
    double offset_x=request->offset_x; // 两坐标系的相对x坐标
    double offset_y=request->offset_y; // 两坐标系的相对y坐标
    double x=request->x; // 一点在一个坐标系上的x坐标
    double y=request->y; // 一点在一个坐标系上的y坐标
    response->x = x*std::cos(theta)-y*std::sin(theta)+offset_x;
    response->y = x*std::sin(theta)+y*std::cos(theta)+offset_y; 
  }

  rclcpp::Service<relative_interface::srv::RelateCoordinate>::SharedPtr srv_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<CoordinateTransformServer>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
