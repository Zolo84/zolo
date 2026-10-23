// FUN_0050a030 @ 50a030 size=73

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0050a030(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(int)(&DAT_0084a0ec)[*(int *)(param_1 + 0x32)];
  if ((float10)*(float *)(param_1 + 0x36) < fVar1) {
    *(float *)(param_1 + 0x36) = (float)(int)(&DAT_0084a0ec)[*(int *)(param_1 + 0x32)];
    return (float10)_DAT_007e3380;
  }
  if ((float10)*(int *)(&DAT_0084a0f0 + *(int *)(param_1 + 0x32) * 4) <=
      (float10)*(float *)(param_1 + 0x36)) {
    return (float10)_DAT_007e3374;
  }
  return ((float10)*(float *)(param_1 + 0x36) - fVar1) /
         ((float10)*(int *)(&DAT_0084a0f0 + *(int *)(param_1 + 0x32) * 4) - fVar1);
}


