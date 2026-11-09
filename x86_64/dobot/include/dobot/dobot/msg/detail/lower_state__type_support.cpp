// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dobot:msg/LowerState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dobot/msg/detail/lower_state__functions.h"
#include "dobot/msg/detail/lower_state__struct.hpp"
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

void LowerState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dobot::msg::LowerState(_init);
}

void LowerState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dobot::msg::LowerState *>(message_memory);
  typed_message->~LowerState();
}

size_t size_function__LowerState__motor_state(const void * untyped_member)
{
  (void)untyped_member;
  return 15;
}

const void * get_const_function__LowerState__motor_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<dobot::msg::MotorState, 15> *>(untyped_member);
  return &member[index];
}

void * get_function__LowerState__motor_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<dobot::msg::MotorState, 15> *>(untyped_member);
  return &member[index];
}

void fetch_function__LowerState__motor_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const dobot::msg::MotorState *>(
    get_const_function__LowerState__motor_state(untyped_member, index));
  auto & value = *reinterpret_cast<dobot::msg::MotorState *>(untyped_value);
  value = item;
}

void assign_function__LowerState__motor_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<dobot::msg::MotorState *>(
    get_function__LowerState__motor_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const dobot::msg::MotorState *>(untyped_value);
  item = value;
}


static const ::rosidl_typesupport_introspection_cpp::MessageMember LowerState_message_member_array[2] = {
  {
    "motor_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dobot::msg::MotorState>(),  // members of sub message
    false,  // is key
    true,  // is array
    15,  // array size
    false,  // is upper bound
    offsetof(dobot::msg::LowerState, motor_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowerState__motor_state,  // size() function pointer
    get_const_function__LowerState__motor_state,  // get_const(index) function pointer
    get_function__LowerState__motor_state,  // get(index) function pointer
    fetch_function__LowerState__motor_state,  // fetch(index, &value) function pointer
    assign_function__LowerState__motor_state,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "timestamp_us",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot::msg::LowerState, timestamp_us),  // bytes offset in struct
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

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LowerState_message_members = {
  "dobot::msg",  // message namespace
  "LowerState",  // message name
  2,  // number of fields
  sizeof(dobot::msg::LowerState),
  false,  // has_any_key_member_
  LowerState_message_member_array,  // message members
  LowerState_init_function,  // function to initialize message memory (memory has to be allocated)
  LowerState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LowerState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LowerState_message_members,
  get_message_typesupport_handle_function,
  &dobot__msg__LowerState__get_type_hash,
  &dobot__msg__LowerState__get_type_description,
  &dobot__msg__LowerState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dobot


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot::msg::LowerState>()
{
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::LowerState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot, msg, LowerState)() {
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::LowerState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
