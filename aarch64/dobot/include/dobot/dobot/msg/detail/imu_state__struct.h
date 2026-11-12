// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/IMUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/imu_state.h"


#ifndef DOBOT__MSG__DETAIL__IMU_STATE__STRUCT_H_
#define DOBOT__MSG__DETAIL__IMU_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/IMUState in the package dobot.
/**
  * IMU state. Topics rt/pelvis/imu/data and rt/torso/imu/data share this type.
  * Subscribe to only one of them per session, consistent with the C++ SDK constraint.
  * IMU id, range 0-4294967295.
 */
typedef struct dobot__msg__IMUState
{
  uint32_t imu_id;
  /// Quaternion, 4 values, order matches the underlying IDL.
  float quaternion[4];
  /// 3-axis gyroscope, order matches the underlying IDL, usually in rad/s.
  float gyroscope[3];
  /// 3-axis acceleration, order matches the underlying IDL, usually in m/s^2.
  float accelerometer[3];
  /// Euler angles in the order roll, pitch, yaw, in rad.
  float rpy[3];
  /// Raw temperature, range 0-255.
  uint8_t temperature;
  /// Sampling timestamp, in us.
  uint64_t timestamp_us;
} dobot__msg__IMUState;

// Struct for a sequence of dobot__msg__IMUState.
typedef struct dobot__msg__IMUState__Sequence
{
  dobot__msg__IMUState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__IMUState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__IMU_STATE__STRUCT_H_
