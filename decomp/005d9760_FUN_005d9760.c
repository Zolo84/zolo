// FUN_005d9760 @ 5d9760 size=79

void __fastcall FUN_005d9760(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cd9d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007ecebc;
  local_4 = 0;
  FUN_0052ac00();
  local_4 = 0xffffffff;
  FUN_00527230();
  ExceptionList = local_c;
  return;
}


