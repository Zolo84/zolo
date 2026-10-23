// FUN_00798972 @ 798972 size=20

void __thiscall FUN_00798972(int param_1,int param_2)

{
  **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) - param_2;
  **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + param_2 * 2;
  return;
}


