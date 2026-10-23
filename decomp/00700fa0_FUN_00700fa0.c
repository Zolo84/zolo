// FUN_00700fa0 @ 700fa0 size=57

undefined4 __thiscall FUN_00700fa0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x1d50c);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)*piVar2;
    piVar2 = (int *)piVar2[2];
  } while (*piVar1 != param_2);
  iVar3 = piVar1[1] + DAT_00dc153c;
  return CONCAT31((int3)((uint)iVar3 >> 8),param_3 <= iVar3);
}


