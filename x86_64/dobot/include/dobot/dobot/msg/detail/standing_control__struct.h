// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/StandingControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/standing_control.h"


#ifndef DOBOT__MSG__DETAIL__STANDING_CONTROL__STRUCT_H_
#define DOBOT__MSG__DETAIL__STANDING_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/StandingControl in the package dobot.
/**
  * Standing fine adjustment. Topic rt/stand/cmd. Accepted only in Mini standing mode (FSM 300).
  * All three targets take effect together; waist pitch and roll are not part of this message.
  * Absolute head yaw target, in rad.
 */
typedef struct dobot__msg__StandingControl
{
  float head_yaw;
  /// Waist yaw offset relative to the default posture, in rad.
  float waist_yaw;
  /// Body height target, in m. 0 restores the default standing height.
  float body_height;
} dobot__msg__StandingControl;

// Struct for a sequence of dobot__msg__StandingControl.
typedef struct dobot__msg__StandingControl__Sequence
{
  dobot__msg__StandingControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__StandingControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__STANDING_CONTROL__STRUCT_H_
