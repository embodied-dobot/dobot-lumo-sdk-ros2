// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:msg/ClearErrors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/clear_errors.hpp"


#ifndef DOBOT__MSG__DETAIL__CLEAR_ERRORS__STRUCT_HPP_
#define DOBOT__MSG__DETAIL__CLEAR_ERRORS__STRUCT_HPP_

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
# define DEPRECATED__dobot__msg__ClearErrors __attribute__((deprecated))
#else
# define DEPRECATED__dobot__msg__ClearErrors __declspec(deprecated)
#endif

namespace dobot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClearErrors_
{
  using Type = ClearErrors_<ContainerAllocator>;

  explicit ClearErrors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_id = 0l;
    }
  }

  explicit ClearErrors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_id = 0l;
    }
  }

  // field types and members
  using _msg_id_type =
    int32_t;
  _msg_id_type msg_id;

  // setters for named parameter idiom
  Type & set__msg_id(
    const int32_t & _arg)
  {
    this->msg_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot::msg::ClearErrors_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::msg::ClearErrors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::msg::ClearErrors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::msg::ClearErrors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::msg::ClearErrors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::ClearErrors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::msg::ClearErrors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::ClearErrors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::msg::ClearErrors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::msg::ClearErrors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__msg__ClearErrors
    std::shared_ptr<dobot::msg::ClearErrors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__msg__ClearErrors
    std::shared_ptr<dobot::msg::ClearErrors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClearErrors_ & other) const
  {
    if (this->msg_id != other.msg_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClearErrors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClearErrors_

// alias to use template instance with default allocator
using ClearErrors =
  dobot::msg::ClearErrors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__CLEAR_ERRORS__STRUCT_HPP_
