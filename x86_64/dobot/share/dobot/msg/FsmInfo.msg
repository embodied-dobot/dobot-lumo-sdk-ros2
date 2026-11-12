# One motion control FSM. Corresponds to C++ dobot::motion::FsmInfo.
int32 fsm_id
bool is_dance
string name
# The following four fields are populated only when is_dance is true; otherwise they are an empty string or 0.
string dance_name
string model_file
int32 motion_loop_length
int32 motion_hold_back_steps
int32 motion_start_step
