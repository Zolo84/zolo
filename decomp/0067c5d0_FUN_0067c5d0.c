// FUN_0067c5d0 @ 67c5d0 size=298

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0067c5d0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  if ((&DAT_0089cad8)[param_2] == 0) {
    return (float10)_DAT_007e3d28;
  }
  cVar3 = FUN_004a0c10(param_2);
  if (cVar3 == '\0') {
    return (float10)_DAT_007e3d28;
  }
  iVar4 = FUN_004a0750();
  iVar5 = *(int *)(param_1 + 10);
  if (*(int *)(iVar4 + 0x3d8) != iVar5) {
    return (float10)_DAT_007e3d28;
  }
  if (*(int *)(iVar5 + 0x3350) == 0) {
LAB_0067c661:
    iVar5 = FUN_006a9d50();
    if ((iVar5 == 0xc) && (param_2 == 0x35)) {
      return (float10)_DAT_007e3d28;
    }
    iVar5 = FUN_006a9d50();
    if ((iVar5 == 0x35) && (param_2 == 0xc)) {
      return (float10)_DAT_007e3d28;
    }
    iVar5 = FUN_006a9d50();
    if ((iVar5 == 8) && (param_2 == 0x34)) {
      return (float10)_DAT_007e3d28;
    }
    if ((param_2 == 8) && (iVar5 = FUN_006a9d50(), iVar5 == 0x34)) {
      return (float10)_DAT_007e3d28;
    }
    cVar3 = FUN_0049ed40(param_2);
    if (cVar3 == '\0') {
      return (float10)_DAT_007e3380;
    }
  }
  else {
    piVar2 = *(int **)(*(int *)(*(int *)(iVar5 + 0x3350) + 0x22) + 4);
    do {
      if (piVar2 == (int *)0x0) goto LAB_0067c661;
      piVar1 = piVar2 + 2;
      iVar4 = *piVar2;
      piVar2 = (int *)*piVar1;
    } while (((&DAT_0089cad8)[iVar4] == iVar5) ||
            (*(char *)((&DAT_0089cad8)[iVar4] + 0x3354 + param_2) == '\0'));
  }
  return (float10)_DAT_007e3d28;
}


