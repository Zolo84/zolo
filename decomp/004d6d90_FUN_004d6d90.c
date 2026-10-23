// FUN_004d6d90 @ 4d6d90 size=164

void __fastcall FUN_004d6d90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007bfa27;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e7ee4;
  param_1[2] = &PTR_LAB_007e7ee0;
  param_1[3] = &PTR_LAB_007e7edc;
  param_1[4] = &PTR_LAB_007e7ed8;
  param_1[5] = &PTR_FUN_007e7ed4;
  local_4 = 1;
  FUN_004e05f0();
  local_4 = local_4 & 0xffffff00;
  FUN_004d89c0();
  local_4 = 2;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


