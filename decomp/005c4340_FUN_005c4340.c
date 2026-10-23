// FUN_005c4340 @ 5c4340 size=214

undefined1 * __thiscall FUN_005c4340(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0xec) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    puVar2 = (undefined1 *)FUN_0042b6c9(s_INFINITE_MISSION_TIME_TOOLTIP_00859c74);
    return puVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0xf2) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    puVar2 = (undefined1 *)FUN_0042b6c9(s_ATTACK_CONVOYS_TOOLTIP_00859c5c);
    return puVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    puVar2 = (undefined1 *)FUN_0042b6c9(s_AUTO_RETURN_TO_BASE_TOOLTIP_00859c40);
    return puVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x112) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    puVar2 = (undefined1 *)FUN_0042b6c9(s_MISSION_RESET_BUTTON_TOOLTIP_00859c20);
    return puVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x11a) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    puVar2 = (undefined1 *)FUN_0042b6c9(s_MISSION_DISENGAGE_FROM_COMBAT_TO_00859bf8);
    return puVar2;
  }
  return &DAT_0088ebf8;
}


