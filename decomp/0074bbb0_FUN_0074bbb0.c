// FUN_0074bbb0 @ 74bbb0 size=73

int __thiscall FUN_0074bbb0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) +
                    ((uint)(param_2 * 0x10000 + param_3) % *(uint *)(param_1 + 4)) * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((*(int *)(*piVar1 + 8) == param_3) && (*(int *)(*piVar1 + 4) == param_2)) break;
    piVar1 = (int *)piVar1[1];
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return *piVar1;
}


