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



