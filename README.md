# Visual_RM


# Base_Tasks
Now I am working for the Base_Task, and I have done the work1 to work4. 


# Work and details

Every directory means work details.

---- 
 
## base_tasks

### Work1 

Looking for the commit message of "luogu end!" to see the details.

### Work2 

The github pushed is the work2.

### Work3 

Looking for the commit message of "work3 have done setup a SubAndPub moudle" to see the details.

### Work4 

Refer to [here](https://fishros.com/d2lros2/#/humble/chapt6/get_started/5.%E9%BD%90%E6%AC%A1%E5%9D%90%E6%A0%87%E5%8F%98%E6%8D%A2)  the 2D transfer format is as follow:
```
double theta=request->offset_theta;// 两坐标系的相对偏移量 ，以逆时针方向为正
double offset_x=request->offset_x; // 两坐标系的相对x坐标
double offset_y=request->offset_y; // 两坐标系的相对y坐标
double x=request->x; // 一点在一个坐标系上的x坐标
double y=request->y; // 一点在一个坐标系上的y坐标
response->x = x*std::cos(theta)-y*std::sin(theta)+offset_x;
response->y = x*std::sin(theta)+y*std::cos(theta)+offset_y; 
```

### Work5

Refer to [HSV](https://zhuanlan.zhihu.com/p/306051120) to learn HSV.
In order to learn HSV more deeply.
I create a node named "test" in scan_find_py/test.py to control the HVS_vlaue and see the image change directly.
![test_result](/base_tasks//Image/test_result.png)

## exam_tasks

### Work1 

#### result
![work1_result](/exam_tasks/Images/work1_result.png)

#### show the image
I take a close look in the metadata.yaml and see the topic format is image. And I create a topic_subscription to the video.

You can run the following code to show it, and the code in src/show.cpp :
```
ros2 run show_images image_subscrib
```
At RM/material/vision_task, create an terminal: 
```
ros2 bag play vision_task_0.db3
```
And the video will show on the screen. The picture I put in the RM/exam_tasks/Images/deck.png.

#### ArmorDetection

由于本人才疏学浅，自己难以凭空想出，只好参考了多个大佬的文章做出了此题。由于本人英语水平有限，且多为中式英语，此处为了避免错误表达便采用中文说明（虽然写的也挺乱的哈哈哈~）
---

LightDescriptor 类用于记录灯的特征，包括宽度、长度、中心点、角度、面积

使用ArmorDetectionNode类 订阅视频中"/color/image_raw"图像消息，并在接收到图像时调用imageCallback函数进行装甲板识别算法处理

imageCallback函数以接受的图像消息作为参数
使用cv_bridge::toCvCopy将ROS图像消息转换为OpenCV图像格式，并赋值给cv_bridge::CvImagePtr cv_ptr
使用cv::cvtColor(cv_ptr->image, frame, cv::COLOR_BGR2HSV);将图像转换为HSV颜色空间，存储在cv::Mat frame中

将每一帧图像分离通道，存储在vector<cv::Mat> channels中，并提取出红色通道channels.at(2); ，设定红色区域的阈值范围，其中根据调试，选定了较优范围为cv::Scalar(0, 160, 255)到 cv::Scalar(179, 255, 255)，并采用Canny边缘检测、高斯模糊、膨胀操作、闭运算（此处对这些的原理还没有时间深究，仅参考了一些大佬的代码）

通过cv::findContours函数寻找轮廓，并使用vector<LightDescriptor> lightInfos; 存储进行轮廓检测后的图像的灯条特征信息

接下来对每个轮廓计算面积、去除较小面积和fitEllipse限制条件，使用椭圆拟合区域得到外接矩形，去除长宽比大于5的轮廓，并扩大灯柱的面积，存储在lightInfos向量中

接着对存储在lightInfos向量中的灯柱信息进行以下处理：
1. 计算两两角差、长度差比率，筛选掉角差大于10，长度差大于0.8的灯柱
2. 通过灯柱中心点计算两两灯条相距的距离
3. 计算左右灯条长度二者的平均值、二者长度差比值、二者灯条中心点y的差值、二者中心点x的差值
4. 将y的差值除以二者长度平均值得到y的差比率，同理得到x的差比率
5. 使用二者距离除以二者平均值得到相距距离与灯条长度比值
6. 将二者长度差比值大于0.5、y差比率大于1.2、x差比率大于2、x差比率小于0.6、相距距离与灯条长度比值大于3.5或小于0.5的灯条筛选掉
7. 通过1-6步骤，即可得到符合条件的左右灯条，接着通过二者的中心点坐标计算出甲板中心点坐标，通过cv::RotatedRect计算旋转矩阵
8. 获取旋转矩阵的四个顶点，使用这四个顶点在原图上绘制装甲板轮廓


### Work2 

# Moudles

You can use the moudles to learn some knowledge points.

## Topic

Publisher and subscriber communicate with the same topic. The topic message is one-way communication.


## Service

Server and client communicate with the same service. The service message is two-way communication. There is only one service_server, while client can have more than one.

## Interface_Service_Topic

Use service and msg interface.                            ---example_ros2_interfaces
Control the robot to move back and forth in one direction. 

The server is coded in example_interfaces_control_01.cpp  ---example_interfaces_rclcpp
The client is coded in example_interfaces_robot_01.cpp    ---example_interfaces_rclcpp

## Service_AddTwoInts

For example, in work place the cpp_srvcli package is as follows:
```
cpp_srvcli/
├── CMakeLists.txt
├── include
│   └── cpp_srvcli
├── package.xml
└── src
    ├── add_two_ints_client.cpp
    └── add_two_ints_server.cpp
```
The interface package is as follows:
```
example_interfaces/
├── CMakeLists.txt
├── include
│   └── example_interfaces
├── package.xml
├── src
└── srv
    └── AddTwoInts.srv

```
### CLI package
In c++, the cpp_srvcli package should add following content:

In cpp_srvcli/CMakeLists.txt:
```
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)

add_executable(server src/add_two_ints_server.cpp)
ament_target_dependencies(server rclcpp example_interfaces)

add_executable(client src/add_two_ints_client.cpp)
ament_target_dependencies(client rclcpp example_interfaces)

install(TARGETS
  server
  client
  DESTINATION lib/${PROJECT_NAME})

```

In cpp/package.xml:
```
<depend>rclcpp</depend>
<depend>example_interfaces</depend>
```

In src/*server.cpp or src/*client.cpp:
```
#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"
```

### interface package
The interface package should add following content:

In example_interfaces/CMakeLists.txt:
```
find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
"srv/AddTwoInts.srv"
)
```
In example_interfaces/package.xml:
```
<build_depend>rosidl_default_generators</build_depend>
<exec_depend>rosidl_default_runtime</exec_depend>
<member_of_group>rosidl_interface_packages</member_of_group>
```



## Param_communicate

This directory shows how to control the level of logger_info with parameter.

## Action

Use the action_communication to control the robot move to the target_position, which robot will send feedback during the process.

## RVIZ2_URDF_py

I use the Gazebo to simulate a robot , who can show in Gazebo. However , it failed when I use the launch_py to one-step run and show in the Gazebo, which I had follow the fishros and it stop at [here](https://fishros.com/d2lros2/#/humble/chapt9/get_started/3.%E5%9C%A8Gazebo%E5%8A%A0%E8%BD%BD%E6%9C%BA%E5%99%A8%E4%BA%BA%E6%A8%A1%E5%9E%8B). I have to stop my work and look for the error. 



