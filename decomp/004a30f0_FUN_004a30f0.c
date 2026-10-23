// FUN_004a30f0 @ 4a30f0 size=501

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_004a30f0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  cVar3 = FUN_0044beb0();
  if (cVar3 == '\0') {
    if (*(float *)(*(int *)(param_1 + 0x244) + 0x2a) < _DAT_007e3374) {
      return false;
    }
  }
  if (param_2 == *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30)) {
    return false;
  }
  iVar5 = (param_2 * 0xb + 0xb) * 4;
  if (*(char *)(*(int *)(param_1 + 0x12da) + iVar5) != '\0') {
    return false;
  }
  iVar1 = (&DAT_0089cad8)[param_2];
  if ((*(float *)(*(int *)(iVar1 + 0x244) + 0x2a) < _DAT_007e3374) &&
     ((cVar3 = FUN_0044beb0(), cVar3 == '\0' ||
      ((*(int *)(iVar1 + 0x3350) != 0 && (cVar3 = FUN_004a7a50(), cVar3 != '\0')))))) {
    return false;
  }
  if (*(int *)((&DAT_0089cad8)[param_2] + 0x3350) != 0) {
    piVar2 = *(int **)(param_1 + 0x3350);
    if (piVar2 == (int *)0x0) {
      return false;
    }
    cVar3 = (**(code **)(*piVar2 + 0x14))();
    if (((cVar3 == '\0') && (cVar3 = (**(code **)(*piVar2 + 0x18))(), cVar3 == '\0')) &&
       (cVar3 = (**(code **)(*piVar2 + 0x1c))(), cVar3 == '\0')) {
      return false;
    }
    piVar2 = *(int **)((&DAT_0089cad8)[param_2] + 0x3350);
    cVar3 = (**(code **)(*piVar2 + 0x14))();
    if (((cVar3 != '\0') || (cVar3 = (**(code **)(*piVar2 + 0x18))(), cVar3 != '\0')) ||
       (cVar3 = (**(code **)(*piVar2 + 0x1c))(), cVar3 != '\0')) {
      return false;
    }
  }
  if (*(int *)(param_1 + 0x3350) == 0) {
LAB_004a3282:
    if (((param_2 == 0) || (param_2 == 0xa3)) || (param_2 == 0x157)) {
      return false;
    }
    if ((&DAT_0089cad8)[param_2] == 0) {
      return false;
    }
    if (param_2 != *(int *)(param_1 + 6)) {
      cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
      return cVar3 == '\0';
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 6);
    iVar4 = FUN_00584c90();
    if (iVar4 != iVar1) {
      return false;
    }
    cVar3 = FUN_00584e20(param_2);
    if (cVar3 != '\0') {
      return false;
    }
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x3350) + 0x22) + 4);
    do {
      if (piVar2 == (int *)0x0) goto LAB_004a3282;
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[2];
    } while (*(char *)(*(int *)((&DAT_0089cad8)[iVar1] + 0x12da) + iVar5) == '\0');
  }
  return false;
}


