// FUN_00622680 @ 622680 size=1792

undefined4 * __thiscall FUN_00622680(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d11bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_007ef7b8;
  param_1[2] = &PTR_LAB_007ef7b4;
  param_1[0xd] = param_3;
  local_4 = 0;
  *(int *)((int)param_1 + 0x2e) = param_2[3];
  *(short *)((int)param_1 + 0x32) = (short)param_2[4];
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_btn_prio_up_bmp_00860298,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0xe] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_btn_prio_top_bmp_00860278,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0xf] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 3;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_btn_prio_down_bmp_00860258,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x10] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_btn_prio_bottom_bm_00860234,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x11] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00414c80(s_gfx_interface_auxiliary_bmp_0085ae68);
  }
  param_1[0x1c] = piVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar4 + 0x34))(DAT_008776b0);
  uVar3 = FUN_00413d60(s_auxiliary_palette_bmp_0085afe8);
  FUN_00415f20(uVar3);
  pvVar2 = operator_new(0xaa);
  puStack_8._0_1_ = 6;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_btn_prio_cancel_bm_0085b02c,0,0xffffffff);
  }
  param_1[0x12] = uVar3;
  puStack_8._0_1_ = 0;
  cVar1 = (**(code **)(*param_2 + 0x14))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 0x18))();
    if (cVar1 == '\0') {
      pvVar2 = operator_new(0x7e);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
      if (pvVar2 == (void *)0x0) goto LAB_00622913;
      uVar3 = FUN_00415020();
      goto LAB_00622915;
    }
    pvVar2 = operator_new(0x7e);
    puStack_8._0_1_ = 8;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_auxiliarybig_bmp_0085b050);
    }
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    param_1[0x13] = uVar3;
    uVar3 = FUN_00413d60(s_auxiliary_palette_bmp_0085afe8);
    FUN_00415f20(uVar3);
    (**(code **)(*(int *)param_1[0x13] + 0x34))(DAT_008776b0);
    (**(code **)(*(int *)param_1[0x13] + 0x38))(*(undefined4 *)((int)param_2 + 0x5a));
  }
  else {
    pvVar2 = operator_new(0x7e);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    if (pvVar2 == (void *)0x0) {
LAB_00622913:
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00415f10();
      uVar3 = FUN_00414c80(uVar3);
    }
LAB_00622915:
    puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
    param_1[0x13] = uVar3;
  }
  if (DAT_00dc1884 == '\0') {
    pvVar2 = operator_new(0x7e);
    puStack_8._0_1_ = 0xd;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_prodstatus_large_g_00860178);
    }
    puStack_8._0_1_ = 0;
    param_1[0x14] = uVar3;
    pvVar2 = operator_new(0x7e);
    puStack_8._0_1_ = 0xe;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_prodstatus_large_y_0086014c);
    }
    puStack_8._0_1_ = 0;
    param_1[0x15] = uVar3;
    pvVar2 = operator_new(0x7e);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xf);
    if (pvVar2 == (void *)0x0) goto LAB_00622a30;
    uVar3 = FUN_00414c80(s_gfx_interface_prodstatus_large_r_00860124);
  }
  else {
    pvVar2 = operator_new(0x7e);
    puStack_8._0_1_ = 10;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_prodstatus_extra_l_00860204);
    }
    puStack_8._0_1_ = 0;
    param_1[0x14] = uVar3;
    pvVar2 = operator_new(0x7e);
    puStack_8._0_1_ = 0xb;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_prodstatus_extra_l_008601d4);
    }
    puStack_8._0_1_ = 0;
    param_1[0x15] = uVar3;
    pvVar2 = operator_new(0x7e);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xc);
    if (pvVar2 == (void *)0x0) {
LAB_00622a30:
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_prodstatus_extra_l_008601a4);
    }
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  param_1[0x16] = uVar3;
  pvVar2 = operator_new(0x7e);
  puStack_8._0_1_ = 0x10;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_org_meter_bmp_00859ea8);
  }
  puStack_8._0_1_ = 0;
  param_1[0x17] = uVar3;
  pvVar2 = operator_new(0x7e);
  puStack_8._0_1_ = 0x11;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_strength_meter_bmp_00859e84);
  }
  puStack_8._0_1_ = 0;
  param_1[0x18] = uVar3;
  pvVar2 = operator_new(0x7e);
  puStack_8._0_1_ = 0x12;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_mor_meter_bmp_00859e68);
  }
  param_1[0x19] = uVar3;
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  (**(code **)(*(int *)param_1[0x17] + 0x34))(0x1a);
  (**(code **)(*(int *)param_1[0x18] + 0x34))(0x1a);
  (**(code **)(*(int *)param_1[0x19] + 0x34))(0x1a);
  cVar1 = (**(code **)(*param_2 + 0x14))();
  if ((cVar1 == '\0') || (cVar1 = FUN_004f3f50(), cVar1 == '\0')) {
    puStack_8 = operator_new(0xaa);
    if (puStack_8 != (void *)0x0) {
      uVar3 = FUN_00433570(s_gfx_interface_plate_division_bmp_0085b000,0,0xffffffff);
      goto LAB_00622b50;
    }
  }
  else {
    puStack_8 = operator_new(0xaa);
    if (puStack_8 != (void *)0x0) {
      uVar3 = FUN_00433570(s_gfx_interface_plate_division_air_0085b070,0,0xffffffff);
      goto LAB_00622b50;
    }
  }
  uVar3 = 0;
