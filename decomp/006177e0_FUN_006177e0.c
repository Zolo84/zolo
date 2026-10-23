// FUN_006177e0 @ 6177e0 size=1536

undefined4 * __thiscall FUN_006177e0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d0a33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061e1d0(param_2);
  *param_1 = &PTR_FUN_007ef494;
  local_4._1_3_ = 0;
  param_1[2] = &PTR_LAB_007ef490;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ef48c;
  puVar6 = param_1 + 0x50;
  iVar8 = 7;
  do {
    local_4._0_1_ = 0;
    pvVar1 = operator_new(0xb8);
    local_4._0_1_ = 1;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004403f0(0,0x41100000,0x40a00000,0x3f800000,s_gfx_empty_bmp_0083ba78,
                           s_gfx_empty_bmp_0083ba78,s_gfx_interface_button_area_btn_sl_00859a6c,
                           s_gfx_interface_sprite_slider_bmp_00859a98);
    }
    local_4._0_1_ = 0;
    puVar6[-7] = uVar2;
    pvVar1 = operator_new(0xaa);
    local_4._0_1_ = 2;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00433570(s_gfx_interface_button_area_btn_mi_0085d8b8,0,0xffffffff);
    }
    local_4._0_1_ = 0;
    *puVar6 = uVar2;
    pvVar1 = operator_new(0xaa);
    local_4._0_1_ = 3;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00433570(s_gfx_interface_button_area_btn_pl_0085d8e8,0,0xffffffff);
    }
    local_4._0_1_ = 0;
    puVar6[7] = uVar2;
    pvVar1 = operator_new(0xaa);
    local_4._0_1_ = 4;
    if (pvVar1 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00433570(s_gfx_interface_btn_small_bmp_0085f688,0,0xffffffff);
    }
    puVar6[0x18] = iVar3;
    local_4._0_1_ = 0;
    *(undefined1 *)(iVar3 + 0xa2) = 0;
    pvVar1 = operator_new(0xaa);
    local_4._0_1_ = 5;
    if (pvVar1 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00433570(s_gfx_interface_btn_small_bmp_0085f688,0,0xffffffff);
    }
    puVar6[0x1f] = iVar3;
    puVar6 = puVar6 + 1;
    iVar8 = iVar8 + -1;
    local_4._0_1_ = 0;
    *(undefined1 *)(iVar3 + 0xa2) = 0;
  } while (iVar8 != 0);
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_00433570(s_gfx_interface_btn_medium_bmp_0085ace4,0,0xffffffff);
  }
  param_1[0x76] = iVar8;
  *(undefined1 *)(iVar8 + 0xa2) = 0;
  puVar6 = param_1 + 0x5e;
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_4._0_1_ = 0;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_bg_diplomacy_bmp_0085f668);
  }
  local_4._0_1_ = 0;
  param_1[0x31] = uVar2;
  uVar2 = FUN_00413d60(s_bg_diplomacy_bmp_0085edd0);
  FUN_00415f20(uVar2);
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_00434930(0x98,0x108,0,0);
  }
  param_1[0x43] = iVar8;
  *(undefined1 *)(iVar8 + 0x5e) = 0;
  local_4._0_1_ = 0;
  param_1[0x47] = 0;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_00434930(0xe0,0x198,0,0);
  }
  param_1[0x34] = iVar8;
  local_4._0_1_ = 0;
  *(undefined1 *)(iVar8 + 0x5e) = 0;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00584270(0xff,0xbd,0);
    uVar11 = 0xffffffff;
    uVar10 = 0;
    uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar5 = FUN_005857c0(uVar4,uVar10,uVar11,uVar2);
    uVar2 = FUN_00433020(s_gfx_interface_tab_diplomacy_bmp_0085e114,uVar5,uVar4,uVar10,uVar11,uVar2)
    ;
  }
  local_4._0_1_ = 0;
  param_1[0x36] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0xb;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00584270(0xff,0xbd,0);
    uVar11 = 0xffffffff;
    uVar10 = 0;
    uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar5 = FUN_005857c0(uVar4,uVar10,uVar11,uVar2);
    uVar2 = FUN_00433020(s_gfx_interface_tab_diplomacy_bmp_0085e114,uVar5,uVar4,uVar10,uVar11,uVar2)
    ;
  }
  local_4._0_1_ = 0;
  param_1[0x37] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0xc;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00584270(0xff,0xbd,0);
    uVar11 = 0xffffffff;
    uVar10 = 0;
    uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar5 = FUN_005857c0(uVar4,uVar10,uVar11,uVar2);
    uVar2 = FUN_00433020(s_gfx_interface_tab_diplomacy_bmp_0085e114,uVar5,uVar4,uVar10,uVar11,uVar2)
    ;
  }
  param_1[0x38] = uVar2;
  ppuVar7 = &PTR_s_CIF_ALL_0085f5d8;
  piVar9 = param_1 + 0x35;
  do {
    local_4._0_1_ = 0;
    if ((ppuVar7 == &PTR_s_CIF_ALL_0085f5d8) || (0x85f5e7 < (int)ppuVar7)) {
      pvVar1 = operator_new(0xaa);
      local_4._0_1_ = 0xd;
      if (pvVar1 == (void *)0x0) {
        iVar8 = 0;
      }
      else {
        uVar2 = FUN_00584270(0xff,0xbd,0);
        uVar11 = 0xffffffff;
        uVar10 = 0;
        uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
        uVar5 = FUN_0042b6c9(*ppuVar7);
        iVar8 = FUN_00433020(s_gfx_interface_tab_diplomacy_bmp_0085e114,uVar5,uVar4,uVar10,uVar11,
                             uVar2);
      }
      *piVar9 = iVar8;
    }
    local_4._0_1_ = 0;
    ppuVar7 = ppuVar7 + 1;
    *(undefined1 *)(*piVar9 + 0x68) = 1;
    *(undefined1 *)(*piVar9 + 0xa2) = 0;
    piVar9 = piVar9 + 1;
  } while ((int)ppuVar7 < 0x85f608);
  param_1[0x41] = 0;
  param_1[0x33] = 0;
  param_1[0x44] = 0;
  puVar6 = operator_new(0x1aa);
  local_4._0_1_ = 0xe;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar5 = 0x40;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(&DAT_00839384);
    FUN_0043acc0(uVar4,uVar2,uVar5);
    *puVar6 = &PTR_FUN_007e452c;
    puVar6[2] = &PTR_LAB_007e4528;
    *(undefined ***)((int)puVar6 + 0x7e) = &PTR_LAB_007e4524;
    puVar6[0x22] = 0xd;
  }
  local_4._0_1_ = 0;
  param_1[0x45] = puVar6;
  puVar6 = operator_new(0x1aa);
  local_4._0_1_ = 0xf;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar5 = 0x40;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(s_CANCEL_0083bafc);
    FUN_0043acc0(uVar4,uVar2,uVar5);
    *puVar6 = &PTR_FUN_007ec6b8;
    puVar6[2] = &PTR_LAB_007ec6b4;
    *(undefined ***)((int)puVar6 + 0x7e) = &PTR_LAB_007ec6b0;
    puVar6[0x22] = 0xe;
  }
  local_4._0_1_ = 0;
  param_1[0x46] = puVar6;
  param_1[0x48] = 0;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x10;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_frame_diplomacy_bm_0085edac);
  }
  local_4._0_1_ = 0;
  param_1[0x30] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,0x11);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_frame_politics_bmp_0085f644);
  }
  param_1[0x2f] = uVar2;
  param_1[0x32] = 0;
  ExceptionList = local_c;
  return param_1;
}


