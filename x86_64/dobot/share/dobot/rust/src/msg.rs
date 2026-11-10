#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to dobot__msg__FsmInfo
/// 一个运控状态机。对应 C++ 的 dobot::motion::FsmInfo。

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

    /// 以下四项只在 is_dance 为 true 时有内容，否则是空串或 0。
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
/// 单个关节的伺服状态。字段顺序与 dobot::msg::dds_::MotorState_ 一致。
/// 电机模式，原始协议值，范围 0–255。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

    /// 关节角位置，单位 rad。
    pub q: f32,

    /// 关节角速度，单位 rad/s。
    pub dq: f32,

    /// 关节角加速度，单位 rad/s^2。
    pub ddq: f32,

    /// 估计力矩，单位 N·m。
    pub tau_est: f32,

    /// 力矩指令回读，单位 N·m。
    pub tau_cmd: f32,

    /// 电流反馈，原始协议值。
    pub current_feedback: f32,

    /// 电流指令，原始协议值。
    pub current_cmd: f32,

    /// 原始角位置，单位 rad。
    pub q_raw: f32,

    /// 原始角速度，单位 rad/s。
    pub dq_raw: f32,

    /// 原始角加速度，单位 rad/s^2。
    pub ddq_raw: f32,

    /// 原始力矩，单位 N·m。
    pub tau_raw: f32,

    /// 伺服控制板温度原始值，范围 0–255。
    pub mcu_temp: u8,

    /// MOS 温度原始值，范围 0–255。
    pub mos_temp: u8,

    /// 电机温度原始值，范围 0–255。
    pub motor_temp: u8,

    /// 母线电压原始值，范围 0–255，缩放由伺服协议定义。
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
/// 单个关节的伺服命令。字段顺序与 dobot::msg::dds_::MotorCmd_ 一致。
/// 电机模式，原始协议值，范围 0–255。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

    /// 目标角位置，单位 rad。
    pub q: f32,

    /// 目标角速度，单位 rad/s。
    pub dq: f32,

    /// 前馈力矩，单位 N·m。
    pub tau: f32,

    /// 位置比例增益。负值无物理意义，SDK 会拒绝。
    pub kp: f32,

    /// 速度微分增益。负值无物理意义，SDK 会拒绝。
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
/// 摇杆分量。x、y 为原始键值，常见范围 -1.0–1.0。

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
/// 下肢状态。话题 rt/lower/state。motor_state 长度 15，与底层 IDL 一致。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LowerState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_state: [super::msg::MotorState; 15],

    /// 采样时间戳，单位 us，从机器人单调时钟起算。
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
/// 下肢命令。话题 rt/lower/cmd。motor_cmd 长度 12，与底层 IDL 一致。

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
/// 上肢状态。话题 rt/upper/state。
/// 产品型号，定长 16 字节，不足补 0。与 IDL char 对应。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpperState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_type: [u8; 16],

    /// true 表示上肢当前由外部控制。
    pub is_upper_control: bool,

    /// 上肢电机状态，长度 18。
    pub motor_state: [super::msg::MotorState; 18],

    /// 采样时间戳，单位 us。
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
/// 上肢命令。话题 rt/upper/cmd。motor_cmd 长度 18，与底层 IDL 一致。

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
/// IMU 状态。话题 rt/pelvis/imu/data 与 rt/torso/imu/data 共用本类型。
/// 同一次会话只应订阅其中一路，与 C++ SDK 的约束一致。
/// IMU 编号，范围 0–4294967295。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IMUState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_id: u32,

    /// 四元数，4 个数，顺序与底层 IDL 一致。
    pub quaternion: [f32; 4],

    /// 三轴陀螺仪，顺序与底层 IDL 一致，单位通常为 rad/s。
    pub gyroscope: [f32; 3],

    /// 三轴加速度，顺序与底层 IDL 一致，单位通常为 m/s^2。
    pub accelerometer: [f32; 3],

    /// 欧拉角，顺序滚转、俯仰、偏航，单位 rad。
    pub rpy: [f32; 3],

    /// 温度原始值，范围 0–255。
    pub temperature: u8,

    /// 采样时间戳，单位 us。
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
/// 站立微调。话题 rt/stand/cmd。仅 Mini 站立模式（状态机 300）接受。
/// 三个目标每次一起生效，腰部俯仰和横滚不在本消息里。
/// 头部偏航绝对目标，单位 rad。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StandingControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub head_yaw: f32,

    /// 腰部偏航相对默认姿态的偏移，单位 rad。
    pub waist_yaw: f32,

    /// 身体高度目标，单位 m。0 表示恢复默认站立高度。
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
/// 运控状态机话题。话题 rt/set/fsm/id。技能开始和结束时底层会发布。
/// 状态机编号。0 也是合法编号。范围 0–65535。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetFsmId {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u16,

    /// 当前正在执行的动作名。空字符串表示没有动作。
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
/// 电机使能。话题 rt/enable/motors。每一位对应一路电机，true 为使能。
/// 长度 30，与底层 IDL 一致。

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
/// 清错。话题 rt/clear/errors。
/// 调用方自增的消息编号，用于区分重复请求。

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
/// 回零。话题 rt/go/home。每一位对应一路电机，true 表示该路参与回零。
/// 长度 30，与底层 IDL 一致。

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
/// 标定标志。话题 rt/set/calibration/flag。每一位对应一路关节。
/// 长度 30，与底层 IDL 一致。

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
/// 遥控速度意图。话题 rt/remote/control。
/// 左摇杆，前后/左右。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoteControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub btn_move: super::msg::JoystickValue,

    /// 右摇杆，转向。
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
/// 手柄状态。话题 rt/gamepad/state。
/// 协议头。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GamepadState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub head: u16,

    /// 按键位。bit0 R1，bit1 L1，bit2 start，bit3 select，bit4 R2，bit5 L2，bit6 F1，bit7 F2，
    /// bit8 A，bit9 B，bit10 X，bit11 Y，bit12 up，bit13 right，bit14 down，bit15 left。
    pub btn_state: u16,

    /// 左摇杆 x，常见范围 -1.0–1.0。
    pub lx: f32,

    /// 左摇杆 y，常见范围 -1.0–1.0。
    pub ly: f32,

    /// 右摇杆 x，常见范围 -1.0–1.0。
    pub rx: f32,

    /// 右摇杆 y，常见范围 -1.0–1.0。
    pub ry: f32,

    /// 采样时间戳，单位 us。
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


