// FUN_005d9cb0 @ 5d9cb0 size=103

undefined4 * __thiscall
FUN_005d9cb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cd9f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005c4430(param_2,param_3,param_4);
  *param_1 = &PTR_FUN_007ecf10;
  param_1[2] = &PTR_LAB_007ecf0c;
  local_4 = 0;
  FUN_00652fa0();
  ExceptionList = local_c;
  return param_1;
}


