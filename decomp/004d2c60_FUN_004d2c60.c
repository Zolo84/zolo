// FUN_004d2c60 @ 4d2c60 size=329

undefined4 * __thiscall FUN_004d2c60(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bf713;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428b00();
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  FUN_00442b90();
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x3e] = &PTR_LAB_007e378c;
  *(undefined4 *)((int)param_1 + 0x10e) = 0;
  *(undefined4 *)((int)param_1 + 0x112) = 0;
  *(undefined4 *)((int)param_1 + 0x116) = 0;
  *(undefined1 *)((int)param_1 + 0x11a) = 0;
  *(undefined ***)((int)param_1 + 0x10a) = &PTR_LAB_007e378c;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((int)param_1 + 0x126) = 0;
  *(undefined1 *)((int)param_1 + 0x125) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined2 *)((int)param_1 + 0x14e) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((int)param_1 + 0x14b) = 0;
  *(undefined1 *)((int)param_1 + 0x14a) = 0;
  *param_1 = &PTR_FUN_007e7ec0;
  param_1[2] = &PTR_LAB_007e7eac;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e7ea4;
  *(undefined4 *)((int)param_1 + 0x12e) = 0;
  *(undefined4 *)((int)param_1 + 0x132) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(int *)((int)param_1 + 0x12a) = param_2;
  *(undefined4 *)((int)param_1 + 0x136) = 0;
  *(undefined4 *)((int)param_1 + 0x13a) = 0;
  *(undefined4 *)((int)param_1 + 0x13e) = 0;
  *(undefined4 *)((int)param_1 + 0x142) = 0;
  *(undefined4 *)((int)param_1 + 0x146) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  *(undefined1 *)((int)param_1 + 0x17) = 1;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 1;
  param_1[0x54] = *(undefined4 *)(param_2 + 6);
  param_1[0x55] = *(undefined4 *)(param_2 + 6);
  ExceptionList = local_c;
  return param_1;
}


