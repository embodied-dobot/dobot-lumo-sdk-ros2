// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:msg/SetFsmId.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/set_fsm_id.hpp"


#ifndef DOBOT__MSG__DETAIL__SET_FSM_ID__STRUCT_HPP_
#define DOBOT__MSG__DETAIL__SET_FSM_ID__STRUCT_HPP_

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
# define DEPRECATED__dobot__msg__SetFsmId __attribute__((deprecated))
#else
# define DEPRECATED__dobot__msg__SetFsmId __declspec(deprecated)
#endif

namespace dobot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetFsmId_
{
  using Type = SetFsmId_<ContainerAllocator>;

  explicit SetFsmId_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->current_action = "";
    }
  }

  explicit SetFsmId_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_action(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->current_action = "";
    }
  }

  // field types and members
  using _id_type =
    uint16_t;
  _id_type id;
  using _current_action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_action_type current_action;

  // setters for named parameter idiom
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__current_action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_action = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot::msg::SetFsmId_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::msg::SetFsmId_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::msg::SetFsmId_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::msg::SetFsmId_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::msg::SetFsmId_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::SetFsmId_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::msg::SetFsmId_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::SetFsmId_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::msg::SetFsmId_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::msg::SetFsmId_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__msg__SetFsmId
    std::shared_ptr<dobot::msg::SetFsmId_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__msg__SetFsmId
    std::shared_ptr<dobot::msg::SetFsmId_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetFsmId_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->current_action != other.current_action) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetFsmId_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetFsmId_

// alias to use template instance with default allocator
using SetFsmId =
  dobot::msg::SetFsmId_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__SET_FSM_ID__STRUCT_HPP_
