// FUN_005f0f10 @ 5f0f10 size=428

undefined4 * __thiscall FUN_005f0f10(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ceb9a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0061e1d0(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_007ed69c;
  param_1[2] = &PTR_LAB_007ed698;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ed694;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xe6,0x172,0,0);
  }
  local_4._0_1_ = 0;
  param_1[0x31] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_ill_prov_sea_bmp_0085d7ec);
  }
  local_4._0_1_ = 0;
  param_1[0x2f] = uVar2;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xe0,0x1f8,0,0);
  }
  local_4._0_1_ = 0;
  param_1[0x34] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_ill_sea_overlay_bm_0085d7c8);
  }
  local_4._0_1_ = 0;
  param_1[0x30] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00414c80(s_gfx_interface_straits_indicator__0085d7a4);
  }
  param_1[0x32] = piVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar3 + 0x34))(2);
  *(undefined1 *)(param_1[0x32] + 0x68) = 1;
  pvVar1 = operator_new(0x7e);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00415020();
    param_1[0x33] = uVar2;
    ExceptionList = param_1;
    return param_1;
  }
  param_1[0x33] = 0;
  ExceptionList = param_1;
  return param_1;
}


