#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__SetRobotMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__SetRobotMode_Request__init(msg: *mut SetRobotMode_Request) -> bool;
    fn dobot__srv__SetRobotMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetRobotMode_Request>, size: usize) -> bool;
    fn dobot__srv__SetRobotMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetRobotMode_Request>);
    fn dobot__srv__SetRobotMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetRobotMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetRobotMode_Request>) -> bool;
}

// Corresponds to dobot__srv__SetRobotMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: rosidl_runtime_rs::String,

    /// 本次调用的超时，单位 ms，范围 1–60000。
    pub timeout_ms: i32,

}



impl Default for SetRobotMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__SetRobotMode_Request__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__SetRobotMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetRobotMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__SetRobotMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__SetRobotMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__SetRobotMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetRobotMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetRobotMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/SetRobotMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__SetRobotMode_Request() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__SetRobotMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__SetRobotMode_Response__init(msg: *mut SetRobotMode_Response) -> bool;
    fn dobot__srv__SetRobotMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetRobotMode_Response>, size: usize) -> bool;
    fn dobot__srv__SetRobotMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetRobotMode_Response>);
    fn dobot__srv__SetRobotMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetRobotMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetRobotMode_Response>) -> bool;
}

// Corresponds to dobot__srv__SetRobotMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// 已下发的状态机编号。失败时为 -1。
    pub fsm_id: i32,

}



impl Default for SetRobotMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__SetRobotMode_Response__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__SetRobotMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetRobotMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__SetRobotMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__SetRobotMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__SetRobotMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetRobotMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetRobotMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/SetRobotMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__SetRobotMode_Response() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__GetFsmId_Request() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__GetFsmId_Request__init(msg: *mut GetFsmId_Request) -> bool;
    fn dobot__srv__GetFsmId_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFsmId_Request>, size: usize) -> bool;
    fn dobot__srv__GetFsmId_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFsmId_Request>);
    fn dobot__srv__GetFsmId_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFsmId_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFsmId_Request>) -> bool;
}

// Corresponds to dobot__srv__GetFsmId_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFsmId_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_ms: i32,

}



impl Default for GetFsmId_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__GetFsmId_Request__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__GetFsmId_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFsmId_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__GetFsmId_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__GetFsmId_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__GetFsmId_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFsmId_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFsmId_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/GetFsmId_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__GetFsmId_Request() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__GetFsmId_Response() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__GetFsmId_Response__init(msg: *mut GetFsmId_Response) -> bool;
    fn dobot__srv__GetFsmId_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFsmId_Response>, size: usize) -> bool;
    fn dobot__srv__GetFsmId_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFsmId_Response>);
    fn dobot__srv__GetFsmId_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFsmId_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFsmId_Response>) -> bool;
}

// Corresponds to dobot__srv__GetFsmId_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFsmId_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fsm_id: i32,

}



impl Default for GetFsmId_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__GetFsmId_Response__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__GetFsmId_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFsmId_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__GetFsmId_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__GetFsmId_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__GetFsmId_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFsmId_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFsmId_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/GetFsmId_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__GetFsmId_Response() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__SetVelocity_Request() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__SetVelocity_Request__init(msg: *mut SetVelocity_Request) -> bool;
    fn dobot__srv__SetVelocity_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetVelocity_Request>, size: usize) -> bool;
    fn dobot__srv__SetVelocity_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetVelocity_Request>);
    fn dobot__srv__SetVelocity_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetVelocity_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetVelocity_Request>) -> bool;
}

// Corresponds to dobot__srv__SetVelocity_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetVelocity_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub vx: f32,

    /// 向左为正，单位 m/s。
    pub vy: f32,

    /// 逆时针为正，单位 rad/s。
    pub vyaw: f32,

    /// 保持时间，单位 s。小于 0 会被 SDK 拒绝。
    pub duration: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_ms: i32,

}



impl Default for SetVelocity_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__SetVelocity_Request__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__SetVelocity_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetVelocity_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__SetVelocity_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__SetVelocity_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__SetVelocity_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetVelocity_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetVelocity_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/SetVelocity_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__SetVelocity_Request() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__SetVelocity_Response() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__SetVelocity_Response__init(msg: *mut SetVelocity_Response) -> bool;
    fn dobot__srv__SetVelocity_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetVelocity_Response>, size: usize) -> bool;
    fn dobot__srv__SetVelocity_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetVelocity_Response>);
    fn dobot__srv__SetVelocity_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetVelocity_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetVelocity_Response>) -> bool;
}

// Corresponds to dobot__srv__SetVelocity_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetVelocity_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetVelocity_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__SetVelocity_Response__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__SetVelocity_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetVelocity_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__SetVelocity_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__SetVelocity_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__SetVelocity_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetVelocity_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetVelocity_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/SetVelocity_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__SetVelocity_Response() }
  }
}






#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__SetRobotMode() -> *const std::ffi::c_void;
}

// Corresponds to dobot__srv__SetRobotMode
#[allow(missing_docs, non_camel_case_types)]
pub struct SetRobotMode;

impl rosidl_runtime_rs::Service for SetRobotMode {
    type Request = SetRobotMode_Request;
    type Response = SetRobotMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__SetRobotMode() }
    }
}




#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__GetFsmId() -> *const std::ffi::c_void;
}

// Corresponds to dobot__srv__GetFsmId
#[allow(missing_docs, non_camel_case_types)]
pub struct GetFsmId;

impl rosidl_runtime_rs::Service for GetFsmId {
    type Request = GetFsmId_Request;
    type Response = GetFsmId_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__GetFsmId() }
    }
}




#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__SetVelocity() -> *const std::ffi::c_void;
}

// Corresponds to dobot__srv__SetVelocity
#[allow(missing_docs, non_camel_case_types)]
pub struct SetVelocity;

impl rosidl_runtime_rs::Service for SetVelocity {
    type Request = SetVelocity_Request;
    type Response = SetVelocity_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__SetVelocity() }
    }
}


