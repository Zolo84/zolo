// FUN_006a0c10 @ 6a0c10 size=43

undefined4 __thiscall FUN_006a0c10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0xb4);
  do {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    piVar1 = piVar3 + 2;
    iVar2 = *piVar3;
    piVar3 = (int *)*piVar1;
  } while (*(int *)(iVar2 + 0x298) != param_2);
  return CONCAT31((int3)((uint)*piVar1 >> 8),1);
}


