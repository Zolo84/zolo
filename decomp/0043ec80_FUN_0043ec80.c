// FUN_0043ec80 @ 43ec80 size=199

undefined4 * __thiscall FUN_0043ec80(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007baee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043e250(param_3,0);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x22] = &PTR_LAB_007e36b4;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00583720();
  *(undefined4 *)((int)param_1 + 0x9a) = &PTR_FUN_007e3858;
  *(undefined ***)((int)param_1 + 0xa2) = &PTR_LAB_007e386c;
  param_1[0x22] = &PTR_FUN_007e36fc;
  *(undefined4 *)((int)param_1 + 0x9a) = &PTR_LAB_007e36e8;
  *(undefined ***)((int)param_1 + 0xa2) = &PTR_LAB_007e36e4;
  *param_1 = &PTR_FUN_007e4610;
  param_1[2] = &PTR_LAB_007e460c;
  *(undefined1 *)((int)param_1 + 0xa6) = param_2;
  ExceptionList = local_c;
  return param_1;
}


