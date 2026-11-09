// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/UpperCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/upper_cmd.h"


#ifndef DOBOT__MSG__DETAIL__UPPER_CMD__STRUCT_H_
#define DOBOT__MSG__DETAIL__UPPER_CMD__STRUCT_H_

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

/// Struct defined in msg/UpperCmd in the package dobot.
/**
  * 上肢命令。话题 rt/upper/cmd。motor_cmd 长度 18，与底层 IDL 一致。
 */
typedef struct dobot__msg__UpperCmd
{
  dobot__msg__MotorCmd motor_cmd[18];
} dobot__msg__UpperCmd;

// Struct for a sequence of dobot__msg__UpperCmd.
typedef struct dobot__msg__UpperCmd__Sequence
{
  dobot__msg__UpperCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__UpperCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__UPPER_CMD__STRUCT_H_
