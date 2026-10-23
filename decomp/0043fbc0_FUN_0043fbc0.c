// FUN_0043fbc0 @ 43fbc0 size=127

undefined4 __thiscall FUN_0043fbc0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 4);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    piVar2 = (int *)*piVar2;
    (**(code **)(*piVar2 + 0x18))
              (*(undefined4 *)((int)piVar2 + 0xaa),*(undefined4 *)((int)piVar2 + 0xae));
    piVar2 = piVar1;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 4) + 0x12) + 0x10))(param_2);
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 4);
  if (piVar2 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar2[2];
      piVar2 = (int *)*piVar2;
      (**(code **)(*piVar2 + 0x18))
                (*(int *)((int)piVar2 + 0xaa) + *(int *)(param_1 + 8),
                 *(int *)((int)piVar2 + 0xae) + *(int *)(param_1 + 0xc));
      piVar2 = piVar1;
    } while (piVar1 != (int *)0x0);
    return 0;
  }
  return 0;
}