LAB_00622b50:
  param_1[0x1a] = uVar3;
  puStack_8 = operator_new(0xaa);
  if (puStack_8 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_plate_provbuilding_008600fc,0,0xffffffff);
  }
  param_1[0x1b] = uVar3;
  puStack_8 = operator_new(0xaa);
  if (puStack_8 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00433570(s_gfx_interface_btn_small_bmp_0085f688,0,0xffffffff);
  }
  param_1[0x1d] = iVar5;
  *(undefined1 *)(iVar5 + 0xa2) = 0;
  puStack_8 = operator_new(0xaa);
  if (puStack_8 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_area_btn_pl_0085d8e8,0,0xffffffff);
  }
  param_1[0x1e] = uVar3;
  puStack_8 = operator_new(0xaa);
  if (puStack_8 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_area_btn_mi_0085d888,0,0xffffffff);
  }
  param_1[0x1f] = uVar3;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_details_bmp_0085ac40);
  }
  param_1[0x20] = uVar3;
  if (DAT_00dc1884 != '\0') {
    if ((param_2[0xc] < 2) || (param_2[0xc] <= param_2[0xd] + 1)) {
      piVar4 = (int *)param_1[0x1f];
      if (*(char *)((int)piVar4 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar4 + 0x60))();
      *(undefined1 *)((int)piVar4 + 0x86) = 1;
    }
    else {
      (**(code **)(*(int *)param_1[0x1f] + 0x50))();
    }
    if (*(char *)((int)param_2 + 0x56) == '\0') {
      FUN_00433930();
    }
    else {
      FUN_00433950();
    }
    cVar1 = (**(code **)(*param_2 + 0x10))();
    if (cVar1 == '\0') {
      (**(code **)(*(int *)param_1[0x1d] + 0x50))();
      if (param_2[0xc] < 99) {
        (**(code **)(*(int *)param_1[0x1e] + 0x50))();
        ExceptionList = unaff_ESI;
        return param_1;
      }
      piVar4 = (int *)param_1[0x1e];
      if (*(char *)((int)piVar4 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar4 + 0x60))();
    }
    else {
      piVar4 = (int *)param_1[0x1d];
      if (*(char *)((int)piVar4 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar4 + 0x60))();
      *(undefined1 *)((int)piVar4 + 0x86) = 1;
      if (param_2[0xb] == 0) {
        uVar3 = *(undefined4 *)((int)param_2 + 0x5a);
      }
      else {
        uVar3 = *(undefined4 *)((int)param_2 + 0x5a);
      }
      cVar1 = FUN_0049f030(uVar3,*(undefined4 *)((int)param_2 + 0x16));
      if (cVar1 != '\0') {
        (**(code **)(*(int *)param_1[0x1e] + 0x50))();
        ExceptionList = unaff_ESI;
        return param_1;
      }
      piVar4 = (int *)param_1[0x1e];
      if (*(char *)((int)piVar4 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar4 + 0x60))();
    }
    *(undefined1 *)((int)piVar4 + 0x86) = 1;
  }
  ExceptionList = unaff_ESI;
  return param_1;
}


