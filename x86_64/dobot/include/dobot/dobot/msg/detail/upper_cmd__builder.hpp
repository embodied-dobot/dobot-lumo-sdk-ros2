// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/UpperCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/upper_cmd.hpp"


#ifndef DOBOT__MSG__DETAIL__UPPER_CMD__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__UPPER_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/upper_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_UpperCmd_motor_cmd
{
public:
  Init_UpperCmd_motor_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot::msg::UpperCmd motor_cmd(::dobot::msg::UpperCmd::_motor_cmd_type arg)
  {
    msg_.motor_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::UpperCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::UpperCmd>()
{
  return dobot::msg::builder::Init_UpperCmd_motor_cmd();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__UPPER_CMD__BUILDER_HPP_
