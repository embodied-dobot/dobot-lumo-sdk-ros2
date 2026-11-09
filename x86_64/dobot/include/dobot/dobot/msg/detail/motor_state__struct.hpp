// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:msg/MotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/motor_state.hpp"


#ifndef DOBOT__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_
#define DOBOT__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dobot__msg__MotorState __attribute__((deprecated))
#else
# define DEPRECATED__dobot__msg__MotorState __declspec(deprecated)
#endif

namespace dobot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorState_
{
  using Type = MotorState_<ContainerAllocator>;

  explicit MotorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->q = 0.0f;
      this->dq = 0.0f;
      this->ddq = 0.0f;
      this->tau_est = 0.0f;
      this->tau_cmd = 0.0f;
      this->current_feedback = 0.0f;
      this->current_cmd = 0.0f;
      this->q_raw = 0.0f;
      this->dq_raw = 0.0f;
      this->ddq_raw = 0.0f;
      this->tau_raw = 0.0f;
      this->mcu_temp = 0;
      this->mos_temp = 0;
      this->motor_temp = 0;
      this->bus_voltage = 0;
    }
  }

  explicit MotorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->q = 0.0f;
      this->dq = 0.0f;
      this->ddq = 0.0f;
      this->tau_est = 0.0f;
      this->tau_cmd = 0.0f;
      this->current_feedback = 0.0f;
      this->current_cmd = 0.0f;
      this->q_raw = 0.0f;
      this->dq_raw = 0.0f;
      this->ddq_raw = 0.0f;
      this->tau_raw = 0.0f;
      this->mcu_temp = 0;
      this->mos_temp = 0;
      this->motor_temp = 0;
      this->bus_voltage = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _q_type =
    float;
  _q_type q;
  using _dq_type =
    float;
  _dq_type dq;
  using _ddq_type =
    float;
  _ddq_type ddq;
  using _tau_est_type =
    float;
  _tau_est_type tau_est;
  using _tau_cmd_type =
    float;
  _tau_cmd_type tau_cmd;
  using _current_feedback_type =
    float;
  _current_feedback_type current_feedback;
  using _current_cmd_type =
    float;
  _current_cmd_type current_cmd;
  using _q_raw_type =
    float;
  _q_raw_type q_raw;
  using _dq_raw_type =
    float;
  _dq_raw_type dq_raw;
  using _ddq_raw_type =
    float;
  _ddq_raw_type ddq_raw;
  using _tau_raw_type =
    float;
  _tau_raw_type tau_raw;
  using _mcu_temp_type =
    uint8_t;
  _mcu_temp_type mcu_temp;
  using _mos_temp_type =
    uint8_t;
  _mos_temp_type mos_temp;
  using _motor_temp_type =
    uint8_t;
  _motor_temp_type motor_temp;
  using _bus_voltage_type =
    uint8_t;
  _bus_voltage_type bus_voltage;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__q(
    const float & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__dq(
    const float & _arg)
  {
    this->dq = _arg;
    return *this;
  }
  Type & set__ddq(
    const float & _arg)
  {
    this->ddq = _arg;
    return *this;
  }
  Type & set__tau_est(
    const float & _arg)
  {
    this->tau_est = _arg;
    return *this;
  }
  Type & set__tau_cmd(
    const float & _arg)
  {
    this->tau_cmd = _arg;
    return *this;
  }
  Type & set__current_feedback(
    const float & _arg)
  {
    this->current_feedback = _arg;
    return *this;
  }
  Type & set__current_cmd(
    const float & _arg)
  {
    this->current_cmd = _arg;
    return *this;
  }
  Type & set__q_raw(
    const float & _arg)
  {
    this->q_raw = _arg;
    return *this;
  }
  Type & set__dq_raw(
    const float & _arg)
  {
    this->dq_raw = _arg;
    return *this;
  }
  Type & set__ddq_raw(
    const float & _arg)
  {
    this->ddq_raw = _arg;
    return *this;
  }
  Type & set__tau_raw(
    const float & _arg)
  {
    this->tau_raw = _arg;
    return *this;
  }
  Type & set__mcu_temp(
    const uint8_t & _arg)
  {
    this->mcu_temp = _arg;
    return *this;
  }
  Type & set__mos_temp(
    const uint8_t & _arg)
  {
    this->mos_temp = _arg;
    return *this;
  }
  Type & set__motor_temp(
    const uint8_t & _arg)
  {
    this->motor_temp = _arg;
    return *this;
  }
  Type & set__bus_voltage(
    const uint8_t & _arg)
  {
    this->bus_voltage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot::msg::MotorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::msg::MotorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::msg::MotorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::msg::MotorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::msg::MotorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::MotorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::msg::MotorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::MotorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::msg::MotorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::msg::MotorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__msg__MotorState
    std::shared_ptr<dobot::msg::MotorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__msg__MotorState
    std::shared_ptr<dobot::msg::MotorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorState_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->dq != other.dq) {
      return false;
    }
    if (this->ddq != other.ddq) {
      return false;
    }
    if (this->tau_est != other.tau_est) {
      return false;
    }
    if (this->tau_cmd != other.tau_cmd) {
      return false;
    }
    if (this->current_feedback != other.current_feedback) {
      return false;
    }
    if (this->current_cmd != other.current_cmd) {
      return false;
    }
    if (this->q_raw != other.q_raw) {
      return false;
    }
    if (this->dq_raw != other.dq_raw) {
      return false;
    }
    if (this->ddq_raw != other.ddq_raw) {
      return false;
    }
    if (this->tau_raw != other.tau_raw) {
      return false;
    }
    if (this->mcu_temp != other.mcu_temp) {
      return false;
    }
    if (this->mos_temp != other.mos_temp) {
      return false;
    }
    if (this->motor_temp != other.motor_temp) {
      return false;
    }
    if (this->bus_voltage != other.bus_voltage) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorState_

// alias to use template instance with default allocator
using MotorState =
  dobot::msg::MotorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_
