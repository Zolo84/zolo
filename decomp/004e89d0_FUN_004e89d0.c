// FUN_004e89d0 @ 4e89d0 size=54

void __thiscall FUN_004e89d0(int param_1,int param_2)

{
  param_2 = *(int *)(param_1 + 0x13e) + param_2;
  *(int *)(param_1 + 0x13e) = param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x13e) = 0;
  }
  if (0x1f < *(int *)(param_1 + 0x13e)) {
    *(undefined4 *)(param_1 + 0x13e) = 0x1f;
  }
  return;
}


