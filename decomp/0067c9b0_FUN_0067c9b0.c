// FUN_0067c9b0 @ 67c9b0 size=371

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0067c9b0(int param_1,int param_2)

{
  float10 fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  
  iVar6 = (&DAT_0089cad8)[param_2];
  if (iVar6 == 0) {
    return (float10)_DAT_007e3d28;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 10) + 0x3350);
  if (iVar5 == 0) {
    return (float10)_DAT_007e3d28;
  }
  if (*(int *)(iVar6 + 0x3350) != iVar5) {
    return (float10)_DAT_007e3d28;
  }
  cVar3 = FUN_0044beb0();
  if (cVar3 != '\0') {
    return (float10)_DAT_007e3d28;
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x12da) + 0x3b30);
  if (iVar5 != 0) {
    iVar4 = FUN_006a9d50();
    if (iVar5 == iVar4) {
      return (float10)_DAT_007e3d28;
    }
  }
  iVar5 = _rand();
  fVar2 = (float)(iVar5 % 10) - _DAT_007e682c;
  iVar5 = FUN_006a9d50();
  if (iVar5 == param_2) {
    iVar6 = *(int *)(*(int *)(iVar6 + 0x12da) + 0x3b30);
    if (iVar6 != 0) {
      cVar3 = FUN_00584e20(iVar6);
      if (cVar3 == '\0') {
        return (float10)_DAT_007f37f8;
      }
    }
  }
  else {
    iVar6 = FUN_00584c90();
    if ((iVar6 == param_2) && (DAT_00877640 != '\0')) {
      fVar8 = (float10)FUN_005885d0();
      fVar1 = (float10)_DAT_007e6800;
      iVar6 = FUN_0044d810();
      iVar5 = FUN_0044d810();
      uVar7 = iVar6 - iVar5 >> 0x1f;
      return (float10)(int)((iVar6 - iVar5 ^ uVar7) - uVar7) * (float10)_DAT_007e4090 +
             (float10)(float)((float10)fVar2 - fVar8 * fVar1);
    }
  }
  return (float10)fVar2;
}


