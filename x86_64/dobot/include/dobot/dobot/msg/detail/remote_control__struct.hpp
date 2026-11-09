// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:msg/RemoteControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/remote_control.hpp"


#ifndef DOBOT__MSG__DETAIL__REMOTE_CONTROL__STRUCT_HPP_
#define DOBOT__MSG__DETAIL__REMOTE_CONTROL__STRUCT_HPP_

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
// Member 'btn_move'
// Member 'btn_turn'
#include "dobot/msg/detail/joystick_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dobot__msg__RemoteControl __attribute__((deprecated))
#else
# define DEPRECATED__dobot__msg__RemoteControl __declspec(deprecated)
#endif

namespace dobot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RemoteControl_
{
  using Type = RemoteControl_<ContainerAllocator>;

  explicit RemoteControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : btn_move(_init),
    btn_turn(_init)
  {
    (void)_init;
  }

  explicit RemoteControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : btn_move(_alloc, _init),
    btn_turn(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _btn_move_type =
    dobot::msg::JoystickValue_<ContainerAllocator>;
  _btn_move_type btn_move;
  using _btn_turn_type =
    dobot::msg::JoystickValue_<ContainerAllocator>;
  _btn_turn_type btn_turn;

  // setters for named parameter idiom
  Type & set__btn_move(
    const dobot::msg::JoystickValue_<ContainerAllocator> & _arg)
  {
    this->btn_move = _arg;
    return *this;
  }
  Type & set__btn_turn(
    const dobot::msg::JoystickValue_<ContainerAllocator> & _arg)
  {
    this->btn_turn = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot::msg::RemoteControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::msg::RemoteControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::msg::RemoteControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::msg::RemoteControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::msg::RemoteControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::RemoteControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::msg::RemoteControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::RemoteControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::msg::RemoteControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::msg::RemoteControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__msg__RemoteControl
    std::shared_ptr<dobot::msg::RemoteControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__msg__RemoteControl
    std::shared_ptr<dobot::msg::RemoteControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RemoteControl_ & other) const
  {
    if (this->btn_move != other.btn_move) {
      return false;
    }
    if (this->btn_turn != other.btn_turn) {
      return false;
    }
    return true;
  }
  bool operator!=(const RemoteControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RemoteControl_

// alias to use template instance with default allocator
using RemoteControl =
  dobot::msg::RemoteControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__REMOTE_CONTROL__STRUCT_HPP_
