// FUN_00588600 @ 588600 size=57

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00588600(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = _DAT_007e6818;
  *(float *)(param_1 + 0x1c) = param_2;
  if (fVar1 < param_2) {
    *(undefined4 *)(param_1 + 0x1c) = 0x43480000;
  }
  if (*(float *)(param_1 + 0x1c) < _DAT_007eaf7c) {
    *(undefined4 *)(param_1 + 0x1c) = 0xc3480000;
  }
  return;
}


