// FUN_0043fcc0 @ 43fcc0 size=94

void __thiscall FUN_0043fcc0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 4);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if (*(int *)(iVar2 + 0x92) != *(int *)(param_1 + 0x10)) {
      FUN_00433930();
    }
  }
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 4);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if (*(int *)(iVar2 + 0x92) == *(int *)(param_1 + 0x10)) {
      FUN_00433950();
    }
  }
  return;
}


