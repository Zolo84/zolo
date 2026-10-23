// FUN_00415fd0 @ 415fd0 size=111

undefined4 * __thiscall FUN_00415fd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9c08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401060(param_2,1,param_3);
  local_4 = 0;
  FUN_004090c0(param_2);
  *(undefined4 *)((int)param_1 + 0x35e) = 1;
  *param_1 = &PTR_FUN_007e36a4;
  param_1[10] = &PTR_LAB_007e36a0;
  ExceptionList = local_c;
  return param_1;
}


