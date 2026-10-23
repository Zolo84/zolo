// FUN_004169a0 @ 4169a0 size=101

void __fastcall FUN_004169a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007b9cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e3738;
  param_1[2] = &PTR_LAB_007e3734;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e3730;
  local_4 = 0;
  FUN_004d89c0();
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = local_c;
  return;
}


