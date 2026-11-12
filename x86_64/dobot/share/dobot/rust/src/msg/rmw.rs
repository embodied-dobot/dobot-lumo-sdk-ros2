#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__FsmInfo() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__FsmInfo__init(msg: *mut FsmInfo) -> bool;
    fn dobot__msg__FsmInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FsmInfo>, size: usize) -> bool;
    fn dobot__msg__FsmInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FsmInfo>);
    fn dobot__msg__FsmInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FsmInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<FsmInfo>) -> bool;
}

// Corresponds to dobot__msg__FsmInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// One motion control FSM. Corresponds to C++ dobot::motion::FsmInfo.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FsmInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fsm_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_dance: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// The following four fields are populated only when is_dance is true; otherwise they are an empty string or 0.
    pub dance_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub model_file: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_loop_length: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_hold_back_steps: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_start_step: i32,

}



impl Default for FsmInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__FsmInfo__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__FsmInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FsmInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__FsmInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__FsmInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__FsmInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FsmInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FsmInfo where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/FsmInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__FsmInfo() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__MotorState() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__MotorState__init(msg: *mut MotorState) -> bool;
    fn dobot__msg__MotorState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorState>, size: usize) -> bool;
    fn dobot__msg__MotorState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorState>);
    fn dobot__msg__MotorState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorState>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorState>) -> bool;
}

// Corresponds to dobot__msg__MotorState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Servo state of a single joint. Field order matches dobot::msg::dds_::MotorState_.
/// Motor mode, raw protocol value, range 0-255.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

    /// Joint position, in rad.
    pub q: f32,

    /// Joint velocity, in rad/s.
    pub dq: f32,

    /// Joint acceleration, in rad/s^2.
    pub ddq: f32,

    /// Estimated torque, in N·m.
    pub tau_est: f32,

    /// Torque command readback, in N·m.
    pub tau_cmd: f32,

    /// Current feedback, raw protocol value.
    pub current_feedback: f32,

    /// Current command, raw protocol value.
    pub current_cmd: f32,

    /// Raw position, in rad.
    pub q_raw: f32,

    /// Raw velocity, in rad/s.
    pub dq_raw: f32,

    /// Raw acceleration, in rad/s^2.
    pub ddq_raw: f32,

    /// Raw torque, in N·m.
    pub tau_raw: f32,

    /// Raw servo driver board temperature, range 0-255.
    pub mcu_temp: u8,

    /// Raw MOS temperature, range 0-255.
    pub mos_temp: u8,

    /// Raw motor temperature, range 0-255.
    pub motor_temp: u8,

    /// Raw bus voltage, range 0-255; scaling is defined by the servo protocol.
    pub bus_voltage: u8,

}



impl Default for MotorState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__MotorState__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__MotorState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__MotorState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__MotorState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__MotorState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorState where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/MotorState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__MotorState() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__MotorCmd() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__MotorCmd__init(msg: *mut MotorCmd) -> bool;
    fn dobot__msg__MotorCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorCmd>, size: usize) -> bool;
    fn dobot__msg__MotorCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorCmd>);
    fn dobot__msg__MotorCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorCmd>) -> bool;
}

// Corresponds to dobot__msg__MotorCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Servo command of a single joint. Field order matches dobot::msg::dds_::MotorCmd_.
/// Motor mode, raw protocol value, range 0-255.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

    /// Target position, in rad.
    pub q: f32,

    /// Target velocity, in rad/s.
    pub dq: f32,

    /// Feedforward torque, in N·m.
    pub tau: f32,

    /// Position proportional gain. Negative values are physically meaningless and rejected by the SDK.
    pub kp: f32,

    /// Velocity derivative gain. Negative values are physically meaningless and rejected by the SDK.
    pub kd: f32,

}



impl Default for MotorCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__MotorCmd__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__MotorCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__MotorCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__MotorCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__MotorCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorCmd where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/MotorCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__MotorCmd() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__JoystickValue() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__JoystickValue__init(msg: *mut JoystickValue) -> bool;
    fn dobot__msg__JoystickValue__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JoystickValue>, size: usize) -> bool;
    fn dobot__msg__JoystickValue__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JoystickValue>);
    fn dobot__msg__JoystickValue__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JoystickValue>, out_seq: *mut rosidl_runtime_rs::Sequence<JoystickValue>) -> bool;
}

// Corresponds to dobot__msg__JoystickValue
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Joystick components. x and y are raw key values, typically in the range -1.0 to 1.0.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JoystickValue {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,

}



