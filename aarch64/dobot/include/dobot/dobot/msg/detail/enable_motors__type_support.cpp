// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dobot:msg/EnableMotors.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dobot/msg/detail/enable_motors__functions.h"
#include "dobot/msg/detail/enable_motors__struct.hpp"
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

void EnableMotors_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dobot::msg::EnableMotors(_init);
}

void EnableMotors_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dobot::msg::EnableMotors *>(message_memory);
  typed_message->~EnableMotors();
}

size_t size_function__EnableMotors__flag(const void * untyped_member)
{
  (void)untyped_member;
  return 30;
}

const void * get_const_function__EnableMotors__flag(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 30> *>(untyped_member);
  return &member[index];
}

void * get_function__EnableMotors__flag(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 30> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnableMotors__flag(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__EnableMotors__flag(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__EnableMotors__flag(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__EnableMotors__flag(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}


static const ::rosidl_typesupport_introspection_cpp::MessageMember EnableMotors_message_member_array[1] = {
  {
    "flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    30,  // array size
    false,  // is upper bound
    offsetof(dobot::msg::EnableMotors, flag),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnableMotors__flag,  // size() function pointer
    get_const_function__EnableMotors__flag,  // get_const(index) function pointer
    get_function__EnableMotors__flag,  // get(index) function pointer
    fetch_function__EnableMotors__flag,  // fetch(index, &value) function pointer
    assign_function__EnableMotors__flag,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EnableMotors_message_members = {
  "dobot::msg",  // message namespace
  "EnableMotors",  // message name
  1,  // number of fields
  sizeof(dobot::msg::EnableMotors),
  false,  // has_any_key_member_
  EnableMotors_message_member_array,  // message members
  EnableMotors_init_function,  // function to initialize message memory (memory has to be allocated)
  EnableMotors_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EnableMotors_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EnableMotors_message_members,
  get_message_typesupport_handle_function,
  &dobot__msg__EnableMotors__get_type_hash,
  &dobot__msg__EnableMotors__get_type_description,
  &dobot__msg__EnableMotors__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dobot


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot::msg::EnableMotors>()
{
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::EnableMotors_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot, msg, EnableMotors)() {
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::EnableMotors_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
