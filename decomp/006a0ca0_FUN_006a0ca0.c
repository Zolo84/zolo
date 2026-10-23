// FUN_006a0ca0 @ 6a0ca0 size=39

undefined4 __thiscall FUN_006a0ca0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0xa2);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = puVar3 + 2;
    piVar2 = (int *)*puVar3;
    puVar3 = (undefined4 *)*puVar1;
  } while (*piVar2 != param_2);
  return CONCAT31((int3)((uint)*puVar1 >> 8),1);
}


