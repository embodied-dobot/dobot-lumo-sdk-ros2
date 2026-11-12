# Servo state of a single joint. Field order matches dobot::msg::dds_::MotorState_.
# Motor mode, raw protocol value, range 0-255.
uint8 mode
# Joint position, in rad.
float32 q
# Joint velocity, in rad/s.
float32 dq
# Joint acceleration, in rad/s^2.
float32 ddq
# Estimated torque, in N·m.
float32 tau_est
# Torque command readback, in N·m.
float32 tau_cmd
# Current feedback, raw protocol value.
float32 current_feedback
# Current command, raw protocol value.
float32 current_cmd
# Raw position, in rad.
float32 q_raw
# Raw velocity, in rad/s.
float32 dq_raw
# Raw acceleration, in rad/s^2.
float32 ddq_raw
# Raw torque, in N·m.
float32 tau_raw
# Raw servo driver board temperature, range 0-255.
uint8 mcu_temp
# Raw MOS temperature, range 0-255.
uint8 mos_temp
# Raw motor temperature, range 0-255.
uint8 motor_temp
# Raw bus voltage, range 0-255; scaling is defined by the servo protocol.
uint8 bus_voltage
