// FUN_0058eb50 @ 58eb50 size=104

undefined4 * __thiscall
FUN_0058eb50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9c28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  local_4 = 0;
  *param_1 = &PTR_FUN_007eb17c;
  param_1[2] = &PTR_LAB_007eb178;
  *(undefined4 *)((int)param_1 + 0x2e) = param_2;
  FUN_00425ba0(param_3);
  *(undefined4 *)((int)param_1 + 0x132) = param_4;
  ExceptionList = local_c;
  return param_1;
}


