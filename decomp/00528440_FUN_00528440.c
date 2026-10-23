// FUN_00528440 @ 528440 size=65

int __thiscall FUN_00528440(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  
  piVar3 = *(int **)(param_1 + 4);
  do {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    cVar4 = (**(code **)(**(int **)(iVar2 + 0x156) + 0x20))(param_2,param_3);
    piVar3 = piVar1;
  } while (cVar4 == '\0');
  return iVar2;
}


