// FUN_00797a38 @ 797a38 size=16

undefined4 __fastcall FUN_00797a38(int param_1)

{
  **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
  **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -1;
  return **(undefined4 **)(param_1 + 0x1c);
}


