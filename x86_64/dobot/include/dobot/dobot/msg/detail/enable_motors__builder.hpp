// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/EnableMotors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/enable_motors.hpp"


#ifndef DOBOT__MSG__DETAIL__ENABLE_MOTORS__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__ENABLE_MOTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/enable_motors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_EnableMotors_flag
{
public:
  Init_EnableMotors_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot::msg::EnableMotors flag(::dobot::msg::EnableMotors::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::EnableMotors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::EnableMotors>()
{
  return dobot::msg::builder::Init_EnableMotors_flag();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__ENABLE_MOTORS__BUILDER_HPP_
