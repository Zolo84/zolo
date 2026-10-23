// FUN_0043fc90 @ 43fc90 size=46

void __fastcall FUN_0043fc90(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 4);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if (*(int *)(iVar2 + 0x92) != *(int *)(param_1 + 0x10)) {
      FUN_00433930();
    }
  }
  return;
}


