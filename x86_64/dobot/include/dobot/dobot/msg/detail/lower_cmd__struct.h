// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/LowerCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/lower_cmd.h"


#ifndef DOBOT__MSG__DETAIL__LOWER_CMD__STRUCT_H_
#define DOBOT__MSG__DETAIL__LOWER_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'motor_cmd'
#include "dobot/msg/detail/motor_cmd__struct.h"

/// Struct defined in msg/LowerCmd in the package dobot.
/**
  * 下肢命令。话题 rt/lower/cmd。motor_cmd 长度 12，与底层 IDL 一致。
 */
typedef struct dobot__msg__LowerCmd
{
  dobot__msg__MotorCmd motor_cmd[12];
} dobot__msg__LowerCmd;

// Struct for a sequence of dobot__msg__LowerCmd.
typedef struct dobot__msg__LowerCmd__Sequence
{
  dobot__msg__LowerCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__LowerCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__LOWER_CMD__STRUCT_H_
