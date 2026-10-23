// FUN_006d86f0 @ 6d86f0 size=123

undefined4 __fastcall FUN_006d86f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x2220e);
  if (*(int **)(iVar3 + 8) != (int *)0x0) {
    piVar2 = *(int **)(iVar3 + 8);
    do {
      piVar1 = piVar2 + 2;
      if (*(char *)(*(int *)(param_1 + 0x12da) + 0x31 + *piVar2 * 0x2c) != '\0') {
        iVar4 = iVar4 + 1;
      }
      piVar2 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  if (*(char *)(iVar3 + 0x16) == '\0') {
    if (iVar4 == 0) {
      return 1;
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 4))();
    if (iVar4 != iVar3) {
      return 1;
    }
  }
  iVar3 = *(int *)(param_1 + 0x2220e);
  if (iVar3 != 0) {
    FUN_006d65d0();
    FUN_00796cd8(iVar3);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return 1;
}


