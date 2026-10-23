// FUN_0072a210 @ 72a210 size=78

void __thiscall FUN_0072a210(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x1272);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    while (iVar2 != param_2) {
      piVar1 = (int *)piVar1[2];
      iVar2 = iVar2 + 1;
      if (piVar1 == (int *)0x0) {
        FUN_0042b6c9(&DAT_00839384);
        return;
      }
    }
    if ((*piVar1 != 0) && (**(char **)(*piVar1 + 0x16) != '\0')) {
      return;
    }
  }
  FUN_0042b6c9(&DAT_00839384);
  return;
}


