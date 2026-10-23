// FUN_00466b90 @ 466b90 size=284

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_00466b90(int param_1,int param_2,int param_3,float param_4,undefined4 param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_0044c3d0(param_2,param_4);
  iVar5 = FUN_0044c620(param_2);
  param_4 = (float)(*(int *)(iVar5 + 0x10) + *(int *)(iVar4 + 0x10)) *
            *(float *)(param_1 + 0x11a98 + param_2 * 0x18);
  if (((&DAT_00dc0fd4)[*(int *)(param_1 + 6)] != 0) && (param_3 != 0)) {
    iVar4 = FUN_0044c5b0(param_3,param_5);
    iVar5 = FUN_0044c630(param_3);
    fVar1 = (float)(*(int *)(iVar5 + 0x10) + *(int *)(iVar4 + 0x10)) *
            *(float *)(param_1 + 0x127b8 + param_3 * 0x18);
    if (param_4 < fVar1) {
      param_4 = fVar1;
    }
  }
  fVar1 = *(float *)(*(int *)(param_1 + 0x244) + 0x72) * param_4;
  param_3 = 1;
  fVar3 = (_DAT_007e3374 - *(float *)(*(int *)(param_1 + 0x244) + 0x42)) + _DAT_00dc17e0;
  param_4 = fVar1;
  if (1 < param_6) {
    do {
      fVar2 = _DAT_007e3374 - (float)param_3 * DAT_00dc17e4;
      if (fVar2 < fVar3) {
        fVar2 = fVar3;
      }
      param_3 = param_3 + 1;
      param_4 = fVar2 * fVar1 + param_4;
    } while (param_3 < param_6);
  }
  if (param_4 < _DAT_007e3374) {
    param_4 = 1.0;
  }
  return (int)ROUND(param_4);
}


