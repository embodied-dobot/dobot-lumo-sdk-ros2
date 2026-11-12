// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/EnableMotors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/enable_motors.h"


#ifndef DOBOT__MSG__DETAIL__ENABLE_MOTORS__STRUCT_H_
#define DOBOT__MSG__DETAIL__ENABLE_MOTORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/EnableMotors in the package dobot.
/**
  * Motor enable. Topic rt/enable/motors. Each bit maps to one motor; true means enabled.
  * Length 30, matching the underlying IDL.
 */
typedef struct dobot__msg__EnableMotors
{
  bool flag[30];
} dobot__msg__EnableMotors;

// Struct for a sequence of dobot__msg__EnableMotors.
typedef struct dobot__msg__EnableMotors__Sequence
{
  dobot__msg__EnableMotors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__EnableMotors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__ENABLE_MOTORS__STRUCT_H_
