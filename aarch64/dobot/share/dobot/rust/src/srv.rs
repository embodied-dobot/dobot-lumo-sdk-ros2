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


// Corresponds to dobot__srv__GetFsmList_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFsmList_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_ms: i32,

}



impl Default for GetFsmList_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFsmList_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetFsmList_Request {
  type RmwMsg = super::srv::rmw::GetFsmList_Request;

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


// Corresponds to dobot__srv__GetFsmList_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetFsmList_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fsm_list: Vec<super::msg::FsmInfo>,

}



impl Default for GetFsmList_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetFsmList_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetFsmList_Response {
  type RmwMsg = super::srv::rmw::GetFsmList_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        code: msg.code,
        message: msg.message.as_str().into(),
        fsm_list: msg.fsm_list
          .into_iter()
          .map(|elem| super::msg::FsmInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      code: msg.code,
        message: msg.message.as_str().into(),
        fsm_list: msg.fsm_list
          .iter()
          .map(|elem| super::msg::FsmInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      code: msg.code,
      message: msg.message.to_string(),
      fsm_list: msg.fsm_list
          .into_iter()
          .map(super::msg::FsmInfo::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to dobot__srv__PlayPresetAction_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayPresetAction_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub action: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_ms: i32,

}



impl Default for PlayPresetAction_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PlayPresetAction_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PlayPresetAction_Request {
  type RmwMsg = super::srv::rmw::PlayPresetAction_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        action: msg.action.as_str().into(),
        timeout_ms: msg.timeout_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        action: msg.action.as_str().into(),
      timeout_ms: msg.timeout_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      action: msg.action.to_string(),
      timeout_ms: msg.timeout_ms,
    }
  }
}


// Corresponds to dobot__srv__PlayPresetAction_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlayPresetAction_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// 已下发的状态机编号。失败时为 -1。
    pub fsm_id: i32,

}



impl Default for PlayPresetAction_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PlayPresetAction_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PlayPresetAction_Response {
  type RmwMsg = super::srv::rmw::PlayPresetAction_Response;

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


// Corresponds to dobot__srv__ExecuteSkill_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteSkill_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub file_path: std::string::String,

    /// 只覆盖这次 RPC 往返，不表示动作已经播完。
    pub timeout_ms: i32,

}



impl Default for ExecuteSkill_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExecuteSkill_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteSkill_Request {
  type RmwMsg = super::srv::rmw::ExecuteSkill_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        file_path: msg.file_path.as_str().into(),
        timeout_ms: msg.timeout_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        file_path: msg.file_path.as_str().into(),
      timeout_ms: msg.timeout_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      file_path: msg.file_path.to_string(),
      timeout_ms: msg.timeout_ms,
    }
  }
}


// Corresponds to dobot__srv__ExecuteSkill_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteSkill_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ExecuteSkill_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExecuteSkill_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteSkill_Response {
  type RmwMsg = super::srv::rmw::ExecuteSkill_Response;

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


// Corresponds to dobot__srv__CallRpc_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CallRpc_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub method: std::string::String,

    /// JSON 对象文本，例如 "{}" 或 "{"fsm_id":300}"。
    pub params_json: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_ms: i32,

}



impl Default for CallRpc_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CallRpc_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CallRpc_Request {
  type RmwMsg = super::srv::rmw::CallRpc_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        method: msg.method.as_str().into(),
        params_json: msg.params_json.as_str().into(),
        timeout_ms: msg.timeout_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        method: msg.method.as_str().into(),
        params_json: msg.params_json.as_str().into(),
      timeout_ms: msg.timeout_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      method: msg.method.to_string(),
      params_json: msg.params_json.to_string(),
      timeout_ms: msg.timeout_ms,
    }
  }
}


// Corresponds to dobot__srv__CallRpc_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CallRpc_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub code: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// 机器人返回的原始 JSON 文本。
    pub response_json: std::string::String,

}



impl Default for CallRpc_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CallRpc_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CallRpc_Response {
  type RmwMsg = super::srv::rmw::CallRpc_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        code: msg.code,
        message: msg.message.as_str().into(),
        response_json: msg.response_json.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      code: msg.code,
        message: msg.message.as_str().into(),
        response_json: msg.response_json.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      code: msg.code,
      message: msg.message.to_string(),
      response_json: msg.response_json.to_string(),
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


