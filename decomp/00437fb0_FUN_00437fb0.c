// FUN_00437fb0 @ 437fb0 size=125

void __fastcall FUN_00437fb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007baa50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e4320;
  param_1[3] = &PTR_LAB_007e431c;
  param_1[2] = &PTR_LAB_007e4334;
  local_4 = 0;
  FUN_00796cd8(param_1[6]);
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


