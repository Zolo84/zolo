// FUN_00761440 @ 761440 size=52

void __thiscall FUN_00761440(int param_1,int param_2,int param_3)

{
  if (param_3 < 0) {
    *(undefined4 *)(param_1 + 0xe + param_2 * 4) = 0;
    FUN_00761380();
    return;
  }
  if (9 < param_3) {
    param_3 = 9;
  }
  *(int *)(param_1 + 0xe + param_2 * 4) = param_3;
  FUN_00761380();
  return;
}


