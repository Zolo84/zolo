// FUN_0043fc40 @ 43fc40 size=75

void __thiscall FUN_0043fc40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 4);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    piVar2 = (int *)*piVar2;
    (**(code **)(*piVar2 + 0x18))
              (*(int *)((int)piVar2 + 0xaa) + *(int *)(param_1 + 8),
               *(int *)((int)piVar2 + 0xae) + *(int *)(param_1 + 0xc));
    piVar2 = piVar1;
  }
  return;
}


