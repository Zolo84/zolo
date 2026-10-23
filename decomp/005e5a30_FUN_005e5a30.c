// FUN_005e5a30 @ 5e5a30 size=616

undefined4 * __thiscall FUN_005e5a30(undefined4 *param_1,int param_2,int param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_007ce255;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  *(undefined2 *)((int)param_1 + 0x3e) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *param_1 = &PTR_FUN_007ed2a0;
  param_1[2] = &PTR_LAB_007ed29c;
  param_1[0x11] = *(undefined4 *)(param_3 + 0xc);
  local_4 = (void *)0x0;
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_3 + 0x10);
  *(undefined4 *)((int)param_1 + 0x3e) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)((int)param_1 + 0x42) = *(undefined2 *)(param_2 + 0x10);
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    FUN_005045e0();
    uVar2 = FUN_00415f10();
    uVar2 = FUN_00414c80(uVar2);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_auxiliary_bmp_0085ae68);
  }
  local_4 = (void *)((uint)local_4._1_3_ << 8);
  *(undefined4 *)((int)param_1 + 0x36) = uVar2;
  uVar2 = FUN_00413d60(s_auxiliary_palette_bmp_0085afe8);
  FUN_00415f20(uVar2);
  (**(code **)(**(int **)((int)param_1 + 0x36) + 0x34))(DAT_008776b0);
  (**(code **)(**(int **)((int)param_1 + 0x36) + 0x38))(*(undefined4 *)(param_2 + 0x88));
  pvVar1 = operator_new(0x7e);
  pvStack_c._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00414c80(s_gfx_interface_icon_naval_firesta_0085c114);
  }
  *(int **)((int)param_1 + 0x32) = piVar3;
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  (**(code **)(*piVar3 + 0x34))(4);
  *(undefined1 *)(*(int *)((int)param_1 + 0x32) + 0x68) = 1;
  local_4 = operator_new(0xaa);
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_plate_division_sma_0085c0ec,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x3a) = uVar2;
  local_4 = operator_new(0x7e);
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_org_meter_bmp_00859ea8);
  }
  *(undefined4 *)((int)param_1 + 0x4a) = uVar2;
  local_4 = operator_new(0x7e);
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_strength_meter_bmp_00859e84);
  }
  *(undefined4 *)((int)param_1 + 0x4e) = uVar2;
  local_4 = operator_new(0x7e);
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_mor_meter_bmp_00859e68);
  }
  *(undefined4 *)((int)param_1 + 0x52) = uVar2;
  (**(code **)(**(int **)((int)param_1 + 0x4a) + 0x34))(0x1a);
  (**(code **)(**(int **)((int)param_1 + 0x4e) + 0x34))(0x1a);
  (**(code **)(**(int **)((int)param_1 + 0x52) + 0x34))(0x1a);
  ExceptionList = unaff_EDI;
  return param_1;
}


