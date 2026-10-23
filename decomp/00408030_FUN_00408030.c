// FUN_00408030 @ 408030 size=266

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408030(void)

{
  float10 fVar1;
  float10 fVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 extraout_ST1_02;
  float10 fVar6;
  
  do {
    iVar4 = __ftol();
    do {
      iVar5 = __ftol();
      fVar6 = extraout_ST1;
      uVar3 = __ftol();
      (&DAT_0088d2ec)[iVar4 + iVar5 * 0x20] = uVar3;
      uVar3 = __ftol();
      fVar1 = (float10)_DAT_007e3374;
      fVar2 = (float10)_DAT_007e337c;
      (&DAT_0088ceec)[iVar5 + iVar4 * 0x20] = uVar3;
    } while (extraout_ST1_00 + fVar1 < fVar2);
  } while (fVar6 + (float10)_DAT_007e3374 < (float10)_DAT_007e337c);
  do {
    iVar4 = __ftol();
    do {
      uVar3 = __ftol();
      fVar6 = extraout_ST1_01;
      iVar5 = __ftol();
      fVar1 = (float10)_DAT_007e3374;
      fVar2 = (float10)_DAT_007e337c;
      (&DAT_0088d6ec)[iVar4 + iVar5 * 0x20] = uVar3;
    } while (extraout_ST1_02 + fVar1 < fVar2);
  } while (fVar6 + (float10)_DAT_007e3374 < (float10)_DAT_007e337c);
  return;
}


