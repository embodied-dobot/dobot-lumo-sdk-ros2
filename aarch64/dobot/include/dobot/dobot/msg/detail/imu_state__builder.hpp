// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot:msg/IMUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/imu_state.hpp"


#ifndef DOBOT__MSG__DETAIL__IMU_STATE__BUILDER_HPP_
#define DOBOT__MSG__DETAIL__IMU_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot/msg/detail/imu_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot
{

namespace msg
{

namespace builder
{

class Init_IMUState_timestamp_us
{
public:
  explicit Init_IMUState_timestamp_us(::dobot::msg::IMUState & msg)
  : msg_(msg)
  {}
  ::dobot::msg::IMUState timestamp_us(::dobot::msg::IMUState::_timestamp_us_type arg)
  {
    msg_.timestamp_us = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot::msg::IMUState msg_;
};

class Init_IMUState_temperature
{
public:
  explicit Init_IMUState_temperature(::dobot::msg::IMUState & msg)
  : msg_(msg)
  {}
  Init_IMUState_timestamp_us temperature(::dobot::msg::IMUState::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_IMUState_timestamp_us(msg_);
  }

private:
  ::dobot::msg::IMUState msg_;
};

class Init_IMUState_rpy
{
public:
  explicit Init_IMUState_rpy(::dobot::msg::IMUState & msg)
  : msg_(msg)
  {}
  Init_IMUState_temperature rpy(::dobot::msg::IMUState::_rpy_type arg)
  {
    msg_.rpy = std::move(arg);
    return Init_IMUState_temperature(msg_);
  }

private:
  ::dobot::msg::IMUState msg_;
};

class Init_IMUState_accelerometer
{
public:
  explicit Init_IMUState_accelerometer(::dobot::msg::IMUState & msg)
  : msg_(msg)
  {}
  Init_IMUState_rpy accelerometer(::dobot::msg::IMUState::_accelerometer_type arg)
  {
    msg_.accelerometer = std::move(arg);
    return Init_IMUState_rpy(msg_);
  }

private:
  ::dobot::msg::IMUState msg_;
};

class Init_IMUState_gyroscope
{
public:
  explicit Init_IMUState_gyroscope(::dobot::msg::IMUState & msg)
  : msg_(msg)
  {}
  Init_IMUState_accelerometer gyroscope(::dobot::msg::IMUState::_gyroscope_type arg)
  {
    msg_.gyroscope = std::move(arg);
    return Init_IMUState_accelerometer(msg_);
  }

private:
  ::dobot::msg::IMUState msg_;
};

class Init_IMUState_quaternion
{
public:
  explicit Init_IMUState_quaternion(::dobot::msg::IMUState & msg)
  : msg_(msg)
  {}
  Init_IMUState_gyroscope quaternion(::dobot::msg::IMUState::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_IMUState_gyroscope(msg_);
  }

private:
  ::dobot::msg::IMUState msg_;
};

class Init_IMUState_imu_id
{
public:
  Init_IMUState_imu_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMUState_quaternion imu_id(::dobot::msg::IMUState::_imu_id_type arg)
  {
    msg_.imu_id = std::move(arg);
    return Init_IMUState_quaternion(msg_);
  }

private:
  ::dobot::msg::IMUState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot::msg::IMUState>()
{
  return dobot::msg::builder::Init_IMUState_imu_id();
}

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__IMU_STATE__BUILDER_HPP_
