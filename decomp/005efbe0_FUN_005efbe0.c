// FUN_005efbe0 @ 5efbe0 size=494

undefined4 * __thiscall FUN_005efbe0(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cea80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  local_4 = 0;
  *(undefined1 *)((int)param_1 + 0x4e) = param_3;
  *param_1 = &PTR_FUN_007ed5c8;
  param_1[2] = &PTR_LAB_007ed5c4;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_plate_prov_bmp_00859d10,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x32) = uVar2;
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = param_2;
  FUN_004e9370(param_2);
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00414c80(s_gfx_interface_icon_prov_bmp_0085d648);
  }
  *(int **)((int)param_1 + 0x36) = piVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar3 + 0x34))(2);
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_combat_bmp_00859e48);
  }
  puStack_8._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_steel_bmp_0085cf7c);
  }
  puStack_8._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_oil_bmp_0085cf60);
  }
  puStack_8._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x42) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_rubber_bmp_0085cf40);
  }
  puStack_8._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x46) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_coal_bmp_0085cf24);
  }
  puStack_8._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_upgrade_bmp_0085d628);
    param_1[0x14] = uVar2;
    ExceptionList = param_1;
    return param_1;
  }
  param_1[0x14] = 0;
  ExceptionList = param_1;
  return param_1;
}


