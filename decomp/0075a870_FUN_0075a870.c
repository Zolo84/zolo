// FUN_0075a870 @ 75a870 size=114

void __fastcall FUN_0075a870(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007e0128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007fa41c;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007fa414;
  param_1[2] = &PTR_LAB_007fa42c;
  local_4 = 0;
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1[7] + 0xd8) = 0;
  }
  FUN_00428ca0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


