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
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__GetFsmList_Request() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__GetFsmList_Request__init(msg: *mut GetFsmList_Request) -> bool;
    fn dobot__srv__GetFsmList_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFsmList_Request>, size: usize) -> bool;
    fn dobot__srv__GetFsmList_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFsmList_Request>);
    fn dobot__srv__GetFsmList_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFsmList_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFsmList_Request>) -> bool;
}

// Corresponds to dobot__srv__GetFsmList_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFsmList_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_ms: i32,

}



impl Default for GetFsmList_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__GetFsmList_Request__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__GetFsmList_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFsmList_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__GetFsmList_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__GetFsmList_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__GetFsmList_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFsmList_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFsmList_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/GetFsmList_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__GetFsmList_Request() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__GetFsmList_Response() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__GetFsmList_Response__init(msg: *mut GetFsmList_Response) -> bool;
    fn dobot__srv__GetFsmList_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetFsmList_Response>, size: usize) -> bool;
    fn dobot__srv__GetFsmList_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetFsmList_Response>);
    fn dobot__srv__GetFsmList_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetFsmList_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetFsmList_Response>) -> bool;
}

// Corresponds to dobot__srv__GetFsmList_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFsmList_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fsm_list: rosidl_runtime_rs::Sequence<super::super::msg::rmw::FsmInfo>,

}



impl Default for GetFsmList_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__GetFsmList_Response__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__GetFsmList_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetFsmList_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__GetFsmList_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__GetFsmList_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__GetFsmList_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetFsmList_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetFsmList_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/GetFsmList_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__GetFsmList_Response() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__PlayPresetAction_Request() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__PlayPresetAction_Request__init(msg: *mut PlayPresetAction_Request) -> bool;
    fn dobot__srv__PlayPresetAction_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayPresetAction_Request>, size: usize) -> bool;
    fn dobot__srv__PlayPresetAction_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayPresetAction_Request>);
    fn dobot__srv__PlayPresetAction_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayPresetAction_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayPresetAction_Request>) -> bool;
}

// Corresponds to dobot__srv__PlayPresetAction_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayPresetAction_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub action: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_ms: i32,

}



impl Default for PlayPresetAction_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__PlayPresetAction_Request__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__PlayPresetAction_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayPresetAction_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__PlayPresetAction_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__PlayPresetAction_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__PlayPresetAction_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayPresetAction_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayPresetAction_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/PlayPresetAction_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__PlayPresetAction_Request() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__PlayPresetAction_Response() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__PlayPresetAction_Response__init(msg: *mut PlayPresetAction_Response) -> bool;
    fn dobot__srv__PlayPresetAction_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlayPresetAction_Response>, size: usize) -> bool;
    fn dobot__srv__PlayPresetAction_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlayPresetAction_Response>);
    fn dobot__srv__PlayPresetAction_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlayPresetAction_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PlayPresetAction_Response>) -> bool;
}

// Corresponds to dobot__srv__PlayPresetAction_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayPresetAction_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// 已下发的状态机编号。失败时为 -1。
    pub fsm_id: i32,

}



impl Default for PlayPresetAction_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__PlayPresetAction_Response__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__PlayPresetAction_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlayPresetAction_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__PlayPresetAction_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__PlayPresetAction_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__PlayPresetAction_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlayPresetAction_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlayPresetAction_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/PlayPresetAction_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__PlayPresetAction_Response() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__ExecuteSkill_Request() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__ExecuteSkill_Request__init(msg: *mut ExecuteSkill_Request) -> bool;
    fn dobot__srv__ExecuteSkill_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteSkill_Request>, size: usize) -> bool;
    fn dobot__srv__ExecuteSkill_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteSkill_Request>);
    fn dobot__srv__ExecuteSkill_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteSkill_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteSkill_Request>) -> bool;
}

// Corresponds to dobot__srv__ExecuteSkill_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteSkill_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub file_path: rosidl_runtime_rs::String,

    /// 只覆盖这次 RPC 往返，不表示动作已经播完。
    pub timeout_ms: i32,

}



