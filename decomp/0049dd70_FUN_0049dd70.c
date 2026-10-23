// FUN_0049dd70 @ 49dd70 size=484

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0049dd70(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  if (DAT_0087b630 == '\0') {
    return (float10)_DAT_007e3380;
  }
  fVar9 = (float10)FUN_004a3450();
  param_2 = (float)((float10)param_2 - fVar9);
  cVar7 = (**(code **)(*param_1 + 0x1c))();
  if ((cVar7 == '\0') && (_DAT_007e3380 < _DAT_008775e8)) {
    fVar1 = *(float *)((int)param_1 + 0x390e);
    iVar8 = FUN_0044ab40();
    fVar2 = (float)param_1[0xea3];
    fVar3 = (float)param_1[0xed9];
    fVar4 = (float)param_1[0xeaf];
    fVar5 = (float)param_1[0xe9d];
    fVar6 = _DAT_00d7ca64 * *(float *)((int)param_1 + 0x37ee) * (float)param_1[0x46a3] *
            (float)iVar8 * fVar1;
    fVar9 = (float10)FUN_00442c00(5);
    fVar1 = (float)((fVar9 + (float10)fVar3 + (float10)fVar2 + (float10)fVar4) - (float10)fVar5);
    if (DAT_00dc1540 == '\0') {
      fVar2 = (float)param_1[0xe7c];
    }
    else {
      fVar2 = (float)param_1[0xe66];
    }
    if ((float)param_1[0xe71] + fVar1 + fVar6 < fVar2) {
      fVar10 = (float10)FUN_004a3450();
      fVar9 = (float10)_DAT_007e3374;
      iVar8 = FUN_0044ab40();
      fVar2 = _DAT_00d7ca64 * *(float *)((int)param_1 + 0x37ee) * (float)param_1[0x46a3] *
              (float)iVar8 * (float)(fVar9 - fVar10);
      if (fVar1 + fVar6 < fVar2) {
        fVar1 = (_DAT_007e3374 - fVar6 / fVar2) * _DAT_007e34c0;
        if (_DAT_008775e8 < fVar1) {
          fVar1 = _DAT_008775e8;
        }
        param_2 = param_2 - fVar1;
      }
    }
  }
  if (_DAT_007e3380 <= param_2) {
    return -(((float10)param_2 / (float10)_DAT_00d7ca78) *
            ((float10)_DAT_007e3374 / (float10)(float)param_1[0x4f0d]) *
            ((float10)_DAT_007e3374 / (float10)*(float *)(param_1[0x91] + 0x4a)));
  }
  return -((float10)*(float *)(param_1[0x91] + 0x4a) * (float10)(float)param_1[0x4f0d] *
          (float10)param_2);
}


