// FUN_006e0b50 @ 6e0b50 size=110

void __fastcall FUN_006e0b50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f7d14;
  param_1[2] = &PTR_LAB_007f7d10;
  FUN_007a77fa(*(undefined4 *)((int)param_1 + 0x3a));
  local_4 = 0;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


