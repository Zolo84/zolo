// FUN_0049fb80 @ 49fb80 size=519

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_0049fb80(int param_1,int *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  if (param_3 < 1) {
    return 0;
  }
  iVar4 = FUN_004e9370(param_3);
  if (*(int *)(iVar4 + 0x3d8) != param_1) {
    return 0;
  }
  cVar3 = (**(code **)(*param_2 + 0x14))();
  if (cVar3 != '\0') {
    if (*(int *)(iVar4 + 0x3d4) != param_1) {
      return 0;
    }
    cVar3 = FUN_004f3fa0();
    if (cVar3 != '\0') {
      iVar5 = FUN_004ece90();
      if (iVar5 == 0) {
        return 0;
      }
    }
    cVar3 = FUN_004f3fa0();
    if (cVar3 == '\0') {
      if ((*(int *)(iVar4 + 0x254) == 8) || (*(int *)(iVar4 + 0x254) == 9)) {
        return 0;
      }
    }
    cVar3 = FUN_004f3f50();
    if (cVar3 != '\0') {
      iVar5 = FUN_004ece80();
      if (iVar5 == 0) {
        return 0;
      }
    }
  }
  cVar3 = (**(code **)(*param_2 + 0x18))();
  if ((cVar3 != '\0') && (param_4 == 0)) {
    return 0;
  }
  cVar3 = (**(code **)(*param_2 + 0x10))();
  if (cVar3 == '\0') {
    return 1;
  }
  cVar3 = FUN_004ea200(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  if ((*(char *)(iVar4 + 0x470) == '\0') && (*(int *)((int)param_2 + 0x5a) == 2)) {
    return 0;
  }
  if ((*(int *)(iVar4 + 0x46a) == 0) && (*(int *)((int)param_2 + 0x5a) == 7)) {
    return 0;
  }
  fVar6 = (float10)FUN_004eceb0();
  if ((fVar6 < (float10)_DAT_007e6f18) && (*(int *)((int)param_2 + 0x5a) == 1)) {
    return 0;
  }
  if (*(int *)((int)param_2 + 0x5a) == 9) {
    iVar5 = FUN_0044e750();
    if (0 < iVar5) {
      if (*(float *)(*(int *)(iVar4 + 0x1ea) + 0x10) < _DAT_007e3374) {
        return 0;
      }
    }
  }
  if (*(int *)((int)param_2 + 0x5a) == 10) {
    iVar5 = FUN_0044e700();
    if (0 < iVar5) {
      if (*(float *)(*(int *)(iVar4 + 0x1ee) + 0x10) < _DAT_007e3374) {
        return 0;
      }
    }
  }
  iVar5 = *(int *)((int)param_2 + 0x5a);
  iVar4 = *(int *)(iVar4 + 0x1c6 + iVar5 * 4);
  if (*(int *)(iVar4 + 0x18) != 0) {
    fVar1 = *(float *)(&DAT_008eff64 + iVar5 * 4);
    fVar2 = *(float *)(iVar4 + 0x10);
    fVar6 = (float10)FUN_004d0d40(iVar5);
    fVar6 = fVar6 - (float10)fVar2;
    if ((float10)fVar1 <= fVar6) {
      fVar6 = (float10)fVar1;
    }
    if (fVar6 < (float10)_DAT_007e408c) {
      return 0;
    }
  }
  return *(undefined1 *)(*(int *)((int)param_2 + 0x5a) + 0xe321 + param_1);
}


