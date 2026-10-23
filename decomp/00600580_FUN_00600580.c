// FUN_00600580 @ 600580 size=84

void FUN_00600580(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 4);
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = FUN_007a8730(param_1 + 0x13a,*piVar2 + 0x13a);
      if (iVar1 < 0) {
        FUN_00592460(param_1,piVar2);
        return;
      }
      piVar2 = (int *)piVar2[2];
    } while (piVar2 != (int *)0x0);
  }
  FUN_00598ca0(param_1);
  return;
}


