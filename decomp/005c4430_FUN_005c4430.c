// FUN_005c4430 @ 5c4430 size=397

undefined4 * __thiscall
FUN_005c4430(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cc8d2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00415020();
  local_4 = 0;
  FUN_005c14d0();
  *(undefined2 *)((int)param_1 + 0x1ba) = 0;
  param_1[0x6f] = 0;
  *param_1 = &PTR_FUN_007ec774;
  param_1[2] = &PTR_LAB_007ec770;
  param_1[0x25] = param_4;
  param_1[0x24] = 0;
  *(undefined1 *)((int)param_1 + 0x7e) = 0;
  param_1[0x26] = param_3;
  *(undefined4 *)((int)param_1 + 0x1ba) = *(undefined4 *)(param_2 + 0x18);
  local_4._0_1_ = 1;
  *(undefined2 *)((int)param_1 + 0x1be) = *(undefined2 *)(param_2 + 0x1c);
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xae,500,0,0);
  }
  param_1[0x23] = uVar2;
  puVar4 = &DAT_00a6b160;
  for (iVar3 = 0x97; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_4._0_1_ = 1;
  puVar4 = &DAT_00a4cc38;
  for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_bg_mission_top_bmp_00859cdc);
  }
  local_4._0_1_ = 1;
  param_1[0x20] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_bg_mission_middle__00859cb8);
  }
  local_4._0_1_ = 1;
  param_1[0x21] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (pvVar1 == (void *)0x0) {
    param_1[0x22] = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_bg_mission_bottom__00859c94);
    param_1[0x22] = uVar2;
  }
  ExceptionList = local_c;
  return param_1;
}


