// FUN_005d2b40 @ 5d2b40 size=831

undefined4 * __thiscall FUN_005d2b40(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  void *unaff_EBP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cd606;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_007ecbb0;
  param_1[2] = &PTR_LAB_007ecbac;
  param_1[0xd] = param_3;
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)(param_2 + 0x10);
  if (*(char *)(param_2 + 0x160) == '\0') {
    pvVar3 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pvVar3 != (void *)0x0) {
      uVar4 = FUN_00433570(s_gfx_interface_plate_division_bmp_0085b000,0,0xffffffff);
      goto LAB_005d2bf6;
    }
  }
  else {
    pvVar3 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (pvVar3 != (void *)0x0) {
      uVar4 = FUN_00433570(s_gfx_interface_plate_division_air_0085b070,0,0xffffffff);
      goto LAB_005d2bf6;
    }
  }
  uVar4 = 0;
LAB_005d2bf6:
  local_4 = local_4 & 0xffffff00;
  param_1[0xe] = uVar4;
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 3;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00415020();
  }
  param_1[0xf] = uVar4;
  local_4._0_1_ = 0;
  if (*(char *)(param_2 + 0x162) == '\0') {
    iVar1 = *(int *)(param_2 + 0x138);
    iVar2 = (&DAT_00d7d48c)[*(int *)(param_2 + 0x130) * 2];
    iVar5 = FUN_005045e0();
    if (*(int *)(*(int *)(iVar5 + 0x452e) + (iVar2 + iVar1) * 4) != 0) {
      iVar1 = *(int *)param_1[0xf];
      uVar4 = FUN_00415f10();
      (**(code **)(iVar1 + 0x2c))(uVar4);
    }
  }
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 4;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_auxiliarybig_bmp_0085b050);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x10] = uVar4;
  uVar4 = FUN_00413d60(s_auxiliary_palette_bmp_0085afe8);
  FUN_00415f20(uVar4);
  (**(code **)(*(int *)param_1[0x10] + 0x34))(DAT_008776b0);
  puVar6 = (undefined4 *)(param_2 + 0x88);
  (**(code **)(*(int *)param_1[0x10] + 0x38))(*(undefined4 *)(param_2 + 0x88));
  pvVar3 = operator_new(0x7e);
  pvStack_c._0_1_ = 5;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_org_meter_bmp_00859ea8);
  }
  pvStack_c._0_1_ = 0;
  param_1[0x12] = uVar4;
  pvVar3 = operator_new(0x7e);
  pvStack_c._0_1_ = 6;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_strength_meter_bmp_00859e84);
  }
  pvStack_c._0_1_ = 0;
  param_1[0x13] = uVar4;
  pvVar3 = operator_new(0x7e);
  pvStack_c._0_1_ = 7;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_mor_meter_bmp_00859e68);
  }
  param_1[0x14] = uVar4;
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  (**(code **)(*(int *)param_1[0x12] + 0x34))(0x1a);
  (**(code **)(*(int *)param_1[0x13] + 0x34))(0x1a);
  (**(code **)(*(int *)param_1[0x14] + 0x34))(0x1a);
  pvStack_c = operator_new(0xaa);
  if (pvStack_c == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_btn_prio_cancel_bm_0085b02c,0,0xffffffff);
  }
  param_1[0x11] = uVar4;
  puVar7 = param_1 + 0x15;
  pvStack_c = (void *)0x5;
  do {
    pvVar3 = operator_new(0x7e);
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00414c80(s_gfx_interface_auxiliary_bmp_0085ae68);
    }
    *puVar7 = uVar4;
    uVar4 = FUN_00413d60(s_auxiliary_palette_bmp_0085afe8);
    FUN_00415f20(uVar4);
    (**(code **)(*(int *)*puVar7 + 0x34))(DAT_008776b0);
    (**(code **)(*(int *)*puVar7 + 0x38))(*puVar6);
    (**(code **)(*(int *)*puVar7 + 0x18))(0xfffffc18,0xfffffc18);
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
    pvStack_c = (void *)((int)pvStack_c + -1);
  } while (pvStack_c != (void *)0x0);
  pvStack_c = operator_new(0x7e);
  if (pvStack_c == (void *)0x0) {
    param_1[0x1a] = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_details_bmp_0085ac40);
    param_1[0x1a] = uVar4;
  }
  ExceptionList = unaff_EBP;
  return param_1;
}


