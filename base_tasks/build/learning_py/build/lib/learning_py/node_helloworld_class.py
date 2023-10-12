import rclpy
from rclpy.node import Node
import time

class Hellowrold(Node):
    def __init__(self,name):
        super().__init__(name)
        while rclpy.ok():
            self.get_logger().info("Hello world")
            time.sleep(0.5)


def main(args=None):
    rclpy.init(args=args)
    node=Hellowrold("node_helloworld_class")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
    