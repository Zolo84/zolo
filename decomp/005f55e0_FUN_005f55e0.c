// FUN_005f55e0 @ 5f55e0 size=373

undefined4 * __thiscall FUN_005f55e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ceeec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414c80(s_gfx_interface_bg_provselect_bmp_0085daa8);
  local_4 = 0;
  FUN_00434930(0xd4,0xf8,0,0);
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_007ed92c;
  param_1[2] = &PTR_LAB_007ed928;
  *(undefined4 *)((int)param_1 + 0x86) = param_2;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_005f5b80();
  puVar1 = operator_new(0x1aa);
  local_4._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar4 = 0x40;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(&DAT_00839384);
    FUN_0043acc0(uVar3,uVar2,uVar4);
    *puVar1 = &PTR_FUN_007e452c;
    puVar1[2] = &PTR_LAB_007e4528;
    *(undefined ***)((int)puVar1 + 0x7e) = &PTR_LAB_007e4524;
    puVar1[0x22] = 0xd;
  }
  local_4._0_1_ = 1;
  *(undefined4 **)((int)param_1 + 0x7e) = puVar1;
  puVar1 = operator_new(0x1aa);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar4 = 0x40;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(s_CANCEL_0083bafc);
    FUN_0043acc0(uVar3,uVar2,uVar4);
    *puVar1 = &PTR_FUN_007ec6b8;
    puVar1[2] = &PTR_LAB_007ec6b4;
    *(undefined ***)((int)puVar1 + 0x7e) = &PTR_LAB_007ec6b0;
    puVar1[0x22] = 0xe;
  }
  *(undefined4 **)((int)param_1 + 0x82) = puVar1;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  ExceptionList = local_c;
  return param_1;
}


