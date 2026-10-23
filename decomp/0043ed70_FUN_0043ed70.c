// FUN_0043ed70 @ 43ed70 size=92

void __fastcall FUN_0043ed70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007baf08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e4610;
  param_1[2] = &PTR_LAB_007e460c;
  local_4 = 0;
  FUN_004161c0();
  local_4 = 0xffffffff;
  FUN_0043e860();
  ExceptionList = local_c;
  return;
}


