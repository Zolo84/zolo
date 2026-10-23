// FUN_0042a441 @ 42a441 size=81

void __fastcall FUN_0042a441(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007ba026;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_007e3d2c;
  local_8 = 0;
  FUN_0042c0c0();
  local_8 = 0xffffffff;
  FUN_0042b880();
  ExceptionList = local_10;
  return;
}


