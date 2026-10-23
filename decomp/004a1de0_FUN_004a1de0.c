// FUN_004a1de0 @ 4a1de0 size=404

bool __thiscall FUN_004a1de0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  
  if (param_2 == (int *)0x0) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 6);
  iVar5 = FUN_00584c90();
  if (iVar5 != iVar2) {
    return false;
  }
  if ((&DAT_0089cad8)[param_3] == 0) {
    return false;
  }
  if (*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) != 0) {
    return false;
  }
  if (*(int *)((&DAT_0089cad8)[param_3] + 0x3350) != 0) {
    cVar4 = (**(code **)(*param_2 + 0x14))();
    if (((cVar4 == '\0') && (cVar4 = (**(code **)(*param_2 + 0x18))(), cVar4 == '\0')) &&
       (cVar4 = (**(code **)(*param_2 + 0x1c))(), cVar4 == '\0')) {
      return false;
    }
    piVar3 = *(int **)((&DAT_0089cad8)[param_3] + 0x3350);
    cVar4 = (**(code **)(*piVar3 + 0x14))();
    if (((cVar4 != '\0') || (cVar4 = (**(code **)(*piVar3 + 0x18))(), cVar4 != '\0')) ||
       (cVar4 = (**(code **)(*piVar3 + 0x1c))(), cVar4 != '\0')) {
      return false;
    }
  }
  cVar4 = FUN_00586220(param_2);
  if (cVar4 == '\0') {
    return false;
  }
  cVar4 = FUN_00584e20(param_3);
  if (cVar4 != '\0') {
    return false;
  }
  piVar3 = *(int **)(*(int *)((int)param_2 + 0x22) + 4);
  while (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    iVar2 = *piVar3;
    piVar3 = (int *)*piVar1;
    if (((&DAT_0089cad8)[iVar2] != 0) &&
       (*(char *)(*(int *)(param_1 + 0x12da) + (*(int *)((&DAT_0089cad8)[iVar2] + 6) + 1) * 0x2c) !=
        '\0')) {
      return false;
    }
  }
  if (((param_3 != 0) && (param_3 != 0xa3)) && (param_3 != 0x157)) {
    if ((&DAT_0089cad8)[param_3] == 0) {
      return false;
    }
    if (param_3 == *(int *)(param_1 + 6)) {
      return false;
    }
    cVar4 = FUN_0042dd70(DAT_00893530 + 0x14);
    return cVar4 == '\0';
  }
  return false;
}


