// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dobot:msg/SetFsmId.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dobot/msg/detail/set_fsm_id__functions.h"
#include "dobot/msg/detail/set_fsm_id__struct.hpp"
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

void SetFsmId_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dobot::msg::SetFsmId(_init);
}

void SetFsmId_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dobot::msg::SetFsmId *>(message_memory);
  typed_message->~SetFsmId();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetFsmId_message_member_array[2] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot::msg::SetFsmId, id),  // bytes offset in struct
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
    "current_action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot::msg::SetFsmId, current_action),  // bytes offset in struct
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

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetFsmId_message_members = {
  "dobot::msg",  // message namespace
  "SetFsmId",  // message name
  2,  // number of fields
  sizeof(dobot::msg::SetFsmId),
  false,  // has_any_key_member_
  SetFsmId_message_member_array,  // message members
  SetFsmId_init_function,  // function to initialize message memory (memory has to be allocated)
  SetFsmId_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetFsmId_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetFsmId_message_members,
  get_message_typesupport_handle_function,
  &dobot__msg__SetFsmId__get_type_hash,
  &dobot__msg__SetFsmId__get_type_description,
  &dobot__msg__SetFsmId__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dobot


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot::msg::SetFsmId>()
{
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::SetFsmId_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot, msg, SetFsmId)() {
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::SetFsmId_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
