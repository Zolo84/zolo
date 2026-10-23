// FUN_00459c00 @ 459c00 size=43

void __thiscall FUN_00459c00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)param_2 + 6);
  param_1[2] = param_2[2];
  return;
}


