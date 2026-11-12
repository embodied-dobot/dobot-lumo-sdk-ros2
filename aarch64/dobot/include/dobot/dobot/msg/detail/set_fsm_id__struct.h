// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/SetFsmId.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/set_fsm_id.h"


#ifndef DOBOT__MSG__DETAIL__SET_FSM_ID__STRUCT_H_
#define DOBOT__MSG__DETAIL__SET_FSM_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'current_action'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SetFsmId in the package dobot.
/**
  * Motion control FSM topic. Topic rt/set/fsm/id. Published by the lower layer when a skill starts and ends.
  * FSM id. 0 is also a valid id. Range 0-65535.
 */
typedef struct dobot__msg__SetFsmId
{
  uint16_t id;
  /// Name of the action currently running. Empty string means no action.
  rosidl_runtime_c__String current_action;
} dobot__msg__SetFsmId;

// Struct for a sequence of dobot__msg__SetFsmId.
typedef struct dobot__msg__SetFsmId__Sequence
{
  dobot__msg__SetFsmId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__SetFsmId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__SET_FSM_ID__STRUCT_H_
