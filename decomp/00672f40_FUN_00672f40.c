// FUN_00672f40 @ 672f40 size=143

undefined4 * __thiscall FUN_00672f40(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d47f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006a2880(param_2);
  local_4 = 0;
  param_1[0x23] = 0;
  FUN_00669770(0);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2b] = &PTR_FUN_007e7084;
  param_1[0x31] = 0;
  *param_1 = &PTR_FUN_007f0efc;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  ExceptionList = local_c;
  return param_1;
}


