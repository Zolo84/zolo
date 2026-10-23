// FUN_00767850 @ 767850 size=42

void __thiscall FUN_00767850(int param_1,int param_2)

{
  if (param_2 < -1) {
    *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
    return;
  }
  if (10000 < param_2) {
    *(undefined4 *)(param_1 + 0x2e) = 10000;
    return;
  }
  *(int *)(param_1 + 0x2e) = param_2;
  return;
}


