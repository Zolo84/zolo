// FUN_00490df0 @ 490df0 size=75

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00490df0(int param_1,float param_2)

{
  param_2 = *(float *)(param_1 + 0x234) + param_2;
  if (_DAT_007e4088 < param_2) {
    *(undefined4 *)(param_1 + 0x234) = 0x42c80000;
    return;
  }
  if (param_2 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x234) = 0;
    return;
  }
  *(float *)(param_1 + 0x234) = param_2;
  return;
}


