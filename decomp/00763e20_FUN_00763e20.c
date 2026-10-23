// FUN_00763e20 @ 763e20 size=32

void __thiscall FUN_00763e20(int param_1,int param_2)

{
  if (4 < param_2) {
    *(undefined4 *)(param_1 + 0x16) = 4;
    return;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x16) = param_2;
  return;
}


