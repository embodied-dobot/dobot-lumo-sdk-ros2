// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dobot:msg/RemoteControl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dobot/msg/detail/remote_control__functions.h"
#include "dobot/msg/detail/remote_control__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dobot
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RemoteControl_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dobot::msg::RemoteControl(_init);
}

void RemoteControl_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dobot::msg::RemoteControl *>(message_memory);
  typed_message->~RemoteControl();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RemoteControl_message_member_array[2] = {
  {
    "btn_move",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dobot::msg::JoystickValue>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot::msg::RemoteControl, btn_move),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "btn_turn",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dobot::msg::JoystickValue>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot::msg::RemoteControl, btn_turn),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RemoteControl_message_members = {
  "dobot::msg",  // message namespace
  "RemoteControl",  // message name
  2,  // number of fields
  sizeof(dobot::msg::RemoteControl),
  false,  // has_any_key_member_
  RemoteControl_message_member_array,  // message members
  RemoteControl_init_function,  // function to initialize message memory (memory has to be allocated)
  RemoteControl_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RemoteControl_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RemoteControl_message_members,
  get_message_typesupport_handle_function,
  &dobot__msg__RemoteControl__get_type_hash,
  &dobot__msg__RemoteControl__get_type_description,
  &dobot__msg__RemoteControl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dobot


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot::msg::RemoteControl>()
{
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::RemoteControl_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot, msg, RemoteControl)() {
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::RemoteControl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
