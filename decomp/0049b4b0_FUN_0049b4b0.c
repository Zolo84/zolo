// FUN_0049b4b0 @ 49b4b0 size=126

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0049b4b0(int param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = *(float *)(param_1 + 0x3a18 + param_2 * 4) + *(float *)(param_1 + 0x3a30 + param_2 * 4) +
          *(float *)(param_1 + 0x3b50 + param_2 * 4) + *(float *)(param_1 + 0x3aa8 + param_2 * 4) +
          *(float *)(param_1 + 0x3a78 + param_2 * 4);
  fVar2 = (float10)FUN_00442c00(param_2);
  if (fVar2 <= (float10)_DAT_007e3380) {
    fVar2 = (float10)fVar1;
  }
  else {
    fVar2 = (float10)FUN_00442c00(param_2);
    fVar2 = fVar2 + (float10)fVar1;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x3a90 + param_2 * 4)) {
    fVar2 = fVar2 + (float10)*(float *)(param_1 + 0x3a90 + param_2 * 4);
  }
  return fVar2;
}


