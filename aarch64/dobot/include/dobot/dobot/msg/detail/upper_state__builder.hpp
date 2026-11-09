// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/UpperState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/upper_state.hpp"


#ifndef DOBOT__MSG__DETAIL__UPPER_STATE__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__UPPER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/upper_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_UpperState_timestamp_us
{
public:
  explicit Init_UpperState_timestamp_us(::dobot::msg::UpperState & msg)
  : msg_(msg)
  {}
  ::dobot::msg::UpperState timestamp_us(::dobot::msg::UpperState::_timestamp_us_type arg)
  {
    msg_.timestamp_us = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::UpperState msg_;
};

class Init_UpperState_motor_state
{
public:
  explicit Init_UpperState_motor_state(::dobot::msg::UpperState & msg)
  : msg_(msg)
  {}
  Init_UpperState_timestamp_us motor_state(::dobot::msg::UpperState::_motor_state_type arg)
  {
    msg_.motor_state = std::move(arg);
    return Init_UpperState_timestamp_us(msg_);
  }

private:
  ::dobot::msg::UpperState msg_;
};

class Init_UpperState_is_upper_control
{
public:
  explicit Init_UpperState_is_upper_control(::dobot::msg::UpperState & msg)
  : msg_(msg)
  {}
  Init_UpperState_motor_state is_upper_control(::dobot::msg::UpperState::_is_upper_control_type arg)
  {
    msg_.is_upper_control = std::move(arg);
    return Init_UpperState_motor_state(msg_);
  }

private:
  ::dobot::msg::UpperState msg_;
};

class Init_UpperState_robot_type
{
public:
  Init_UpperState_robot_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpperState_is_upper_control robot_type(::dobot::msg::UpperState::_robot_type_type arg)
  {
    msg_.robot_type = std::move(arg);
    return Init_UpperState_is_upper_control(msg_);
  }

private:
  ::dobot::msg::UpperState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::UpperState>()
{
  return dobot::msg::builder::Init_UpperState_robot_type();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__UPPER_STATE__BUILDER_HPP_
