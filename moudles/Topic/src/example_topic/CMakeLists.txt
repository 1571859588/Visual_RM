cmake_minimum_required(VERSION 3.8)
project(example_topic)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

add_executable(TopicSubscribe01 src/TopicSubscribe01.cpp)
add_executable(TopicPublisher01 src/TopicPublisher01.cpp)

ament_target_dependencies(TopicPublisher01 rclcpp std_msgs) 
ament_target_dependencies(TopicSubscribe01 rclcpp std_msgs) 

install(TARGETS
  TopicPublisher01
  TopicSubscribe01
  DESTINATION lib/${PROJECT_NAME}
)
