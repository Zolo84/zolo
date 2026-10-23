// FUN_005c5230 @ 5c5230 size=103

undefined4 * __thiscall
FUN_005c5230(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cc928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005c4430(param_2,param_3,param_4);
  *param_1 = &PTR_FUN_007ec7d4;
  param_1[2] = &PTR_LAB_007ec7d0;
  local_4 = 0;
  FUN_00652fa0();
  ExceptionList = local_c;
  return param_1;
}


