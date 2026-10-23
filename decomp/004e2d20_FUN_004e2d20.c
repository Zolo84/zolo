// FUN_004e2d20 @ 4e2d20 size=89

void __fastcall FUN_004e2d20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bfe38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e7fcc;
  param_1[2] = &PTR_LAB_007e7fc8;
  local_4 = 0;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_00417cb0();
  ExceptionList = local_c;
  return;
}


