// FUN_004fbec0 @ 4fbec0 size=70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fbec0(int param_1,float param_2)

{
  bool bVar1;
  
  param_2 = param_2 + *(float *)(param_1 + 0x100);
  bVar1 = param_2 < _DAT_007e3380;
  *(float *)(param_1 + 0x100) = param_2;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    return;
  }
  if (_DAT_007e4088 < param_2) {
    *(undefined4 *)(param_1 + 0x100) = 0x42c80000;
  }
  return;
}


