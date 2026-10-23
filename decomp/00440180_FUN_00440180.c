// FUN_00440180 @ 440180 size=344

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00440180(int param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x8c) + 0x86) != '\0') {
    return (float10)_DAT_007e3380;
  }
  if (_DAT_007e3380 <= param_2) {
    if (param_2 <= _DAT_007e3380) goto LAB_0044028a;
    fVar2 = (float10)*(float *)(param_1 + 0xb0) - (float10)*(float *)(param_1 + 0xa0);
    if (fVar2 - (float10)param_2 <= (float10)_DAT_007e3380) {
      *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xb0);
      if (*(float *)(param_1 + 0xb0) <= *(float *)(param_1 + 0xb0)) goto LAB_004402b6;
      goto LAB_004402aa;
    }
    fVar1 = *(float *)(param_1 + 0xa0) + param_2;
    *(float *)(param_1 + 0xa0) = fVar1;
    if (*(float *)(param_1 + 0xb0) < fVar1) goto LAB_0044025f;
  }
  else {
    fVar2 = (float10)*(float *)(param_1 + 0xa0) - (float10)*(float *)(param_1 + 0xac);
    if (fVar2 + (float10)param_2 <= (float10)_DAT_007e3380) {
      *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xac);
      if (*(float *)(param_1 + 0xac) <= *(float *)(param_1 + 0xb0)) goto LAB_004402b6;
LAB_004402aa:
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xb0);
LAB_004402b6:
      if (*(float *)(param_1 + 0xac) <= *(float *)(param_1 + 0xa0)) {
        return fVar2;
      }
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xac);
      return fVar2;
    }
    fVar1 = *(float *)(param_1 + 0xa0) + param_2;
    *(float *)(param_1 + 0xa0) = fVar1;
    if (*(float *)(param_1 + 0xb0) < fVar1) {
LAB_0044025f:
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xb0);
    }
  }
  if (*(float *)(param_1 + 0xa0) < *(float *)(param_1 + 0xac)) {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xac);
  }
LAB_0044028a:
  return (float10)param_2;
}


