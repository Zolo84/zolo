// FUN_0044ca60 @ 44ca60 size=125

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0044ca60(int param_1,int param_2,int param_3,int param_4)

{
  float10 fVar1;
  
  if (param_3 < 2) {
    if (param_2 < 9) {
      fVar1 = (float10)*(float *)(param_2 * 0x10 + 0x13b68 + param_1) + (float10)_DAT_007e3374 +
              (float10)*(float *)(param_2 * 0x10 + 0x13b6c + (&DAT_0089cad8)[param_4]);
    }
    else {
      fVar1 = (float10)*(float *)(param_2 * 0x10 + 0x13b68 + param_1) + (float10)_DAT_007e3374;
    }
    if (fVar1 < (float10)_DAT_007e3380) {
      return (float10)_DAT_007e3380;
    }
  }
  else {
    fVar1 = (float10)*(float *)((param_2 + 0x13b7) * 0x10 + param_1) +
            (float10)*(float *)(param_2 * 0x10 + 0x13b74 + (&DAT_0089cad8)[param_4]);
  }
  return fVar1;
}


