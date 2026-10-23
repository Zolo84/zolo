// FUN_00586ca0 @ 586ca0 size=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00586ca0(int param_1)

{
  float fVar1;
  float *pfVar2;
  
  fVar1 = _DAT_007e3380;
  if (param_1 < DAT_00bd1bec) {
    pfVar2 = DAT_00bd1be4;
    for (param_1 = param_1 + 0xc; param_1 != 0; param_1 = param_1 + -1) {
      pfVar2 = (float *)pfVar2[2];
    }
    fVar1 = *pfVar2;
  }
  return (float10)fVar1;
}


