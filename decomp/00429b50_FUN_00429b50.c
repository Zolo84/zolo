// FUN_00429b50 @ 429b50 size=96

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429b50(void)

{
  float *pfVar1;
  float *pfVar2;
  float10 fVar3;
  int local_4;
  
  local_4 = 0;
  pfVar2 = (float *)&DAT_00890afc;
  do {
    fVar3 = (float10)local_4;
    pfVar1 = pfVar2 + 1;
    local_4 = local_4 + 1;
    fVar3 = (float10)fsin(fVar3 * (float10)_DAT_007e3d18);
    *pfVar2 = (float)fVar3;
    pfVar2 = pfVar1;
  } while ((int)pfVar1 < 0x891204);
  pfVar2 = (float *)&DAT_0088fafc;
  do {
    fVar3 = (float10)FUN_007a5d50();
    *pfVar2 = (float)fVar3;
    pfVar2 = pfVar2 + 1;
  } while ((int)pfVar2 < 0x890afc);
  return;
}


