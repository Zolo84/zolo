// FUN_004255d0 @ 4255d0 size=41

void FUN_004255d0(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    FUN_00425600(param_1);
    return;
  }
  FUN_00425600(0);
  return;
}


