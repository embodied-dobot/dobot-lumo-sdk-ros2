# 运控状态机话题。话题 rt/set/fsm/id。技能开始和结束时底层会发布。
# 状态机编号。0 也是合法编号。范围 0–65535。
uint16 id
# 当前正在执行的动作名。空字符串表示没有动作。
string current_action
