// FUN_0049b1e0 @ 49b1e0 size=42

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049b1e0(int param_1,float param_2)

{
  param_2 = param_2 + *(float *)(param_1 + 0x39cc);
  *(float *)(param_1 + 0x39cc) = param_2;
  if (param_2 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x39cc) = 0;
  }
  return;
}


