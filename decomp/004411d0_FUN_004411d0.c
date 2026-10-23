// FUN_004411d0 @ 4411d0 size=1499

undefined4 * __thiscall FUN_004411d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bb179;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00413d60(s_dialogue_act_0083c264);
  if (param_2 == 0x10) {
    pvVar2 = operator_new(0x7e);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win_b_bmp_0083c24c);
    }
    local_4 = 0xffffffff;
    *param_1 = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 1;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win_bl_bmp_0083c230);
    }
    local_4 = 0xffffffff;
    param_1[1] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 2;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win_br_bmp_0083c214);
    }
    local_4 = 0xffffffff;
    param_1[2] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 3;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win_c_bmp_0083c1fc);
    }
    local_4 = 0xffffffff;
    param_1[3] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 4;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win_cl_bmp_0083c1e0);
    }
    local_4 = 0xffffffff;
    param_1[4] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 5;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win_cr_bmp_0083c1c4);
    }
    local_4 = 0xffffffff;
    param_1[5] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 6;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win_t_bmp_0083c1ac);
    }
    local_4 = 0xffffffff;
    param_1[6] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 7;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win_tl_bmp_0083c190);
    }
    local_4 = 0xffffffff;
    param_1[7] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 8;
    if (pvVar2 == (void *)0x0) {
LAB_0044173c:
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win_tr_bmp_0083c174);
    }
  }
  else if (param_2 == 8) {
    pvVar2 = operator_new(0x7e);
    local_4 = 9;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win8_b_bmp_0083c158);
    }
    local_4 = 0xffffffff;
    *param_1 = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 10;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win8_bl_bmp_0083c13c);
    }
    local_4 = 0xffffffff;
    param_1[1] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0xb;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win8_br_bmp_0083c120);
    }
    local_4 = 0xffffffff;
    param_1[2] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0xc;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win8_c_bmp_0083c104);
    }
    local_4 = 0xffffffff;
    param_1[3] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0xd;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win8_cl_bmp_0083c0e8);
    }
    local_4 = 0xffffffff;
    param_1[4] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0xe;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win8_cr_bmp_0083c0cc);
    }
    local_4 = 0xffffffff;
    param_1[5] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0xf;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win8_t_bmp_0083c0b0);
    }
    local_4 = 0xffffffff;
    param_1[6] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0x10;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_win8_tl_bmp_0083c094);
    }
    local_4 = 0xffffffff;
    param_1[7] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0x11;
    if (pvVar2 == (void *)0x0) goto LAB_0044173c;
    uVar3 = FUN_00414c80(s_gfx_interface_win8_tr_bmp_0083c078);
  }
  else {
    if (param_2 != 7) goto LAB_00441745;
    pvVar2 = operator_new(0x7e);
    local_4 = 0x12;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_tt32_bmp_0083c060);
    }
    local_4 = 0xffffffff;
    *param_1 = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0x13;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_tt31_bmp_0083c048);
    }
    local_4 = 0xffffffff;
    param_1[1] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0x14;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_tt33_bmp_0083c030);
    }
    local_4 = 0xffffffff;
    param_1[2] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0x15;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_tt22_bmp_0083c018);
    }
    local_4 = 0xffffffff;
    param_1[3] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0x16;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_tt21_bmp_0083c000);
    }
    local_4 = 0xffffffff;
    param_1[4] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0x17;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_tt23_bmp_0083bfe8);
    }
    local_4 = 0xffffffff;
    param_1[5] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0x18;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_tt12_bmp_0083bfd0);
    }
    local_4 = 0xffffffff;
    param_1[6] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0x19;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_tt11_bmp_0083bfb8);
    }
    local_4 = 0xffffffff;
    param_1[7] = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4 = 0x1a;
    if (pvVar2 == (void *)0x0) goto LAB_0044173c;
    uVar3 = FUN_00414c80(s_gfx_interface_tt13_bmp_0083bfa0);
  }
  local_4 = 0xffffffff;
  param_1[8] = uVar3;
LAB_00441745:
  FUN_00415f20(uVar1);
  FUN_00415f20(uVar1);
  FUN_00415f20(uVar1);
  FUN_00415f20(uVar1);
  FUN_00415f20(uVar1);
  FUN_00415f20(uVar1);
  FUN_00415f20(uVar1);
  FUN_00415f20(uVar1);
  FUN_00415f20(uVar1);
  ExceptionList = local_c;
  return param_1;
}


