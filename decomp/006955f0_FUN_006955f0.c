// FUN_006955f0 @ 6955f0 size=158

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006955f0(float param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  float local_4;
  
  iVar2 = (int)param_1;
  iVar4 = FUN_004e9370(param_1);
  iVar6 = 0;
  local_4 = 1e+06;
  piVar7 = *(int **)(*(int *)(iVar4 + 0x482) + 0x2c);
  if (piVar7 == (int *)0x0) {
    return 0;
  }
  do {
    piVar1 = (int *)piVar7[2];
    iVar4 = *piVar7;
    iVar5 = FUN_004ece80();
    if (iVar5 != 0) {
      fVar8 = (float10)FUN_0044a9c0(iVar2,*(undefined4 *)(iVar4 + 0x12));
      param_1 = (float)fVar8;
      if (*(int *)(iVar4 + 0x12) == iVar2) {
        param_1 = -1.0;
      }
      cVar3 = FUN_004ed260(0);
      if (cVar3 != '\0') {
        param_1 = param_1 + _DAT_007e3834;
      }
      if (param_1 < local_4) {
        iVar6 = iVar4;
        local_4 = param_1;
      }
    }
    piVar7 = piVar1;
  } while (piVar1 != (int *)0x0);
  return iVar6;
}


