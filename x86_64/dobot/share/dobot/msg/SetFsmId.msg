# Motion control FSM topic. Topic rt/set/fsm/id. Published by the lower layer when a skill starts and ends.
# FSM id. 0 is also a valid id. Range 0-65535.
uint16 id
# Name of the action currently running. Empty string means no action.
string current_action
