// FUN_0075a0f0 @ 75a0f0 size=40

undefined4 __thiscall FUN_0075a0f0(int param_1,int param_2)

{
  if (7 < param_2) {
    return *(undefined4 *)(param_1 + 0x13a);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  return *(undefined4 *)(param_1 + 0x11e + param_2 * 4);
}


