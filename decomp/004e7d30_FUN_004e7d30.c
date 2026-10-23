// FUN_004e7d30 @ 4e7d30 size=73

undefined4 __thiscall FUN_004e7d30(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x1c2) + 4);
  do {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    cVar4 = FUN_0044b280(param_2);
    piVar3 = piVar1;
  } while ((cVar4 == '\0') || (*(char *)(iVar2 + 0x17b) != '\0'));
  return 1;
}


