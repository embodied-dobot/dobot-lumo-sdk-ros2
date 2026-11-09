// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/GoHome.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/go_home.hpp"


#ifndef DOBOT__MSG__DETAIL__GO_HOME__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__GO_HOME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/go_home__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_GoHome_flag
{
public:
  Init_GoHome_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot::msg::GoHome flag(::dobot::msg::GoHome::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::GoHome msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::GoHome>()
{
  return dobot::msg::builder::Init_GoHome_flag();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__GO_HOME__BUILDER_HPP_
