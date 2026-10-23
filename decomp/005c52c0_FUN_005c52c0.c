// FUN_005c52c0 @ 5c52c0 size=96

void __fastcall FUN_005c52c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cc948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007ec7d4;
  param_1[2] = &PTR_LAB_007ec7d0;
  local_4 = 0;
  if (DAT_00d0ca90 != 0) {
    FUN_00652fe0();
  }
  local_4 = 0xffffffff;
  FUN_005c45e0();
  ExceptionList = local_c;
  return;
}


