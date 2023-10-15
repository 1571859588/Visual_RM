import rclpy
from rclpy.node import Node
from lt.srv import Addtwo

class adderServer(Node):
    def __init__(self,name):
        super().__init__(name)
        self.srv=self.create_service(Addtwo,'add_two_ints',self.adder_callback)

    def adder_callback(self,request,response):
        response.sum=request.a+request.b
        self.get_logger().info("Incoming...")
        return response


def main(args=None):
    rclpy.init(args=args)
    node=adderServer("service_adder_server")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()