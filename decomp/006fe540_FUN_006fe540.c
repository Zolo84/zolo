// FUN_006fe540 @ 6fe540 size=110

void __fastcall FUN_006fe540(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f84e8;
  param_1[2] = &PTR_LAB_007f84e4;
  FUN_00796cd8(param_1[3]);
  local_4 = 0;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


