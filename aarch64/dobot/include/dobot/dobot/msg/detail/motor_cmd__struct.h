// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/MotorCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/motor_cmd.h"


#ifndef DOBOT__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
#define DOBOT__MSG__DETAIL__MOTOR_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorCmd in the package dobot.
/**
  * Servo command of a single joint. Field order matches dobot::msg::dds_::MotorCmd_.
  * Motor mode, raw protocol value, range 0-255.
 */
typedef struct dobot__msg__MotorCmd
{
  uint8_t mode;
  /// Target position, in rad.
  float q;
  /// Target velocity, in rad/s.
  float dq;
  /// Feedforward torque, in N·m.
  float tau;
  /// Position proportional gain. Negative values are physically meaningless and rejected by the SDK.
  float kp;
  /// Velocity derivative gain. Negative values are physically meaningless and rejected by the SDK.
  float kd;
} dobot__msg__MotorCmd;

// Struct for a sequence of dobot__msg__MotorCmd.
typedef struct dobot__msg__MotorCmd__Sequence
{
  dobot__msg__MotorCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__MotorCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
