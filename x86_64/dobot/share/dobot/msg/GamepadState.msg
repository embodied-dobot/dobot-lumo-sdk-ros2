# Gamepad state. Topic rt/gamepad/state.
# Protocol header.
uint16 head
# Key bits. bit0 R1, bit1 L1, bit2 start, bit3 select, bit4 R2, bit5 L2, bit6 F1, bit7 F2,
# bit8 A, bit9 B, bit10 X, bit11 Y, bit12 up, bit13 right, bit14 down, bit15 left.
uint16 btn_state
# Left stick x, typically -1.0 to 1.0.
float32 lx
# Left stick y, typically -1.0 to 1.0.
float32 ly
# Right stick x, typically -1.0 to 1.0.
float32 rx
# Right stick y, typically -1.0 to 1.0.
float32 ry
# Sampling timestamp, in us.
uint64 timestamp_us
