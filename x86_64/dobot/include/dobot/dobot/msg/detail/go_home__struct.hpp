// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:msg/GoHome.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/go_home.hpp"


#ifndef DOBOT__MSG__DETAIL__GO_HOME__STRUCT_HPP_
#define DOBOT__MSG__DETAIL__GO_HOME__STRUCT_HPP_

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
# define DEPRECATED__dobot__msg__GoHome __attribute__((deprecated))
#else
# define DEPRECATED__dobot__msg__GoHome __declspec(deprecated)
#endif

namespace dobot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoHome_
{
  using Type = GoHome_<ContainerAllocator>;

  explicit GoHome_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->flag.begin(), this->flag.end(), false);
    }
  }

  explicit GoHome_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : flag(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill(this->flag.begin(), this->flag.end(), false);
    }
  }

  // field types and members
  using _flag_type =
    std::array<bool, 30>;
  _flag_type flag;

  // setters for named parameter idiom
  Type & set__flag(
    const std::array<bool, 30> & _arg)
  {
    this->flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot::msg::GoHome_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::msg::GoHome_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::msg::GoHome_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::msg::GoHome_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::msg::GoHome_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::GoHome_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::msg::GoHome_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::GoHome_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::msg::GoHome_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::msg::GoHome_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__msg__GoHome
    std::shared_ptr<dobot::msg::GoHome_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__msg__GoHome
    std::shared_ptr<dobot::msg::GoHome_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoHome_ & other) const
  {
    if (this->flag != other.flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoHome_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoHome_

// alias to use template instance with default allocator
using GoHome =
  dobot::msg::GoHome_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__GO_HOME__STRUCT_HPP_
