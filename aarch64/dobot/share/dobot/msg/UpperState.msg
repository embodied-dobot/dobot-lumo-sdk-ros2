# 上肢状态。话题 rt/upper/state。
# 产品型号，定长 16 字节，不足补 0。与 IDL char[16] 对应。
char[16] robot_type
# true 表示上肢当前由外部控制。
bool is_upper_control
# 上肢电机状态，长度 18。
MotorState[18] motor_state
# 采样时间戳，单位 us。
uint64 timestamp_us
