// FUN_0049eb40 @ 49eb40 size=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049eb40(int param_1,float param_2)

{
  param_2 = param_2 + *(float *)(param_1 + 0x39bc);
  if (param_2 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x39bc) = 0;
    return;
  }
  *(float *)(param_1 + 0x39bc) = param_2;
  return;
}


