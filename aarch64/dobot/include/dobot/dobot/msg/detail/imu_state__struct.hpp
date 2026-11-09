// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:msg/IMUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/imu_state.hpp"


#ifndef DOBOT__MSG__DETAIL__IMU_STATE__STRUCT_HPP_
#define DOBOT__MSG__DETAIL__IMU_STATE__STRUCT_HPP_

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
# define DEPRECATED__dobot__msg__IMUState __attribute__((deprecated))
#else
# define DEPRECATED__dobot__msg__IMUState __declspec(deprecated)
#endif

namespace dobot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMUState_
{
  using Type = IMUState_<ContainerAllocator>;

  explicit IMUState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imu_id = 0ul;
      std::fill(this->quaternion.begin(), this->quaternion.end(), 0.0f);
      std::fill(this->gyroscope.begin(), this->gyroscope.end(), 0.0f);
      std::fill(this->accelerometer.begin(), this->accelerometer.end(), 0.0f);
      std::fill(this->rpy.begin(), this->rpy.end(), 0.0f);
      this->temperature = 0;
      this->timestamp_us = 0ull;
    }
  }

  explicit IMUState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : quaternion(_alloc),
    gyroscope(_alloc),
    accelerometer(_alloc),
    rpy(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imu_id = 0ul;
      std::fill(this->quaternion.begin(), this->quaternion.end(), 0.0f);
      std::fill(this->gyroscope.begin(), this->gyroscope.end(), 0.0f);
      std::fill(this->accelerometer.begin(), this->accelerometer.end(), 0.0f);
      std::fill(this->rpy.begin(), this->rpy.end(), 0.0f);
      this->temperature = 0;
      this->timestamp_us = 0ull;
    }
  }

  // field types and members
  using _imu_id_type =
    uint32_t;
  _imu_id_type imu_id;
  using _quaternion_type =
    std::array<float, 4>;
  _quaternion_type quaternion;
  using _gyroscope_type =
    std::array<float, 3>;
  _gyroscope_type gyroscope;
  using _accelerometer_type =
    std::array<float, 3>;
  _accelerometer_type accelerometer;
  using _rpy_type =
    std::array<float, 3>;
  _rpy_type rpy;
  using _temperature_type =
    uint8_t;
  _temperature_type temperature;
  using _timestamp_us_type =
    uint64_t;
  _timestamp_us_type timestamp_us;

  // setters for named parameter idiom
  Type & set__imu_id(
    const uint32_t & _arg)
  {
    this->imu_id = _arg;
    return *this;
  }
  Type & set__quaternion(
    const std::array<float, 4> & _arg)
  {
    this->quaternion = _arg;
    return *this;
  }
  Type & set__gyroscope(
    const std::array<float, 3> & _arg)
  {
    this->gyroscope = _arg;
    return *this;
  }
  Type & set__accelerometer(
    const std::array<float, 3> & _arg)
  {
    this->accelerometer = _arg;
    return *this;
  }
  Type & set__rpy(
    const std::array<float, 3> & _arg)
  {
    this->rpy = _arg;
    return *this;
  }
  Type & set__temperature(
    const uint8_t & _arg)
  {
    this->temperature = _arg;
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
    dobot::msg::IMUState_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::msg::IMUState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::msg::IMUState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::msg::IMUState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::msg::IMUState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::IMUState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::msg::IMUState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::msg::IMUState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::msg::IMUState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::msg::IMUState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__msg__IMUState
    std::shared_ptr<dobot::msg::IMUState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__msg__IMUState
    std::shared_ptr<dobot::msg::IMUState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMUState_ & other) const
  {
    if (this->imu_id != other.imu_id) {
      return false;
    }
    if (this->quaternion != other.quaternion) {
      return false;
    }
    if (this->gyroscope != other.gyroscope) {
      return false;
    }
    if (this->accelerometer != other.accelerometer) {
      return false;
    }
    if (this->rpy != other.rpy) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->timestamp_us != other.timestamp_us) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMUState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMUState_

// alias to use template instance with default allocator
using IMUState =
  dobot::msg::IMUState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dobot

#endif  // DOBOT__MSG__DETAIL__IMU_STATE__STRUCT_HPP_
