// FUN_00516cc0 @ 516cc0 size=31

int __fastcall FUN_00516cc0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = *(int **)(param_1 + 0x26);
  while (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    iVar2 = *piVar3;
    piVar3 = (int *)*piVar1;
    if (*(int *)(iVar2 + 0x134) == 0x1e) {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}


