// FUN_004e2c80 @ 4e2c80 size=117

undefined4 * __fastcall FUN_004e2c80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bfe23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00417900();
  param_1[0xc] = &PTR_FUN_007e4c84;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *param_1 = &PTR_FUN_007e7fcc;
  param_1[2] = &PTR_LAB_007e7fc8;
  *(undefined1 *)((int)param_1 + 0x4d) = 1;
  local_4 = 1;
  *(undefined1 *)(param_1[3] + 0x68) = 1;
  FUN_004182e0(2);
  ExceptionList = local_c;
  return param_1;
}


