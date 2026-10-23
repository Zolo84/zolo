// FUN_004efd20 @ 4efd20 size=55

undefined4 __fastcall FUN_004efd20(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  if (iVar3 != 0) {
    piVar2 = *(int **)(param_1 + 0x26);
    while (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 2;
      iVar3 = *piVar2;
      piVar2 = (int *)*piVar1;
      if (*(int *)(iVar3 + 0x134) == 0x10) {
        return CONCAT31((int3)((uint)*piVar1 >> 8),1);
      }
    }
  }
  return 0;
}


