// FUN_004ca57b @ 4ca57b size=97

void __fastcall FUN_004ca57b(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007bf253;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_007e7d34;
  local_8 = 0;
  if (param_1[0x1b] != 0) {
    FUN_004ccea4(param_1);
  }
  local_8 = 0xffffffff;
  FUN_004c8bc2();
  ExceptionList = local_10;
  return;
}


