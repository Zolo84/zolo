// FUN_0075b1c0 @ 75b1c0 size=63

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0075b1c0(int param_1,float param_2)

{
  *(float *)(param_1 + 0x16) = param_2;
  if (DAT_00d7d090 < param_2) {
    *(float *)(param_1 + 0x16) = DAT_00d7d090;
    return;
  }
  if (param_2 < _DAT_007e3374) {
    *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  }
  return;
}


