// FUN_004a6740 @ 4a6740 size=64

int FUN_004a6740(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = (&DAT_0089cad8)[param_1];
  if (iVar1 != 0) {
    iVar3 = __ftol();
    for (piVar2 = *(int **)(iVar1 + 0x3b6c); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      iVar3 = iVar3 + *(int *)(*piVar2 + 0x12e);
    }
    return iVar3;
  }
  return 0;
}


