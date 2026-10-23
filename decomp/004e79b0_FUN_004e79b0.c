// FUN_004e79b0 @ 4e79b0 size=63

undefined1 __thiscall FUN_004e79b0(int param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x290);
  uVar1 = 0;
  if (0 < iVar3) {
    piVar2 = *(int **)(param_1 + 0x298);
    do {
      if (*piVar2 == param_2) {
        if (piVar2[1] == 1) {
          uVar1 = 1;
        }
        if ((*piVar2 == param_2) && (piVar2[1] == 2)) {
          uVar1 = 1;
        }
      }
      piVar2 = piVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}


