// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dobot:msg/UpperCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dobot/msg/detail/upper_cmd__functions.h"
#include "dobot/msg/detail/upper_cmd__struct.hpp"
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

void UpperCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dobot::msg::UpperCmd(_init);
}

void UpperCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dobot::msg::UpperCmd *>(message_memory);
  typed_message->~UpperCmd();
}

size_t size_function__UpperCmd__motor_cmd(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__UpperCmd__motor_cmd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<dobot::msg::MotorCmd, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__UpperCmd__motor_cmd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<dobot::msg::MotorCmd, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__UpperCmd__motor_cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const dobot::msg::MotorCmd *>(
    get_const_function__UpperCmd__motor_cmd(untyped_member, index));
  auto & value = *reinterpret_cast<dobot::msg::MotorCmd *>(untyped_value);
  value = item;
}

void assign_function__UpperCmd__motor_cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<dobot::msg::MotorCmd *>(
    get_function__UpperCmd__motor_cmd(untyped_member, index));
  const auto & value = *reinterpret_cast<const dobot::msg::MotorCmd *>(untyped_value);
  item = value;
}


static const ::rosidl_typesupport_introspection_cpp::MessageMember UpperCmd_message_member_array[1] = {
  {
    "motor_cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dobot::msg::MotorCmd>(),  // members of sub message
    false,  // is key
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(dobot::msg::UpperCmd, motor_cmd),  // bytes offset in struct
    nullptr,  // default value
    size_function__UpperCmd__motor_cmd,  // size() function pointer
    get_const_function__UpperCmd__motor_cmd,  // get_const(index) function pointer
    get_function__UpperCmd__motor_cmd,  // get(index) function pointer
    fetch_function__UpperCmd__motor_cmd,  // fetch(index, &value) function pointer
    assign_function__UpperCmd__motor_cmd,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UpperCmd_message_members = {
  "dobot::msg",  // message namespace
  "UpperCmd",  // message name
  1,  // number of fields
  sizeof(dobot::msg::UpperCmd),
  false,  // has_any_key_member_
  UpperCmd_message_member_array,  // message members
  UpperCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  UpperCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UpperCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UpperCmd_message_members,
  get_message_typesupport_handle_function,
  &dobot__msg__UpperCmd__get_type_hash,
  &dobot__msg__UpperCmd__get_type_description,
  &dobot__msg__UpperCmd__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dobot


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot::msg::UpperCmd>()
{
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::UpperCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot, msg, UpperCmd)() {
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::UpperCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
