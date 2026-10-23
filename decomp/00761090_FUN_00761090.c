// FUN_00761090 @ 761090 size=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00761090(int param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_007e3380;
  if (_DAT_007e3374 <= *(float *)(param_1 + 0xa2)) {
    fVar1 = ((float10)param_2 + (float10)*(float *)(param_1 + 0xa6)) *
            (float10)*(float *)(*(int *)(param_1 + 10) + 0x13c50);
  }
  return fVar1;
}


