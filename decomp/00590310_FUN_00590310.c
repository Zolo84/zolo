// FUN_00590310 @ 590310 size=933

undefined4 * __thiscall FUN_00590310(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9e0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0058ed20(param_2);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  local_4 = 0;
  param_1[0x4b] = DAT_00bd1bac;
  param_1[0x46] = &PTR_LAB_007e474c;
  puVar1 = operator_new(0x1e);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &PTR_LAB_007e36b4;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00418f40();
    *(undefined ***)((int)puVar1 + 0x12) = &PTR_LAB_007e36e8;
    *puVar1 = &PTR_FUN_007e36fc;
    *(undefined ***)((int)puVar1 + 0x1a) = &PTR_LAB_007e36e4;
  }
  param_1[0x47] = puVar1;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x51] = &PTR_LAB_007e3b70;
  param_1[0x46] = &PTR_LAB_007eb45c;
  *(undefined4 *)((int)param_1 + 0x156) = 0;
  *(undefined4 *)((int)param_1 + 0x162) = param_3;
  *(undefined1 *)((int)param_1 + 0x166) = 1;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  *(undefined1 *)(param_1 + 0x1ab) = 0;
  param_1[0x1a7] = &PTR_LAB_007eb42c;
  local_4._0_1_ = 4;
  *param_1 = &PTR_FUN_007eb3d0;
  param_1[2] = &PTR_LAB_007eb3cc;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x15a) = 0;
  param_1[0x19a] = 0;
  pvVar2 = operator_new(0x72);
  local_4._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00434930(0x3b0,param_3,0,0);
  }
  local_4._0_1_ = 4;
  *(undefined4 *)((int)param_1 + 0x15a) = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 6;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_eyr_eyr_tablet_ule_008582ec);
  }
  local_4._0_1_ = 4;
  param_1[0x19c] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 7;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_eyr_eyr_tablet_uce_008582c4);
  }
  local_4._0_1_ = 4;
  param_1[0x19d] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 8;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_eyr_eyr_tablet_uri_0085829c);
  }
  local_4._0_1_ = 4;
  param_1[0x19e] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 9;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_eyr_eyr_tablet_lle_00858274);
  }
  local_4._0_1_ = 4;
  param_1[0x19f] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 10;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_eyr_eyr_tablet_lce_00858248);
  }
  local_4._0_1_ = 4;
  param_1[0x1a0] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 0xb;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_eyr_eyr_tablet_lri_00858220);
  }
  local_4._0_1_ = 4;
  param_1[0x1a1] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 0xc;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_eyr_eyr_tablet_mle_008581f8);
  }
  local_4._0_1_ = 4;
  param_1[0x1a2] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 0xd;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_eyr_eyr_tablet_mri_008581d0);
  }
  local_4._0_1_ = 4;
  param_1[0x1a3] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 0xe;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_eyr_eyr_tablet_lin_008581a8);
  }
  local_4._0_1_ = 4;
  param_1[0x1a4] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 0xf;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_eyr_eyr_tablet_lin_00858180);
  }
  local_4._0_1_ = 4;
  param_1[0x1a5] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,0x10);
  if (pvVar2 == (void *)0x0) {
    param_1[0x1a6] = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_eyr_eyr_tablet_cen_00858158);
    param_1[0x1a6] = uVar3;
  }
  ExceptionList = local_c;
  return param_1;
}


