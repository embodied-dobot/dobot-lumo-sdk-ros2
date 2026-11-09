// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:msg/UpperCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/upper_cmd.hpp"


#ifndef DOBOT__MSG__DETAIL__UPPER_CMD__STRUCT_HPP_
#define DOBOT__MSG__DETAIL__UPPER_CMD__STRUCT_HPP_

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
// Member 'motor_cmd'
#include "dobot/msg/detail/motor_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dobot__msg__UpperCmd __attribute__((deprecated))
#else
# define DEPRECATED__dobot__msg__UpperCmd __declspec(deprecated)
#endif

namespace dobot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpperCmd_
{
  using Type = UpperCmd_<ContainerAllocator>;

  explicit UpperCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_cmd.fill(dobot::msg::MotorCmd_<ContainerAllocator>{_init});
    }
  }

  explicit UpperCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motor_cmd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_cmd.fill(dobot::msg::MotorCmd_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _motor_cmd_type =
    std::array<dobot::msg::MotorCmd_<ContainerAllocator>, 18>;
  _motor_cmd_type motor_cmd;

  // setters for named parameter idiom
  Type & set__motor_cmd(
    const std::array<dobot::msg::MotorCmd_<ContainerAllocator>, 18> & _arg)
  {
    this->motor_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot::msg::UpperCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::msg::UpperCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::msg::UpperCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::msg::UpperCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::msg::UpperCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::UpperCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::msg::UpperCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::UpperCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::msg::UpperCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::msg::UpperCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__msg__UpperCmd
    std::shared_ptr<dobot::msg::UpperCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__msg__UpperCmd
    std::shared_ptr<dobot::msg::UpperCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpperCmd_ & other) const
  {
    if (this->motor_cmd != other.motor_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpperCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpperCmd_

// alias to use template instance with default allocator
using UpperCmd =
  dobot::msg::UpperCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__UPPER_CMD__STRUCT_HPP_
