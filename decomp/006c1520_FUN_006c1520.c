// FUN_006c1520 @ 6c1520 size=520

undefined4 * __fastcall FUN_006c1520(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d7f04;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[6] = &PTR_LAB_007e378c;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  *(int *)((int)param_1 + 0x32) = (int)&PTR_LAB_007e378c;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x13] = &PTR_LAB_007e378c;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  *(undefined1 *)((int)param_1 + 0x76) = 0;
  *(int *)((int)param_1 + 0x66) = (int)&PTR_LAB_007e378c;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x20] = &PTR_LAB_007e378c;
  *(undefined4 *)((int)param_1 + 0xb2) = 0;
  *(undefined4 *)((int)param_1 + 0xb6) = 0;
  *(undefined4 *)((int)param_1 + 0xba) = 0;
  *(undefined1 *)((int)param_1 + 0xbe) = 0;
  *(undefined ***)((int)param_1 + 0xae) = &PTR_FUN_007e5258;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x31] = &PTR_LAB_007e378c;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x38] = &PTR_LAB_007e378c;
  local_4 = 7;
  *param_1 = &PTR_FUN_007f7244;
  param_1[1] = 0x3e4ccccd;
  param_1[4] = 1;
  param_1[5] = 10;
  *(undefined4 *)((int)param_1 + 0x2a) = 1;
  *(undefined4 *)((int)param_1 + 0x2e) = 5;
  param_1[0x11] = 1;
  param_1[0x12] = 5;
  *(undefined4 *)((int)param_1 + 0x5e) = 1;
  *(undefined4 *)((int)param_1 + 0x62) = 5;
  param_1[0x1e] = 1;
  param_1[0x1f] = 5;
  *(undefined4 *)((int)param_1 + 0xaa) = 1;
  param_1[0x30] = 5;
  *(undefined4 *)((int)param_1 + 0x92) = 1;
  *(undefined4 *)((int)param_1 + 0x96) = 10;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = 1;
  *(undefined4 *)((int)param_1 + 0xa2) = 10;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0xd6) = 1;
  param_1[0x36] = 0x76c;
  param_1[0x37] = 0x79a;
  (**(code **)(param_1[6] + 0x10))();
  (**(code **)(*(int *)((int)param_1 + 0x32) + 0x10))();
  (**(code **)(param_1[0x13] + 0x10))();
  (**(code **)(*(int *)((int)param_1 + 0x66) + 0x10))();
  (**(code **)(param_1[0x20] + 0x10))();
  (**(code **)(param_1[0x31] + 0x10))();
  (**(code **)(param_1[0x38] + 0x10))();
  ExceptionList = local_c;
  return param_1;
}


