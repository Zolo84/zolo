// FUN_004c56b0 @ 4c56b0 size=123

void __fastcall FUN_004c56b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bf098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e7a84;
  param_1[2] = &PTR_LAB_007e7a70;
  local_4 = 0;
  FUN_00582940(param_1[0x2c]);
  FUN_00796cd8(param_1[0x2c]);
  param_1[0x2c] = 0;
  local_4 = 0xffffffff;
  FUN_004b84a0();
  ExceptionList = local_c;
  return;
}


