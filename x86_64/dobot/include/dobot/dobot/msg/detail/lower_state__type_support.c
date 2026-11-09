// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dobot:msg/LowerState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dobot/msg/detail/lower_state__rosidl_typesupport_introspection_c.h"
#include "dobot/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dobot/msg/detail/lower_state__functions.h"
#include "dobot/msg/detail/lower_state__struct.h"


// Include directives for member types
// Member `motor_state`
#include "dobot/msg/motor_state.h"
// Member `motor_state`
#include "dobot/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot__msg__LowerState__init(message_memory);
}

void dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_fini_function(void * message_memory)
{
  dobot__msg__LowerState__fini(message_memory);
}

size_t dobot__msg__LowerState__rosidl_typesupport_introspection_c__size_function__LowerState__motor_state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 15;
}

const void * dobot__msg__LowerState__rosidl_typesupport_introspection_c__get_const_function__LowerState__motor_state(
  const void * untyped_member, size_t index)
{
  const dobot__msg__MotorState * member =
    (const dobot__msg__MotorState *)(untyped_member);
  return &member[index];
}

void * dobot__msg__LowerState__rosidl_typesupport_introspection_c__get_function__LowerState__motor_state(
  void * untyped_member, size_t index)
{
  dobot__msg__MotorState * member =
    (dobot__msg__MotorState *)(untyped_member);
  return &member[index];
}

void dobot__msg__LowerState__rosidl_typesupport_introspection_c__fetch_function__LowerState__motor_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dobot__msg__MotorState * item =
    ((const dobot__msg__MotorState *)
    dobot__msg__LowerState__rosidl_typesupport_introspection_c__get_const_function__LowerState__motor_state(untyped_member, index));
  dobot__msg__MotorState * value =
    (dobot__msg__MotorState *)(untyped_value);
  *value = *item;
}

void dobot__msg__LowerState__rosidl_typesupport_introspection_c__assign_function__LowerState__motor_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dobot__msg__MotorState * item =
    ((dobot__msg__MotorState *)
    dobot__msg__LowerState__rosidl_typesupport_introspection_c__get_function__LowerState__motor_state(untyped_member, index));
  const dobot__msg__MotorState * value =
    (const dobot__msg__MotorState *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_message_member_array[2] = {
  {
    "motor_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    15,  // array size
    false,  // is upper bound
    offsetof(dobot__msg__LowerState, motor_state),  // bytes offset in struct
    NULL,  // default value
    dobot__msg__LowerState__rosidl_typesupport_introspection_c__size_function__LowerState__motor_state,  // size() function pointer
    dobot__msg__LowerState__rosidl_typesupport_introspection_c__get_const_function__LowerState__motor_state,  // get_const(index) function pointer
    dobot__msg__LowerState__rosidl_typesupport_introspection_c__get_function__LowerState__motor_state,  // get(index) function pointer
    dobot__msg__LowerState__rosidl_typesupport_introspection_c__fetch_function__LowerState__motor_state,  // fetch(index, &value) function pointer
    dobot__msg__LowerState__rosidl_typesupport_introspection_c__assign_function__LowerState__motor_state,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "timestamp_us",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot__msg__LowerState, timestamp_us),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_message_members = {
  "dobot__msg",  // message namespace
  "LowerState",  // message name
  2,  // number of fields
  sizeof(dobot__msg__LowerState),
  false,  // has_any_key_member_
  dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_message_member_array,  // message members
  dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_message_type_support_handle = {
  0,
  &dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_message_members,
  get_message_typesupport_handle_function,
  &dobot__msg__LowerState__get_type_hash,
  &dobot__msg__LowerState__get_type_description,
  &dobot__msg__LowerState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot, msg, LowerState)() {
  dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot, msg, MotorState)();
  if (!dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_message_type_support_handle.typesupport_identifier) {
    dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot__msg__LowerState__rosidl_typesupport_introspection_c__LowerState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
