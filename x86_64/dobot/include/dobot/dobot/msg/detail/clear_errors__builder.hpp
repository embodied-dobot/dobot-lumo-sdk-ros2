// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/ClearErrors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/clear_errors.hpp"


#ifndef DOBOT__MSG__DETAIL__CLEAR_ERRORS__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__CLEAR_ERRORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/clear_errors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_ClearErrors_msg_id
{
public:
  Init_ClearErrors_msg_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot::msg::ClearErrors msg_id(::dobot::msg::ClearErrors::_msg_id_type arg)
  {
    msg_.msg_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::ClearErrors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::ClearErrors>()
{
  return dobot::msg::builder::Init_ClearErrors_msg_id();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__CLEAR_ERRORS__BUILDER_HPP_
