# Standing fine adjustment. Topic rt/stand/cmd. Accepted only in Mini standing mode (FSM 300).
# All three targets take effect together; waist pitch and roll are not part of this message.
# Absolute head yaw target, in rad.
float32 head_yaw
# Waist yaw offset relative to the default posture, in rad.
float32 waist_yaw
# Body height target, in m. 0 restores the default standing height.
float32 body_height
