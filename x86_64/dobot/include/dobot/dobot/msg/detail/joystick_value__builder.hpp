// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/JoystickValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/joystick_value.hpp"


#ifndef DOBOT__MSG__DETAIL__JOYSTICK_VALUE__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__JOYSTICK_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/joystick_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_JoystickValue_y
{
public:
  explicit Init_JoystickValue_y(::dobot::msg::JoystickValue & msg)
  : msg_(msg)
  {}
  ::dobot::msg::JoystickValue y(::dobot::msg::JoystickValue::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::JoystickValue msg_;
};

class Init_JoystickValue_x
{
public:
  Init_JoystickValue_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JoystickValue_y x(::dobot::msg::JoystickValue::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_JoystickValue_y(msg_);
  }

private:
  ::dobot::msg::JoystickValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::JoystickValue>()
{
  return dobot::msg::builder::Init_JoystickValue_x();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__JOYSTICK_VALUE__BUILDER_HPP_
