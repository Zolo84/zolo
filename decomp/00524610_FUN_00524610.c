// FUN_00524610 @ 524610 size=33

void __thiscall FUN_00524610(int param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xe0))();
  }
  *(int **)(param_1 + 500) = param_2;
  return;
}


