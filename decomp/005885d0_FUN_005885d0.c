// FUN_005885d0 @ 5885d0 size=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005885d0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(param_1 + 0x1c);
  if (fVar1 < (float10)_DAT_007eaf7c) {
    return (float10)_DAT_007eaf7c;
  }
  if ((float10)_DAT_007e6818 < fVar1) {
    fVar1 = (float10)_DAT_007e6818;
  }
  return fVar1;
}


