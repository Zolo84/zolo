// FUN_007435d0 @ 7435d0 size=82

void __fastcall FUN_007435d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007df2a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007fa18c;
  local_4 = 0;
  FUN_00757780();
  local_4 = 0xffffffff;
  FUN_00757450();
  ExceptionList = local_c;
  return;
}


