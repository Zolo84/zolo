// FUN_0043acc0 @ 43acc0 size=106

undefined4 * __thiscall
FUN_0043acc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007babb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433660();
  local_4 = 0;
  *param_1 = &PTR_FUN_007e44a8;
  param_1[2] = &PTR_LAB_007e44a4;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e44a0;
  FUN_0043ade0(param_2,param_3,param_4,0);
  ExceptionList = local_c;
  return param_1;
}


