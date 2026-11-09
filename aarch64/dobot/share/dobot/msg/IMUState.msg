# IMU 状态。话题 rt/pelvis/imu/data 与 rt/torso/imu/data 共用本类型。
# 同一次会话只应订阅其中一路，与 C++ SDK 的约束一致。
# IMU 编号，范围 0–4294967295。
uint32 imu_id
# 四元数，4 个数，顺序与底层 IDL 一致。
float32[4] quaternion
# 三轴陀螺仪，顺序与底层 IDL 一致，单位通常为 rad/s。
float32[3] gyroscope
# 三轴加速度，顺序与底层 IDL 一致，单位通常为 m/s^2。
float32[3] accelerometer
# 欧拉角，顺序滚转、俯仰、偏航，单位 rad。
float32[3] rpy
# 温度原始值，范围 0–255。
uint8 temperature
# 采样时间戳，单位 us。
uint64 timestamp_us
