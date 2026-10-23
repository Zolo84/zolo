// FUN_004b56e0 @ 4b56e0 size=82

void __fastcall FUN_004b56e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007be648;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e71c0;
  local_4 = 0;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_004bc880();
  ExceptionList = local_c;
  return;
}


