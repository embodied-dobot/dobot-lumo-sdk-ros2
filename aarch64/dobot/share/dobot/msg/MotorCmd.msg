# 单个关节的伺服命令。字段顺序与 dobot::msg::dds_::MotorCmd_ 一致。
# 电机模式，原始协议值，范围 0–255。
uint8 mode
# 目标角位置，单位 rad。
float32 q
# 目标角速度，单位 rad/s。
float32 dq
# 前馈力矩，单位 N·m。
float32 tau
# 位置比例增益。负值无物理意义，SDK 会拒绝。
float32 kp
# 速度微分增益。负值无物理意义，SDK 会拒绝。
float32 kd
