// FUN_005fbb50 @ 5fbb50 size=1952

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_005fbb50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cf5b7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00415020();
  *(undefined1 *)((int)param_1 + 0x92) = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  *(undefined ***)((int)param_1 + 0x82) = &PTR_LAB_007ee3a0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_007ee358;
  param_1[2] = &PTR_LAB_007ee354;
  param_1[0x28] = param_2;
  param_1[0x29] = param_3;
  *(undefined1 *)(param_1 + 0x2a) = param_4;
  *(undefined4 *)((int)param_1 + 0x7e) = 1;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xde,0x6e,0,0);
  }
  local_4._0_1_ = 1;
  param_1[0x27] = uVar2;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xde,0xaa,0,0);
  }
  local_4._0_1_ = 1;
  param_1[0x26] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00584270(0xbe,0xbd,0xbe);
    uVar8 = 0xffffffff;
    uVar7 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar4 = FUN_0042b6c9(s_NEG_PROV_0085e134);
    uVar2 = FUN_00433020(s_gfx_interface_tab_diplomacy_bmp_0085e114,uVar4,uVar3,uVar7,uVar8,uVar2);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0xaa) = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00584270(0xbe,0xbd,0xbe);
    uVar8 = 0xffffffff;
    uVar7 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar4 = FUN_0042b6c9(s_NEG_TECH_0085e108);
    uVar2 = FUN_00433020(s_gfx_interface_tab_diplomacy_bmp_0085e114,uVar4,uVar3,uVar7,uVar8,uVar2);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0xae) = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00584270(0xbe,0xbd,0xbe);
    uVar8 = 0xffffffff;
    uVar7 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar4 = FUN_0042b6c9(s_SHARE_UNITS_0085e0fc);
    uVar2 = FUN_00433020(s_gfx_interface_tab_diplomacy_bmp_0085e114,uVar4,uVar3,uVar7,uVar8,uVar2);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0xb2) = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00584270(0xbe,0xbd,0xbe);
    uVar8 = 0xffffffff;
    uVar7 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar4 = FUN_0042b6c9(s_NEG_RES_0085e0f4);
    uVar2 = FUN_00433020(s_gfx_interface_tab_diplomacy_bmp_0085e114,uVar4,uVar3,uVar7,uVar8,uVar2);
  }
  *(undefined4 *)((int)param_1 + 0xb6) = uVar2;
  local_4._0_1_ = 1;
  *(undefined1 *)(*(int *)((int)param_1 + 0xaa) + 0xa2) = 0;
  *(undefined1 *)(*(int *)((int)param_1 + 0xae) + 0xa2) = 0;
  *(undefined1 *)(*(int *)((int)param_1 + 0xb2) + 0xa2) = 0;
  *(undefined1 *)(*(int *)((int)param_1 + 0xb6) + 0xa2) = 0;
  *(undefined1 *)(*(int *)((int)param_1 + 0xaa) + 0x68) = 1;
  *(undefined1 *)(*(int *)((int)param_1 + 0xae) + 0x68) = 1;
  *(undefined1 *)(*(int *)((int)param_1 + 0xb2) + 0x68) = 1;
  *(undefined1 *)(*(int *)((int)param_1 + 0xb6) + 0x68) = 1;
  FUN_005fd600();
  FUN_005fce40();
  FUN_004353e0();
  FUN_004353e0();
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar2 = FUN_0044b160(param_2);
    piVar5 = (int *)FUN_00414c80(uVar2);
  }
  param_1[0x25] = piVar5;
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(*piVar5 + 0x34))(4);
  pvVar1 = operator_new(0xb8);
  puStack_8._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_004403f0(0,0x459c4000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d8b8,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  *(int *)((int)param_1 + 0xba) = iVar6;
  puStack_8._0_1_ = 1;
  *(float *)(iVar6 + 0x9c) = *(float *)((&DAT_0089cad8)[param_1[0x28]] + 0x39c4) * _DAT_007ee350;
  *(undefined1 *)(*(int *)((int)param_1 + 0xba) + 0x83) = 1;
  pvVar1 = operator_new(0xb8);
  puStack_8._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_004403f0(0,0x459c4000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d8b8,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  *(int *)((int)param_1 + 0xbe) = iVar6;
  puStack_8._0_1_ = 1;
  *(float *)(iVar6 + 0x9c) = *(float *)((&DAT_0089cad8)[param_1[0x28]] + 0x39b4) * _DAT_007ee350;
  *(undefined1 *)(*(int *)((int)param_1 + 0xbe) + 0x83) = 1;
  pvVar1 = operator_new(0xb8);
  puStack_8._0_1_ = 0xb;
  if (pvVar1 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_004403f0(0,0x459c4000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d8b8,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  *(int *)((int)param_1 + 0xc2) = iVar6;
  puStack_8._0_1_ = 1;
  *(float *)(iVar6 + 0x9c) = *(float *)((&DAT_0089cad8)[param_1[0x28]] + 0x39bc) * _DAT_007ee350;
  *(undefined1 *)(*(int *)((int)param_1 + 0xc2) + 0x83) = 1;
  pvVar1 = operator_new(0xb8);
  puStack_8._0_1_ = 0xc;
  if (pvVar1 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_004403f0(0,0x459c4000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d8b8,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  *(int *)((int)param_1 + 0xc6) = iVar6;
  puStack_8._0_1_ = 1;
  *(float *)(iVar6 + 0x9c) = *(float *)((&DAT_0089cad8)[param_1[0x28]] + 0x39c0) * _DAT_007ee350;
  *(undefined1 *)(*(int *)((int)param_1 + 0xc6) + 0x83) = 1;
  pvVar1 = operator_new(0xb8);
  puStack_8._0_1_ = 0xd;
  if (pvVar1 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_004403f0(0,0x459c4000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d8b8,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  *(int *)((int)param_1 + 0xca) = iVar6;
  puStack_8._0_1_ = 1;
  *(float *)(iVar6 + 0x9c) = *(float *)((&DAT_0089cad8)[param_1[0x28]] + 0x39b8) * _DAT_007ee350;
  *(undefined1 *)(*(int *)((int)param_1 + 0xca) + 0x83) = 1;
  pvVar1 = operator_new(0xb8);
  puStack_8._0_1_ = 0xe;
  if (pvVar1 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_004403f0(0,0x459c4000,0,0x3f800000,s_gfx_interface_button_area_btn_mi_0085d8b8,
                         s_gfx_interface_button_area_btn_pl_0085d8e8,
                         s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  *(int *)((int)param_1 + 0xce) = iVar6;
  puStack_8._0_1_ = 1;
  *(float *)(iVar6 + 0x9c) = *(float *)((&DAT_0089cad8)[param_1[0x28]] + 0x39c8) * _DAT_007ee350;
  *(undefined1 *)(*(int *)((int)param_1 + 0xce) + 0x83) = 1;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0xf;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_large_oil_bmp_0085e0d0);
  }
  puStack_8._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0xd2) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0x10;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_large_metal_b_0085e0ac);
  }
  puStack_8._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0xd6) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0x11;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_large_energy__0085e088);
  }
  puStack_8._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0xda) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0x12;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_large_rubber__0085e064);
  }
  puStack_8._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0xde) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0x13;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_large_supplie_0085e03c);
  }
  puStack_8._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0xe2) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x14);
  if (pvVar1 == (void *)0x0) {
    *(undefined4 *)((int)param_1 + 0xe6) = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_large_money_b_0085e018);
    *(undefined4 *)((int)param_1 + 0xe6) = uVar2;
  }
  ExceptionList = param_1;
  return param_1;
}


