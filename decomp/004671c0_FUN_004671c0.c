// FUN_004671c0 @ 4671c0 size=194

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004671c0(int param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int local_c;
  
  iVar4 = 0x1e;
  if (param_2 == 1.4013e-45) {
    iVar4 = 0x19;
  }
  fVar1 = (float)(int)*(short *)(&DAT_00ad3678 + (int)param_2 * 2) *
          *(float *)(param_1 + 0xe358 + (int)param_2 * 4) *
          *(float *)(*(int *)(param_1 + 0x244) + 0x72) *
          *(float *)(param_1 + 0x11a98 + iVar4 * 0x18);
  local_c = 1;
  fVar3 = (_DAT_007e3374 - *(float *)(*(int *)(param_1 + 0x244) + 0x42)) + _DAT_00dc17e0;
  param_2 = fVar1;
  if (1 < param_3) {
    do {
      fVar2 = _DAT_007e3374 - (float)local_c * DAT_00dc17e4;
      if (fVar2 < fVar3) {
        fVar2 = fVar3;
      }
      local_c = local_c + 1;
      param_2 = fVar2 * fVar1 + param_2;
    } while (local_c < param_3);
  }
  if (param_2 < _DAT_007e3374) {
    param_2 = 1.0;
  }
  return (int)ROUND(param_2);
}


