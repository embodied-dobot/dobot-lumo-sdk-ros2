#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to dobot__msg__FsmInfo
/// One motion control FSM. Corresponds to C++ dobot::motion::FsmInfo.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub name: std::string::String,

    /// The following four fields are populated only when is_dance is true; otherwise they are an empty string or 0.
    pub dance_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub model_file: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FsmInfo::default())
  }
}

impl rosidl_runtime_rs::Message for FsmInfo {
  type RmwMsg = super::msg::rmw::FsmInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fsm_id: msg.fsm_id,
        is_dance: msg.is_dance,
        name: msg.name.as_str().into(),
        dance_name: msg.dance_name.as_str().into(),
        model_file: msg.model_file.as_str().into(),
        motion_loop_length: msg.motion_loop_length,
        motion_hold_back_steps: msg.motion_hold_back_steps,
        motion_start_step: msg.motion_start_step,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      fsm_id: msg.fsm_id,
      is_dance: msg.is_dance,
        name: msg.name.as_str().into(),
        dance_name: msg.dance_name.as_str().into(),
        model_file: msg.model_file.as_str().into(),
      motion_loop_length: msg.motion_loop_length,
      motion_hold_back_steps: msg.motion_hold_back_steps,
      motion_start_step: msg.motion_start_step,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fsm_id: msg.fsm_id,
      is_dance: msg.is_dance,
      name: msg.name.to_string(),
      dance_name: msg.dance_name.to_string(),
      model_file: msg.model_file.to_string(),
      motion_loop_length: msg.motion_loop_length,
      motion_hold_back_steps: msg.motion_hold_back_steps,
      motion_start_step: msg.motion_start_step,
    }
  }
}


// Corresponds to dobot__msg__MotorState
/// Servo state of a single joint. Field order matches dobot::msg::dds_::MotorState_.
/// Motor mode, raw protocol value, range 0-255.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorState::default())
  }
}

impl rosidl_runtime_rs::Message for MotorState {
  type RmwMsg = super::msg::rmw::MotorState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
        q: msg.q,
        dq: msg.dq,
        ddq: msg.ddq,
        tau_est: msg.tau_est,
        tau_cmd: msg.tau_cmd,
        current_feedback: msg.current_feedback,
        current_cmd: msg.current_cmd,
        q_raw: msg.q_raw,
        dq_raw: msg.dq_raw,
        ddq_raw: msg.ddq_raw,
        tau_raw: msg.tau_raw,
        mcu_temp: msg.mcu_temp,
        mos_temp: msg.mos_temp,
        motor_temp: msg.motor_temp,
        bus_voltage: msg.bus_voltage,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      q: msg.q,
      dq: msg.dq,
      ddq: msg.ddq,
      tau_est: msg.tau_est,
      tau_cmd: msg.tau_cmd,
      current_feedback: msg.current_feedback,
      current_cmd: msg.current_cmd,
      q_raw: msg.q_raw,
      dq_raw: msg.dq_raw,
      ddq_raw: msg.ddq_raw,
      tau_raw: msg.tau_raw,
      mcu_temp: msg.mcu_temp,
      mos_temp: msg.mos_temp,
      motor_temp: msg.motor_temp,
      bus_voltage: msg.bus_voltage,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
      q: msg.q,
      dq: msg.dq,
      ddq: msg.ddq,
      tau_est: msg.tau_est,
      tau_cmd: msg.tau_cmd,
      current_feedback: msg.current_feedback,
      current_cmd: msg.current_cmd,
      q_raw: msg.q_raw,
      dq_raw: msg.dq_raw,
      ddq_raw: msg.ddq_raw,
      tau_raw: msg.tau_raw,
      mcu_temp: msg.mcu_temp,
      mos_temp: msg.mos_temp,
      motor_temp: msg.motor_temp,
      bus_voltage: msg.bus_voltage,
    }
  }
}


// Corresponds to dobot__msg__MotorCmd
/// Servo command of a single joint. Field order matches dobot::msg::dds_::MotorCmd_.
/// Motor mode, raw protocol value, range 0-255.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorCmd::default())
  }
}

