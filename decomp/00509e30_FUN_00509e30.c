// FUN_00509e30 @ 509e30 size=154

void __fastcall FUN_00509e30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007c162f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e8710;
  param_1[2] = &PTR_FUN_007e8708;
  param_1[3] = &PTR_LAB_007e86f0;
  local_4 = 1;
  FUN_007a77fa(*(undefined4 *)((int)param_1 + 0x2e));
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  FUN_00425ba0(s_deleted_0084a170);
  DAT_00adb0ec = DAT_00adb0ec + -1;
  local_4 = local_4 & 0xffffff00;
  FUN_00428200();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


