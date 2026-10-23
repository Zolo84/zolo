// FUN_00579020 @ 579020 size=299

int __thiscall FUN_00579020(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    return param_2;
  }
  iVar2 = *piVar1;
  if ((int *)piVar1[1] == (int *)0x0) {
    if (piVar1[2] != 0) {
      cVar5 = FUN_0042ddd0(*(int *)(param_2 + 4) + 2);
      if (cVar5 == '\0') {
        *piVar1 = *(int *)piVar1[2];
        FUN_00579660(param_2);
        return iVar2;
      }
    }
  }
  else if ((int *)piVar1[2] == (int *)0x0) {
    cVar5 = FUN_0042ddd0(*(int *)(param_2 + 4) + 2);
    if (cVar5 == '\0') {
      *piVar1 = *(int *)piVar1[1];
      FUN_00579660(param_2);
      return iVar2;
    }
  }
  else {
    iVar3 = *(int *)piVar1[2];
    iVar4 = *(int *)piVar1[1];
    cVar5 = FUN_0042dd70(*(int *)(iVar3 + 4) + 2);
    if (cVar5 == '\0') {
      cVar5 = FUN_0042ddd0(*(int *)(param_2 + 4) + 2);
      if (cVar5 == '\0') {
        *piVar1 = iVar4;
        FUN_00579660(param_2);
        return iVar2;
      }
    }
    cVar5 = FUN_0042ddd0(*(int *)(param_2 + 4) + 2);
    if (cVar5 == '\0') {
      *piVar1 = iVar3;
      FUN_00579660(param_2);
      return iVar2;
    }
  }
  *piVar1 = param_2;
  return iVar2;
}


