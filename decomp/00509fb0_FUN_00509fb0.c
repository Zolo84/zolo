// FUN_00509fb0 @ 509fb0 size=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00509fb0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0x32);
  fVar2 = (float10)(int)(&DAT_0084a0ec)[iVar1];
  if (fVar2 <= (float10)*(float *)(param_1 + 0x36)) {
    if ((float10)*(float *)(param_1 + 0x36) < (float10)*(int *)(&DAT_0084a0f0 + iVar1 * 4)) {
      fVar2 = ((float10)*(float *)(param_1 + 0x36) - fVar2) /
              ((float10)*(int *)(&DAT_0084a0f0 + iVar1 * 4) - fVar2);
    }
    else {
      fVar2 = (float10)_DAT_007e3374;
    }
  }
  else {
    *(float *)(param_1 + 0x36) = (float)(int)(&DAT_0084a0ec)[iVar1];
    fVar2 = (float10)_DAT_007e3380;
  }
  fVar2 = fVar2 + (float10)iVar1;
  if (*(int *)(param_1 + 0x62) != 0) {
    fVar2 = fVar2 * (float10)*(float *)(*(int *)(param_1 + 0x62) + 0x13c28);
  }
  return fVar2;
}


