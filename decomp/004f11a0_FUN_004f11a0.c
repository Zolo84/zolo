// FUN_004f11a0 @ 4f11a0 size=47

undefined4 * __thiscall FUN_004f11a0(undefined4 *param_1,undefined4 param_2)

{
  FUN_004f0da0(param_2);
  *param_1 = &PTR_FUN_007e83ec;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  param_1[2] = &PTR_LAB_007e83d8;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e83d0;
  return param_1;
}


