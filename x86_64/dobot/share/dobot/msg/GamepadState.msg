# 手柄状态。话题 rt/gamepad/state。
# 协议头。
uint16 head
# 按键位。bit0 R1，bit1 L1，bit2 start，bit3 select，bit4 R2，bit5 L2，bit6 F1，bit7 F2，
# bit8 A，bit9 B，bit10 X，bit11 Y，bit12 up，bit13 right，bit14 down，bit15 left。
uint16 btn_state
# 左摇杆 x，常见范围 -1.0–1.0。
float32 lx
# 左摇杆 y，常见范围 -1.0–1.0。
float32 ly
# 右摇杆 x，常见范围 -1.0–1.0。
float32 rx
# 右摇杆 y，常见范围 -1.0–1.0。
float32 ry
# 采样时间戳，单位 us。
uint64 timestamp_us
