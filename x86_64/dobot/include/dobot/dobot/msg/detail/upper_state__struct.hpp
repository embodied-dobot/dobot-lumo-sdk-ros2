// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:msg/UpperState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/upper_state.hpp"


#ifndef DOBOT__MSG__DETAIL__UPPER_STATE__STRUCT_HPP_
#define DOBOT__MSG__DETAIL__UPPER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'motor_state'
#include "dobot/msg/detail/motor_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dobot__msg__UpperState __attribute__((deprecated))
#else
# define DEPRECATED__dobot__msg__UpperState __declspec(deprecated)
#endif

namespace dobot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpperState_
{
  using Type = UpperState_<ContainerAllocator>;

  explicit UpperState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->robot_type.begin(), this->robot_type.end(), 0);
      this->is_upper_control = false;
      this->motor_state.fill(dobot::msg::MotorState_<ContainerAllocator>{_init});
      this->timestamp_us = 0ull;
    }
  }

  explicit UpperState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_type(_alloc),
    motor_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->robot_type.begin(), this->robot_type.end(), 0);
      this->is_upper_control = false;
      this->motor_state.fill(dobot::msg::MotorState_<ContainerAllocator>{_alloc, _init});
      this->timestamp_us = 0ull;
    }
  }

  // field types and members
  using _robot_type_type =
    std::array<uint8_t, 16>;
  _robot_type_type robot_type;
  using _is_upper_control_type =
    bool;
  _is_upper_control_type is_upper_control;
  using _motor_state_type =
    std::array<dobot::msg::MotorState_<ContainerAllocator>, 18>;
  _motor_state_type motor_state;
  using _timestamp_us_type =
    uint64_t;
  _timestamp_us_type timestamp_us;

  // setters for named parameter idiom
  Type & set__robot_type(
    const std::array<uint8_t, 16> & _arg)
  {
    this->robot_type = _arg;
    return *this;
  }
  Type & set__is_upper_control(
    const bool & _arg)
  {
    this->is_upper_control = _arg;
    return *this;
  }
  Type & set__motor_state(
    const std::array<dobot::msg::MotorState_<ContainerAllocator>, 18> & _arg)
  {
    this->motor_state = _arg;
    return *this;
  }
  Type & set__timestamp_us(
    const uint64_t & _arg)
  {
    this->timestamp_us = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot::msg::UpperState_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::msg::UpperState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::msg::UpperState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::msg::UpperState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::msg::UpperState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::UpperState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::msg::UpperState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::UpperState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::msg::UpperState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::msg::UpperState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__msg__UpperState
    std::shared_ptr<dobot::msg::UpperState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__msg__UpperState
    std::shared_ptr<dobot::msg::UpperState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpperState_ & other) const
  {
    if (this->robot_type != other.robot_type) {
      return false;
    }
    if (this->is_upper_control != other.is_upper_control) {
      return false;
    }
    if (this->motor_state != other.motor_state) {
      return false;
    }
    if (this->timestamp_us != other.timestamp_us) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpperState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpperState_

// alias to use template instance with default allocator
using UpperState =
  dobot::msg::UpperState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__UPPER_STATE__STRUCT_HPP_
