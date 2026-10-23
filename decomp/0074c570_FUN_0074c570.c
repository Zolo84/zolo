// FUN_0074c570 @ 74c570 size=95

undefined4 * __thiscall FUN_0074c570(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007df7d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = param_2;
  local_4 = 0;
  *param_1 = &PTR_FUN_008000d0;
  FUN_0079a34a(&DAT_0083f6f4);
  FUN_0079a47a();
  ExceptionList = local_c;
  return param_1;
}


