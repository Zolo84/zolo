// FUN_004b5420 @ 4b5420 size=123

void __fastcall FUN_004b5420(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007be608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e7134;
  param_1[2] = &PTR_LAB_007e7120;
  local_4 = 0;
  FUN_00582940(param_1[0x3b]);
  FUN_00796cd8(param_1[0x3b]);
  param_1[0x3b] = 0;
  local_4 = 0xffffffff;
  FUN_004b84a0();
  ExceptionList = local_c;
  return;
}


