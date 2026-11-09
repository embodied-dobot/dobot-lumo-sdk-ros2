// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/RemoteControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/remote_control.hpp"


#ifndef DOBOT__MSG__DETAIL__REMOTE_CONTROL__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__REMOTE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/remote_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_RemoteControl_btn_turn
{
public:
  explicit Init_RemoteControl_btn_turn(::dobot::msg::RemoteControl & msg)
  : msg_(msg)
  {}
  ::dobot::msg::RemoteControl btn_turn(::dobot::msg::RemoteControl::_btn_turn_type arg)
  {
    msg_.btn_turn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::RemoteControl msg_;
};

class Init_RemoteControl_btn_move
{
public:
  Init_RemoteControl_btn_move()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoteControl_btn_turn btn_move(::dobot::msg::RemoteControl::_btn_move_type arg)
  {
    msg_.btn_move = std::move(arg);
    return Init_RemoteControl_btn_turn(msg_);
  }

private:
  ::dobot::msg::RemoteControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::RemoteControl>()
{
  return dobot::msg::builder::Init_RemoteControl_btn_move();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__REMOTE_CONTROL__BUILDER_HPP_
