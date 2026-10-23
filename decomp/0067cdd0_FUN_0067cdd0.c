// FUN_0067cdd0 @ 67cdd0 size=568

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0067cdd0(int param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  
  iVar5 = (&DAT_0089cad8)[param_2];
  if (iVar5 == 0) {
    return (float10)_DAT_007e3d28;
  }
  if (*(float *)(*(int *)(*(int *)(param_1 + 10) + 0x244) + 0x3a) < _DAT_007e3374) {
    return (float10)_DAT_007e3d28;
  }
  cVar4 = FUN_004a0780(param_2);
  if (cVar4 == '\0') {
    return (float10)_DAT_007e3d28;
  }
  if (*(char *)(*(int *)(*(int *)(param_1 + 10) + 0x12da) + param_2 * 0x2c + 0x2c) != '\0') {
    return (float10)_DAT_007e3d28;
  }
  cVar4 = FUN_0044b300(param_2);
  if (cVar4 != '\0') {
    return (float10)_DAT_007e3d28;
  }
  cVar4 = FUN_005861c0(param_2);
  if (cVar4 != '\0') {
    return (float10)_DAT_007e3d28;
  }
  cVar4 = FUN_004a0a80();
  if (cVar4 == '\0') {
    return (float10)_DAT_007e3d28;
  }
  iVar6 = *(int *)(param_1 + 10);
  if (*(int *)(*(int *)(iVar6 + 0x12da) + 0x3b30) != 0) {
    return (float10)_DAT_007e3d28;
  }
  if (*(int *)(*(int *)(iVar5 + 0x12da) + 0x3b30) != 0) {
    return (float10)_DAT_007e3d28;
  }
  if ((*(float *)(iVar6 + 0x1183e) + *(float *)(iVar6 + 0x1183a) + *(float *)(iVar6 + 0x11836)) /
      (*(float *)(iVar5 + 0x1183e) + *(float *)(iVar5 + 0x1183a) + *(float *)(iVar5 + 0x11836)) <
      _DAT_007e3650) {
    return (float10)_DAT_007e3d28;
  }
  iVar5 = _rand();
  fVar3 = (float)(iVar5 % 0x32) - _DAT_007e681c;
  fVar10 = (float10)FUN_005885d0();
  fVar2 = (float10)_DAT_007e6838;
  iVar5 = FUN_0044d810();
  iVar6 = FUN_0044d810();
  uVar9 = iVar5 - iVar6 >> 0x1f;
  iVar7 = FUN_006b58b0(param_2);
  fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xdc);
  iVar8 = FUN_0044dc80(6);
  fVar11 = (float10)((5 - iVar8) * 0x19);
  if (fVar11 < (float10)_DAT_007e3380) {
    fVar11 = (float10)_DAT_007e3380;
  }
  return (float10)(((float)iVar7 +
                   ((float)(fVar10 * fVar2 + (float10)fVar3) -
                   (float)(int)(((iVar5 - iVar6 ^ uVar9) - uVar9) * 0xf))) - fVar1) - fVar11;
}


