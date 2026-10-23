// FUN_005d1b70 @ 5d1b70 size=648

undefined4 * __thiscall FUN_005d1b70(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cd53b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_007ecb5c;
  param_1[2] = &PTR_LAB_007ecb58;
  param_1[0xd] = param_3;
  local_4 = 0;
  *(int *)((int)param_1 + 0x2e) = param_2[3];
  *(short *)((int)param_1 + 0x32) = (short)param_2[4];
  cVar1 = (**(code **)(*param_2 + 0x14))();
  if (cVar1 == '\0') {
    pvVar2 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00433570(s_gfx_interface_plate_prov_bmp_00859d10,0,0xffffffff);
      goto LAB_005d1c27;
    }
  }
  else {
    pvVar2 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00433570(s_gfx_interface_plate_division_bmp_0085b000,0,0xffffffff);
      goto LAB_005d1c27;
    }
  }
  uVar3 = 0;
LAB_005d1c27:
  param_1[0xe] = uVar3;
  local_4 = local_4 & 0xffffff00;
  cVar1 = (**(code **)(*param_2 + 0x14))();
  if (cVar1 == '\0') {
    pvVar2 = operator_new(0x7e);
    local_4._0_1_ = 4;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00415020();
    }
    param_1[0xf] = uVar3;
  }
  else {
    pvVar2 = operator_new(0x7e);
    local_4._0_1_ = 3;
    if (pvVar2 == (void *)0x0) {
      param_1[0xf] = 0;
    }
    else {
      uVar3 = FUN_00415f10();
      uVar3 = FUN_00414c80(uVar3);
      param_1[0xf] = uVar3;
    }
  }
  local_4._0_1_ = 0;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_auxiliary_bmp_0085ae68);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x10] = uVar3;
  uVar3 = FUN_00413d60(s_auxiliary_palette_bmp_0085afe8);
  FUN_00415f20(uVar3);
  (**(code **)(*(int *)param_1[0x10] + 0x34))(DAT_008776b0);
  pvVar2 = operator_new(0x7e);
  puStack_8._0_1_ = 6;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_org_meter_bmp_00859ea8);
  }
  puStack_8._0_1_ = 0;
  param_1[0x11] = uVar3;
  pvVar2 = operator_new(0x7e);
  puStack_8._0_1_ = 7;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_strength_meter_bmp_00859e84);
  }
  puStack_8._0_1_ = 0;
  param_1[0x12] = uVar3;
  pvVar2 = operator_new(0x7e);
  puStack_8._0_1_ = 8;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_mor_meter_bmp_00859e68);
  }
  param_1[0x13] = uVar3;
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  (**(code **)(*(int *)param_1[0x11] + 0x34))(0x1a);
  (**(code **)(*(int *)param_1[0x12] + 0x34))(0x1a);
  (**(code **)(*(int *)param_1[0x13] + 0x34))(0x1a);
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    param_1[0x14] = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_details_bmp_0085ac40);
    param_1[0x14] = uVar3;
  }
  ExceptionList = unaff_EDI;
  return param_1;
}


