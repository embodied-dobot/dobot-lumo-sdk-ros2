// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/SetCalibrationFlag.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/set_calibration_flag.hpp"


#ifndef DOBOT__MSG__DETAIL__SET_CALIBRATION_FLAG__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__SET_CALIBRATION_FLAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/set_calibration_flag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_SetCalibrationFlag_flag
{
public:
  Init_SetCalibrationFlag_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot::msg::SetCalibrationFlag flag(::dobot::msg::SetCalibrationFlag::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::SetCalibrationFlag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::SetCalibrationFlag>()
{
  return dobot::msg::builder::Init_SetCalibrationFlag_flag();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__SET_CALIBRATION_FLAG__BUILDER_HPP_
