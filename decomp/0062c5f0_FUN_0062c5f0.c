// FUN_0062c5f0 @ 62c5f0 size=3918

undefined4 * __thiscall FUN_0062c5f0(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  void *unaff_EBP;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_007d1ac8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0061e1d0(param_2);
  piVar5 = (int *)((int)param_1 + 0xe2);
  *(undefined2 *)((int)param_1 + 0x15e) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((int)param_1 + 0x15b) = 0;
  *(undefined1 *)((int)param_1 + 0x15a) = 0;
  *param_1 = &PTR_FUN_007ef8b0;
  param_1[2] = &PTR_LAB_007ef8ac;
  local_4._1_3_ = 0;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ef8a8;
  iVar7 = 5;
  do {
    local_4._0_1_ = 0;
    pvVar2 = operator_new(0xb8);
    local_4._0_1_ = 1;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004403f0(0,0x447a0000,0x43fa0000,0x3dcccccd,
                           s_gfx_interface_button_area_btn_mi_0085d888,
                           s_gfx_interface_button_area_btn_pl_0085d8e8,
                           s_gfx_interface_button_area_btn_sl_00859a6c,
                           s_gfx_interface_sprite_slider_bmp_00859a98);
    }
    piVar5[-6] = iVar3;
    local_4._0_1_ = 0;
    *(undefined1 *)(iVar3 + 0x83) = 1;
    pvVar2 = operator_new(0xaa);
    local_4._0_1_ = 2;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00433570(s_gfx_interface_btn_small_bmp_0085f688,0,0xffffffff);
    }
    *piVar5 = iVar3;
    local_4._0_1_ = 0;
    *(undefined1 *)(iVar3 + 0xa2) = 0;
    pvVar2 = operator_new(0xaa);
    local_4._0_1_ = 3;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00433570(s_gfx_interface_btn_small_bmp_0085f688,0,0xffffffff);
    }
    piVar5[5] = iVar3;
    piVar5 = piVar5 + 1;
    iVar7 = iVar7 + -1;
    local_4._0_1_ = 0;
    *(undefined1 *)(iVar3 + 0xa2) = 0;
  } while (iVar7 != 0);
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00433570(s_gfx_interface_btn_medium_bmp_0085ace4,0,0xffffffff);
  }
  *(int *)((int)param_1 + 0xde) = iVar7;
  local_4._0_1_ = 0;
  *(undefined1 *)(iVar7 + 0xa2) = 0;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00433570(s_gfx_interface_btn_small_bmp_0085f688,0,0xffffffff);
  }
  *(int *)((int)param_1 + 0x10a) = iVar7;
  *(undefined1 *)(iVar7 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  local_4._0_1_ = 0;
  *(undefined1 *)((int)param_1 + 0x122) = 0;
  pvVar2 = operator_new(0x72);
  local_4._0_1_ = 6;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00434930(0x98,0x90,0,0);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x112) = uVar4;
  pvVar2 = operator_new(0x72);
  local_4._0_1_ = 7;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00434930(0x98,0x90,0,0);
  }
  *(undefined4 *)((int)param_1 + 0x116) = uVar4;
  local_4._0_1_ = 0;
  uVar1 = local_4._0_1_;
  local_4._0_1_ = 0;
  if (DAT_00dc195f == '\0') {
    local_4._0_1_ = uVar1;
    pvVar2 = operator_new(0x72);
    local_4 = (void *)CONCAT31(local_4._1_3_,9);
    if (pvVar2 == (void *)0x0) goto LAB_0062c880;
    uVar4 = FUN_00434930(0x144,0x60,0,0);
  }
  else {
    pvVar2 = operator_new(0x72);
    local_4 = (void *)CONCAT31(local_4._1_3_,8);
    if (pvVar2 == (void *)0x0) {
LAB_0062c880:
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00434930(0x144,0xa8,0,0);
    }
  }
  *(undefined4 *)((int)param_1 + 0x11a) = uVar4;
  local_4 = (void *)((uint)local_4 & 0xffffff00);
  if (DAT_00dc1960 == '\0') {
    pvVar2 = operator_new(0x72);
    local_4 = (void *)CONCAT31(local_4._1_3_,0xb);
    if (pvVar2 == (void *)0x0) goto LAB_0062c8eb;
    iVar7 = FUN_00434930(0xe9,0xa0,0,0);
  }
  else {
    pvVar2 = operator_new(0x72);
    local_4 = (void *)CONCAT31(local_4._1_3_,10);
    if (pvVar2 == (void *)0x0) {
LAB_0062c8eb:
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_00434930(0xe9,0x1d0,0,0);
    }
  }
  *(int *)((int)param_1 + 0x10e) = iVar7;
  *(undefined1 *)(iVar7 + 0x5e) = 0;
  local_4 = (void *)((uint)local_4 & 0xffffff00);
  uVar4 = 0x1e0;
  if (DAT_00dc195f != '\0') {
    uVar4 = 0x210;
  }
  if (DAT_00dc1884 == '\0') {
    pvVar2 = operator_new(0x72);
    local_4 = (void *)CONCAT31(local_4._1_3_,0xd);
    if (pvVar2 == (void *)0x0) goto LAB_0062c964;
    uVar4 = FUN_00434930(0x1e0,uVar4,0,0);
  }
  else {
    pvVar2 = operator_new(0x72);
    local_4 = (void *)CONCAT31(local_4._1_3_,0xc);
    if (pvVar2 == (void *)0x0) {
LAB_0062c964:
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00434930(500,uVar4,0,0);
    }
  }
  *(undefined4 *)((int)param_1 + 0x11e) = uVar4;
  local_4 = (void *)((uint)local_4 & 0xffffff00);
  if (DAT_00dc195f == '\0') {
    pvVar2 = operator_new(0x7e);
    local_4._0_1_ = 0x10;
    if (pvVar2 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00414c80(s_gfx_interface_bg_production_bmp_00860bfc);
    }
    local_4._0_1_ = 0;
    *(undefined4 *)((int)param_1 + 0xc2) = uVar4;
    pvVar2 = operator_new(0x7e);
    local_4 = (void *)CONCAT31(local_4._1_3_,0x11);
    if (pvVar2 == (void *)0x0) goto LAB_0062ca23;
    uVar4 = FUN_00414c80(s_gfx_interface_bg_production_over_00860bd4);
  }
  else {
    pvVar2 = operator_new(0x7e);
    local_4._0_1_ = 0xe;
    if (pvVar2 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00414c80(s_gfx_interface_bg_production2_bmp_00860c48);
    }
    local_4._0_1_ = 0;
    *(undefined4 *)((int)param_1 + 0xc2) = uVar4;
    pvVar2 = operator_new(0x7e);
    local_4 = (void *)CONCAT31(local_4._1_3_,0xf);
    if (pvVar2 == (void *)0x0) {
LAB_0062ca23:
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00414c80(s_gfx_interface_bg_production_over_00860c1c);
    }
  }
  local_4 = (void *)((uint)local_4 & 0xffffff00);
  *(undefined4 *)((int)param_1 + 0xc6) = uVar4;
  uVar4 = FUN_00413d60(s_bg_production_bmp_00860bc0);
  FUN_00415f20(uVar4);
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 0x12;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_plate_create_large_00860b98,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x17e) = uVar4;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 0x13;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_plate_create_mediu_00860b70,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x182) = uVar4;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 0x14;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_plate_create_large_00860b98,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x186) = uVar4;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 0x15;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_plate_create_mediu_00860b70,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x18a) = uVar4;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 0x16;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_plate_create_large_00860b98,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x18e) = uVar4;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 0x17;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_plate_create_mediu_00860b70,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x192) = uVar4;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 0x18;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_plate_create_small_00860b48,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x196) = uVar4;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 0x19;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_plate_create_small_00860b48,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x19a) = uVar4;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 0x1a;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_plate_create_small_00860b48,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x19e) = uVar4;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 0x1b;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_plate_create_small_00860b48,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x1a2) = uVar4;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 0x1c;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_plate_create_small_00860b48,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x1a6) = uVar4;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 0x1d;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_plate_create_small_00860b48,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x1aa) = uVar4;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 0x1e;
  if (pvVar2 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00414c80(s_gfx_interface_button_area_airwin_00860b1c);
  }
  *(int **)((int)param_1 + 0x1b2) = piVar5;
  local_4 = (void *)((uint)local_4._1_3_ << 8);
  (**(code **)(*piVar5 + 0x34))(4);
  pvVar2 = operator_new(0x7e);
  puStack_8._0_1_ = 0x1f;
  if (pvVar2 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00414c80(s_gfx_interface_button_area_army_b_00860af4);
  }
  *(int **)((int)param_1 + 0x1b6) = piVar5;
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  (**(code **)(*piVar5 + 0x34))(4);
  local_4 = operator_new(0x7e);
  pvStack_c._0_1_ = 0x20;
  if (local_4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00414c80(s_gfx_interface_button_area_navy_b_00860acc);
  }
  *(int **)((int)param_1 + 0x1ba) = piVar5;
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  (**(code **)(*piVar5 + 0x34))(4);
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_b_airbase_bmp_00860aa8);
  }
  *(undefined4 *)((int)param_1 + 0x1be) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_b_brigade_bmp_00860a84);
  }
  *(undefined4 *)((int)param_1 + 0x1c2) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_b_naval_bmp_00860a64);
  }
  *(undefined4 *)((int)param_1 + 0x1c6) = uVar4;
  if (DAT_00dc1960 == '\0') {
    puStack_8 = operator_new(0x7e);
    if (puStack_8 != (void *)0x0) {
      uVar4 = FUN_00414c80(s_gfx_interface_bg_unitproduction__00860a18);
      goto LAB_0062ce70;
    }
  }
  else {
    puStack_8 = operator_new(0x7e);
    if (puStack_8 != (void *)0x0) {
      uVar4 = FUN_00414c80(s_gfx_interface_bg_unitproduction3_00860a3c);
      goto LAB_0062ce70;
    }
  }
  uVar4 = 0;