impl Default for JoystickValue {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__JoystickValue__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__JoystickValue__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JoystickValue {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__JoystickValue__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__JoystickValue__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__JoystickValue__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JoystickValue {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JoystickValue where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/JoystickValue";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__JoystickValue() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__LowerState() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__LowerState__init(msg: *mut LowerState) -> bool;
    fn dobot__msg__LowerState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LowerState>, size: usize) -> bool;
    fn dobot__msg__LowerState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LowerState>);
    fn dobot__msg__LowerState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LowerState>, out_seq: *mut rosidl_runtime_rs::Sequence<LowerState>) -> bool;
}

// Corresponds to dobot__msg__LowerState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Lower body state. Topic rt/lower/state. motor_state has length 15, matching the underlying IDL.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LowerState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_state: [super::super::msg::rmw::MotorState; 15],

    /// Sampling timestamp, in us, counted from the robot monotonic clock.
    pub timestamp_us: u64,

}



impl Default for LowerState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__LowerState__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__LowerState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LowerState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__LowerState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__LowerState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__LowerState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LowerState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LowerState where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/LowerState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__LowerState() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__LowerCmd() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__LowerCmd__init(msg: *mut LowerCmd) -> bool;
    fn dobot__msg__LowerCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LowerCmd>, size: usize) -> bool;
    fn dobot__msg__LowerCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LowerCmd>);
    fn dobot__msg__LowerCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LowerCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<LowerCmd>) -> bool;
}

// Corresponds to dobot__msg__LowerCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Lower body command. Topic rt/lower/cmd. motor_cmd has length 12, matching the underlying IDL.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LowerCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_cmd: [super::super::msg::rmw::MotorCmd; 12],

}



impl Default for LowerCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__LowerCmd__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__LowerCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LowerCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__LowerCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__LowerCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__LowerCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LowerCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LowerCmd where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/LowerCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__LowerCmd() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__UpperState() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__UpperState__init(msg: *mut UpperState) -> bool;
    fn dobot__msg__UpperState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UpperState>, size: usize) -> bool;
    fn dobot__msg__UpperState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UpperState>);
    fn dobot__msg__UpperState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UpperState>, out_seq: *mut rosidl_runtime_rs::Sequence<UpperState>) -> bool;
}

// Corresponds to dobot__msg__UpperState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Upper body state. Topic rt/upper/state.
/// Product model, fixed 16 bytes, zero-padded. Corresponds to IDL char.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpperState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_type: [u8; 16],

    /// true means the upper body is currently under external control.
    pub is_upper_control: bool,

    /// Upper body motor states, length 18.
    pub motor_state: [super::super::msg::rmw::MotorState; 18],

    /// Sampling timestamp, in us.
    pub timestamp_us: u64,

}



impl Default for UpperState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__UpperState__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__UpperState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UpperState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__UpperState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__UpperState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__UpperState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UpperState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UpperState where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/UpperState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__UpperState() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__UpperCmd() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__UpperCmd__init(msg: *mut UpperCmd) -> bool;
    fn dobot__msg__UpperCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UpperCmd>, size: usize) -> bool;
    fn dobot__msg__UpperCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UpperCmd>);
    fn dobot__msg__UpperCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UpperCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<UpperCmd>) -> bool;
}

// Corresponds to dobot__msg__UpperCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Upper body command. Topic rt/upper/cmd. motor_cmd has length 18, matching the underlying IDL.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpperCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_cmd: [super::super::msg::rmw::MotorCmd; 18],

}



impl Default for UpperCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__UpperCmd__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__UpperCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UpperCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__UpperCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__UpperCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__UpperCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UpperCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UpperCmd where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/UpperCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__UpperCmd() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__IMUState() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__IMUState__init(msg: *mut IMUState) -> bool;
    fn dobot__msg__IMUState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IMUState>, size: usize) -> bool;
    fn dobot__msg__IMUState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IMUState>);
    fn dobot__msg__IMUState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IMUState>, out_seq: *mut rosidl_runtime_rs::Sequence<IMUState>) -> bool;
}

// Corresponds to dobot__msg__IMUState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// IMU state. Topics rt/pelvis/imu/data and rt/torso/imu/data share this type.
/// Subscribe to only one of them per session, consistent with the C++ SDK constraint.
/// IMU id, range 0-4294967295.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_id: u32,

    /// Quaternion, 4 values, order matches the underlying IDL.
    pub quaternion: [f32; 4],

    /// 3-axis gyroscope, order matches the underlying IDL, usually in rad/s.
    pub gyroscope: [f32; 3],

    /// 3-axis acceleration, order matches the underlying IDL, usually in m/s^2.
    pub accelerometer: [f32; 3],

    /// Euler angles in the order roll, pitch, yaw, in rad.
    pub rpy: [f32; 3],

    /// Raw temperature, range 0-255.
    pub temperature: u8,

    /// Sampling timestamp, in us.
    pub timestamp_us: u64,

}



