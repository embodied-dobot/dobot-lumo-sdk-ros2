// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dobot:msg/LowerCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dobot/msg/detail/lower_cmd__rosidl_typesupport_introspection_c.h"
#include "dobot/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dobot/msg/detail/lower_cmd__functions.h"
#include "dobot/msg/detail/lower_cmd__struct.h"


// Include directives for member types
// Member `motor_cmd`
#include "dobot/msg/motor_cmd.h"
// Member `motor_cmd`
#include "dobot/msg/detail/motor_cmd__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot__msg__LowerCmd__init(message_memory);
}

void dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_fini_function(void * message_memory)
{
  dobot__msg__LowerCmd__fini(message_memory);
}

size_t dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__size_function__LowerCmd__motor_cmd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__get_const_function__LowerCmd__motor_cmd(
  const void * untyped_member, size_t index)
{
  const dobot__msg__MotorCmd * member =
    (const dobot__msg__MotorCmd *)(untyped_member);
  return &member[index];
}

void * dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__get_function__LowerCmd__motor_cmd(
  void * untyped_member, size_t index)
{
  dobot__msg__MotorCmd * member =
    (dobot__msg__MotorCmd *)(untyped_member);
  return &member[index];
}

void dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__fetch_function__LowerCmd__motor_cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dobot__msg__MotorCmd * item =
    ((const dobot__msg__MotorCmd *)
    dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__get_const_function__LowerCmd__motor_cmd(untyped_member, index));
  dobot__msg__MotorCmd * value =
    (dobot__msg__MotorCmd *)(untyped_value);
  *value = *item;
}

void dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__assign_function__LowerCmd__motor_cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dobot__msg__MotorCmd * item =
    ((dobot__msg__MotorCmd *)
    dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__get_function__LowerCmd__motor_cmd(untyped_member, index));
  const dobot__msg__MotorCmd * value =
    (const dobot__msg__MotorCmd *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_message_member_array[1] = {
  {
    "motor_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(dobot__msg__LowerCmd, motor_cmd),  // bytes offset in struct
    NULL,  // default value
    dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__size_function__LowerCmd__motor_cmd,  // size() function pointer
    dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__get_const_function__LowerCmd__motor_cmd,  // get_const(index) function pointer
    dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__get_function__LowerCmd__motor_cmd,  // get(index) function pointer
    dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__fetch_function__LowerCmd__motor_cmd,  // fetch(index, &value) function pointer
    dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__assign_function__LowerCmd__motor_cmd,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_message_members = {
  "dobot__msg",  // message namespace
  "LowerCmd",  // message name
  1,  // number of fields
  sizeof(dobot__msg__LowerCmd),
  false,  // has_any_key_member_
  dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_message_member_array,  // message members
  dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_message_type_support_handle = {
  0,
  &dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_message_members,
  get_message_typesupport_handle_function,
  &dobot__msg__LowerCmd__get_type_hash,
  &dobot__msg__LowerCmd__get_type_description,
  &dobot__msg__LowerCmd__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot, msg, LowerCmd)() {
  dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot, msg, MotorCmd)();
  if (!dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_message_type_support_handle.typesupport_identifier) {
    dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot__msg__LowerCmd__rosidl_typesupport_introspection_c__LowerCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
