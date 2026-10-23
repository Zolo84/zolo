// FUN_0068a080 @ 68a080 size=59

int __fastcall FUN_0068a080(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar3 = 0;
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    iVar4 = FUN_004e9370(*(undefined4 *)(*piVar2 + 4));
    iVar4 = *(int *)(iVar4 + 0x482);
    piVar2 = piVar1;
    if ((iVar4 != 0) && ((iVar3 == 0 || (iVar3 == iVar4)))) {
      iVar3 = iVar4;
    }
  }
  return iVar3;
}


