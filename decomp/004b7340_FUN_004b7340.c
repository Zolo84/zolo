// FUN_004b7340 @ 4b7340 size=82

void __fastcall FUN_004b7340(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007be758;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e7224;
  local_4 = 0;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_004bc880();
  ExceptionList = local_c;
  return;
}


