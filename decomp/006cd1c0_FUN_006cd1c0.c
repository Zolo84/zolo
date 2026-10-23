// FUN_006cd1c0 @ 6cd1c0 size=74

void __thiscall FUN_006cd1c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    while (iVar1 = FUN_007a8730(param_2,*piVar2), iVar1 != 0) {
      piVar2 = (int *)piVar2[2];
      if (piVar2 == (int *)0x0) {
        FUN_006cdc60(param_2);
        return;
      }
    }
    if (*piVar2 != 0) {
      return;
    }
  }
  FUN_006cdc60(param_2);
  return;
}


