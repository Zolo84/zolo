// FUN_00528490 @ 528490 size=85

undefined4 __thiscall FUN_00528490(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  
  piVar3 = *(int **)(param_1 + 4);
  do {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar3[2];
    piVar2 = (int *)*piVar3;
    cVar4 = (**(code **)(*piVar2 + 0x2c))();
    piVar3 = piVar1;
  } while ((cVar4 == '\0') || (cVar4 = FUN_0052b940(param_2,param_3), cVar4 == '\0'));
  return **(undefined4 **)(*(int *)((int)piVar2 + 0x2aa) + 4);
}


