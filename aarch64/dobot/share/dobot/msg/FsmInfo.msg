# 一个运控状态机。对应 C++ 的 dobot::motion::FsmInfo。
int32 fsm_id
bool is_dance
string name
# 以下四项只在 is_dance 为 true 时有内容，否则是空串或 0。
string dance_name
string model_file
int32 motion_loop_length
int32 motion_hold_back_steps
int32 motion_start_step
