// FUN_00467100 @ 467100 size=188

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00467100(int param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int local_c;
  
  fVar1 = (float)(int)*(short *)(&DAT_008effb0 + (int)param_2 * 2) *
          *(float *)(param_1 + 0xe32c + (int)param_2 * 4) *
          *(float *)(*(int *)(param_1 + 0x244) + 0x72) *
          *(float *)(param_1 + 0x11a2c + (int)param_2 * 8);
  local_c = 1;
  fVar4 = (_DAT_007e3374 - *(float *)(*(int *)(param_1 + 0x244) + 0x42)) + _DAT_00dc17e0;
  fVar2 = fVar1;
  if (1 < param_3) {
    do {
      fVar3 = _DAT_007e3374 - (float)local_c * DAT_00dc17e4;
      if (fVar3 < fVar4) {
        fVar3 = fVar4;
      }
      if (param_2 == 1.4013e-45) {
        fVar3 = _DAT_007e3374;
      }
      local_c = local_c + 1;
      fVar2 = fVar3 * fVar1 + fVar2;
    } while (local_c < param_3);
  }
  param_2 = fVar2;
  if (param_2 < _DAT_007e3374) {
    param_2 = 1.0;
  }
  return (int)ROUND(param_2);
}


