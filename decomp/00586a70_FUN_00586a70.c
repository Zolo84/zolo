// FUN_00586a70 @ 586a70 size=503

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00586a70(int param_1,int param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar3 = (int)param_4;
  iVar2 = param_2;
  if (param_4 == 0.0) {
    return (float10)_DAT_007e3380;
  }
  if (param_2 < DAT_00bd1bec) {
    fVar5 = (float10)FUN_00586fe0(param_2);
    param_4 = (float)fVar5;
  }
  else {
    param_4 = 0.0;
  }
  if (_DAT_007e3380 < _DAT_00dc17c8) {
    iVar4 = *(int *)(iVar3 + 0x3954);
    fVar1 = (float)iVar4;
    if (param_2 < 9) {
      if ((_DAT_00dc17d0 < fVar1) || (param_2 = iVar4, fVar1 < _DAT_00dc17cc)) {
        param_2 = __ftol();
      }
      fVar1 = (float)param_2;
      if (_DAT_007e3374 < _DAT_00dc17c8) {
        fVar1 = fVar1 / _DAT_00dc17c8 + _DAT_007e3374;
      }
    }
    param_4 = fVar1 * param_4;
  }
  if (iVar2 == 9) {
    iVar4 = FUN_00451250(*(undefined4 *)(*(int *)(param_1 + 0x3b2c) + 6));
    if ((iVar4 + 1 < 0xb) || (DAT_00dc17d8 <= _DAT_007e3380)) {
      param_4 = (float)(iVar4 + 1) * param_4;
    }
    else {
      param_4 = DAT_00dc17d8;
    }
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x3b2c) + 6);
  if ((&DAT_00dc0fd4)[iVar4] == 0) {
    if (iVar2 == 0xb) {
      return (float10)_DAT_007e3380;
    }
    param_4 = _DAT_00dc18dc * param_4;
  }
  else if ((iVar2 == 0xb) && (iVar4 = FUN_00451250(iVar4), 10 < iVar4)) {
    if (_DAT_007e3380 < _DAT_00dc17d4) {
      param_4 = (param_4 * (float)_DAT_007e7f28 + (float)(iVar4 + -10) * _DAT_00dc17d4) /
                (float)iVar4;
    }
    fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x3b2c) + 0x244) + 0x96);
    fVar5 = (float10)FUN_0044ca60(0xb,0,*(undefined4 *)(*(int *)(param_1 + 0x3b2c) + 6));
    return (float10)fVar1 * (float10)param_4 * fVar5;
  }
  fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x3b2c) + 0x244) + 0x92);
  fVar5 = (float10)FUN_0044ca60(iVar2,0,*(undefined4 *)(iVar3 + 6));
  return (float10)fVar1 * (float10)param_4 * fVar5;
}


