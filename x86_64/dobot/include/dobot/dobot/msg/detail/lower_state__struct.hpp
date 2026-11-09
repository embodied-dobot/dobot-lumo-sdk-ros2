// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:msg/LowerState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/lower_state.hpp"


#ifndef DOBOT__MSG__DETAIL__LOWER_STATE__STRUCT_HPP_
#define DOBOT__MSG__DETAIL__LOWER_STATE__STRUCT_HPP_

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
# define DEPRECATED__dobot__msg__LowerState __attribute__((deprecated))
#else
# define DEPRECATED__dobot__msg__LowerState __declspec(deprecated)
#endif

namespace dobot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LowerState_
{
  using Type = LowerState_<ContainerAllocator>;

  explicit LowerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_state.fill(dobot::msg::MotorState_<ContainerAllocator>{_init});
      this->timestamp_us = 0ull;
    }
  }

  explicit LowerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motor_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_state.fill(dobot::msg::MotorState_<ContainerAllocator>{_alloc, _init});
      this->timestamp_us = 0ull;
    }
  }

  // field types and members
  using _motor_state_type =
    std::array<dobot::msg::MotorState_<ContainerAllocator>, 15>;
  _motor_state_type motor_state;
  using _timestamp_us_type =
    uint64_t;
  _timestamp_us_type timestamp_us;

  // setters for named parameter idiom
  Type & set__motor_state(
    const std::array<dobot::msg::MotorState_<ContainerAllocator>, 15> & _arg)
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
    dobot::msg::LowerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::msg::LowerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::msg::LowerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::msg::LowerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::msg::LowerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::LowerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::msg::LowerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::LowerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::msg::LowerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::msg::LowerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__msg__LowerState
    std::shared_ptr<dobot::msg::LowerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__msg__LowerState
    std::shared_ptr<dobot::msg::LowerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LowerState_ & other) const
  {
    if (this->motor_state != other.motor_state) {
      return false;
    }
    if (this->timestamp_us != other.timestamp_us) {
      return false;
    }
    return true;
  }
  bool operator!=(const LowerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LowerState_

// alias to use template instance with default allocator
using LowerState =
  dobot::msg::LowerState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__LOWER_STATE__STRUCT_HPP_
