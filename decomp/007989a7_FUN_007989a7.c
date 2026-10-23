// FUN_007989a7 @ 7989a7 size=20

void __thiscall FUN_007989a7(int param_1,int param_2)

{
  **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) - param_2;
  **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + param_2 * 2;
  return;
}


