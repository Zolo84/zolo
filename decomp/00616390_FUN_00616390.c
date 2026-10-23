// FUN_00616390 @ 616390 size=229

undefined4 * __thiscall FUN_00616390(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d087e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  local_4 = 0;
  *param_1 = &PTR_FUN_007ef39c;
  param_1[2] = &PTR_LAB_007ef398;
  *(undefined4 *)((int)param_1 + 0x2e) = param_2;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar3 = FUN_0044b1c0(param_2);
    piVar4 = (int *)FUN_00414c80(uVar3);
  }
  *(int **)((int)param_1 + 0x32) = piVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar4 + 0x34))(0x19);
  uVar3 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar3);
  iVar1 = *(int *)((int)param_1 + 0x32);
  *(undefined4 *)(iVar1 + 0x22) = 0;
  *(undefined4 *)(iVar1 + 0x26) = 5;
  *(undefined1 *)(iVar1 + 0x67) = 0;
  pvVar2 = operator_new(0x7e);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  if (pvVar2 == (void *)0x0) {
    *(undefined4 *)((int)param_1 + 0x36) = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_hl_country_bmp_0085f608);
    *(undefined4 *)((int)param_1 + 0x36) = uVar3;
  }
  ExceptionList = param_1;
  return param_1;
}


