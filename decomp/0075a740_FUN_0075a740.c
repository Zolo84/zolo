// FUN_0075a740 @ 75a740 size=101

void __fastcall FUN_0075a740(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007e00e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007fa404;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007fa3e4;
  param_1[2] = &PTR_LAB_007fa3ec;
  local_4 = 0;
  FUN_00428200();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


