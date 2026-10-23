// FUN_005f3f20 @ 5f3f20 size=730

undefined4 * __fastcall FUN_005f3f20(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cee25;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00414c80(s_gfx_interface_bg_convoys_bmp_0085da00);
  local_4 = 0;
  *param_1 = &PTR_FUN_007ed888;
  param_1[2] = &PTR_LAB_007ed884;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 300;
    iVar2 = FUN_00415bd0(300,0,0);
    uVar3 = FUN_00434930(iVar2 + -0x3a,uVar3,uVar4,uVar5);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x7e) = uVar3;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(s_CONVOY_CREATE_RES_0085d9ec);
    uVar3 = FUN_0043acc0(uVar4,uVar3,uVar5);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = uVar3;
  pvVar1 = operator_new(0x1aa);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(s_CONVOY_CREATE_SUP_0085d9d8);
    uVar3 = FUN_0043acc0(uVar4,uVar3,uVar5);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = uVar3;
  FUN_005f4de0();
  *(undefined1 *)((int)param_1 + 0x92) = 1;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x26] = uVar3;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x27] = uVar3;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  param_1[0x28] = uVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined1 *)(param_1[0x26] + 0xa2) = 0;
  *(undefined1 *)(param_1[0x27] + 0xa2) = 0;
  *(undefined1 *)(param_1[0x28] + 0xa2) = 0;
  if (*(int *)(*DAT_00d12b40 + 0x38a) == 0) {
    FUN_00433930();
  }
  else {
    FUN_00433950();
  }
  if (*(int *)(*DAT_00d12b40 + 0x38e) == 0) {
    FUN_00433930();
  }
  else {
    FUN_00433950();
  }
  if (*(int *)(*DAT_00d12b40 + 0x392) == 0) {
    FUN_00433930();
  }
  else {
    FUN_00433950();
  }
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  pvVar1 = operator_new(0x1aa);
  local_4 = CONCAT31(local_4._1_3_,7);
  if (pvVar1 == (void *)0x0) {
    param_1[0x25] = 0;
  }
  else {
    uVar5 = 0x9c;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(s_CLOSE_0085ac18);
    uVar3 = FUN_0043acc0(uVar4,uVar3,uVar5);
    param_1[0x25] = uVar3;
  }
  ExceptionList = pvStack_c;
  return param_1;
}


