// FUN_00461830 @ 461830 size=99

void FUN_00461830(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = (&DAT_0089cad8)[param_2];
  piVar4 = *(int **)((&DAT_0089cad8)[param_1] + 0xe8a4);
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    iVar3 = *(int *)(DAT_00ab27b4 + 0x3d4 + *piVar4 * 0x4b2);
    piVar4 = piVar2;
    if ((iVar3 == iVar1) && (*(char *)(iVar3 + 0x24c) == '\0')) {
      FUN_004e7300(iVar1,1);
    }
  }
  return;
}


