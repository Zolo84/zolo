// FUN_0075a690 @ 75a690 size=141

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0075a690(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e00c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428000();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *param_1 = &PTR_FUN_007fa404;
  param_1[2] = &PTR_LAB_007fa3ec;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007fa3e4;
  *(undefined4 *)((int)param_1 + 0x16) = 5;
  *(undefined4 *)((int)param_1 + 0x1a) = 1;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  param_1[8] = _DAT_0088f28c;
  *(undefined2 *)(param_1 + 9) = DAT_0088f28e._2_2_;
  ExceptionList = local_c;
  return param_1;
}


