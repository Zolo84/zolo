// FUN_006e3640 @ 6e3640 size=55

undefined4 * __thiscall FUN_006e3640(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0043eb30(param_3,param_2);
  *(undefined4 *)((int)param_1 + 0x92) = param_3;
  *param_1 = &PTR_FUN_007f7e40;
  param_1[2] = &PTR_LAB_007f7e3c;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  return param_1;
}


