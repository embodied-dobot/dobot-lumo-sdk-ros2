// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:msg/StandingControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/standing_control.hpp"


#ifndef DOBOT__MSG__DETAIL__STANDING_CONTROL__STRUCT_HPP_
#define DOBOT__MSG__DETAIL__STANDING_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__dobot__msg__StandingControl __attribute__((deprecated))
#else
# define DEPRECATED__dobot__msg__StandingControl __declspec(deprecated)
#endif

namespace dobot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StandingControl_
{
  using Type = StandingControl_<ContainerAllocator>;

  explicit StandingControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->head_yaw = 0.0f;
      this->waist_yaw = 0.0f;
      this->body_height = 0.0f;
    }
  }

  explicit StandingControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->head_yaw = 0.0f;
      this->waist_yaw = 0.0f;
      this->body_height = 0.0f;
    }
  }

  // field types and members
  using _head_yaw_type =
    float;
  _head_yaw_type head_yaw;
  using _waist_yaw_type =
    float;
  _waist_yaw_type waist_yaw;
  using _body_height_type =
    float;
  _body_height_type body_height;

  // setters for named parameter idiom
  Type & set__head_yaw(
    const float & _arg)
  {
    this->head_yaw = _arg;
    return *this;
  }
  Type & set__waist_yaw(
    const float & _arg)
  {
    this->waist_yaw = _arg;
    return *this;
  }
  Type & set__body_height(
    const float & _arg)
  {
    this->body_height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot::msg::StandingControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::msg::StandingControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::msg::StandingControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::msg::StandingControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::msg::StandingControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::StandingControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::msg::StandingControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::StandingControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::msg::StandingControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::msg::StandingControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__msg__StandingControl
    std::shared_ptr<dobot::msg::StandingControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__msg__StandingControl
    std::shared_ptr<dobot::msg::StandingControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StandingControl_ & other) const
  {
    if (this->head_yaw != other.head_yaw) {
      return false;
    }
    if (this->waist_yaw != other.waist_yaw) {
      return false;
    }
    if (this->body_height != other.body_height) {
      return false;
    }
    return true;
  }
  bool operator!=(const StandingControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StandingControl_

// alias to use template instance with default allocator
using StandingControl =
  dobot::msg::StandingControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__STANDING_CONTROL__STRUCT_HPP_
