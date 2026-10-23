// FUN_004618a0 @ 4618a0 size=101

void FUN_004618a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = (&DAT_0089cad8)[param_2];
  iVar2 = (&DAT_0089cad8)[param_1];
  piVar5 = *(int **)(iVar1 + 0xe8a4);
  while (piVar5 != (int *)0x0) {
    piVar3 = (int *)piVar5[2];
    iVar4 = *(int *)(DAT_00ab27b4 + *piVar5 * 0x4b2 + 0x3d4);
    piVar5 = piVar3;
    if ((iVar4 == iVar2) && (*(char *)(iVar4 + 0x24c) == '\0')) {
      FUN_004e7190(iVar1,0);
    }
  }
  return;
}


