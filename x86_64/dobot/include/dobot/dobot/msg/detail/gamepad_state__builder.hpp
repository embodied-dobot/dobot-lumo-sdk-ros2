// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/GamepadState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/gamepad_state.hpp"


#ifndef DOBOT__MSG__DETAIL__GAMEPAD_STATE__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__GAMEPAD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/gamepad_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_GamepadState_timestamp_us
{
public:
  explicit Init_GamepadState_timestamp_us(::dobot::msg::GamepadState & msg)
  : msg_(msg)
  {}
  ::dobot::msg::GamepadState timestamp_us(::dobot::msg::GamepadState::_timestamp_us_type arg)
  {
    msg_.timestamp_us = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::GamepadState msg_;
};

class Init_GamepadState_ry
{
public:
  explicit Init_GamepadState_ry(::dobot::msg::GamepadState & msg)
  : msg_(msg)
  {}
  Init_GamepadState_timestamp_us ry(::dobot::msg::GamepadState::_ry_type arg)
  {
    msg_.ry = std::move(arg);
    return Init_GamepadState_timestamp_us(msg_);
  }

private:
  ::dobot::msg::GamepadState msg_;
};

class Init_GamepadState_rx
{
public:
  explicit Init_GamepadState_rx(::dobot::msg::GamepadState & msg)
  : msg_(msg)
  {}
  Init_GamepadState_ry rx(::dobot::msg::GamepadState::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_GamepadState_ry(msg_);
  }

private:
  ::dobot::msg::GamepadState msg_;
};

class Init_GamepadState_ly
{
public:
  explicit Init_GamepadState_ly(::dobot::msg::GamepadState & msg)
  : msg_(msg)
  {}
  Init_GamepadState_rx ly(::dobot::msg::GamepadState::_ly_type arg)
  {
    msg_.ly = std::move(arg);
    return Init_GamepadState_rx(msg_);
  }

private:
  ::dobot::msg::GamepadState msg_;
};

class Init_GamepadState_lx
{
public:
  explicit Init_GamepadState_lx(::dobot::msg::GamepadState & msg)
  : msg_(msg)
  {}
  Init_GamepadState_ly lx(::dobot::msg::GamepadState::_lx_type arg)
  {
    msg_.lx = std::move(arg);
    return Init_GamepadState_ly(msg_);
  }

private:
  ::dobot::msg::GamepadState msg_;
};

class Init_GamepadState_btn_state
{
public:
  explicit Init_GamepadState_btn_state(::dobot::msg::GamepadState & msg)
  : msg_(msg)
  {}
  Init_GamepadState_lx btn_state(::dobot::msg::GamepadState::_btn_state_type arg)
  {
    msg_.btn_state = std::move(arg);
    return Init_GamepadState_lx(msg_);
  }

private:
  ::dobot::msg::GamepadState msg_;
};

class Init_GamepadState_head
{
public:
  Init_GamepadState_head()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GamepadState_btn_state head(::dobot::msg::GamepadState::_head_type arg)
  {
    msg_.head = std::move(arg);
    return Init_GamepadState_btn_state(msg_);
  }

private:
  ::dobot::msg::GamepadState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::GamepadState>()
{
  return dobot::msg::builder::Init_GamepadState_head();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__GAMEPAD_STATE__BUILDER_HPP_
