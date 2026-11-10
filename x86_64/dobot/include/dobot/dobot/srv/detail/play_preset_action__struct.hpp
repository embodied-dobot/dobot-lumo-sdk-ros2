// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot:srv/PlayPresetAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/play_preset_action.hpp"


#ifndef DOBOT__SRV__DETAIL__PLAY_PRESET_ACTION__STRUCT_HPP_
#define DOBOT__SRV__DETAIL__PLAY_PRESET_ACTION__STRUCT_HPP_

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
# define DEPRECATED__dobot__srv__PlayPresetAction_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot__srv__PlayPresetAction_Request __declspec(deprecated)
#endif

namespace dobot
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlayPresetAction_Request_
{
  using Type = PlayPresetAction_Request_<ContainerAllocator>;

  explicit PlayPresetAction_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->timeout_ms = 0l;
    }
  }

  explicit PlayPresetAction_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->timeout_ms = 0l;
    }
  }

  // field types and members
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _action_type action;
  using _timeout_ms_type =
    int32_t;
  _timeout_ms_type timeout_ms;

  // setters for named parameter idiom
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__timeout_ms(
    const int32_t & _arg)
  {
    this->timeout_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot::srv::PlayPresetAction_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::srv::PlayPresetAction_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::srv::PlayPresetAction_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::srv::PlayPresetAction_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::srv::PlayPresetAction_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::srv::PlayPresetAction_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::srv::PlayPresetAction_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::srv::PlayPresetAction_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::srv::PlayPresetAction_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::srv::PlayPresetAction_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__srv__PlayPresetAction_Request
    std::shared_ptr<dobot::srv::PlayPresetAction_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__srv__PlayPresetAction_Request
    std::shared_ptr<dobot::srv::PlayPresetAction_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayPresetAction_Request_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->timeout_ms != other.timeout_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayPresetAction_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayPresetAction_Request_

// alias to use template instance with default allocator
using PlayPresetAction_Request =
  dobot::srv::PlayPresetAction_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot


#ifndef _WIN32
# define DEPRECATED__dobot__srv__PlayPresetAction_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot__srv__PlayPresetAction_Response __declspec(deprecated)
#endif

namespace dobot
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlayPresetAction_Response_
{
  using Type = PlayPresetAction_Response_<ContainerAllocator>;

  explicit PlayPresetAction_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
      this->message = "";
      this->fsm_id = 0l;
    }
  }

  explicit PlayPresetAction_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
      this->message = "";
      this->fsm_id = 0l;
    }
  }

  // field types and members
  using _code_type =
    int32_t;
  _code_type code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _fsm_id_type =
    int32_t;
  _fsm_id_type fsm_id;

  // setters for named parameter idiom
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__fsm_id(
    const int32_t & _arg)
  {
    this->fsm_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot::srv::PlayPresetAction_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::srv::PlayPresetAction_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::srv::PlayPresetAction_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::srv::PlayPresetAction_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::srv::PlayPresetAction_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::srv::PlayPresetAction_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::srv::PlayPresetAction_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::srv::PlayPresetAction_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::srv::PlayPresetAction_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::srv::PlayPresetAction_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__srv__PlayPresetAction_Response
    std::shared_ptr<dobot::srv::PlayPresetAction_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__srv__PlayPresetAction_Response
    std::shared_ptr<dobot::srv::PlayPresetAction_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayPresetAction_Response_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->fsm_id != other.fsm_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayPresetAction_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayPresetAction_Response_

// alias to use template instance with default allocator
using PlayPresetAction_Response =
  dobot::srv::PlayPresetAction_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dobot__srv__PlayPresetAction_Event __attribute__((deprecated))
#else
# define DEPRECATED__dobot__srv__PlayPresetAction_Event __declspec(deprecated)
#endif

namespace dobot
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlayPresetAction_Event_
{
  using Type = PlayPresetAction_Event_<ContainerAllocator>;

  explicit PlayPresetAction_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PlayPresetAction_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<dobot::srv::PlayPresetAction_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dobot::srv::PlayPresetAction_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<dobot::srv::PlayPresetAction_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dobot::srv::PlayPresetAction_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<dobot::srv::PlayPresetAction_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dobot::srv::PlayPresetAction_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<dobot::srv::PlayPresetAction_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dobot::srv::PlayPresetAction_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot::srv::PlayPresetAction_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot::srv::PlayPresetAction_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot::srv::PlayPresetAction_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot::srv::PlayPresetAction_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot::srv::PlayPresetAction_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot::srv::PlayPresetAction_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot::srv::PlayPresetAction_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot::srv::PlayPresetAction_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot::srv::PlayPresetAction_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot::srv::PlayPresetAction_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot__srv__PlayPresetAction_Event
    std::shared_ptr<dobot::srv::PlayPresetAction_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot__srv__PlayPresetAction_Event
    std::shared_ptr<dobot::srv::PlayPresetAction_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayPresetAction_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayPresetAction_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayPresetAction_Event_

// alias to use template instance with default allocator
using PlayPresetAction_Event =
  dobot::srv::PlayPresetAction_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot

namespace dobot
{

namespace srv
{

struct PlayPresetAction
{
  using Request = dobot::srv::PlayPresetAction_Request;
  using Response = dobot::srv::PlayPresetAction_Response;
  using Event = dobot::srv::PlayPresetAction_Event;
};

}  // namespace srv

}  // namespace dobot

#endif  // DOBOT__SRV__DETAIL__PLAY_PRESET_ACTION__STRUCT_HPP_
