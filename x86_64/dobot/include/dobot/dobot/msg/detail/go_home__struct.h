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
  * Go home. Topic rt/go/home. Each bit maps to one motor; true means that motor takes part in homing.
  * Length 30, matching the underlying IDL.
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
