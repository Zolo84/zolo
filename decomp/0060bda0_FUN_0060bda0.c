// FUN_0060bda0 @ 60bda0 size=3847

undefined4 * __thiscall FUN_0060bda0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  void *unaff_EDI;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_007d0380;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0061e1d0(param_2);
  puVar4 = (undefined4 *)((int)param_1 + 0x126);
  for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *param_1 = &PTR_FUN_007ef2b0;
  param_1[2] = &PTR_LAB_007ef2ac;
  local_4 = (void *)0x0;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ef2a8;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x41200000,0,0x3c23d70a,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x8a] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x3f800000,0,0x3c23d70a,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x8b] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x41a00000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x8c] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x41a00000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x8d] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x42c80000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x8e] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x42c80000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x8f] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x42c80000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x90] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x42c80000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x91] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x42c80000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x92] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x42c80000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x93] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 0xb;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x42c80000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x94] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 0xc;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x42c80000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x95] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 0xd;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x42c80000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x96] = uVar2;
  pvVar1 = operator_new(0xb8);
  local_4._0_1_ = 0xe;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004403f0(0,0x42c80000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d888,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  param_1[0x97] = uVar2;
  local_4._0_1_ = 0;
  *(undefined1 *)(param_1[0x8a] + 0x83) = 1;
  *(undefined1 *)(param_1[0x8b] + 0x83) = 1;
  *(undefined1 *)(param_1[0x8c] + 0x83) = 1;
  *(undefined1 *)(param_1[0x8d] + 0x83) = 1;
  *(undefined1 *)(param_1[0x8e] + 0x83) = 1;
  *(undefined1 *)(param_1[0x8f] + 0x83) = 1;
  *(undefined1 *)(param_1[0x90] + 0x83) = 1;
  *(undefined1 *)(param_1[0x91] + 0x83) = 1;
  *(undefined1 *)(param_1[0x92] + 0x83) = 1;
  *(undefined1 *)(param_1[0x93] + 0x83) = 1;
  *(undefined1 *)(param_1[0x94] + 0x83) = 1;
  *(undefined1 *)(param_1[0x95] + 0x83) = 1;
  *(undefined1 *)(param_1[0x96] + 0x83) = 1;
  *(undefined1 *)(param_1[0x97] + 0x83) = 1;
  *(undefined1 *)(param_1[0x8a] + 0x82) = 0;
  *(undefined1 *)(param_1[0x8b] + 0x82) = 0;
  *(undefined1 *)(param_1[0x8c] + 0x82) = 0;
  *(undefined1 *)(param_1[0x8d] + 0x82) = 0;
  *(undefined1 *)(param_1[0x8e] + 0x82) = 0;
  *(undefined1 *)(param_1[0x8f] + 0x82) = 0;
  *(undefined1 *)(param_1[0x90] + 0x82) = 0;
  *(undefined1 *)(param_1[0x91] + 0x82) = 0;
  *(undefined1 *)(param_1[0x92] + 0x82) = 0;
  *(undefined1 *)(param_1[0x93] + 0x82) = 0;
  *(undefined1 *)(param_1[0x94] + 0x82) = 0;
  *(undefined1 *)(param_1[0x95] + 0x82) = 0;
  *(undefined1 *)(param_1[0x96] + 0x82) = 0;
  *(undefined1 *)(param_1[0x97] + 0x82) = 0;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 0xf;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar10 = 0x8c;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(s_AUTO_SPY_EDIT_DEF_BUTTON_0085eee4);
    uVar2 = FUN_0043acc0(uVar3,uVar2,uVar10);
  }
  local_4._0_1_ = 0;
  param_1[0x98] = uVar2;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 0x10;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar10 = 0x8c;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(s_AUTO_SPY_APPLY_TO_ALL_BUTTON_0085eec4);
    uVar2 = FUN_0043acc0(uVar3,uVar2,uVar10);
  }
  local_4._0_1_ = 0;
  param_1[0x99] = uVar2;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 0x11;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar10 = 0x8c;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(s_AUTO_SPY_REMOVE_ALL_BUTTON_0085eea8);
    uVar2 = FUN_0043acc0(uVar3,uVar2,uVar10);
  }
  local_4._0_1_ = 0;
  param_1[0x9a] = uVar2;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 0x12;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar10 = 0x8c;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(s_AUTO_SPY_ADD_COUNTRY_BUTTON_0085ee8c);
    uVar2 = FUN_0043acc0(uVar3,uVar2,uVar10);
  }
  local_4._0_1_ = 0;
  param_1[0x9b] = uVar2;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 0x13;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar10 = 0x8c;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(s_AUTO_SPY_REMOVE_COUNTRY_BUTTON_0085ee6c);
    uVar2 = FUN_0043acc0(uVar3,uVar2,uVar10);
  }
  local_4._0_1_ = 0;
  param_1[0x9c] = uVar2;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 0x14;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar10 = 0x8c;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(s_AUTO_SPY_SET_TO_DEF_BUTTON_0085ee50);
    uVar2 = FUN_0043acc0(uVar3,uVar2,uVar10);
  }
  local_4._0_1_ = 0;
  param_1[0x9d] = uVar2;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 0x15;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar10 = 0x8c;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(s_AUTO_SPY_APPLY_BUTTON_0085ee38);
    uVar2 = FUN_0043acc0(uVar3,uVar2,uVar10);
  }
  local_4._0_1_ = 0;
  param_1[0x9e] = uVar2;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 0x16;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar10 = 0x8c;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(s_AUTO_SPY_EDIT_BUTTON_0085ee20);
    uVar2 = FUN_0043acc0(uVar3,uVar2,uVar10);
  }
  local_4._0_1_ = 0;
  param_1[0x9f] = uVar2;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 0x17;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar10 = 0x8c;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(s_AUTO_SPY_INFO_BUTTON_0085ee08);
    uVar2 = FUN_0043acc0(uVar3,uVar2,uVar10);
  }
  local_4._0_1_ = 0;
  param_1[0xa0] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0x18;
  if (pvVar1 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  param_1[0xa1] = iVar5;
  local_4._0_1_ = 0;
  *(undefined1 *)(iVar5 + 0xa2) = 0;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0x19;
  if (pvVar1 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  param_1[0xa2] = iVar5;
  local_4._0_1_ = 0;
  *(undefined1 *)(iVar5 + 0xa2) = 0;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0x1a;
  if (pvVar1 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  param_1[0xa3] = iVar5;
  *(undefined1 *)(iVar5 + 0xa2) = 0;
  local_4._0_1_ = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)((int)param_1 + 0x291) = 1;
  *(undefined1 *)((int)param_1 + 0x292) = 0;
  pvVar1 = operator_new(0x42);
  local_4._0_1_ = 0x1b;
  if (pvVar1 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_006c8eb0();
  }
  param_1[0xa5] = iVar5;
  *(undefined4 *)(iVar5 + 4) = 0;
  local_4._0_1_ = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0x32] = 0;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x1c;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_bg_intelligence_bm_0085ede4);
  }
  local_4._0_1_ = 0;
  param_1[0x31] = uVar2;
  uVar2 = FUN_00413d60(s_bg_diplomacy_bmp_0085edd0);
  FUN_00415f20(uVar2);
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 0x1d;
  if (pvVar1 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00434930(0x98,0x108,0,0);
  }
  param_1[0x43] = iVar5;
  *(undefined1 *)(iVar5 + 0x5e) = 0;
  local_4._0_1_ = 0;
  param_1[0x47] = 0;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 0x1e;
  if (pvVar1 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00434930(0xe0,0x1c8,0,0);
  }
  param_1[0x34] = iVar5;
  local_4._0_1_ = 0;
  *(undefined1 *)(iVar5 + 0x5e) = 0;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0x1f;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00584270(0xff,0xbd,0);
    uVar9 = 0xffffffff;
    uVar8 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar10 = FUN_005857c0(uVar3,uVar8,uVar9,uVar2);
    uVar2 = FUN_00433020(s_gfx_interface_tab_diplomacy_bmp_0085e114,uVar10,uVar3,uVar8,uVar9,uVar2);
  }
  local_4._0_1_ = 0;
  param_1[0x36] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0x20;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00584270(0xff,0xbd,0);
    uVar9 = 0xffffffff;
    uVar8 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar10 = FUN_005857c0(uVar3,uVar8,uVar9,uVar2);
    uVar2 = FUN_00433020(s_gfx_interface_tab_diplomacy_bmp_0085e114,uVar10,uVar3,uVar8,uVar9,uVar2);
  }
  local_4._0_1_ = 0;
  param_1[0x37] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0x21;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00584270(0xff,0xbd,0);
    uVar9 = 0xffffffff;
    uVar8 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar10 = FUN_005857c0(uVar3,uVar8,uVar9,uVar2);
    uVar2 = FUN_00433020(s_gfx_interface_tab_diplomacy_bmp_0085e114,uVar10,uVar3,uVar8,uVar9,uVar2);
  }
  param_1[0x38] = uVar2;
  ppuVar7 = &PTR_s_CIF_ALL_0085eb8c;
  piVar6 = param_1 + 0x35;
  do {
    local_4._0_1_ = 0;
    if ((ppuVar7 == &PTR_s_CIF_ALL_0085eb8c) ||
       ((undefined **)((int)&PTR_s_CIF_COMMIES_0085eb98 + 3) < ppuVar7)) {
      pvVar1 = operator_new(0xaa);
      local_4._0_1_ = 0x22;
      if (pvVar1 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        uVar2 = FUN_00584270(0xff,0xbd,0);
        uVar9 = 0xffffffff;
        uVar8 = 0;
        uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
        uVar10 = FUN_0042b6c9(*ppuVar7);
        iVar5 = FUN_00433020(s_gfx_interface_tab_diplomacy_bmp_0085e114,uVar10,uVar3,uVar8,uVar9,
                             uVar2);
      }
      *piVar6 = iVar5;
    }
    local_4._0_1_ = 0;
    ppuVar7 = ppuVar7 + 1;
    *(undefined1 *)(*piVar6 + 0x68) = 1;
    *(undefined1 *)(*piVar6 + 0xa2) = 0;
    piVar6 = piVar6 + 1;
  } while (ppuVar7 < &DAT_0085ebbc);
  param_1[0x41] = 0;
  param_1[0x33] = 0;
  param_1[0x44] = 0;
  puVar4 = operator_new(0x1aa);
  local_4._0_1_ = 0x23;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar10 = 0x40;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(&DAT_00839384);
    FUN_0043acc0(uVar3,uVar2,uVar10);
    *puVar4 = &PTR_FUN_007e452c;
    puVar4[2] = &PTR_LAB_007e4528;
    *(undefined ***)((int)puVar4 + 0x7e) = &PTR_LAB_007e4524;
    puVar4[0x22] = 0xd;
  }
  local_4._0_1_ = 0;
  param_1[0x45] = puVar4;
  puVar4 = operator_new(0x1aa);
  local_4._0_1_ = 0x24;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar10 = 0x40;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(s_CANCEL_0083bafc);
    FUN_0043acc0(uVar3,uVar2,uVar10);
    *puVar4 = &PTR_FUN_007ec6b8;
    puVar4[2] = &PTR_LAB_007ec6b4;
    *(undefined ***)((int)puVar4 + 0x7e) = &PTR_LAB_007ec6b0;
    puVar4[0x22] = 0xe;
  }
  local_4._0_1_ = 0;
  param_1[0x46] = puVar4;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x25;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_frame_diplomacy_bm_0085edac);
  }
  local_4._0_1_ = 0;
  param_1[0x30] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x26;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_frame_Intelligence_0085ed84);
  }
  local_4._0_1_ = 0;
  param_1[0x2f] = uVar2;
  param_1[0x48] = 0;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 0x27;
  if (pvVar1 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00434930(0x130,0x124,0,0);
  }
  *(int *)((int)param_1 + 0x21e) = iVar5;
  *(undefined1 *)(iVar5 + 0x5e) = 0;
  local_4 = (void *)((uint)local_4._1_3_ << 8);
  (**(code **)(**(int **)((int)param_1 + 0x21e) + 0x34))(0x17b,0x199);
  local_4 = operator_new(0x72);
  pvStack_c._0_1_ = 0x28;
  if (local_4 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00434930(0x130,0x138,0,0);
  }
  *(int *)((int)param_1 + 0x222) = iVar5;
  *(undefined1 *)(iVar5 + 0x5e) = 0;
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  (**(code **)(**(int **)((int)param_1 + 0x222) + 0x34))(0x17b,0x19c);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  *(undefined4 *)(*(int *)((int)param_1 + 0x222) + 0x56) = uVar2;
  *(undefined1 *)((int)param_1 + 0x226) = 0;
  ExceptionList = unaff_EDI;
  return param_1;
}


