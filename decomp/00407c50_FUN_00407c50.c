// FUN_00407c50 @ 407c50 size=97

void __thiscall FUN_00407c50(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x246) = param_2;
  *(int *)(param_1 + 0x24a) = param_3;
  if (param_2 < 0) {
    *(int *)(param_1 + 0x246) = *(int *)(param_1 + 4) + param_2;
  }
  if (*(int *)(param_1 + 4) <= *(int *)(param_1 + 0x246)) {
    *(int *)(param_1 + 0x246) = *(int *)(param_1 + 0x246) - *(int *)(param_1 + 4);
  }
  if (param_3 < 0) {
    *(int *)(param_1 + 0x24a) = *(int *)(param_1 + 8) + param_3;
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0x24a)) {
    *(int *)(param_1 + 0x24a) = *(int *)(param_1 + 0x24a) - *(int *)(param_1 + 8);
  }
  return;
}


