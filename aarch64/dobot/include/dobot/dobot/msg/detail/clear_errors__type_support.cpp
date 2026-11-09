// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dobot:msg/ClearErrors.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dobot/msg/detail/clear_errors__functions.h"
#include "dobot/msg/detail/clear_errors__struct.hpp"
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

void ClearErrors_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dobot::msg::ClearErrors(_init);
}

void ClearErrors_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dobot::msg::ClearErrors *>(message_memory);
  typed_message->~ClearErrors();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ClearErrors_message_member_array[1] = {
  {
    "msg_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot::msg::ClearErrors, msg_id),  // bytes offset in struct
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

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ClearErrors_message_members = {
  "dobot::msg",  // message namespace
  "ClearErrors",  // message name
  1,  // number of fields
  sizeof(dobot::msg::ClearErrors),
  false,  // has_any_key_member_
  ClearErrors_message_member_array,  // message members
  ClearErrors_init_function,  // function to initialize message memory (memory has to be allocated)
  ClearErrors_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ClearErrors_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ClearErrors_message_members,
  get_message_typesupport_handle_function,
  &dobot__msg__ClearErrors__get_type_hash,
  &dobot__msg__ClearErrors__get_type_description,
  &dobot__msg__ClearErrors__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dobot


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot::msg::ClearErrors>()
{
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::ClearErrors_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot, msg, ClearErrors)() {
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::ClearErrors_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
