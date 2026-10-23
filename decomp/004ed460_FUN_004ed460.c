// FUN_004ed460 @ 4ed460 size=88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ed460(int param_1,float param_2,char param_3)

{
  if (param_3 != '\0') {
    *(float *)(param_1 + 0x6a) = param_2;
  }
  param_2 = param_2 + *(float *)(param_1 + 0x280);
  *(float *)(param_1 + 0x280) = param_2;
  if (DAT_0087759c < param_2) {
    *(float *)(param_1 + 0x280) = DAT_0087759c;
  }
  if (*(float *)(param_1 + 0x280) < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  return;
}


