// FUN_005278a0 @ 5278a0 size=61

void __fastcall FUN_005278a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if (*(int *)(iVar2 + 0xc) != 0) {
      FUN_0051b230();
      *(undefined1 *)(iVar2 + 0x17c) = 0;
      if (*(char *)(iVar2 + 0x17b) == '\0') {
        FUN_005232b0();
      }
    }
  }
  return;
}


