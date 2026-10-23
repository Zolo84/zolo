// FUN_005081a0 @ 5081a0 size=95

undefined4 __thiscall FUN_005081a0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  
  piVar3 = *(int **)(*(int *)(param_2 + 0x1c2) + 4);
  do {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar3[2];
    piVar2 = (int *)*piVar3;
    cVar4 = (**(code **)(*piVar2 + 0x28))();
    piVar3 = piVar1;
  } while (((cVar4 == '\0') || (*(char *)((int)piVar2 + 0x17b) != '\0')) ||
          (cVar4 = FUN_0044b280(*(undefined4 *)(*(int *)(param_1 + 0x248) + 6)), cVar4 == '\0'));
  return 1;
}


