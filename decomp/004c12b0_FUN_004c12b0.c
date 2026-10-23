// FUN_004c12b0 @ 4c12b0 size=43

void __thiscall FUN_004c12b0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  param_1[1] = *param_3;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_3 + 1);
  return;
}


