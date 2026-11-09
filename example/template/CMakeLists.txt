cmake_minimum_required(VERSION 3.16)
project(dobot_user_template)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(dobot REQUIRED)
find_package(dobot_robot_sdk REQUIRED)

set(cpp_typesupport_target dobot::dobot__rosidl_typesupport_cpp)

add_executable(user_node src/user_node.cpp)
target_link_libraries(user_node
  dobot_robot_sdk::dobot_robot_sdk
  "${cpp_typesupport_target}"
  rclcpp::rclcpp
)
install(TARGETS user_node DESTINATION lib/${PROJECT_NAME})

ament_package()
