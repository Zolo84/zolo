// FUN_00606a10 @ 606a10 size=186

undefined4 * __thiscall FUN_00606a10(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cfcb3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x32) = param_2;
  *param_1 = &PTR_FUN_007eeea8;
  param_1[2] = &PTR_LAB_007eeea4;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar3 = FUN_0044b1c0(param_2);
    piVar4 = (int *)FUN_00414c80(uVar3);
  }
  *(int **)((int)param_1 + 0x2e) = piVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar4 + 0x34))(0x19);
  uVar3 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar3);
  iVar1 = *(int *)((int)param_1 + 0x2e);
  *(undefined4 *)(iVar1 + 0x22) = 0;
  *(undefined4 *)(iVar1 + 0x26) = 5;
  *(undefined1 *)(iVar1 + 0x67) = 0;
  ExceptionList = param_1;
  return param_1;
}


