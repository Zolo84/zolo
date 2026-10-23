// FUN_004d1010 @ 4d1010 size=43

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d1010(int param_1,int param_2)

{
  *(int *)(param_1 + 0x18) = param_2;
  if (((param_2 == 9) || (param_2 == 10)) && (*(float *)(param_1 + 0x14) < _DAT_007e5440)) {
    *(undefined4 *)(param_1 + 0x14) = 0x3a83126f;
  }
  return;
}


