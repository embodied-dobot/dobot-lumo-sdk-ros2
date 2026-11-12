// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/JoystickValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/joystick_value.h"


#ifndef DOBOT__MSG__DETAIL__JOYSTICK_VALUE__STRUCT_H_
#define DOBOT__MSG__DETAIL__JOYSTICK_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/JoystickValue in the package dobot.
/**
  * Joystick components. x and y are raw key values, typically in the range -1.0 to 1.0.
 */
typedef struct dobot__msg__JoystickValue
{
  float x;
  float y;
} dobot__msg__JoystickValue;

// Struct for a sequence of dobot__msg__JoystickValue.
typedef struct dobot__msg__JoystickValue__Sequence
{
  dobot__msg__JoystickValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__JoystickValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__JOYSTICK_VALUE__STRUCT_H_
