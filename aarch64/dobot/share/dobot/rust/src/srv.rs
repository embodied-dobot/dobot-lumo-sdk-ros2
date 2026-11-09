#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to dobot__srv__SetRobotMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: std::string::String,

    /// 本次调用的超时，单位 ms，范围 1–60000。
    pub timeout_ms: i32,

}



impl Default for SetRobotMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetRobotMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetRobotMode_Request {
  type RmwMsg = super::srv::rmw::SetRobotMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode.as_str().into(),
        timeout_ms: msg.timeout_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode.as_str().into(),
      timeout_ms: msg.timeout_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode.to_string(),
      timeout_ms: msg.timeout_ms,
    }
  }
}


// Corresponds to dobot__srv__SetRobotMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetRobotMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// 已下发的状态机编号。失败时为 -1。
    pub fsm_id: i32,

}



impl Default for SetRobotMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetRobotMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetRobotMode_Response {
  type RmwMsg = super::srv::rmw::SetRobotMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        code: msg.code,
        message: msg.message.as_str().into(),
        fsm_id: msg.fsm_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      code: msg.code,
        message: msg.message.as_str().into(),
      fsm_id: msg.fsm_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      code: msg.code,
      message: msg.message.to_string(),
      fsm_id: msg.fsm_id,
    }
  }
}


// Corresponds to dobot__srv__GetFsmId_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFsmId_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_ms: i32,

}



impl Default for GetFsmId_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFsmId_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetFsmId_Request {
  type RmwMsg = super::srv::rmw::GetFsmId_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timeout_ms: msg.timeout_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      timeout_ms: msg.timeout_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timeout_ms: msg.timeout_ms,
    }
  }
}


// Corresponds to dobot__srv__GetFsmId_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFsmId_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fsm_id: i32,

}



impl Default for GetFsmId_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFsmId_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetFsmId_Response {
  type RmwMsg = super::srv::rmw::GetFsmId_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        code: msg.code,
        message: msg.message.as_str().into(),
        fsm_id: msg.fsm_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      code: msg.code,
        message: msg.message.as_str().into(),
      fsm_id: msg.fsm_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      code: msg.code,
      message: msg.message.to_string(),
      fsm_id: msg.fsm_id,
    }
  }
}


// Corresponds to dobot__srv__SetVelocity_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetVelocity_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetVelocity_Request {
  type RmwMsg = super::srv::rmw::SetVelocity_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        vx: msg.vx,
        vy: msg.vy,
        vyaw: msg.vyaw,
        duration: msg.duration,
        timeout_ms: msg.timeout_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      vx: msg.vx,
      vy: msg.vy,
      vyaw: msg.vyaw,
      duration: msg.duration,
      timeout_ms: msg.timeout_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      vx: msg.vx,
      vy: msg.vy,
      vyaw: msg.vyaw,
      duration: msg.duration,
      timeout_ms: msg.timeout_ms,
    }
  }
}


// Corresponds to dobot__srv__SetVelocity_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetVelocity_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetVelocity_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetVelocity_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetVelocity_Response {
  type RmwMsg = super::srv::rmw::SetVelocity_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        code: msg.code,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      code: msg.code,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      code: msg.code,
      message: msg.message.to_string(),
    }
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


