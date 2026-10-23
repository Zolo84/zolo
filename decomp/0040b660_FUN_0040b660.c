// FUN_0040b660 @ 40b660 size=192

undefined4 * __fastcall FUN_0040b660(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00416730();
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined4 *)((int)param_1 + 0x96) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x9a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  *(undefined4 *)((int)param_1 + 0xd2) = 0;
  *(undefined4 *)((int)param_1 + 0xda) = 0;
  *(undefined4 *)((int)param_1 + 0xe2) = 0;
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0xce) = 0;
  *(undefined4 *)((int)param_1 + 0xd6) = 0;
  *(undefined4 *)((int)param_1 + 0xde) = 0x40440000;
  *(undefined4 *)((int)param_1 + 0xe6) = 0;
  *(undefined1 *)((int)param_1 + 0xea) = 1;
  param_1[0x3b] = 0;
  *param_1 = &PTR_FUN_007e338c;
  param_1[2] = &PTR_LAB_007e3388;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e3384;
  FUN_00415a20(0,0);
  ExceptionList = local_c;
  return param_1;
}


