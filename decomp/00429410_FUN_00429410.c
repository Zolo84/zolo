// FUN_00429410 @ 429410 size=121

undefined4 __thiscall FUN_00429410(int *param_1,int param_2,undefined2 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_1[2] +
                  ((uint)(param_2 * 0x10000 + CONCAT22(param_3,param_2._2_2_)) % (uint)param_1[1]) *
                  4);
  piVar3 = (int *)0x0;
  piVar4 = (int *)*piVar1;
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    if ((*(int *)(*piVar4 + 6) == CONCAT22(param_3,param_2._2_2_)) &&
       (*(short *)(*piVar4 + 4) == (short)param_2)) break;
    piVar3 = piVar4;
    piVar4 = (int *)piVar4[1];
  }
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if (piVar3 == (int *)0x0) {
    *piVar1 = piVar4[1];
  }
  else {
    piVar3[1] = piVar4[1];
  }
  FUN_00796cd8(piVar4);
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  return CONCAT31((int3)((uint)(iVar2 + -1) >> 8),1);
}


