// FUN_0042b880 @ 42b880 size=84

void __fastcall FUN_0042b880(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007ba05c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_007e3d5c;
  local_8 = 0;
  FUN_0042c100();
  local_8 = 0xffffffff;
  FUN_0042b940();
  ExceptionList = local_10;
  return;
}


