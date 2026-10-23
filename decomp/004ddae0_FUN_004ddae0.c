// FUN_004ddae0 @ 4ddae0 size=94

void __fastcall FUN_004ddae0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bfbe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e7f54;
  param_1[1] = &PTR_LAB_007e7f58;
  local_4 = 0;
  FUN_004e05f0();
  local_4 = 0xffffffff;
  FUN_004d89c0();
  ExceptionList = local_c;
  return;
}


