// FUN_004f11f0 @ 4f11f0 size=101

void __fastcall FUN_004f11f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c0308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e82e8;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e82e0;
  param_1[2] = &PTR_LAB_007e8308;
  local_4 = 0;
  FUN_00428ca0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


