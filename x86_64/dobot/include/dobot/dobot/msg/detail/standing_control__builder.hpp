// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/StandingControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/standing_control.hpp"


#ifndef DOBOT__MSG__DETAIL__STANDING_CONTROL__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__STANDING_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/standing_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_StandingControl_body_height
{
public:
  explicit Init_StandingControl_body_height(::dobot::msg::StandingControl & msg)
  : msg_(msg)
  {}
  ::dobot::msg::StandingControl body_height(::dobot::msg::StandingControl::_body_height_type arg)
  {
    msg_.body_height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::StandingControl msg_;
};

class Init_StandingControl_waist_yaw
{
public:
  explicit Init_StandingControl_waist_yaw(::dobot::msg::StandingControl & msg)
  : msg_(msg)
  {}
  Init_StandingControl_body_height waist_yaw(::dobot::msg::StandingControl::_waist_yaw_type arg)
  {
    msg_.waist_yaw = std::move(arg);
    return Init_StandingControl_body_height(msg_);
  }

private:
  ::dobot::msg::StandingControl msg_;
};

class Init_StandingControl_head_yaw
{
public:
  Init_StandingControl_head_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StandingControl_waist_yaw head_yaw(::dobot::msg::StandingControl::_head_yaw_type arg)
  {
    msg_.head_yaw = std::move(arg);
    return Init_StandingControl_waist_yaw(msg_);
  }

private:
  ::dobot::msg::StandingControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::StandingControl>()
{
  return dobot::msg::builder::Init_StandingControl_head_yaw();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__STANDING_CONTROL__BUILDER_HPP_
