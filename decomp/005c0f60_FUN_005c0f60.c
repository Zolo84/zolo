// FUN_005c0f60 @ 5c0f60 size=90

undefined4 * __thiscall FUN_005c0f60(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cc718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  *(undefined4 *)((int)param_1 + 0x3e) = param_2;
  local_4 = 0;
  *param_1 = &PTR_FUN_007ec664;
  param_1[2] = &PTR_LAB_007ec660;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  FUN_005c1020();
  ExceptionList = local_c;
  return param_1;
}


