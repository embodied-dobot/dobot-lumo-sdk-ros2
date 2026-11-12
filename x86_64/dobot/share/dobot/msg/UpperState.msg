# Upper body state. Topic rt/upper/state.
# Product model, fixed 16 bytes, zero-padded. Corresponds to IDL char[16].
char[16] robot_type
# true means the upper body is currently under external control.
bool is_upper_control
# Upper body motor states, length 18.
MotorState[18] motor_state
# Sampling timestamp, in us.
uint64 timestamp_us
