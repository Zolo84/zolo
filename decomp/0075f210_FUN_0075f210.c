// FUN_0075f210 @ 75f210 size=172

undefined4 * __fastcall FUN_0075f210(undefined4 *param_1)

{
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e03de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428b00();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007e378c;
  *param_1 = &PTR_FUN_007fa4c0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)param_1 + 0x36) = 2;
  param_1[2] = &PTR_LAB_007fa4ac;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007fa4a4;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  param_1[10] = 0;
  param_1[0xb] = 3;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  FUN_00428eb0(local_14);
  FUN_00428d60(local_14);
  ExceptionList = local_c;
  return param_1;
}