impl Default for ExecuteSkill_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__ExecuteSkill_Request__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__ExecuteSkill_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteSkill_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__ExecuteSkill_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__ExecuteSkill_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__ExecuteSkill_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteSkill_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteSkill_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/ExecuteSkill_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__ExecuteSkill_Request() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__ExecuteSkill_Response() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__ExecuteSkill_Response__init(msg: *mut ExecuteSkill_Response) -> bool;
    fn dobot__srv__ExecuteSkill_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteSkill_Response>, size: usize) -> bool;
    fn dobot__srv__ExecuteSkill_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteSkill_Response>);
    fn dobot__srv__ExecuteSkill_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteSkill_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteSkill_Response>) -> bool;
}

// Corresponds to dobot__srv__ExecuteSkill_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteSkill_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ExecuteSkill_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__ExecuteSkill_Response__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__ExecuteSkill_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteSkill_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__ExecuteSkill_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__ExecuteSkill_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__ExecuteSkill_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteSkill_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteSkill_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/ExecuteSkill_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__ExecuteSkill_Response() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__CallRpc_Request() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__CallRpc_Request__init(msg: *mut CallRpc_Request) -> bool;
    fn dobot__srv__CallRpc_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CallRpc_Request>, size: usize) -> bool;
    fn dobot__srv__CallRpc_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CallRpc_Request>);
    fn dobot__srv__CallRpc_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CallRpc_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CallRpc_Request>) -> bool;
}

// Corresponds to dobot__srv__CallRpc_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CallRpc_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub method: rosidl_runtime_rs::String,

    /// JSON 对象文本，例如 "{}" 或 "{"fsm_id":300}"。
    pub params_json: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_ms: i32,

}



impl Default for CallRpc_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__CallRpc_Request__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__CallRpc_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CallRpc_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__CallRpc_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__CallRpc_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__CallRpc_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CallRpc_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CallRpc_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/CallRpc_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__CallRpc_Request() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__CallRpc_Response() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__srv__CallRpc_Response__init(msg: *mut CallRpc_Response) -> bool;
    fn dobot__srv__CallRpc_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CallRpc_Response>, size: usize) -> bool;
    fn dobot__srv__CallRpc_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CallRpc_Response>);
    fn dobot__srv__CallRpc_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CallRpc_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CallRpc_Response>) -> bool;
}

// Corresponds to dobot__srv__CallRpc_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CallRpc_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// 机器人返回的原始 JSON 文本。
    pub response_json: rosidl_runtime_rs::String,

}



impl Default for CallRpc_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__srv__CallRpc_Response__init(&mut msg as *mut _) {
        panic!("Call to dobot__srv__CallRpc_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CallRpc_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__CallRpc_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__CallRpc_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__srv__CallRpc_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CallRpc_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CallRpc_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/srv/CallRpc_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__srv__CallRpc_Response() }
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




#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__GetFsmList() -> *const std::ffi::c_void;
}

// Corresponds to dobot__srv__GetFsmList
#[allow(missing_docs, non_camel_case_types)]
pub struct GetFsmList;

impl rosidl_runtime_rs::Service for GetFsmList {
    type Request = GetFsmList_Request;
    type Response = GetFsmList_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__GetFsmList() }
    }
}




#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__PlayPresetAction() -> *const std::ffi::c_void;
}

// Corresponds to dobot__srv__PlayPresetAction
#[allow(missing_docs, non_camel_case_types)]
pub struct PlayPresetAction;

impl rosidl_runtime_rs::Service for PlayPresetAction {
    type Request = PlayPresetAction_Request;
    type Response = PlayPresetAction_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__PlayPresetAction() }
    }
}




#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__ExecuteSkill() -> *const std::ffi::c_void;
}

// Corresponds to dobot__srv__ExecuteSkill
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteSkill;

impl rosidl_runtime_rs::Service for ExecuteSkill {
    type Request = ExecuteSkill_Request;
    type Response = ExecuteSkill_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__ExecuteSkill() }
    }
}




#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__CallRpc() -> *const std::ffi::c_void;
}

// Corresponds to dobot__srv__CallRpc
#[allow(missing_docs, non_camel_case_types)]
pub struct CallRpc;

impl rosidl_runtime_rs::Service for CallRpc {
    type Request = CallRpc_Request;
    type Response = CallRpc_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dobot__srv__CallRpc() }
    }
}


