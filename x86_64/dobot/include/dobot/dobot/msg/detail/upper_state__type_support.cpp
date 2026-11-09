// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dobot:msg/UpperState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dobot/msg/detail/upper_state__functions.h"
#include "dobot/msg/detail/upper_state__struct.hpp"
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

void UpperState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dobot::msg::UpperState(_init);
}

void UpperState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dobot::msg::UpperState *>(message_memory);
  typed_message->~UpperState();
}

size_t size_function__UpperState__robot_type(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__UpperState__robot_type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__UpperState__robot_type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__UpperState__robot_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__UpperState__robot_type(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__UpperState__robot_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__UpperState__robot_type(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}


size_t size_function__UpperState__motor_state(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__UpperState__motor_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<dobot::msg::MotorState, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__UpperState__motor_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<dobot::msg::MotorState, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__UpperState__motor_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const dobot::msg::MotorState *>(
    get_const_function__UpperState__motor_state(untyped_member, index));
  auto & value = *reinterpret_cast<dobot::msg::MotorState *>(untyped_value);
  value = item;
}

void assign_function__UpperState__motor_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<dobot::msg::MotorState *>(
    get_function__UpperState__motor_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const dobot::msg::MotorState *>(untyped_value);
  item = value;
}


static const ::rosidl_typesupport_introspection_cpp::MessageMember UpperState_message_member_array[4] = {
  {
    "robot_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(dobot::msg::UpperState, robot_type),  // bytes offset in struct
    nullptr,  // default value
    size_function__UpperState__robot_type,  // size() function pointer
    get_const_function__UpperState__robot_type,  // get_const(index) function pointer
    get_function__UpperState__robot_type,  // get(index) function pointer
    fetch_function__UpperState__robot_type,  // fetch(index, &value) function pointer
    assign_function__UpperState__robot_type,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "is_upper_control",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot::msg::UpperState, is_upper_control),  // bytes offset in struct
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
    "motor_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dobot::msg::MotorState>(),  // members of sub message
    false,  // is key
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(dobot::msg::UpperState, motor_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__UpperState__motor_state,  // size() function pointer
    get_const_function__UpperState__motor_state,  // get_const(index) function pointer
    get_function__UpperState__motor_state,  // get(index) function pointer
    fetch_function__UpperState__motor_state,  // fetch(index, &value) function pointer
    assign_function__UpperState__motor_state,  // assign(index, value) function pointer
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
    offsetof(dobot::msg::UpperState, timestamp_us),  // bytes offset in struct
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

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UpperState_message_members = {
  "dobot::msg",  // message namespace
  "UpperState",  // message name
  4,  // number of fields
  sizeof(dobot::msg::UpperState),
  false,  // has_any_key_member_
  UpperState_message_member_array,  // message members
  UpperState_init_function,  // function to initialize message memory (memory has to be allocated)
  UpperState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UpperState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UpperState_message_members,
  get_message_typesupport_handle_function,
  &dobot__msg__UpperState__get_type_hash,
  &dobot__msg__UpperState__get_type_description,
  &dobot__msg__UpperState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dobot


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot::msg::UpperState>()
{
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::UpperState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot, msg, UpperState)() {
  return &::dobot::msg::rosidl_typesupport_introspection_cpp::UpperState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
