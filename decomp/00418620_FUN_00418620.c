// FUN_00418620 @ 418620 size=339

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00418620(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  fVar3 = (float10)fpatan((float10)param_2 - (float10)param_4,(float10)param_3 - (float10)param_1);
  if (fVar3 < (float10)_DAT_007e3380) {
    fVar3 = fVar3 + (float10)_DAT_007e3854;
  }
  fVar1 = (float)(fVar3 * (float10)_DAT_007e3850);
  if (((float10)_DAT_007e3374 <= fVar3 * (float10)_DAT_007e3850) && (fVar1 < _DAT_007e384c)) {
    return 1;
  }
  if ((_DAT_007e384c <= fVar1) && (fVar1 <= _DAT_007e3848)) {
    return 0;
  }
  if ((_DAT_007e3848 <= fVar1) && (fVar1 <= _DAT_007e3844)) {
    return 7;
  }
  if ((_DAT_007e3844 <= fVar1) && (fVar1 <= _DAT_007e3840)) {
    return 6;
  }
  if ((_DAT_007e3840 <= fVar1) && (fVar1 <= _DAT_007e383c)) {
    return 5;
  }
  if ((_DAT_007e383c <= fVar1) && (fVar1 <= _DAT_007e3838)) {
    return 4;
  }
  if ((fVar1 < _DAT_007e3838) || (uVar2 = 3, _DAT_007e3834 < fVar1)) {
    uVar2 = 2;
  }
  return uVar2;
}