impl rosidl_runtime_rs::Message for MotorCmd {
  type RmwMsg = super::msg::rmw::MotorCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
        q: msg.q,
        dq: msg.dq,
        tau: msg.tau,
        kp: msg.kp,
        kd: msg.kd,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
      q: msg.q,
      dq: msg.dq,
      tau: msg.tau,
      kp: msg.kp,
      kd: msg.kd,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
      q: msg.q,
      dq: msg.dq,
      tau: msg.tau,
      kp: msg.kp,
      kd: msg.kd,
    }
  }
}


// Corresponds to dobot__msg__JoystickValue
/// Joystick components. x and y are raw key values, typically in the range -1.0 to 1.0.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JoystickValue::default())
  }
}

impl rosidl_runtime_rs::Message for JoystickValue {
  type RmwMsg = super::msg::rmw::JoystickValue;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
    }
  }
}


// Corresponds to dobot__msg__LowerState
/// Lower body state. Topic rt/lower/state. motor_state has length 15, matching the underlying IDL.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LowerState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_state: [super::msg::MotorState; 15],

    /// Sampling timestamp, in us, counted from the robot monotonic clock.
    pub timestamp_us: u64,

}



impl Default for LowerState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LowerState::default())
  }
}

impl rosidl_runtime_rs::Message for LowerState {
  type RmwMsg = super::msg::rmw::LowerState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_state: msg.motor_state
          .map(|elem| super::msg::MotorState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        timestamp_us: msg.timestamp_us,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_state: msg.motor_state
          .iter()
          .map(|elem| super::msg::MotorState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      timestamp_us: msg.timestamp_us,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_state: msg.motor_state
        .map(super::msg::MotorState::from_rmw_message),
      timestamp_us: msg.timestamp_us,
    }
  }
}


// Corresponds to dobot__msg__LowerCmd
/// Lower body command. Topic rt/lower/cmd. motor_cmd has length 12, matching the underlying IDL.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LowerCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_cmd: [super::msg::MotorCmd; 12],

}



impl Default for LowerCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LowerCmd::default())
  }
}

impl rosidl_runtime_rs::Message for LowerCmd {
  type RmwMsg = super::msg::rmw::LowerCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_cmd: msg.motor_cmd
          .map(|elem| super::msg::MotorCmd::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_cmd: msg.motor_cmd
          .iter()
          .map(|elem| super::msg::MotorCmd::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_cmd: msg.motor_cmd
        .map(super::msg::MotorCmd::from_rmw_message),
    }
  }
}


// Corresponds to dobot__msg__UpperState
/// Upper body state. Topic rt/upper/state.
/// Product model, fixed 16 bytes, zero-padded. Corresponds to IDL char.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpperState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_type: [u8; 16],

    /// true means the upper body is currently under external control.
    pub is_upper_control: bool,

    /// Upper body motor states, length 18.
    pub motor_state: [super::msg::MotorState; 18],

    /// Sampling timestamp, in us.
    pub timestamp_us: u64,

}



impl Default for UpperState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UpperState::default())
  }
}

impl rosidl_runtime_rs::Message for UpperState {
  type RmwMsg = super::msg::rmw::UpperState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_type: msg.robot_type,
        is_upper_control: msg.is_upper_control,
        motor_state: msg.motor_state
          .map(|elem| super::msg::MotorState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        timestamp_us: msg.timestamp_us,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_type: msg.robot_type,
      is_upper_control: msg.is_upper_control,
        motor_state: msg.motor_state
          .iter()
          .map(|elem| super::msg::MotorState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      timestamp_us: msg.timestamp_us,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      robot_type: msg.robot_type,
      is_upper_control: msg.is_upper_control,
      motor_state: msg.motor_state
        .map(super::msg::MotorState::from_rmw_message),
      timestamp_us: msg.timestamp_us,
    }
  }
}


// Corresponds to dobot__msg__UpperCmd
/// Upper body command. Topic rt/upper/cmd. motor_cmd has length 18, matching the underlying IDL.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpperCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_cmd: [super::msg::MotorCmd; 18],

}



