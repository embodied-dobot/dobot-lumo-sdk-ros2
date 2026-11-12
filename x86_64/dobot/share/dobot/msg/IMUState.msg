# IMU state. Topics rt/pelvis/imu/data and rt/torso/imu/data share this type.
# Subscribe to only one of them per session, consistent with the C++ SDK constraint.
# IMU id, range 0-4294967295.
uint32 imu_id
# Quaternion, 4 values, order matches the underlying IDL.
float32[4] quaternion
# 3-axis gyroscope, order matches the underlying IDL, usually in rad/s.
float32[3] gyroscope
# 3-axis acceleration, order matches the underlying IDL, usually in m/s^2.
float32[3] accelerometer
# Euler angles in the order roll, pitch, yaw, in rad.
float32[3] rpy
# Raw temperature, range 0-255.
uint8 temperature
# Sampling timestamp, in us.
uint64 timestamp_us
