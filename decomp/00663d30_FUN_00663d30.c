// FUN_00663d30 @ 663d30 size=87

int __thiscall FUN_00663d30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x6a);
  do {
    if (piVar3 == (int *)0x0) {
      piVar3 = *(int **)(param_1 + 0x6a);
      do {
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        iVar2 = *piVar3;
        piVar3 = (int *)piVar3[2];
      } while (*(int *)(iVar2 + 0xc) != param_2);
      return iVar2;
    }
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    piVar3 = piVar1;
  } while ((*(int *)(iVar2 + 0xc) != param_2) ||
          (iVar4 = (**(code **)(*(int *)(iVar2 + 0x22) + 4))(), iVar4 == 0));
  return iVar2;
}


