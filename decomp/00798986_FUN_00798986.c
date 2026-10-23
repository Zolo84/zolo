// FUN_00798986 @ 798986 size=17

undefined4 __fastcall FUN_00798986(int param_1)

{
  **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
  **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -2;
  return **(undefined4 **)(param_1 + 0x1c);
}


