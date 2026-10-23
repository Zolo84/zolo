// FUN_005fdb30 @ 5fdb30 size=109

void FUN_005fdb30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 4);
  if (piVar4 != (int *)0x0) {
    iVar3 = *(int *)(param_1 + 0x13e);
    do {
      iVar1 = *piVar4;
      if (iVar3 <= *(int *)(iVar1 + 0x13e)) {
        iVar2 = FUN_007a8730(param_1 + 0x36,iVar1 + 0x36);
        iVar3 = *(int *)(param_1 + 0x13e);
        if ((iVar3 < *(int *)(iVar1 + 0x13e)) || (iVar2 < 0)) {
          FUN_00592460(param_1,piVar4);
          return;
        }
      }
      piVar4 = (int *)piVar4[2];
    } while (piVar4 != (int *)0x0);
  }
  FUN_00598ca0(param_1);
  return;
}


