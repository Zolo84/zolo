// FUN_00680d50 @ 680d50 size=378

undefined4 * __thiscall FUN_00680d50(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d4b28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_LAB_007f3a6c;
  local_4 = 0;
  FUN_006a2880(param_2);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x28] = &PTR_FUN_007e7a0c;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x2d] = &PTR_FUN_007e7084;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x32] = &PTR_LAB_007e6edc;
  *(undefined4 *)((int)param_1 + 0xde) = 0;
  *(undefined4 *)((int)param_1 + 0xe2) = 0;
  *(undefined4 *)((int)param_1 + 0xe6) = 0;
  *(undefined1 *)((int)param_1 + 0xea) = 0;
  *(undefined ***)((int)param_1 + 0xda) = &PTR_LAB_007e378c;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x43] = &PTR_LAB_007f3a6c;
  *(undefined4 *)((int)param_1 + 0x12e) = 0;
  *(undefined4 *)((int)param_1 + 0x132) = 0;
  *(undefined4 *)((int)param_1 + 0x136) = 0;
  *(undefined1 *)((int)param_1 + 0x13a) = 0;
  *(undefined ***)((int)param_1 + 0x12a) = &PTR_LAB_007e378c;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f3864;
  *param_1 = &PTR_FUN_007f3834;
  *(undefined1 *)((int)param_1 + 0x11e) = 1;
  param_1[0x3d] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)((int)param_1 + 0x125) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  *(undefined4 *)((int)param_1 + 0x126) = 0;
  ExceptionList = local_c;
  return param_1;
}


