// FUN_005d6160 @ 5d6160 size=1350

undefined4 * __thiscall FUN_005d6160(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cd82e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061e1d0(param_2);
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0xca) = 0;
  *(undefined2 *)((int)param_1 + 0xce) = 0;
  param_1[0x34] = 0;
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x10a) = 0;
  *param_1 = &PTR_FUN_007ecdc4;
  param_1[2] = &PTR_LAB_007ecdc0;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ecdbc;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(200,0x13f,0,0);
  }
  local_4._0_1_ = 0;
  param_1[0x30] = uVar2;
  puVar3 = operator_new(0x1aa);
  local_4._0_1_ = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar5 = 0x40;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(&DAT_0085b57c);
    FUN_0043acc0(uVar4,uVar2,uVar5);
    *puVar3 = &PTR_FUN_007ecd58;
    puVar3[2] = &PTR_LAB_007ecd54;
    *(undefined ***)((int)puVar3 + 0x7e) = &PTR_LAB_007ecd50;
    puVar3[0x22] = 0xe;
  }
  local_4._0_1_ = 0;
  param_1[0x35] = puVar3;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar5 = 0x56;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(s_LEADER_PROMOTE_0085b56c);
    uVar2 = FUN_0043acc0(uVar4,uVar2,uVar5);
  }
  local_4._0_1_ = 0;
  param_1[0x36] = uVar2;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar5 = 0x56;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(s_LEADER_REMOVE_0085b55c);
    uVar2 = FUN_0043acc0(uVar4,uVar2,uVar5);
  }
  local_4._0_1_ = 0;
  param_1[0x37] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433660();
  }
  local_4._0_1_ = 0;
  param_1[0x38] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_sort_skill__0085b538,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x3b] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_sort_rank_b_0085b514,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x39] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_sort_alphab_0085b4e8,0,0xffffffff);
  }
  param_1[0x3a] = uVar2;
  local_4._0_1_ = 0;
  *(undefined1 *)(param_1[0x3b] + 0x68) = 1;
  *(undefined1 *)(param_1[0x39] + 0x68) = 1;
  *(undefined1 *)(param_1[0x3a] + 0x68) = 1;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_leader_back_bmp_0085b4b0);
  }
  local_4._0_1_ = 0;
  param_1[0x2f] = uVar2;
  param_1[0x31] = 0;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_btn_medium_bmp_0085ace4,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x3e] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0xb;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_btn_medium_bmp_0085ace4,0,0xffffffff);
  }
  param_1[0x3d] = uVar2;
  local_4._0_1_ = 0;
  *(undefined1 *)(param_1[0x3e] + 0xa2) = 0;
  *(undefined1 *)(param_1[0x3d] + 0xa2) = 0;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0xc;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_hr_bmp_0085b46c);
  }
  local_4._0_1_ = 0;
  param_1[0x3c] = uVar2;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((int)param_1 + 0x102) = 0;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0xd;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_book_bmp_0085b4d0,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0xfe) = uVar2;
  pvVar1 = operator_new(0x3e);
  local_4._0_1_ = 0xe;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00437040(0xe8,0x154,0);
  }
  *(undefined4 *)((int)param_1 + 0x106) = uVar2;
  local_4._0_1_ = 0;
  DAT_0085b494 = 0x1f;
  DAT_0085b498 = 0x1f;
  DAT_0085b49c = 0x1f;
  DAT_0085b4a0 = 0x1f;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0xf;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_btn_medium_bmp_0085ace4,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x10e) = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0x10;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_btn_medium_bmp_0085ace4,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x112) = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0x11;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_btn_medium_bmp_0085ace4,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x116) = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_btn_medium_bmp_0085ace4,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x11a) = uVar2;
  *(undefined1 *)(*(int *)((int)param_1 + 0x10e) + 0xa2) = 0;
  *(undefined1 *)(*(int *)((int)param_1 + 0x112) + 0xa2) = 0;
  *(undefined1 *)(*(int *)((int)param_1 + 0x116) + 0xa2) = 0;
  *(undefined1 *)(*(int *)((int)param_1 + 0x11a) + 0xa2) = 0;
  ExceptionList = local_c;
  return param_1;
}


