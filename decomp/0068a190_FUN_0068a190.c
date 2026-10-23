// FUN_0068a190 @ 68a190 size=80

int __fastcall FUN_0068a190(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = FUN_00527b40();
  piVar4 = *(int **)(*(int *)(param_1 + 0x1c) + 0x451c);
joined_r0x0068a1a9:
  do {
    do {
      if (piVar4 == (int *)0x0) {
        return iVar5;
      }
      piVar1 = (int *)piVar4[2];
      iVar2 = *piVar4;
      piVar4 = piVar1;
    } while (*(int *)(iVar2 + 0x14c) < 1);
    piVar1 = *(int **)(param_1 + 4);
    do {
      if (piVar1 == (int *)0x0) goto joined_r0x0068a1a9;
      iVar3 = *piVar1;
      piVar1 = (int *)piVar1[2];
    } while (*(int *)(iVar3 + 4) != *(int *)(iVar2 + 0x14c));
    iVar5 = iVar5 + 1;
  } while( true );
}


