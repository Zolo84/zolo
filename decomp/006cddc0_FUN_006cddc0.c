// FUN_006cddc0 @ 6cddc0 size=505

undefined4 * __fastcall FUN_006cddc0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d8f14;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00441ab0();
  *param_1 = &PTR_FUN_007f73d4;
  param_1[2] = &PTR_LAB_007f73d0;
  local_4 = 0;
  FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar1 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  FUN_00441c10(0,400,200,0x10,0xff,0);
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x16] = uVar3;
  pvVar2 = operator_new(0x1aa);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = uVar1;
    uVar4 = FUN_0042b6c9(s_HINT_BTN_CLOSE_0086b81c);
    uVar3 = FUN_0043acc0(uVar4,uVar3,uVar5);
  }
  local_4._0_1_ = 0;
  param_1[0x17] = uVar3;
  pvVar2 = operator_new(0x1aa);
  local_4._0_1_ = 3;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = uVar1;
    uVar4 = FUN_0042b6c9(s_HINT_BTN_NEXT_0086b80c);
    uVar3 = FUN_0043acc0(uVar4,uVar3,uVar5);
  }
  local_4._0_1_ = 0;
  param_1[0x18] = uVar3;
  pvVar2 = operator_new(0x1aa);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = FUN_0042b6c9(s_HINT_BTN_PREVIOUS_0086b7f8);
    uVar1 = FUN_0043acc0(uVar3,uVar1,uVar4);
  }
  param_1[0x19] = uVar1;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00415d30(param_1[4]);
  *(undefined1 *)(param_1[0x16] + 0xa2) = 0;
  if (*(int *)(*DAT_00d12b40 + 0x37e) != 0) {
    FUN_00433950();
  }
  FUN_00415d30(param_1[4]);
  FUN_00415d30(param_1[4]);
  FUN_00415d30(param_1[4]);
  *(undefined4 *)(param_1[0x17] + 0x88) = 0xd;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  FUN_006cdfe0();
  FUN_006d4270(param_1);
  ExceptionList = pvStack_c;
  return param_1;
}


