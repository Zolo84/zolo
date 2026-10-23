// FUN_0067c700 @ 67c700 size=685

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0067c700(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  
  iVar6 = (int)param_2;
  iVar5 = (&DAT_0089cad8)[(int)param_2];
  if (iVar5 == 0) {
    return (float10)_DAT_007e3d28;
  }
  cVar2 = FUN_004a0780(param_2);
  if (cVar2 == '\0') {
    return (float10)_DAT_007e3d28;
  }
  iVar3 = FUN_006a9d50();
  if (param_2 == (float)iVar3) {
    return (float10)_DAT_007e3d28;
  }
  iVar3 = *(int *)(iVar5 + 0x12da);
  iVar4 = FUN_006a9d50();
  if (*(char *)(iVar3 + (iVar4 + 1) * 0x2c) != '\0') {
    return (float10)_DAT_007e3d28;
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x12da) + 0x3b30) != 0) {
    return (float10)_DAT_007e3d28;
  }
  iVar3 = *(int *)(*(int *)(iVar5 + 0x12da) + 0x3b30);
  if (iVar3 != 0) {
    iVar4 = FUN_006a9d50();
    if (iVar3 != iVar4) {
      return (float10)_DAT_007e3d28;
    }
  }
  if ((*(int *)(iVar5 + 0x3350) != 0) &&
     (*(int *)(iVar5 + 0x3350) != *(int *)(*(int *)(param_1 + 10) + 0x3350))) {
    return (float10)_DAT_007e3d28;
  }
  iVar3 = FUN_0044d810();
  iVar4 = FUN_0044d810();
  if (iVar3 == iVar4) {
    return (float10)_DAT_007e3d28;
  }
  iVar3 = _rand();
  param_2 = (float)(iVar3 % 0x1e) - _DAT_007e4090;
  cVar2 = FUN_004a0a80();
  if (cVar2 != '\0') {
    iVar3 = _rand();
    param_2 = (float)(iVar3 % 0x14) + param_2;
  }
  if ((*(int *)(param_1 + 0x54) == iVar6) && (*(int *)(param_1 + 0x58) == 6)) {
    param_2 = param_2 - _DAT_007e6b28;
  }
  fVar8 = (float10)FUN_005885d0();
  fVar9 = (float10)_DAT_007e40b8;
  iVar3 = FUN_006b5880(iVar6);
  iVar4 = FUN_006b58b0(iVar6);
  fVar1 = (float)iVar4 * _DAT_007e6800;
  iVar4 = FUN_006b5820(iVar6);
  param_2 = (fVar1 + (float)iVar3 + (float)(fVar8 * fVar9 + (float10)param_2)) - (float)iVar4;
  if (*(char *)(iVar6 + 0xe8d6 + *(int *)(param_1 + 10)) != '\0') {
    param_2 = param_2 + _DAT_007e682c;
  }
  param_2 = *(float *)(iVar5 + 0x234) + param_2;
  cVar2 = FUN_0044beb0();
  if (cVar2 != '\0') {
    param_2 = param_2 - _DAT_007e685c;
  }
  iVar5 = FUN_0044d810();
  iVar6 = FUN_0044d810();
  uVar7 = iVar5 - iVar6 >> 0x1f;
  fVar1 = (float)(int)(((iVar5 - iVar6 ^ uVar7) - uVar7) * 10) - _DAT_007e682c;
  iVar5 = FUN_0044dc80(6);
  fVar9 = (float10)((5 - iVar5) * 0x14);
  if (fVar9 < (float10)_DAT_007e3380) {
    fVar9 = (float10)_DAT_007e3380;
  }
  return ((float10)(fVar1 + param_2) - fVar9) * (float10)_DAT_00dc18e4;
}


