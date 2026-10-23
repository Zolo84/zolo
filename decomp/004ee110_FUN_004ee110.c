// FUN_004ee110 @ 4ee110 size=85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ee110(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_2 + *(float *)(param_1 + 0x202);
  *(float *)(param_1 + 0x202) = fVar1;
  param_2 = param_2 + *(float *)(param_1 + 0x212);
  *(float *)(param_1 + 0x212) = param_2;
  if (fVar1 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x202) = 0;
  }
  if (param_2 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x212) = 0;
  }
  return;
}


