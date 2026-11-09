// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/GoHome.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/go_home.h"


#ifndef DOBOT__MSG__DETAIL__GO_HOME__STRUCT_H_
#define DOBOT__MSG__DETAIL__GO_HOME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/GoHome in the package dobot.
/**
  * 回零。话题 rt/go/home。每一位对应一路电机，true 表示该路参与回零。
  * 长度 30，与底层 IDL 一致。
 */
typedef struct dobot__msg__GoHome
{
  bool flag[30];
} dobot__msg__GoHome;

// Struct for a sequence of dobot__msg__GoHome.
typedef struct dobot__msg__GoHome__Sequence
{
  dobot__msg__GoHome * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__GoHome__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__GO_HOME__STRUCT_H_
