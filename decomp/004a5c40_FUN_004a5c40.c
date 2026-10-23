// FUN_004a5c40 @ 4a5c40 size=672

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004a5c40(int param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_c;
  float local_8;
  
  iVar8 = (int)param_2;
  iVar7 = (&DAT_0089cad8)[param_3];
  if (iVar7 == 0) {
    return 0;
  }
  if (DAT_00d610e6 != '\0') {
    return 100;
  }
  fVar10 = (float10)FUN_004a5ee0();
  if (fVar10 == (float10)_DAT_007e3380) {
    return 0;
  }
  fVar11 = (float10)FUN_004a5fb0();
  fVar12 = (float10)FUN_0076bbb0(param_1,9);
  fVar3 = (float10)_DAT_007e3374;
  fVar13 = (float10)FUN_0076bbb0(iVar7,9);
  fVar1 = (float)((float10)(float)(fVar12 + fVar3) - fVar13);
  local_c = 1.0;
  fVar4 = (((float)fVar10 + _DAT_007e4088) - (float)fVar11) * _DAT_007e68e0;
  if (DAT_00dc17b4 == _DAT_007e6f2c) goto LAB_004a5e02;
  iVar5 = FUN_0044e1b0();
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = FUN_0044e1b0();
  fVar2 = DAT_00dc17b4;
  if (iVar5 == 0) {
    return 0;
  }
  local_8 = DAT_00dc17b4;
  FUN_00451250(*(undefined4 *)(param_1 + 6));
  iVar5 = __ftol();
  if ((iVar5 < 0xb) || (_DAT_00dc17c0 <= _DAT_007e3380)) {
    if (0 < iVar5) {
      local_8 = (float)iVar5 * _DAT_00dc17bc;
      goto LAB_004a5d82;
    }
  }
  else {
    local_8 = _DAT_00dc17bc * _DAT_007e4090 + (float)(iVar5 + -10) * _DAT_00dc17c0;
LAB_004a5d82:
    local_8 = local_8 + fVar2;
  }
  uVar6 = FUN_0044e1b0();
  uVar6 = FUN_0044e1b0(uVar6);
  fVar10 = (float10)FUN_0044a9c0(uVar6);
  if ((float10)local_8 <= fVar10) {
    local_c = 0.0;
  }
  else {
    local_c = (float)(((float10)local_8 - fVar10) / (float10)local_8);
  }
  if (*(char *)(param_3 + 0xe8d6 + param_1) != '\0') {
    local_c = (_DAT_007e3374 - _DAT_00dc17b8) * local_c + _DAT_00dc17b8;
  }
  if (local_c <= _DAT_007e3380) {
    return 0;
  }
LAB_004a5e02:
  if (param_2 == 1.68156e-44) {
    fVar1 = local_c * fVar4 * fVar1 * _DAT_007e4088;
  }
  else {
    bVar9 = param_2 == 4.2039e-45;
    param_2 = 0.0;
    if (bVar9) {
      if (*(float *)(iVar7 + 0x234) <= _DAT_007e3380) {
        return 0;
      }
      fVar10 = (float10)FUN_00586ca0(0xb);
      if (fVar10 != (float10)_DAT_007e3380) {
        fVar2 = *(float *)(iVar7 + 0x234);
        fVar10 = (float10)FUN_00586ca0(0xb);
        param_2 = (float)((float10)fVar2 / fVar10);
      }
    }
    FUN_0044ca60(iVar8,2,param_3);
    iVar7 = __ftol();
    FUN_00586ca0(iVar8);
    iVar8 = __ftol();
    fVar1 = ((float)iVar8 + param_2) * local_c * fVar4 * fVar1 + (float)iVar7;
  }
  iVar7 = (int)ROUND(fVar1);
  if (-1 < iVar7) {
    if (100 < iVar7) {
      return 100;
    }
    return iVar7;
  }
  return 0;
}