impl Default for IMUState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__IMUState__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__IMUState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IMUState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__IMUState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__IMUState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__IMUState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IMUState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IMUState where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/IMUState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__IMUState() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__StandingControl() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__StandingControl__init(msg: *mut StandingControl) -> bool;
    fn dobot__msg__StandingControl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StandingControl>, size: usize) -> bool;
    fn dobot__msg__StandingControl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StandingControl>);
    fn dobot__msg__StandingControl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StandingControl>, out_seq: *mut rosidl_runtime_rs::Sequence<StandingControl>) -> bool;
}

// Corresponds to dobot__msg__StandingControl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Standing fine adjustment. Topic rt/stand/cmd. Accepted only in Mini standing mode (FSM 300).
/// All three targets take effect together; waist pitch and roll are not part of this message.
/// Absolute head yaw target, in rad.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StandingControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub head_yaw: f32,

    /// Waist yaw offset relative to the default posture, in rad.
    pub waist_yaw: f32,

    /// Body height target, in m. 0 restores the default standing height.
    pub body_height: f32,

}



impl Default for StandingControl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__StandingControl__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__StandingControl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StandingControl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__StandingControl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__StandingControl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__StandingControl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StandingControl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StandingControl where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/StandingControl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__StandingControl() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__SetFsmId() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__SetFsmId__init(msg: *mut SetFsmId) -> bool;
    fn dobot__msg__SetFsmId__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetFsmId>, size: usize) -> bool;
    fn dobot__msg__SetFsmId__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetFsmId>);
    fn dobot__msg__SetFsmId__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetFsmId>, out_seq: *mut rosidl_runtime_rs::Sequence<SetFsmId>) -> bool;
}

// Corresponds to dobot__msg__SetFsmId
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Motion control FSM topic. Topic rt/set/fsm/id. Published by the lower layer when a skill starts and ends.
/// FSM id. 0 is also a valid id. Range 0-65535.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFsmId {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u16,

    /// Name of the action currently running. Empty string means no action.
    pub current_action: rosidl_runtime_rs::String,

}



impl Default for SetFsmId {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__SetFsmId__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__SetFsmId__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetFsmId {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__SetFsmId__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__SetFsmId__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__SetFsmId__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetFsmId {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetFsmId where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/SetFsmId";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__SetFsmId() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__EnableMotors() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__EnableMotors__init(msg: *mut EnableMotors) -> bool;
    fn dobot__msg__EnableMotors__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EnableMotors>, size: usize) -> bool;
    fn dobot__msg__EnableMotors__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EnableMotors>);
    fn dobot__msg__EnableMotors__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EnableMotors>, out_seq: *mut rosidl_runtime_rs::Sequence<EnableMotors>) -> bool;
}

// Corresponds to dobot__msg__EnableMotors
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Motor enable. Topic rt/enable/motors. Each bit maps to one motor; true means enabled.
/// Length 30, matching the underlying IDL.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EnableMotors {

    // This member is not documented.
    #[allow(missing_docs)]
    pub flag: [bool; 30],

}



impl Default for EnableMotors {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__EnableMotors__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__EnableMotors__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EnableMotors {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__EnableMotors__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__EnableMotors__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__EnableMotors__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EnableMotors {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EnableMotors where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/EnableMotors";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__EnableMotors() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__ClearErrors() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__ClearErrors__init(msg: *mut ClearErrors) -> bool;
    fn dobot__msg__ClearErrors__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClearErrors>, size: usize) -> bool;
    fn dobot__msg__ClearErrors__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClearErrors>);
    fn dobot__msg__ClearErrors__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClearErrors>, out_seq: *mut rosidl_runtime_rs::Sequence<ClearErrors>) -> bool;
}

// Corresponds to dobot__msg__ClearErrors
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Clear errors. Topic rt/clear/errors.
/// Message id incremented by the caller, used to distinguish repeated requests.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearErrors {

    // This member is not documented.
    #[allow(missing_docs)]
    pub msg_id: i32,

}



impl Default for ClearErrors {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__ClearErrors__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__ClearErrors__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClearErrors {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__ClearErrors__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__ClearErrors__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__ClearErrors__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClearErrors {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClearErrors where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/ClearErrors";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__ClearErrors() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__GoHome() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__GoHome__init(msg: *mut GoHome) -> bool;
    fn dobot__msg__GoHome__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoHome>, size: usize) -> bool;
    fn dobot__msg__GoHome__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoHome>);
    fn dobot__msg__GoHome__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoHome>, out_seq: *mut rosidl_runtime_rs::Sequence<GoHome>) -> bool;
}

