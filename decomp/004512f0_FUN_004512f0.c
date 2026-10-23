// FUN_004512f0 @ 4512f0 size=89

void __thiscall FUN_004512f0(int param_1,int param_2)

{
  int *piVar1;
  
  *(int *)(param_1 + 0x3350) = param_2;
  if ((param_2 != 0) &&
     (((&DAT_00dc0fd4)[*(int *)(param_1 + 6)] == 0 || (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0'))))
  {
    for (piVar1 = *(int **)(*(int *)(param_2 + 0x22) + 4); piVar1 != (int *)0x0;
        piVar1 = (int *)piVar1[2]) {
      if (*(int *)(param_1 + 0x81a + *piVar1 * 4) != 0) {
        *(undefined1 *)(*piVar1 + 0xd7a + param_1) = 1;
      }
    }
  }
  return;
}


