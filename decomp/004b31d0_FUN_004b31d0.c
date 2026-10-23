// FUN_004b31d0 @ 4b31d0 size=83

void __thiscall FUN_004b31d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 8);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar2 = *(int *)(*piVar3 + 4);
    piVar3 = piVar1;
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0xa4) == '\0')) {
      if (*(int *)(iVar2 + 0x2a) == param_2) {
        FUN_004b4280(iVar2);
      }
      if (*(int *)(iVar2 + 0x6e) == param_2) {
        FUN_004b4280(iVar2 + 0x44);
      }
    }
  }
  return;
}