impl Default for UpperCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UpperCmd::default())
  }
}

impl rosidl_runtime_rs::Message for UpperCmd {
  type RmwMsg = super::msg::rmw::UpperCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_cmd: msg.motor_cmd
          .map(|elem| super::msg::MotorCmd::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        motor_cmd: msg.motor_cmd
          .iter()
          .map(|elem| super::msg::MotorCmd::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      motor_cmd: msg.motor_cmd
        .map(super::msg::MotorCmd::from_rmw_message),
    }
  }
}


// Corresponds to dobot__msg__IMUState
/// IMU state. Topics rt/pelvis/imu/data and rt/torso/imu/data share this type.
/// Subscribe to only one of them per session, consistent with the C++ SDK constraint.
/// IMU id, range 0-4294967295.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IMUState::default())
  }
}

impl rosidl_runtime_rs::Message for IMUState {
  type RmwMsg = super::msg::rmw::IMUState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        imu_id: msg.imu_id,
        quaternion: msg.quaternion,
        gyroscope: msg.gyroscope,
        accelerometer: msg.accelerometer,
        rpy: msg.rpy,
        temperature: msg.temperature,
        timestamp_us: msg.timestamp_us,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      imu_id: msg.imu_id,
        quaternion: msg.quaternion,
        gyroscope: msg.gyroscope,
        accelerometer: msg.accelerometer,
        rpy: msg.rpy,
      temperature: msg.temperature,
      timestamp_us: msg.timestamp_us,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      imu_id: msg.imu_id,
      quaternion: msg.quaternion,
      gyroscope: msg.gyroscope,
      accelerometer: msg.accelerometer,
      rpy: msg.rpy,
      temperature: msg.temperature,
      timestamp_us: msg.timestamp_us,
    }
  }
}


// Corresponds to dobot__msg__StandingControl
/// Standing fine adjustment. Topic rt/stand/cmd. Accepted only in Mini standing mode (FSM 300).
/// All three targets take effect together; waist pitch and roll are not part of this message.
/// Absolute head yaw target, in rad.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StandingControl::default())
  }
}

impl rosidl_runtime_rs::Message for StandingControl {
  type RmwMsg = super::msg::rmw::StandingControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        head_yaw: msg.head_yaw,
        waist_yaw: msg.waist_yaw,
        body_height: msg.body_height,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      head_yaw: msg.head_yaw,
      waist_yaw: msg.waist_yaw,
      body_height: msg.body_height,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      head_yaw: msg.head_yaw,
      waist_yaw: msg.waist_yaw,
      body_height: msg.body_height,
    }
  }
}


// Corresponds to dobot__msg__SetFsmId
/// Motion control FSM topic. Topic rt/set/fsm/id. Published by the lower layer when a skill starts and ends.
/// FSM id. 0 is also a valid id. Range 0-65535.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFsmId {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u16,

    /// Name of the action currently running. Empty string means no action.
    pub current_action: std::string::String,

}



impl Default for SetFsmId {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SetFsmId::default())
  }
}

impl rosidl_runtime_rs::Message for SetFsmId {
  type RmwMsg = super::msg::rmw::SetFsmId;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        current_action: msg.current_action.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
        current_action: msg.current_action.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      current_action: msg.current_action.to_string(),
    }
  }
}


// Corresponds to dobot__msg__EnableMotors
/// Motor enable. Topic rt/enable/motors. Each bit maps to one motor; true means enabled.
/// Length 30, matching the underlying IDL.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EnableMotors {

    // This member is not documented.
    #[allow(missing_docs)]
    pub flag: [bool; 30],

}



impl Default for EnableMotors {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EnableMotors::default())
  }
}

impl rosidl_runtime_rs::Message for EnableMotors {
  type RmwMsg = super::msg::rmw::EnableMotors;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        flag: msg.flag,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        flag: msg.flag,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      flag: msg.flag,
    }
  }
}


