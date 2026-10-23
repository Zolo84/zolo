// FUN_006af940 @ 6af940 size=128

undefined4 * __fastcall FUN_006af940(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d5e81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x11] = &PTR_FUN_007e4c84;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x16] = &PTR_LAB_007f3a6c;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  *(undefined4 *)((int)param_1 + 0x7a) = 0;
  *(undefined1 *)((int)param_1 + 0x7e) = 0;
  *(undefined ***)((int)param_1 + 0x6e) = &PTR_FUN_007e4c84;
  local_4 = 2;
  *param_1 = &PTR_FUN_007f7154;
  FUN_006afa70();
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  ExceptionList = local_c;
  return param_1;
}


