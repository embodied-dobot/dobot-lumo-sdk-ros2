// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/RemoteControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/remote_control.h"


#ifndef DOBOT__MSG__DETAIL__REMOTE_CONTROL__STRUCT_H_
#define DOBOT__MSG__DETAIL__REMOTE_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'btn_move'
// Member 'btn_turn'
#include "dobot/msg/detail/joystick_value__struct.h"

/// Struct defined in msg/RemoteControl in the package dobot.
/**
  * 遥控速度意图。话题 rt/remote/control。
  * 左摇杆，前后/左右。
 */
typedef struct dobot__msg__RemoteControl
{
  dobot__msg__JoystickValue btn_move;
  /// 右摇杆，转向。
  dobot__msg__JoystickValue btn_turn;
} dobot__msg__RemoteControl;

// Struct for a sequence of dobot__msg__RemoteControl.
typedef struct dobot__msg__RemoteControl__Sequence
{
  dobot__msg__RemoteControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__RemoteControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__REMOTE_CONTROL__STRUCT_H_
