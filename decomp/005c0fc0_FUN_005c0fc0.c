// FUN_005c0fc0 @ 5c0fc0 size=96

undefined4 * __thiscall FUN_005c0fc0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cc738;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  local_4 = 0;
  *param_1 = &PTR_FUN_007ec664;
  param_1[2] = &PTR_LAB_007ec660;
  *(undefined4 *)((int)param_1 + 0x42) = param_2;
  *(undefined4 *)((int)param_1 + 0x3a) = 0xffffffff;
  FUN_005c1020();
  ExceptionList = local_c;
  return param_1;
}


