// FUN_00759390 @ 759390 size=158

undefined4 * __fastcall FUN_00759390(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dff88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428000();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007fa384;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[10] = &PTR_LAB_007fa354;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x52) = 0;
  *(undefined ***)((int)param_1 + 0x42) = &PTR_LAB_007e5dd4;
  param_1[2] = &PTR_LAB_007fa33c;
  *param_1 = &PTR_FUN_007fa32c;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007fa324;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  ExceptionList = local_c;
  return param_1;
}


