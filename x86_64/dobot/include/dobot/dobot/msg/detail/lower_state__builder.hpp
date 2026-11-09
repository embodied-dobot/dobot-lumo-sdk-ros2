// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/LowerState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/lower_state.hpp"


#ifndef DOBOT__MSG__DETAIL__LOWER_STATE__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__LOWER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/lower_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_LowerState_timestamp_us
{
public:
  explicit Init_LowerState_timestamp_us(::dobot::msg::LowerState & msg)
  : msg_(msg)
  {}
  ::dobot::msg::LowerState timestamp_us(::dobot::msg::LowerState::_timestamp_us_type arg)
  {
    msg_.timestamp_us = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::LowerState msg_;
};

class Init_LowerState_motor_state
{
public:
  Init_LowerState_motor_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LowerState_timestamp_us motor_state(::dobot::msg::LowerState::_motor_state_type arg)
  {
    msg_.motor_state = std::move(arg);
    return Init_LowerState_timestamp_us(msg_);
  }

private:
  ::dobot::msg::LowerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::LowerState>()
{
  return dobot::msg::builder::Init_LowerState_motor_state();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__LOWER_STATE__BUILDER_HPP_
