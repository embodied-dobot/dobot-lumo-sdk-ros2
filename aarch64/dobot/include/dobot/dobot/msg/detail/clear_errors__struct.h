// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/ClearErrors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/clear_errors.h"


#ifndef DOBOT__MSG__DETAIL__CLEAR_ERRORS__STRUCT_H_
#define DOBOT__MSG__DETAIL__CLEAR_ERRORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ClearErrors in the package dobot.
/**
  * Clear errors. Topic rt/clear/errors.
  * Message id incremented by the caller, used to distinguish repeated requests.
 */
typedef struct dobot__msg__ClearErrors
{
  int32_t msg_id;
} dobot__msg__ClearErrors;

// Struct for a sequence of dobot__msg__ClearErrors.
typedef struct dobot__msg__ClearErrors__Sequence
{
  dobot__msg__ClearErrors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__ClearErrors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__CLEAR_ERRORS__STRUCT_H_
