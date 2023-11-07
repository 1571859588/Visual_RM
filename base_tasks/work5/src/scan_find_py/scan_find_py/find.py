import rclpy                            # ROS2 Python接口库
from rclpy.node import Node             # ROS2 节点类

import cv2                              # OpenCV图像处理库
import numpy as np                      # Python数值计算库

# 在HSV颜色空间中，颜色由三个通道表示：H（色调），S（饱和度）和V（亮度/值）
# 各值域范围
# H: 0— 180
# S: 0— 255
# V: 0— 255
lower_red = np.array([0, 90, 128])     # 红色的HSV阈值下限
upper_red = np.array([180, 255, 255])  # 红色的HSV阈值上限

def object_detect(image):
    
    hsv_img = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)      # 图像从BGR颜色模型转换为HSV模型
    
    mask_red = cv2.inRange(hsv_img, lower_red, upper_red) # 图像二值化
    # 第一个参数：hsv指的是原图
    # 第二个参数：lower_red指的是图像中低于这个lower_red的值，图像值变为0
    # 第三个参数：upper_red指的是图像中高于这个upper_red的值，图像值变为0
    # 而在lower_red～upper_red之间的值变成255


    # cv2.findContours函数的返回值包括两个：
    # contours：一个包含所有检测到的轮廓的列表，每个轮廓由一系列点组成。
    # hierarchy：一个包含轮廓层级关系的数组，用于描述轮廓之间的嵌套关系。
    contours, hierarchy = cv2.findContours(mask_red, cv2.RETR_LIST, cv2.CHAIN_APPROX_NONE) # 图像中轮廓检测 

    for cnt in contours:                                  # 去除一些轮廓面积太小的噪声
        print("cnt: ",cnt.shape,cnt)
        
        if cnt.shape[0] < 150:
            continue
        
        (x, y, w, h) = cv2.boundingRect(cnt)              # 得到苹果所在轮廓的左上角xy像素坐标及轮廓范围的宽和高


        # cv2.drawContours(image, contours, contourIdx, color, thickness=None, lineType=None, hierarchy=None, maxLevel=None, offset=None)
        # 第一个参数是指明在哪幅图像上绘制轮廓；image为三通道才能显示轮廓
        # 第二个参数是轮廓本身，在Python中是一个list;
        # 第三个参数指定绘制轮廓list中的哪条轮廓，如果是-1，则绘制其中的所有轮廓。后面的参数很简单。其中thickness表明轮廓线的宽度，如果是-1（cv2.FILLED），则为填充模式。
        cv2.drawContours(image, [cnt], -1, (0, 255, 0), 2)# 将苹果的轮廓勾勒出来


        # cv2.circle(img, center, radius, color[, thickness[, lineType[, shift]]])
        # 作用: 根据给定的圆心和半径等画圆
        # 参数说明
        # img：输入的图片data
        # center：圆心位置
        # radius：圆的半径
        # color：圆的颜色
        # thickness：圆形轮廓的粗细（如果为正）。负厚度表示要绘制实心圆。
        # lineType： 圆边界的类型。
        # shift(转变)：中心坐标和半径值中的小数位数。
        # cv2.circle(image, (int(x+w/2), int(y+h/2)), 5, (0, 255, 0), -1)# 将苹果的图像中心点画出来
    cv2.namedWindow('object', cv2.WINDOW_NORMAL)      # 控制窗口大小可控
    cv2.imshow("object", image)                           # 使用OpenCV显示处理后的图像效果
    cv2.waitKey(0)
    cv2.destroyAllWindows()

def main(args=None):                                      # ROS2节点主入口main函数
    rclpy.init(args=args)                                 # ROS2 Python接口初始化
    node = Node("find")                            # 创建ROS2节点对象并进行初始化
    node.get_logger().info("ROS2节点示例：检测图片中的苹果")

    image = cv2.imread('/home/lenck/RM/base_tasks/Image/apple.jpeg')  # 读取图像 苹果
    print("Image : ",image)
    object_detect(image)                                   # 苹果检测
    rclpy.spin(node)                                       # 循环等待ROS2退出
    node.destroy_node()                                    # 销毁节点对象
    rclpy.shutdown()                                       # 关闭ROS2 Python接口