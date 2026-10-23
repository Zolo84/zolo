// FUN_004e89a0 @ 4e89a0 size=48

void __thiscall FUN_004e89a0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x13e) = param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x13e) = 0;
  }
  if (0x1f < *(int *)(param_1 + 0x13e)) {
    *(undefined4 *)(param_1 + 0x13e) = 0x1f;
  }
  return;
}