// Corresponds to dobot__msg__GoHome
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Go home. Topic rt/go/home. Each bit maps to one motor; true means that motor takes part in homing.
/// Length 30, matching the underlying IDL.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoHome {

    // This member is not documented.
    #[allow(missing_docs)]
    pub flag: [bool; 30],

}



impl Default for GoHome {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__GoHome__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__GoHome__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoHome {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__GoHome__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__GoHome__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__GoHome__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoHome {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoHome where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/GoHome";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__GoHome() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__SetCalibrationFlag() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__SetCalibrationFlag__init(msg: *mut SetCalibrationFlag) -> bool;
    fn dobot__msg__SetCalibrationFlag__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCalibrationFlag>, size: usize) -> bool;
    fn dobot__msg__SetCalibrationFlag__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCalibrationFlag>);
    fn dobot__msg__SetCalibrationFlag__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCalibrationFlag>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCalibrationFlag>) -> bool;
}

// Corresponds to dobot__msg__SetCalibrationFlag
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Calibration flag. Topic rt/set/calibration/flag. Each bit maps to one joint.
/// Length 30, matching the underlying IDL.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCalibrationFlag {

    // This member is not documented.
    #[allow(missing_docs)]
    pub flag: [bool; 30],

}



impl Default for SetCalibrationFlag {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__SetCalibrationFlag__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__SetCalibrationFlag__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCalibrationFlag {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__SetCalibrationFlag__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__SetCalibrationFlag__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__SetCalibrationFlag__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCalibrationFlag {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCalibrationFlag where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/SetCalibrationFlag";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__SetCalibrationFlag() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__RemoteControl() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__RemoteControl__init(msg: *mut RemoteControl) -> bool;
    fn dobot__msg__RemoteControl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RemoteControl>, size: usize) -> bool;
    fn dobot__msg__RemoteControl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RemoteControl>);
    fn dobot__msg__RemoteControl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RemoteControl>, out_seq: *mut rosidl_runtime_rs::Sequence<RemoteControl>) -> bool;
}

// Corresponds to dobot__msg__RemoteControl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Remote control velocity intent. Topic rt/remote/control.
/// Left stick, forward/backward and left/right.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoteControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_move: super::super::msg::rmw::JoystickValue,

    /// Right stick, turning.
    pub btn_turn: super::super::msg::rmw::JoystickValue,

}



impl Default for RemoteControl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__RemoteControl__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__RemoteControl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RemoteControl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__RemoteControl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__RemoteControl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__RemoteControl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RemoteControl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RemoteControl where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/RemoteControl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__RemoteControl() }
  }
}


#[link(name = "dobot__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__GamepadState() -> *const std::ffi::c_void;
}

#[link(name = "dobot__rosidl_generator_c")]
extern "C" {
    fn dobot__msg__GamepadState__init(msg: *mut GamepadState) -> bool;
    fn dobot__msg__GamepadState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GamepadState>, size: usize) -> bool;
    fn dobot__msg__GamepadState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GamepadState>);
    fn dobot__msg__GamepadState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GamepadState>, out_seq: *mut rosidl_runtime_rs::Sequence<GamepadState>) -> bool;
}

// Corresponds to dobot__msg__GamepadState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Gamepad state. Topic rt/gamepad/state.
/// Protocol header.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GamepadState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub head: u16,

    /// Key bits. bit0 R1, bit1 L1, bit2 start, bit3 select, bit4 R2, bit5 L2, bit6 F1, bit7 F2,
    /// bit8 A, bit9 B, bit10 X, bit11 Y, bit12 up, bit13 right, bit14 down, bit15 left.
    pub btn_state: u16,

    /// Left stick x, typically -1.0 to 1.0.
    pub lx: f32,

    /// Left stick y, typically -1.0 to 1.0.
    pub ly: f32,

    /// Right stick x, typically -1.0 to 1.0.
    pub rx: f32,

    /// Right stick y, typically -1.0 to 1.0.
    pub ry: f32,

    /// Sampling timestamp, in us.
    pub timestamp_us: u64,

}



impl Default for GamepadState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot__msg__GamepadState__init(&mut msg as *mut _) {
        panic!("Call to dobot__msg__GamepadState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GamepadState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__GamepadState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__GamepadState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot__msg__GamepadState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GamepadState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GamepadState where Self: Sized {
  const TYPE_NAME: &'static str = "dobot/msg/GamepadState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot__msg__GamepadState() }
  }
}


