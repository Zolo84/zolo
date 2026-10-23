// FUN_004edff0 @ 4edff0 size=85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004edff0(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_2 + *(float *)(param_1 + 0x20a);
  *(float *)(param_1 + 0x20a) = fVar1;
  param_2 = param_2 + *(float *)(param_1 + 0x21a);
  *(float *)(param_1 + 0x21a) = param_2;
  if (fVar1 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x20a) = 0;
  }
  if (param_2 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x21a) = 0;
  }
  return;
}


