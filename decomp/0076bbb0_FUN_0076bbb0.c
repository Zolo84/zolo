// FUN_0076bbb0 @ 76bbb0 size=206

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0076bbb0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *(int *)(*DAT_00d12b40 + 0x366) + param_2 * 4;
  if ((&DAT_00dc0fd4)[*(int *)(param_1 + 6)] == 0) {
    iVar3 = (param_2 + iVar3) * 2;
    sVar1 = *(short *)(&DAT_00d6115a + iVar3);
  }
  else {
    iVar3 = (param_2 + iVar3) * 2;
    sVar1 = *(short *)(&DAT_00d610ec + iVar3);
  }
  fVar4 = (float10)(int)sVar1;
  iVar2 = *(int *)(param_1 + 0x3350);
  if (iVar2 == DAT_00d615c2) {
    fVar4 = fVar4 + (float10)(int)*(short *)(&DAT_00d611c8 + iVar3);
  }
  else if (iVar2 == DAT_00d615c6) {
    fVar4 = fVar4 + (float10)(int)*(short *)(&DAT_00d61236 + iVar3);
  }
  else if (iVar2 == DAT_00d615ca) {
    fVar4 = fVar4 + (float10)(int)*(short *)(&DAT_00d612a4 + iVar3);
  }
  else {
    fVar4 = fVar4 + (float10)(int)*(short *)(&DAT_00d61312 + iVar3);
  }
  if (fVar4 < (float10)_DAT_007fa588) {
    fVar4 = (float10)_DAT_007fa588;
  }
  return fVar4 * (float10)_DAT_007e543c;
}


