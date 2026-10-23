// FUN_0043f750 @ 43f750 size=43

void __fastcall FUN_0043f750(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if (*(int *)(iVar2 + 0x92) != *(int *)(param_1 + 0x26)) {
      FUN_00433930();
    }
  }
  return;
}


