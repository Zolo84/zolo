// FUN_004ed3a0 @ 4ed3a0 size=88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ed3a0(int param_1,float param_2,char param_3)

{
  if (param_3 != '\0') {
    *(float *)(param_1 + 0x6e) = param_2;
  }
  param_2 = param_2 + *(float *)(param_1 + 0x27c);
  *(float *)(param_1 + 0x27c) = param_2;
  if (DAT_00877598 < param_2) {
    *(float *)(param_1 + 0x27c) = DAT_00877598;
  }
  if (*(float *)(param_1 + 0x27c) < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x27c) = 0;
  }
  return;
}


