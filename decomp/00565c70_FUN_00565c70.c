// FUN_00565c70 @ 565c70 size=34

void FUN_00565c70(int *param_1)

{
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((int)param_1 + 9) = 0;
  (**(code **)(*param_1 + 0x1c))();
  if (param_1 != (int *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}


