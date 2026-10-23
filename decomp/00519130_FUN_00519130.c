// FUN_00519130 @ 519130 size=164

undefined4 * __thiscall
FUN_00519130(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c1cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004168d0(param_2,param_3,8);
  *param_1 = &PTR_FUN_007e8918;
  param_1[2] = &PTR_LAB_007e8914;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e8910;
  local_4 = 0;
  FUN_00415f20(DAT_00adc9b8);
  uVar1 = FUN_00413c60(0,0,0);
  FUN_00407f20(uVar1);
  param_1[0x25] = param_4;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0x26] = 0xff;
  ExceptionList = local_c;
  return param_1;
}


