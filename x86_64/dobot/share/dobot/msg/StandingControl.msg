# 站立微调。话题 rt/stand/cmd。仅 Mini 站立模式（状态机 300）接受。
# 三个目标每次一起生效，腰部俯仰和横滚不在本消息里。
# 头部偏航绝对目标，单位 rad。
float32 head_yaw
# 腰部偏航相对默认姿态的偏移，单位 rad。
float32 waist_yaw
# 身体高度目标，单位 m。0 表示恢复默认站立高度。
float32 body_height
