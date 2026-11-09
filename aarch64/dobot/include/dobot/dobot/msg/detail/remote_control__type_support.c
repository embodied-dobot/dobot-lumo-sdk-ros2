// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dobot:msg/RemoteControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dobot/msg/detail/remote_control__rosidl_typesupport_introspection_c.h"
#include "dobot/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dobot/msg/detail/remote_control__functions.h"
#include "dobot/msg/detail/remote_control__struct.h"


// Include directives for member types
// Member `btn_move`
// Member `btn_turn`
#include "dobot/msg/joystick_value.h"
// Member `btn_move`
// Member `btn_turn`
#include "dobot/msg/detail/joystick_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot__msg__RemoteControl__init(message_memory);
}

void dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_fini_function(void * message_memory)
{
  dobot__msg__RemoteControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_message_member_array[2] = {
  {
    "btn_move",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot__msg__RemoteControl, btn_move),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "btn_turn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot__msg__RemoteControl, btn_turn),  // bytes offset in struct
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

static const rosidl_typesupport_introspection_c__MessageMembers dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_message_members = {
  "dobot__msg",  // message namespace
  "RemoteControl",  // message name
  2,  // number of fields
  sizeof(dobot__msg__RemoteControl),
  false,  // has_any_key_member_
  dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_message_member_array,  // message members
  dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_message_type_support_handle = {
  0,
  &dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_message_members,
  get_message_typesupport_handle_function,
  &dobot__msg__RemoteControl__get_type_hash,
  &dobot__msg__RemoteControl__get_type_description,
  &dobot__msg__RemoteControl__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot, msg, RemoteControl)() {
  dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot, msg, JoystickValue)();
  dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot, msg, JoystickValue)();
  if (!dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_message_type_support_handle.typesupport_identifier) {
    dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot__msg__RemoteControl__rosidl_typesupport_introspection_c__RemoteControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
