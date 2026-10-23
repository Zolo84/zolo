// FUN_0048df80 @ 48df80 size=132

undefined4 __fastcall FUN_0048df80(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x3650) + 4))();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x3650) + 4))();
  iVar2 = _rand();
  iVar2 = iVar2 % iVar1;
  piVar3 = *(int **)(param_1 + 0x3654);
  if (piVar3 != (int *)0x0) {
    while (0 < iVar2) {
      piVar3 = (int *)piVar3[2];
      iVar2 = iVar2 + -1;
      if (piVar3 == (int *)0x0) {
        return 3;
      }
    }
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      iVar2 = 0;
      if (0 < *(int *)(*(int *)(iVar1 + 0x18) + 0x13a)) {
        do {
          FUN_0075aec0(iVar2,0);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(*(int *)(iVar1 + 0x18) + 0x13a));
      }
    }
  }
  return 3;
}


