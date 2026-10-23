// FUN_004f0da0 @ 4f0da0 size=195

undefined4 * __thiscall FUN_004f0da0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c0273;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428b00();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  *(undefined2 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  param_1[2] = &PTR_LAB_007e8308;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_007e82e8;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e82e0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  param_1[10] = 0;
  param_1[0xc] = 1;
  param_1[0xd] = 0;
  param_1[8] = 1;
  param_1[9] = 1;
  param_1[0xb] = 0;
  FUN_00425ba0(param_2);
  *(undefined4 *)((int)param_1 + 0x52) = 1;
  *(undefined4 *)((int)param_1 + 0x42) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x56) = 0;
  *(undefined1 *)((int)param_1 + 0x57) = 1;
  *(undefined1 *)(param_1 + 0x16) = 1;
  ExceptionList = local_c;
  return param_1;
}


