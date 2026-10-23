// FUN_00586980 @ 586980 size=38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00586980(int param_1)

{
  float *pfVar1;
  
  pfVar1 = DAT_00bd1bcc;
  if (param_1 < DAT_00bd1bd4) {
    for (; param_1 != 0; param_1 = param_1 + -1) {
      pfVar1 = (float *)pfVar1[2];
    }
    return (float10)*pfVar1;
  }
  return (float10)_DAT_007e3380;
}


