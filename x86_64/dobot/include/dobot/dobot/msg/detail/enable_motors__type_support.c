// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dobot:msg/EnableMotors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dobot/msg/detail/enable_motors__rosidl_typesupport_introspection_c.h"
#include "dobot/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dobot/msg/detail/enable_motors__functions.h"
#include "dobot/msg/detail/enable_motors__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__EnableMotors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot__msg__EnableMotors__init(message_memory);
}

void dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__EnableMotors_fini_function(void * message_memory)
{
  dobot__msg__EnableMotors__fini(message_memory);
}

size_t dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__size_function__EnableMotors__flag(
  const void * untyped_member)
{
  (void)untyped_member;
  return 30;
}

const void * dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__get_const_function__EnableMotors__flag(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__get_function__EnableMotors__flag(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__fetch_function__EnableMotors__flag(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__get_const_function__EnableMotors__flag(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__assign_function__EnableMotors__flag(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__get_function__EnableMotors__flag(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__EnableMotors_message_member_array[1] = {
  {
    "flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    30,  // array size
    false,  // is upper bound
    offsetof(dobot__msg__EnableMotors, flag),  // bytes offset in struct
    NULL,  // default value
    dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__size_function__EnableMotors__flag,  // size() function pointer
    dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__get_const_function__EnableMotors__flag,  // get_const(index) function pointer
    dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__get_function__EnableMotors__flag,  // get(index) function pointer
    dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__fetch_function__EnableMotors__flag,  // fetch(index, &value) function pointer
    dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__assign_function__EnableMotors__flag,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__EnableMotors_message_members = {
  "dobot__msg",  // message namespace
  "EnableMotors",  // message name
  1,  // number of fields
  sizeof(dobot__msg__EnableMotors),
  false,  // has_any_key_member_
  dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__EnableMotors_message_member_array,  // message members
  dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__EnableMotors_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__EnableMotors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__EnableMotors_message_type_support_handle = {
  0,
  &dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__EnableMotors_message_members,
  get_message_typesupport_handle_function,
  &dobot__msg__EnableMotors__get_type_hash,
  &dobot__msg__EnableMotors__get_type_description,
  &dobot__msg__EnableMotors__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot, msg, EnableMotors)() {
  if (!dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__EnableMotors_message_type_support_handle.typesupport_identifier) {
    dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__EnableMotors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot__msg__EnableMotors__rosidl_typesupport_introspection_c__EnableMotors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