// Corresponds to dobot__msg__ClearErrors
/// Clear errors. Topic rt/clear/errors.
/// Message id incremented by the caller, used to distinguish repeated requests.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClearErrors {

    // This member is not documented.
    #[allow(missing_docs)]
    pub msg_id: i32,

}



impl Default for ClearErrors {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ClearErrors::default())
  }
}

impl rosidl_runtime_rs::Message for ClearErrors {
  type RmwMsg = super::msg::rmw::ClearErrors;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        msg_id: msg.msg_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      msg_id: msg.msg_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      msg_id: msg.msg_id,
    }
  }
}


// Corresponds to dobot__msg__GoHome
/// Go home. Topic rt/go/home. Each bit maps to one motor; true means that motor takes part in homing.
/// Length 30, matching the underlying IDL.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoHome {

    // This member is not documented.
    #[allow(missing_docs)]
    pub flag: [bool; 30],

}



impl Default for GoHome {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GoHome::default())
  }
}

impl rosidl_runtime_rs::Message for GoHome {
  type RmwMsg = super::msg::rmw::GoHome;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        flag: msg.flag,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        flag: msg.flag,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      flag: msg.flag,
    }
  }
}


// Corresponds to dobot__msg__SetCalibrationFlag
/// Calibration flag. Topic rt/set/calibration/flag. Each bit maps to one joint.
/// Length 30, matching the underlying IDL.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCalibrationFlag {

    // This member is not documented.
    #[allow(missing_docs)]
    pub flag: [bool; 30],

}



impl Default for SetCalibrationFlag {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SetCalibrationFlag::default())
  }
}

impl rosidl_runtime_rs::Message for SetCalibrationFlag {
  type RmwMsg = super::msg::rmw::SetCalibrationFlag;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        flag: msg.flag,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        flag: msg.flag,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      flag: msg.flag,
    }
  }
}


// Corresponds to dobot__msg__RemoteControl
/// Remote control velocity intent. Topic rt/remote/control.
/// Left stick, forward/backward and left/right.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoteControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_move: super::msg::JoystickValue,

    /// Right stick, turning.
    pub btn_turn: super::msg::JoystickValue,

}



impl Default for RemoteControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RemoteControl::default())
  }
}

impl rosidl_runtime_rs::Message for RemoteControl {
  type RmwMsg = super::msg::rmw::RemoteControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        btn_move: super::msg::JoystickValue::into_rmw_message(std::borrow::Cow::Owned(msg.btn_move)).into_owned(),
        btn_turn: super::msg::JoystickValue::into_rmw_message(std::borrow::Cow::Owned(msg.btn_turn)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        btn_move: super::msg::JoystickValue::into_rmw_message(std::borrow::Cow::Borrowed(&msg.btn_move)).into_owned(),
        btn_turn: super::msg::JoystickValue::into_rmw_message(std::borrow::Cow::Borrowed(&msg.btn_turn)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      btn_move: super::msg::JoystickValue::from_rmw_message(msg.btn_move),
      btn_turn: super::msg::JoystickValue::from_rmw_message(msg.btn_turn),
    }
  }
}


// Corresponds to dobot__msg__GamepadState
/// Gamepad state. Topic rt/gamepad/state.
/// Protocol header.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GamepadState::default())
  }
}

impl rosidl_runtime_rs::Message for GamepadState {
  type RmwMsg = super::msg::rmw::GamepadState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        head: msg.head,
        btn_state: msg.btn_state,
        lx: msg.lx,
        ly: msg.ly,
        rx: msg.rx,
        ry: msg.ry,
        timestamp_us: msg.timestamp_us,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      head: msg.head,
      btn_state: msg.btn_state,
      lx: msg.lx,
      ly: msg.ly,
      rx: msg.rx,
      ry: msg.ry,
      timestamp_us: msg.timestamp_us,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      head: msg.head,
      btn_state: msg.btn_state,
      lx: msg.lx,
      ly: msg.ly,
      rx: msg.rx,
      ry: msg.ry,
      timestamp_us: msg.timestamp_us,
    }
  }
}


