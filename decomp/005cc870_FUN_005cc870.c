// FUN_005cc870 @ 5cc870 size=1176

undefined4 * __thiscall FUN_005cc870(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cd41e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061e1d0(param_2);
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0xd2) = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_007ecae0;
  param_1[2] = &PTR_LAB_007ecadc;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ecad8;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_to_convoys__0085adec,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x33] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_disband_bmp_0085adc8,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x2f] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 3;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_detach_bmp_0085ada8,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x30] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_attach_bmp_0085ad88,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x31] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_kills_bmp_0085ad68,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x32] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 6;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_loadnuke_bm_0085ad44,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0xd6) = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 7;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_unloadnuke__0085ad20,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0xda) = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 8;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_res_nuke_bmp_0085ad04);
  }
  *(undefined4 *)((int)param_1 + 0xde) = uVar3;
  local_4._0_1_ = 0;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 0;
  if (DAT_00dc1960 == '\0') {
    local_4._0_1_ = uVar1;
    pvVar2 = operator_new(0x56);
    local_4 = CONCAT31(local_4._1_3_,10);
    if (pvVar2 == (void *)0x0) goto LAB_005ccb0a;
    puVar8 = &DAT_0088ebf8;
    uVar3 = DAT_00bd1bac;
    uVar4 = FUN_004136a0(s_eurostilecond20bold_bmp_0082f024);
    uVar3 = FUN_00437e60(0,0,0xc0,0x3f,uVar4,uVar3,puVar8);
  }
  else {
    pvVar2 = operator_new(0x56);
    local_4 = CONCAT31(local_4._1_3_,9);
    if (pvVar2 == (void *)0x0) {
LAB_005ccb0a:
      uVar3 = 0;
    }
    else {
      puVar8 = &DAT_0088ebf8;
      uVar3 = DAT_00bd1bac;
      uVar4 = FUN_004136a0(s_eurostilecond20bold_bmp_0082f024);
      uVar3 = FUN_00437e60(0,0,0x118,0x3f,uVar4,uVar3,puVar8);
    }
  }
  local_4 = local_4 & 0xffffff00;
  *(undefined4 *)((int)param_1 + 0xe2) = uVar3;
  FUN_00438950(&DAT_0083bf04);
  *(undefined4 *)((int)param_1 + 0xe6) = 0;
  *(undefined4 *)((int)param_1 + 0xea) = 0;
  *(undefined4 *)((int)param_1 + 0xee) = 0;
  piVar7 = (int *)((int)param_1 + 0xc26);
  iVar6 = 5;
  do {
    pvVar2 = operator_new(0x7e);
    local_4._0_1_ = 0xb;
    if (pvVar2 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_00415020();
    }
    local_4._0_1_ = 0;
    piVar7[-0x2cc] = iVar5;
    pvVar2 = operator_new(0xaa);
    local_4._0_1_ = 0xc;
    if (pvVar2 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_00433570(s_gfx_interface_btn_medium_bmp_0085ace4,0,0xffffffff);
    }
    *piVar7 = iVar5;
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
    local_4 = (uint)local_4._1_3_ << 8;
    *(undefined1 *)(iVar5 + 0xa2) = 0;
  } while (iVar6 != 0);
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 0xd;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_ill_div_noimage_bm_0085acc0);
  }
  *(undefined4 *)((int)param_1 + 0xf2) = uVar3;
  local_4._0_1_ = 0;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 0;
  if (DAT_00dc1960 == '\0') {
    local_4._0_1_ = uVar1;
    pvVar2 = operator_new(0x7e);
    local_4 = CONCAT31(local_4._1_3_,0xf);
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00414c80(s_gfx_interface_bg_division_bmp_0085ac80);
      goto LAB_005ccc30;
    }
  }
  else {
    pvVar2 = operator_new(0x7e);
    local_4 = CONCAT31(local_4._1_3_,0xe);
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00414c80(s_gfx_interface_bg_division2_bmp_0085aca0);
      goto LAB_005ccc30;
    }
  }
  uVar3 = 0;
LAB_005ccc30:
  local_4 = local_4 & 0xffffff00;
  *(undefined4 *)((int)param_1 + 0x10a) = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 0x10;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_brigades_box_bmp_0085ac60);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x10e) = uVar3;
  pvVar2 = operator_new(0x3e);
  local_4._0_1_ = 0x11;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00437040(0xdc,0xfc,0);
  }
  local_4._0_1_ = 0;
  param_1[0x45] = uVar3;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x119) = 0;
  *(undefined4 *)((int)param_1 + 0x11a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x11e) = 0x8c;
  pvVar2 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  if (pvVar2 == (void *)0x0) {
    param_1[0x311] = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_details_bmp_0085ac40);
    param_1[0x311] = uVar3;
  }
  ExceptionList = local_c;
  return param_1;
}


