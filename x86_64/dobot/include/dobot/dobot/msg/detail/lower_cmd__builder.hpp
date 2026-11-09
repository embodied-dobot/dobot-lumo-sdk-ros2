// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/LowerCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/lower_cmd.hpp"


#ifndef DOBOT__MSG__DETAIL__LOWER_CMD__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__LOWER_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/lower_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_LowerCmd_motor_cmd
{
public:
  Init_LowerCmd_motor_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot::msg::LowerCmd motor_cmd(::dobot::msg::LowerCmd::_motor_cmd_type arg)
  {
    msg_.motor_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::LowerCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::LowerCmd>()
{
  return dobot::msg::builder::Init_LowerCmd_motor_cmd();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__LOWER_CMD__BUILDER_HPP_
