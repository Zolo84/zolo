// FUN_005eac60 @ 5eac60 size=203

undefined4 * __thiscall FUN_005eac60(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ce77e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  local_4 = 0;
  *param_1 = &PTR_FUN_007ed4f8;
  param_1[2] = &PTR_LAB_007ed4f4;
  *(undefined4 *)((int)param_1 + 0x2e) = param_2;
  *(undefined4 *)((int)param_1 + 0x32) = param_3;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_combat_bmp_00859e48);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00414c80(s_gfx_interface_icon_adjacency_bmp_0085cdc4);
  }
  *(int **)((int)param_1 + 0x36) = piVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar3 + 0x34))(5);
  (**(code **)(**(int **)((int)param_1 + 0x36) + 0x38))(param_3);
  ExceptionList = unaff_ESI;
  return param_1;
}


