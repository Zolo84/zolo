// FUN_004a4570 @ 4a4570 size=103

undefined4 __fastcall FUN_004a4570(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  
  piVar4 = *(int **)(param_1 + 0x451c);
  while (piVar4 != (int *)0x0) {
    iVar1 = *piVar4;
    piVar4 = (int *)piVar4[2];
    if (*(char *)(iVar1 + 0x154) == '\0') {
      return 1;
    }
  }
  piVar4 = *(int **)(param_1 + 0x3b7e);
  do {
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    piVar2 = (int *)piVar4[2];
    piVar3 = (int *)*piVar4;
    piVar4 = piVar2;
  } while ((*(int *)((int)piVar3 + 0x16) != 0) ||
          (((piVar3[0xe] == 0 && (cVar5 = FUN_004f2390(), cVar5 == '\0')) ||
           (cVar5 = (**(code **)(*piVar3 + 0x1c))(), cVar5 != '\0'))));
  return 1;
}


