# Servo command of a single joint. Field order matches dobot::msg::dds_::MotorCmd_.
# Motor mode, raw protocol value, range 0-255.
uint8 mode
# Target position, in rad.
float32 q
# Target velocity, in rad/s.
float32 dq
# Feedforward torque, in N·m.
float32 tau
# Position proportional gain. Negative values are physically meaningless and rejected by the SDK.
float32 kp
# Velocity derivative gain. Negative values are physically meaningless and rejected by the SDK.
float32 kd
