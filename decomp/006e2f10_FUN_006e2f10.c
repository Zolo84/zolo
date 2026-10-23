// FUN_006e2f10 @ 6e2f10 size=59

undefined4 * __thiscall FUN_006e2f10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0043eb30(param_3,param_2);
  *(undefined4 *)((int)param_1 + 0x9a) = param_3;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  *(undefined4 *)((int)param_1 + 0x92) = 0;
  *param_1 = &PTR_FUN_007f7e14;
  param_1[2] = &PTR_LAB_007f7e10;
  return param_1;
}


