// FUN_005b0490 @ 5b0490 size=174

void FUN_005b0490(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = param_1;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x11c) + 4))();
  piVar4 = *(int **)(iVar2 + 0x120);
  for (iVar3 = iVar3 + 1; (piVar4 != (int *)0x0 && (-1 < iVar3)); iVar3 = iVar3 + -1) {
    iVar1 = *piVar4;
    piVar4 = (int *)(**(code **)(**(int **)(iVar1 + 0x80) + 0xc))();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x28))(&param_1,iVar2);
    FUN_005b02c0(iVar1,iVar2,*piVar4 != 0);
    piVar4 = *(int **)(iVar2 + 0x120);
  }
  iVar3 = *(int *)(iVar2 + 0x176);
  if (iVar3 != 0) {
    piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x80) + 0xc))();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x28))(&param_1,iVar2);
    if (*piVar4 != 0) {
      FUN_005b02c0(iVar3,iVar2,1);
      return;
    }
    FUN_005b02c0(iVar3,iVar2,0);
  }
  return;
}


