// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:msg/GamepadState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/gamepad_state.hpp"


#ifndef DOBOT__MSG__DETAIL__GAMEPAD_STATE__STRUCT_HPP_
#define DOBOT__MSG__DETAIL__GAMEPAD_STATE__STRUCT_HPP_

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
# define DEPRECATED__dobot__msg__GamepadState __attribute__((deprecated))
#else
# define DEPRECATED__dobot__msg__GamepadState __declspec(deprecated)
#endif

namespace dobot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GamepadState_
{
  using Type = GamepadState_<ContainerAllocator>;

  explicit GamepadState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->head = 0;
      this->btn_state = 0;
      this->lx = 0.0f;
      this->ly = 0.0f;
      this->rx = 0.0f;
      this->ry = 0.0f;
      this->timestamp_us = 0ull;
    }
  }

  explicit GamepadState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->head = 0;
      this->btn_state = 0;
      this->lx = 0.0f;
      this->ly = 0.0f;
      this->rx = 0.0f;
      this->ry = 0.0f;
      this->timestamp_us = 0ull;
    }
  }

  // field types and members
  using _head_type =
    uint16_t;
  _head_type head;
  using _btn_state_type =
    uint16_t;
  _btn_state_type btn_state;
  using _lx_type =
    float;
  _lx_type lx;
  using _ly_type =
    float;
  _ly_type ly;
  using _rx_type =
    float;
  _rx_type rx;
  using _ry_type =
    float;
  _ry_type ry;
  using _timestamp_us_type =
    uint64_t;
  _timestamp_us_type timestamp_us;

  // setters for named parameter idiom
  Type & set__head(
    const uint16_t & _arg)
  {
    this->head = _arg;
    return *this;
  }
  Type & set__btn_state(
    const uint16_t & _arg)
  {
    this->btn_state = _arg;
    return *this;
  }
  Type & set__lx(
    const float & _arg)
  {
    this->lx = _arg;
    return *this;
  }
  Type & set__ly(
    const float & _arg)
  {
    this->ly = _arg;
    return *this;
  }
  Type & set__rx(
    const float & _arg)
  {
    this->rx = _arg;
    return *this;
  }
  Type & set__ry(
    const float & _arg)
  {
    this->ry = _arg;
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
    dobot::msg::GamepadState_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::msg::GamepadState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::msg::GamepadState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::msg::GamepadState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::msg::GamepadState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::GamepadState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::msg::GamepadState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::GamepadState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::msg::GamepadState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::msg::GamepadState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__msg__GamepadState
    std::shared_ptr<dobot::msg::GamepadState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__msg__GamepadState
    std::shared_ptr<dobot::msg::GamepadState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GamepadState_ & other) const
  {
    if (this->head != other.head) {
      return false;
    }
    if (this->btn_state != other.btn_state) {
      return false;
    }
    if (this->lx != other.lx) {
      return false;
    }
    if (this->ly != other.ly) {
      return false;
    }
    if (this->rx != other.rx) {
      return false;
    }
    if (this->ry != other.ry) {
      return false;
    }
    if (this->timestamp_us != other.timestamp_us) {
      return false;
    }
    return true;
  }
  bool operator!=(const GamepadState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GamepadState_

// alias to use template instance with default allocator
using GamepadState =
  dobot::msg::GamepadState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__GAMEPAD_STATE__STRUCT_HPP_
