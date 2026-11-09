# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target dobot::dobot
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${dobot_TARGETS}.
if(dobot_TARGETS AND NOT TARGET dobot::dobot)
  add_library(dobot::dobot INTERFACE IMPORTED)
  set_target_properties(dobot::dobot PROPERTIES
    INTERFACE_LINK_LIBRARIES "${dobot_TARGETS}")
endif()
