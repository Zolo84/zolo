// FUN_00508170 @ 508170 size=46

undefined4 __thiscall FUN_00508170(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int **)(param_1 + 0x120) != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x120);
    do {
      piVar1 = (int *)piVar2[2];
      if (*(int *)(*(int *)(*piVar2 + 0x78) + 0x12) == *(int *)(param_2 + 0x12)) {
        return CONCAT31((int3)((uint)piVar1 >> 8),1);
      }
      piVar2 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return 0;
}


