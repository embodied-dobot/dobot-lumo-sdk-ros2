// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from dobot:msg/GamepadState.idl
// generated code does not contain a copyright notice
#ifndef DOBOT__MSG__DETAIL__GAMEPAD_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define DOBOT__MSG__DETAIL__GAMEPAD_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "dobot/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dobot/msg/detail/gamepad_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot
bool cdr_serialize_dobot__msg__GamepadState(
  const dobot__msg__GamepadState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot
bool cdr_deserialize_dobot__msg__GamepadState(
  eprosima::fastcdr::Cdr &,
  dobot__msg__GamepadState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot
size_t get_serialized_size_dobot__msg__GamepadState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot
size_t max_serialized_size_dobot__msg__GamepadState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot
bool cdr_serialize_key_dobot__msg__GamepadState(
  const dobot__msg__GamepadState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot
size_t get_serialized_size_key_dobot__msg__GamepadState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot
size_t max_serialized_size_key_dobot__msg__GamepadState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot
bool has_buffer_fields_dobot__msg__GamepadState();

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot, msg, GamepadState)();

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__GAMEPAD_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
