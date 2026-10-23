// FUN_004ed400 @ 4ed400 size=88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ed400(int param_1,float param_2,char param_3)

{
  if (param_3 != '\0') {
    *(float *)(param_1 + 0x76) = param_2;
  }
  param_2 = param_2 + *(float *)(param_1 + 0x278);
  *(float *)(param_1 + 0x278) = param_2;
  if (DAT_00877598 < param_2) {
    *(float *)(param_1 + 0x278) = DAT_00877598;
  }
  if (*(float *)(param_1 + 0x278) < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x278) = 0;
  }
  return;
}


