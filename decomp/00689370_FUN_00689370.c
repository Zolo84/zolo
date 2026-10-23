// FUN_00689370 @ 689370 size=37

undefined4 __thiscall FUN_00689370(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  do {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    piVar1 = piVar3 + 2;
    iVar2 = *piVar3;
    piVar3 = (int *)*piVar1;
  } while (*(int *)(iVar2 + 4) != param_2);
  return CONCAT31((int3)((uint)*piVar1 >> 8),1);
}


