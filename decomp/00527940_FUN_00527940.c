// FUN_00527940 @ 527940 size=60

undefined4 __thiscall FUN_00527940(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  
  piVar3 = *(int **)(param_1 + 4);
  do {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    cVar4 = FUN_0051cc30();
    piVar3 = piVar1;
  } while ((cVar4 == '\0') || (*(int *)(iVar2 + 0x248) != param_2));
  return 1;
}


