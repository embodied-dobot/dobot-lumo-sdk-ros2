// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:msg/FsmInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/fsm_info.hpp"


#ifndef DOBOT__MSG__DETAIL__FSM_INFO__STRUCT_HPP_
#define DOBOT__MSG__DETAIL__FSM_INFO__STRUCT_HPP_

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
# define DEPRECATED__dobot__msg__FsmInfo __attribute__((deprecated))
#else
# define DEPRECATED__dobot__msg__FsmInfo __declspec(deprecated)
#endif

namespace dobot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FsmInfo_
{
  using Type = FsmInfo_<ContainerAllocator>;

  explicit FsmInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fsm_id = 0l;
      this->is_dance = false;
      this->name = "";
      this->dance_name = "";
      this->model_file = "";
      this->motion_loop_length = 0l;
      this->motion_hold_back_steps = 0l;
      this->motion_start_step = 0l;
    }
  }

  explicit FsmInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    dance_name(_alloc),
    model_file(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fsm_id = 0l;
      this->is_dance = false;
      this->name = "";
      this->dance_name = "";
      this->model_file = "";
      this->motion_loop_length = 0l;
      this->motion_hold_back_steps = 0l;
      this->motion_start_step = 0l;
    }
  }

  // field types and members
  using _fsm_id_type =
    int32_t;
  _fsm_id_type fsm_id;
  using _is_dance_type =
    bool;
  _is_dance_type is_dance;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _dance_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dance_name_type dance_name;
  using _model_file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_file_type model_file;
  using _motion_loop_length_type =
    int32_t;
  _motion_loop_length_type motion_loop_length;
  using _motion_hold_back_steps_type =
    int32_t;
  _motion_hold_back_steps_type motion_hold_back_steps;
  using _motion_start_step_type =
    int32_t;
  _motion_start_step_type motion_start_step;

  // setters for named parameter idiom
  Type & set__fsm_id(
    const int32_t & _arg)
  {
    this->fsm_id = _arg;
    return *this;
  }
  Type & set__is_dance(
    const bool & _arg)
  {
    this->is_dance = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__dance_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dance_name = _arg;
    return *this;
  }
  Type & set__model_file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_file = _arg;
    return *this;
  }
  Type & set__motion_loop_length(
    const int32_t & _arg)
  {
    this->motion_loop_length = _arg;
    return *this;
  }
  Type & set__motion_hold_back_steps(
    const int32_t & _arg)
  {
    this->motion_hold_back_steps = _arg;
    return *this;
  }
  Type & set__motion_start_step(
    const int32_t & _arg)
  {
    this->motion_start_step = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot::msg::FsmInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::msg::FsmInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::msg::FsmInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::msg::FsmInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::msg::FsmInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::FsmInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::msg::FsmInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::FsmInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::msg::FsmInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::msg::FsmInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__msg__FsmInfo
    std::shared_ptr<dobot::msg::FsmInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__msg__FsmInfo
    std::shared_ptr<dobot::msg::FsmInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FsmInfo_ & other) const
  {
    if (this->fsm_id != other.fsm_id) {
      return false;
    }
    if (this->is_dance != other.is_dance) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->dance_name != other.dance_name) {
      return false;
    }
    if (this->model_file != other.model_file) {
      return false;
    }
    if (this->motion_loop_length != other.motion_loop_length) {
      return false;
    }
    if (this->motion_hold_back_steps != other.motion_hold_back_steps) {
      return false;
    }
    if (this->motion_start_step != other.motion_start_step) {
      return false;
    }
    return true;
  }
  bool operator!=(const FsmInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FsmInfo_

// alias to use template instance with default allocator
using FsmInfo =
  dobot::msg::FsmInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__FSM_INFO__STRUCT_HPP_
