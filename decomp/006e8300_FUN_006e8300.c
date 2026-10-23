// FUN_006e8300 @ 6e8300 size=111

void __fastcall FUN_006e8300(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007da0f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f7ef8;
  param_1[2] = &PTR_LAB_007f7f0c;
  local_4 = 0;
  FUN_006e8370();
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


