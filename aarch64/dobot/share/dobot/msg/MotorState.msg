# 单个关节的伺服状态。字段顺序与 dobot::msg::dds_::MotorState_ 一致。
# 电机模式，原始协议值，范围 0–255。
uint8 mode
# 关节角位置，单位 rad。
float32 q
# 关节角速度，单位 rad/s。
float32 dq
# 关节角加速度，单位 rad/s^2。
float32 ddq
# 估计力矩，单位 N·m。
float32 tau_est
# 力矩指令回读，单位 N·m。
float32 tau_cmd
# 电流反馈，原始协议值。
float32 current_feedback
# 电流指令，原始协议值。
float32 current_cmd
# 原始角位置，单位 rad。
float32 q_raw
# 原始角速度，单位 rad/s。
float32 dq_raw
# 原始角加速度，单位 rad/s^2。
float32 ddq_raw
# 原始力矩，单位 N·m。
float32 tau_raw
# 伺服控制板温度原始值，范围 0–255。
uint8 mcu_temp
# MOS 温度原始值，范围 0–255。
uint8 mos_temp
# 电机温度原始值，范围 0–255。
uint8 motor_temp
# 母线电压原始值，范围 0–255，缩放由伺服协议定义。
uint8 bus_voltage
