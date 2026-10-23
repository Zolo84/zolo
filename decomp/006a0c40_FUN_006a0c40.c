// FUN_006a0c40 @ 6a0c40 size=78

uint __thiscall FUN_006a0c40(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint in_EAX;
  
  piVar3 = *(int **)(param_1 + 0xb4);
  do {
    if (piVar3 == (int *)0x0) {
      return in_EAX & 0xffffff00;
    }
    piVar1 = piVar3 + 2;
    uVar2 = *(uint *)(*piVar3 + 0x298);
    piVar3 = (int *)*piVar1;
    in_EAX = uVar2;
  } while (((int)uVar2 < 1) ||
          (in_EAX = uVar2 * 0x259, *(int *)(DAT_00ab27b4 + 0x482 + uVar2 * 0x4b2) != param_2));
  return CONCAT31((int3)(in_EAX >> 8),1);
}


