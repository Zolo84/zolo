// FUN_004ee050 @ 4ee050 size=85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ee050(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_2 + *(float *)(param_1 + 0x206);
  *(float *)(param_1 + 0x206) = fVar1;
  param_2 = param_2 + *(float *)(param_1 + 0x216);
  *(float *)(param_1 + 0x216) = param_2;
  if (fVar1 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x206) = 0;
  }
  if (param_2 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x216) = 0;
  }
  return;
}


