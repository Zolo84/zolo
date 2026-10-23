// FUN_00466af0 @ 466af0 size=101

void __fastcall FUN_00466af0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bc9f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e64c0;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e64a4;
  param_1[2] = &PTR_LAB_007e64ac;
  local_4 = 0;
  FUN_00428ca0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


