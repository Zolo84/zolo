// FUN_006c8e70 @ 6c8e70 size=50

int __thiscall FUN_006c8e70(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((param_3 == '\0') || (iVar2 = *(int *)(param_1 + 0x1e), iVar2 == 0)) {
    for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (*(int *)(*piVar1 + 4) == param_2) {
        return *piVar1;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}


