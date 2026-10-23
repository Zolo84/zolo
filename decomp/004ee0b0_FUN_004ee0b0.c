// FUN_004ee0b0 @ 4ee0b0 size=85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ee0b0(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_2 + *(float *)(param_1 + 0x1fe);
  *(float *)(param_1 + 0x1fe) = fVar1;
  param_2 = param_2 + *(float *)(param_1 + 0x20e);
  *(float *)(param_1 + 0x20e) = param_2;
  if (fVar1 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x1fe) = 0;
  }
  if (param_2 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x20e) = 0;
  }
  return;
}


