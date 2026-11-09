// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/SetCalibrationFlag.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/set_calibration_flag.h"


#ifndef DOBOT__MSG__DETAIL__SET_CALIBRATION_FLAG__STRUCT_H_
#define DOBOT__MSG__DETAIL__SET_CALIBRATION_FLAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/SetCalibrationFlag in the package dobot.
/**
  * 标定标志。话题 rt/set/calibration/flag。每一位对应一路关节。
  * 长度 30，与底层 IDL 一致。
 */
typedef struct dobot__msg__SetCalibrationFlag
{
  bool flag[30];
} dobot__msg__SetCalibrationFlag;

// Struct for a sequence of dobot__msg__SetCalibrationFlag.
typedef struct dobot__msg__SetCalibrationFlag__Sequence
{
  dobot__msg__SetCalibrationFlag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__SetCalibrationFlag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__SET_CALIBRATION_FLAG__STRUCT_H_
