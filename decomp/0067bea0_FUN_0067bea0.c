// FUN_0067bea0 @ 67bea0 size=443

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0067bea0(int param_1,int param_2)

{
  float10 fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float fStack_4;
  
  iVar5 = (&DAT_0089cad8)[param_2];
  if (iVar5 == 0) {
    return (float10)_DAT_007e3d28;
  }
  if (*(float *)(*(int *)(*(int *)(param_1 + 10) + 0x244) + 0x32) < _DAT_007e3374) {
    return (float10)_DAT_007e3d28;
  }
  if (*(char *)(*(int *)(*(int *)(param_1 + 10) + 0x12da) + param_2 * 0x2c + 0x2c) != '\0') {
    return (float10)_DAT_007e3d28;
  }
  cVar3 = (**(code **)(*(int *)(param_1 + 100) + 0x24))(param_2);
  if (cVar3 == '\0') {
    return (float10)_DAT_007e3d28;
  }
  cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xb70) + 0x24))(param_2);
  if (cVar3 == '\0') {
    return (float10)_DAT_007e3d28;
  }
  FUN_006a9d50();
  iVar4 = _rand();
  fVar2 = (float)(iVar4 % 0x4b) + _DAT_007e681c;
  fVar7 = (float10)FUN_005885d0();
  fVar1 = (float10)_DAT_007e6800;
  fVar8 = (float10)FUN_004687f0(0,0);
  fVar9 = (float10)FUN_004687f0(1,0);
  fVar9 = (float10)(float)fVar8 / fVar9;
  if ((float10)_DAT_007e384c < fVar9) {
    fVar9 = (float10)_DAT_007e384c;
  }
  fStack_4 = (float)(fVar9 * (float10)(float)((float10)fVar2 - fVar7 * fVar1));
  if ((*(int *)(iVar5 + 0x3350) != 0) &&
     (fStack_4 = fStack_4 - _DAT_007e6858,
     *(int *)(iVar5 + 0x3350) == *(int *)(*(int *)(param_1 + 10) + 0x3350))) {
    fStack_4 = fStack_4 - _DAT_007e6818;
  }
  iVar4 = FUN_006a9d50();
  if (*(char *)(iVar4 + 0xe8d6 + iVar5) == '\0') {
    fStack_4 = fStack_4 - _DAT_007e6864;
  }
  iVar5 = FUN_0044d810();
  iVar4 = FUN_0044d810();
  uVar6 = iVar5 - iVar4 >> 0x1f;
  return (float10)(int)(((iVar5 - iVar4 ^ uVar6) - uVar6) * 10) + (float10)fStack_4;
}