LAB_0062ce70:
  *(undefined4 *)((int)param_1 + 0x12a) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_ill_div_noimage_bm_0085acc0);
  }
  *(undefined4 *)((int)param_1 + 0x12e) = uVar4;
  puStack_8 = operator_new(0x1aa);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar10 = 0x78;
    uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar6 = FUN_0042b6c9(s_PRODIW_START_00860a08);
    uVar4 = FUN_0043acc0(uVar6,uVar4,uVar10);
  }
  *(undefined4 *)((int)param_1 + 0x136) = uVar4;
  puStack_8 = operator_new(0x1aa);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar10 = 0x78;
    uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar6 = FUN_0042b6c9(s_PRODIW_CLOSE_008609f8);
    uVar4 = FUN_0043acc0(uVar6,uVar4,uVar10);
  }
  *(undefined4 *)((int)param_1 + 0x13a) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_large_oil_bmp_0085e0d0);
  }
  *(undefined4 *)((int)param_1 + 0x1da) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_large_metal_b_0085e0ac);
  }
  *(undefined4 *)((int)param_1 + 0x1de) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_large_energy__0085e088);
  }
  *(undefined4 *)((int)param_1 + 0x1e2) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_large_rubber__0085e064);
  }
  *(undefined4 *)((int)param_1 + 0x1e6) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_large_supplie_0085e03c);
  }
  *(undefined4 *)((int)param_1 + 0x1ea) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_large_money_b_0085e018);
  }
  *(undefined4 *)((int)param_1 + 0x1ee) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_large_manpowe_008609d0);
  }
  *(undefined4 *)((int)param_1 + 0x1f2) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_icon_large_ic_bmp_008609b0);
  }
  *(undefined4 *)((int)param_1 + 0x1f6) = uVar4;
  puStack_8 = operator_new(0xaa);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_button_area_btn_pl_00859ae0,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x1ca) = uVar4;
  puStack_8 = operator_new(0xaa);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_button_area_btn_mi_00859ab8,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x1ce) = uVar4;
  puStack_8 = operator_new(0xaa);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_button_area_btn_pl_00859ae0,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x1d2) = uVar4;
  puStack_8 = operator_new(0xaa);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_button_area_btn_mi_00859ab8,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x1d6) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_prodstatus_small_g_00860984);
  }
  *(undefined4 *)((int)param_1 + 0x9a6) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_prodstatus_small_y_00860958);
  }
  *(undefined4 *)((int)param_1 + 0x9aa) = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_prodstatus_small_r_00860930);
  }
  *(undefined4 *)((int)param_1 + 0x9ae) = uVar4;
  puStack_8 = operator_new(0xaa);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_button_convoys_bmp_0086090c,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x176) = uVar4;
  *(undefined4 *)((int)param_1 + 0x17a) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_bg_unitproduction2_008608e4);
  }
  param_1[0x5a] = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00415020();
  }
  param_1[0x5b] = uVar4;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_bg_unitpreview_bmp_008608c0);
  }
  *(undefined4 *)((int)param_1 + 0x1ae) = uVar4;
  *(undefined4 *)((int)param_1 + 0x132) = 0;
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_auxiliary_bmp_0085ae68);
  }
  *(undefined4 *)((int)param_1 + 0x1fa) = uVar4;
  uVar4 = FUN_00413d60(s_auxiliary_palette_bmp_0085afe8);
  FUN_00415f20(uVar4);
  (**(code **)(**(int **)((int)param_1 + 0x1fa) + 0x34))(DAT_008776b0);
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((int)param_1 + 0xbe) = 0;
  pvStack_c = operator_new(0x1aa);
  if (pvStack_c == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar10 = 0x9c;
    uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar6 = FUN_0042b6c9(s_AUTO_PROD_BUTTON_008608ac);
    uVar4 = FUN_0043acc0(uVar6,uVar4,uVar10);
  }
  *(undefined4 *)((int)param_1 + 0x9b6) = uVar4;
  *(undefined4 *)((int)param_1 + 0x9b2) = 0;
  if (0 < DAT_008776b0) {
    puVar8 = (undefined1 *)((int)param_1 + 0x91a);
    pvStack_c = (void *)(-0x91a - (int)param_1);
    puVar9 = (undefined4 *)((int)param_1 + 0x42e);
    do {
      pvVar2 = operator_new(0x7e);
      if (pvVar2 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00414c80(s_gfx_interface_auxiliary_bmp_0085ae68);
      }
      puVar9[-0x8c] = uVar4;
      uVar4 = FUN_00413d60(s_auxiliary_palette_bmp_0085afe8);
      FUN_00415f20(uVar4);
      (**(code **)(*(int *)puVar9[-0x8c] + 0x34))(DAT_008776b0);
      (**(code **)(*(int *)puVar9[-0x8c] + 0x38))(0);
      pvVar2 = operator_new(0x7e);
      if (pvVar2 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00414c80(s_gfx_interface_auxiliary_bmp_0085ae68);
      }
      unaff_EBP = (void *)((uint)unaff_EBP & 0xffffff00);
      *puVar9 = uVar4;
      uVar4 = FUN_00413d60(s_auxiliary_palette_bmp_0085afe8);
      FUN_00415f20(uVar4);
      (**(code **)(*(int *)*puVar9 + 0x34))(DAT_008776b0);
      (**(code **)(*(int *)*puVar9 + 0x38))(0);
      pvVar2 = operator_new(0xaa);
      if (pvVar2 == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
      }
      puVar9[0x8c] = iVar7;
      *(undefined1 *)(iVar7 + 0xa2) = 0;
      puVar8[-0x8c] = 0;
      *puVar8 = 0;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    } while ((int)(puVar8 + (int)pvStack_c) < DAT_008776b0);
  }
  ExceptionList = unaff_EBP;
  return param_1;
}


