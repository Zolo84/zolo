// FUN_0067d050 @ 67d050 size=451

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0067d050(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar1 = (&DAT_0089cad8)[param_2];
  if (iVar1 == 0) {
    return (float10)_DAT_007e3d28;
  }
  cVar2 = FUN_005861a0(param_2);
  if (cVar2 != '\0') {
    return (float10)_DAT_007e3d28;
  }
  if (*(char *)(*(int *)(*(int *)(param_1 + 10) + 0x12da) + param_2 * 0x2c + 0x2c) != '\0') {
    return (float10)_DAT_007e3d28;
  }
  cVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x24))(param_2);
  if (cVar2 == '\0') {
    return (float10)_DAT_007e3d28;
  }
  cVar2 = FUN_0044b300(param_2);
  if (cVar2 != '\0') {
    return (float10)_DAT_007e3d28;
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x12da) + 0x3b30) != 0) {
    return (float10)_DAT_007e3d28;
  }
  iVar3 = FUN_004697d0();
  if (param_2 == iVar3) {
    return (float10)_DAT_007e3d28;
  }
  iVar4 = _rand();
  fVar9 = (float10)FUN_005885d0();
  fVar10 = (float10)_DAT_007e6800;
  iVar5 = FUN_006b5820(param_2);
  iVar6 = FUN_0044d810();
  iVar7 = FUN_0044d810();
  iVar3 = *(int *)(param_1 + 10);
  uVar8 = iVar6 - iVar7 >> 0x1f;
  fVar10 = (float10)((float)(fVar9 * fVar10 + (float10)(iVar4 % 0x28)) - (float)iVar5) -
           (float10)(int)(((iVar6 - iVar7 ^ uVar8) - uVar8) * 5);
  fVar9 = ((float10)*(float *)(iVar1 + 0x1183e) + (float10)*(float *)(iVar1 + 0x1183a) +
          (float10)*(float *)(iVar1 + 0x11836)) /
          ((float10)*(float *)(iVar3 + 0x1183e) + (float10)*(float *)(iVar3 + 0x1183a) +
          (float10)*(float *)(iVar3 + 0x11836));
  if ((float10)_DAT_007e384c < fVar9) {
    return (float10)_DAT_007e384c * fVar10;
  }
  if (fVar9 < (float10)_DAT_007e6f18) {
    fVar9 = (float10)_DAT_007e6f18;
  }
  return fVar9 * fVar10;
}


