// FUN_00588640 @ 588640 size=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00588640(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(param_1 + 0x18);
  if (fVar1 < (float10)_DAT_007eaf7c) {
    return (float10)_DAT_007eaf7c;
  }
  if ((float10)_DAT_007e6818 < fVar1) {
    fVar1 = (float10)_DAT_007e6818;
  }
  return fVar1;
}


