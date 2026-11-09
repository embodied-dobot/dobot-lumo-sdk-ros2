// NOLINT: This file starts with a BOM since it contain non-ASCII characters
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
  * IMU 状态。话题 rt/pelvis/imu/data 与 rt/torso/imu/data 共用本类型。
  * 同一次会话只应订阅其中一路，与 C++ SDK 的约束一致。
  * IMU 编号，范围 0–4294967295。
 */
typedef struct dobot__msg__IMUState
{
  uint32_t imu_id;
  /// 四元数，4 个数，顺序与底层 IDL 一致。
  float quaternion[4];
  /// 三轴陀螺仪，顺序与底层 IDL 一致，单位通常为 rad/s。
  float gyroscope[3];
  /// 三轴加速度，顺序与底层 IDL 一致，单位通常为 m/s^2。
  float accelerometer[3];
  /// 欧拉角，顺序滚转、俯仰、偏航，单位 rad。
  float rpy[3];
  /// 温度原始值，范围 0–255。
  uint8_t temperature;
  /// 采样时间戳，单位 us。
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
