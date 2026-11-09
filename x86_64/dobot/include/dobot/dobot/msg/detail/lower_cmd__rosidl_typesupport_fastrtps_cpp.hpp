// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from dobot:msg/LowerCmd.idl
// generated code does not contain a copyright notice

#ifndef DOBOT__MSG__DETAIL__LOWER_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DOBOT__MSG__DETAIL__LOWER_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "dobot/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "dobot/msg/detail/lower_cmd__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace dobot
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot
cdr_serialize(
  const dobot::msg::LowerCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dobot::msg::LowerCmd & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot
get_serialized_size(
  const dobot::msg::LowerCmd & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot
max_serialized_size_LowerCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot
cdr_serialize_key(
  const dobot::msg::LowerCmd & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot
get_serialized_size_key(
  const dobot::msg::LowerCmd & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot
max_serialized_size_key_LowerCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot
has_buffer_fields_LowerCmd();

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dobot

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot, msg, LowerCmd)();

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__LOWER_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
