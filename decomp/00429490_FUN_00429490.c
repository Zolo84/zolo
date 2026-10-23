// FUN_00429490 @ 429490 size=79

int __thiscall FUN_00429490(int param_1,int param_2,undefined2 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) +
                    ((uint)(param_2 * 0x10000 + CONCAT22(param_3,param_2._2_2_)) %
                    *(uint *)(param_1 + 4)) * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((*(int *)(*piVar1 + 6) == CONCAT22(param_3,param_2._2_2_)) &&
       (*(short *)(*piVar1 + 4) == (short)param_2)) break;
    piVar1 = (int *)piVar1[1];
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return *piVar1;
}


