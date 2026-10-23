// FUN_00469620 @ 469620 size=429

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00469620(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int local_c;
  
  iVar8 = (&DAT_0089cad8)[(int)param_2];
  if (iVar8 != 0) {
    fVar1 = *(float *)(iVar8 + 0x234);
    fVar2 = *(float *)(param_1 + 0x334c);
    fVar3 = *(float *)(param_1 + 0x234);
    fVar9 = (float10)FUN_0076bbb0(param_1,8);
    fVar10 = (float10)FUN_0076bbb0(iVar8,8);
    fVar11 = (float10)_DAT_007e6850;
    fVar5 = (float10)_DAT_007e4094;
    FUN_0044ab40();
    FUN_0044ab40();
    local_c = __ftol();
    if (local_c < 0xb) {
      if (local_c < -0x32) {
        local_c = -0x32;
      }
    }
    else {
      local_c = 10;
    }
    param_2 = (float)local_c +
              (float)((((float10)fVar1 * fVar5 - (float10)fVar2) - (float10)fVar3) +
                     ((float10)(float)fVar9 - fVar10) * fVar11);
    cVar6 = FUN_0044beb0();
    if (cVar6 != '\0') {
      param_2 = param_2 - _DAT_007e681c;
    }
    if (*(int *)(iVar8 + 0x3350) != 0) {
      param_2 = param_2 - _DAT_007e67e0;
      iVar4 = *(int *)(iVar8 + 6);
      iVar7 = FUN_00584c90();
      if (iVar7 == iVar4) {
        param_2 = param_2 - _DAT_007e6840;
      }
    }
    fVar11 = (float10)FUN_0044c670(7,*(undefined4 *)(iVar8 + 6));
    fVar11 = (fVar11 - (float10)_DAT_007e3374) * (float10)_DAT_007e4088 + (float10)param_2;
    if ((&DAT_00dc0fd4)[*(int *)(iVar8 + 6)] == 0) {
      iVar8 = FUN_006b5850(*(undefined4 *)(param_1 + 6));
      fVar11 = (float10)(float)fVar11 - (float10)iVar8 * (float10)_DAT_007e3840;
    }
    if (fVar11 < (float10)_DAT_007e3380) {
      __ftol();
      return;
    }
  }
  __ftol();
  return;
}


