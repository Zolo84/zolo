// FUN_005dcb20 @ 5dcb20 size=1340

undefined4 * __thiscall FUN_005dcb20(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  void *unaff_ESI;
  undefined4 *puVar9;
  int unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cddd3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_007ed110;
  param_1[2] = &PTR_LAB_007ed10c;
  param_1[0x1e] = param_3;
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)((int)param_1 + 0x52) = *(undefined2 *)(param_2 + 0x10);
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00415020();
  }
  *(undefined4 *)((int)param_1 + 0x2e) = uVar4;
  local_4._0_1_ = 0;
  if (*(char *)(param_2 + 0x162) == '\0') {
    iVar7 = *(int *)(param_2 + 0x138);
    iVar1 = (&DAT_00d7d48c)[*(int *)(param_2 + 0x130) * 2];
    iVar5 = FUN_005045e0();
    if (*(int *)(*(int *)(iVar5 + 0x452e) + (iVar1 + iVar7) * 4) != 0) {
      iVar7 = **(int **)((int)param_1 + 0x2e);
      uVar4 = FUN_00415f10();
      (**(code **)(iVar7 + 0x2c))(uVar4);
    }
  }
  puVar9 = (undefined4 *)((int)param_1 + 0x32);
  puVar8 = (undefined4 *)(param_2 + 0x88);
  param_3 = 5;
  do {
    pvVar3 = operator_new(0x7e);
    local_4._0_1_ = 2;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00414c80(s_gfx_interface_auxiliary_bmp_0085ae68);
    }
    local_4._0_1_ = 0;
    *puVar9 = uVar4;
    uVar4 = FUN_00413d60(s_auxiliary_palette_bmp_0085afe8);
    FUN_00415f20(uVar4);
    (**(code **)(*(int *)*puVar9 + 0x34))(DAT_008776b0);
    (**(code **)(*(int *)*puVar9 + 0x38))(*puVar8);
    (**(code **)(*(int *)*puVar9 + 0x18))(0xfffffc18,0xfffffc18);
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 3;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_offensive_symbol_b_00859dc0);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x46) = uVar4;
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 4;
  if (pvVar3 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_00414c80(s_gfx_interface_oil_no_oil_bmp_0085b9c0);
  }
  param_1[0x1b] = piVar6;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar6 + 0x34))(2);
  uVar4 = FUN_00413d60(s_oil_no_oil_palette_bmp_0085b9a8);
  FUN_00415f20(uVar4);
  pvVar3 = operator_new(0x7e);
  puStack_8._0_1_ = 5;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_res_nuke_bmp_0085ad04);
  }
  param_1[0x1c] = uVar4;
  puStack_8._0_1_ = 0;
  uVar2 = puStack_8._0_1_;
  puStack_8._0_1_ = 0;
  if (*(char *)(unaff_retaddr + 0x160) == '\0') {
    puStack_8._0_1_ = uVar2;
    pvVar3 = operator_new(0xaa);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    if (pvVar3 == (void *)0x0) goto LAB_005dcd84;
    uVar4 = FUN_00433570(s_gfx_interface_plate_division_bmp_0085b000,0,0xffffffff);
  }
  else {
    pvVar3 = operator_new(0xaa);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    if (pvVar3 == (void *)0x0) {
LAB_005dcd84:
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00433570(s_gfx_interface_plate_division_air_0085b070,0,0xffffffff);
    }
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  *(undefined4 *)((int)param_1 + 0x4a) = uVar4;
  pvVar3 = operator_new(0x7e);
  puStack_8._0_1_ = 8;
  if (pvVar3 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_00415020();
  }
  param_1[0x1a] = piVar6;
  puStack_8._0_1_ = 0;
  if (*(int *)(unaff_retaddr + 0x58) != 0) {
    iVar7 = *piVar6;
    uVar4 = FUN_0044b1c0(*(int *)(unaff_retaddr + 0x58));
    (**(code **)(iVar7 + 0x2c))(uVar4);
    (**(code **)(*(int *)param_1[0x1a] + 0x34))(0x19);
    iVar7 = param_1[0x1a];
    *(undefined4 *)(iVar7 + 0x22) = 0;
    *(undefined4 *)(iVar7 + 0x26) = 10;
    *(undefined1 *)(iVar7 + 0x67) = 0;
    uVar4 = FUN_00413d60(s_flag_palette_bmp_0083c738);
    FUN_00415f20(uVar4);
  }
  pvVar3 = operator_new(0x7e);
  puStack_8._0_1_ = 9;
  if (pvVar3 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00414c80(s_gfx_interface_icon_locked_bmp_00859de4);
  }
  param_1[0x19] = iVar7;
  puStack_8._0_1_ = 0;
  *(undefined1 *)(iVar7 + 0x68) = 1;
  pvVar3 = operator_new(0x7e);
  puStack_8._0_1_ = 10;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_org_meter_bmp_00859ea8);
  }
  puStack_8._0_1_ = 0;
  param_1[0x15] = uVar4;
  pvVar3 = operator_new(0x7e);
  puStack_8._0_1_ = 0xb;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_strength_meter_bmp_00859e84);
  }
  puStack_8._0_1_ = 0;
  param_1[0x16] = uVar4;
  pvVar3 = operator_new(0x7e);
  puStack_8._0_1_ = 0xc;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_mor_meter_bmp_00859e68);
  }
  param_1[0x17] = uVar4;
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  (**(code **)(*(int *)param_1[0x15] + 0x34))(0x1a);
  (**(code **)(*(int *)param_1[0x16] + 0x34))(0x1a);
  (**(code **)(*(int *)param_1[0x17] + 0x34))(0x1a);
  pvStack_c = operator_new(0x7e);
  if (pvStack_c == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_00414c80(s_gfx_interface_meter_cap_bmp_0085b98c);
  }
  param_1[0x18] = piVar6;
  (**(code **)(*piVar6 + 0x34))(0x1a);
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_details_bmp_0085ac40);
  }
  param_1[0x1f] = uVar4;
  if (DAT_00dc2ba0 == '\0') {
LAB_005dcfb7:
    iVar7 = FUN_005045e0();
    uVar4 = FUN_004af700(*(undefined4 *)(iVar7 + 6));
    FUN_007a630a(&DAT_00cdb250,s_gfx_interface_experience_star__s_0085b93c,uVar4);
    iVar7 = FUN_007a6615(&DAT_00cdb250,&DAT_0082eeb4);
    if (iVar7 == 0) {
      pvVar3 = operator_new(0x7e);
      if (pvVar3 != (void *)0x0) {
        uVar4 = FUN_00414c80(s_gfx_interface_experience_star_bm_0085b918);
        goto LAB_005dd042;
      }
    }
    else {
      FUN_007a6429(iVar7);
      pvVar3 = operator_new(0x7e);
      if (pvVar3 != (void *)0x0) {
        uVar4 = FUN_00414c80(&DAT_00cdb250);
        goto LAB_005dd042;
      }
    }
  }
  else {
    iVar7 = FUN_005045e0();
    uVar4 = FUN_004af700(*(undefined4 *)(iVar7 + 6));
    FUN_007a630a(&DAT_00cdb250,s__sgfx_interface_experience_star__0085b964,&DAT_00dc2ba0,uVar4);
    iVar7 = FUN_007a6615(&DAT_00cdb250,&DAT_0082eeb4);
    if (iVar7 == 0) goto LAB_005dcfb7;
    FUN_007a6429(iVar7);
    pvVar3 = operator_new(0x7e);
    if (pvVar3 != (void *)0x0) {
      uVar4 = FUN_00414c80(&DAT_00cdb250);
      goto LAB_005dd042;
    }
  }
  uVar4 = 0;
LAB_005dd042:
  param_1[0x1d] = uVar4;
  ExceptionList = unaff_ESI;
  return param_1;
}


