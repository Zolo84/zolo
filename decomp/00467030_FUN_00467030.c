// FUN_00467030 @ 467030 size=196

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00467030(int param_1,int param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar4 = FUN_0044c5b0(param_2,param_3);
  iVar5 = FUN_0044c630(param_2);
  fVar1 = (float)(*(int *)(iVar5 + 0x10) + *(int *)(iVar4 + 0x10)) *
          *(float *)(param_1 + 0x127b8 + param_2 * 0x18) *
          *(float *)(*(int *)(param_1 + 0x244) + 0x72);
  fVar3 = (_DAT_007e3374 - *(float *)(*(int *)(param_1 + 0x244) + 0x42)) + _DAT_00dc17e0;
  local_8 = 1;
  param_3 = fVar1;
  if (1 < param_4) {
    do {
      fVar2 = _DAT_007e3374 - (float)local_8 * DAT_00dc17e4;
      if (fVar2 < fVar3) {
        fVar2 = fVar3;
      }
      local_8 = local_8 + 1;
      param_3 = fVar2 * fVar1 + param_3;
    } while (local_8 < param_4);
  }
  if (param_3 < _DAT_007e3374) {
    param_3 = 1.0;
  }
  return (int)ROUND(param_3);
}


