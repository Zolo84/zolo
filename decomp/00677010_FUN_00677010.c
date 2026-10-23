// FUN_00677010 @ 677010 size=1090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00677010(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  float10 fVar10;
  int local_c;
  
  local_c = FUN_0044ab40();
  iVar9 = FUN_0044ab40();
  if (iVar9 < 1) {
    local_c = 1;
  }
  fVar10 = (float10)FUN_004a3450();
  fVar1 = (float)fVar10;
  *param_5 = (float)fVar10;
  iVar9 = *(int *)(param_1 + 10);
  fVar4 = *(float *)(iVar9 + 0x409a) + *(float *)(iVar9 + 0x4092);
  fVar2 = *(float *)(iVar9 + 0x408e) + *(float *)(iVar9 + 0x4086);
  if (fVar4 < fVar2) {
    fVar4 = fVar2;
  }
  fVar2 = *(float *)(iVar9 + 0x3a74);
  fVar3 = *(float *)(iVar9 + 0x3a8c);
  fVar5 = *(float *)(iVar9 + 0x3abc);
  fVar10 = (float10)FUN_00442c00(5);
  iVar9 = *(int *)(param_1 + 10);
  fVar6 = *(float *)(iVar9 + 0x39c4);
  fVar4 = (float)(((float10)((fVar4 + fVar2) - fVar3) - fVar10) - (float10)fVar5);
  fVar2 = (float)local_c;
  fVar3 = *(float *)(iVar9 + 0x37ee) * *(float *)(iVar9 + 0x11a8c) * _DAT_00d7ca64 * fVar2;
  cVar8 = FUN_0044beb0();
  if (DAT_00dc1540 != '\0') {
    *(undefined1 *)(param_1 + 0x908) = 1;
    *(undefined1 *)(param_1 + 0x909) = 0;
    if (((_DAT_00877620 != _DAT_007e3374) &&
        (_DAT_00877620 < *(float *)(*(int *)(param_1 + 10) + 0x3c0a) / fVar3)) &&
       (*(undefined1 *)(param_1 + 0x908) = 0,
       (int)*(short *)(DAT_00893530 + 0x18) <=
       *(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xaa6))) {
      *(undefined1 *)(param_1 + 0x909) = 1;
    }
  }
  if ((_DAT_0087761c * fVar3 < fVar6) ||
     (iVar9 = *(int *)(param_1 + 10), _DAT_007e3380 < *(float *)(iVar9 + 0x3b34))) {
    *param_6 = 0.0;
  }
  else {
    fVar5 = *(float *)(iVar9 + 0x3bb8);
    if (fVar6 < fVar5) {
      fVar7 = _DAT_00dc18d0;
      if (cVar8 != '\0') {
        fVar7 = _DAT_00dc18d0 * _DAT_00dc18d4;
      }
      if (fVar6 <= *(float *)(iVar9 + 0x3bd0)) {
        fVar7 = ((fVar5 - fVar6) / fVar5 + _DAT_007e3374) * fVar7;
      }
      else {
        fVar7 = fVar7 - (fVar7 * fVar6 * _DAT_007e34c0) / fVar5;
      }
      fVar4 = (fVar7 + _DAT_007e3374) * fVar4;
      if (fVar4 <= _DAT_007e3380) {
        *param_6 = _DAT_007e3374 / fVar3;
        goto LAB_0067723b;
      }
    }
    *param_6 = fVar4 / fVar3;
  }
LAB_0067723b:
  if (_DAT_007e3374 < *(float *)(*(int *)(param_1 + 10) + 0x234)) {
    if (cVar8 == '\0') {
      fVar4 = *param_5 + *param_5;
    }
    else {
      fVar4 = *(float *)(*(int *)(param_1 + 10) + 0x234) * _DAT_007e543c;
      if (fVar4 < _DAT_007e34e0) {
        fVar4 = _DAT_007e34e0;
      }
      fVar4 = fVar4 + *param_5;
    }
    *param_5 = fVar4;
  }
  if (_DAT_007e3374 < *param_5 + *param_6) {
    if (_DAT_007e3374 < *param_6) {
      *param_6 = 1.0;
    }
    if (_DAT_007e3374 < *param_5) {
      *param_5 = 1.0;
    }
    if (((cVar8 != '\0') && (*(float *)(*(int *)(param_1 + 10) + 0x234) < _DAT_007e8548)) ||
       (fVar6 < *(float *)(*(int *)(param_1 + 10) + 0x3bd0))) {
      fVar4 = _DAT_007e3374 - *param_6;
      if (_DAT_007e3374 - *param_6 < fVar1) {
        fVar4 = fVar1;
      }
      *param_5 = fVar4;
      *param_6 = _DAT_007e3374 - fVar4;
    }
    else {
      *param_6 = _DAT_007e3374 - *param_5;
    }
  }
  fVar3 = _DAT_007e3374 - (*param_5 + *param_6);
  *param_4 = *(float *)(*(int *)(param_1 + 10) + 0x3a00) / fVar2;
  fVar2 = *(float *)(*(int *)(param_1 + 10) + 0x39f4) / fVar2;
  *param_3 = fVar2;
  fVar4 = *(float *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x74);
  if (fVar4 <= fVar2) {
    fVar2 = fVar4;
  }
  *param_3 = fVar2;
  fVar4 = _DAT_007e3380;
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  *param_3 = fVar2;
  if (fVar2 <= fVar4) {
    fVar2 = _DAT_007e3380;
  }
  *param_3 = fVar2;
  fVar3 = fVar3 - fVar2;
  fVar4 = *(float *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x78);
  if (*param_4 < fVar4) {
    fVar4 = *param_4;
  }
  *param_4 = fVar4;
  fVar2 = _DAT_007e3380;
  if (fVar3 <= fVar4) {
    fVar4 = fVar3;
  }
  *param_4 = fVar4;
  if (fVar4 <= fVar2) {
    fVar4 = _DAT_007e3380;
  }
  *param_4 = fVar4;
  *param_2 = fVar3 - fVar4;
  fVar4 = (fVar3 - fVar4) + *param_3 + *param_4 + *param_5 + *param_6;
  if (*param_5 / fVar4 < fVar1) {
    *param_5 = fVar4 * fVar1;
  }
  if (fVar4 < _DAT_007e3374) {
    *param_2 = (((_DAT_007e3374 - *param_6) - *param_5) - *param_3) - *param_4;
  }
  return;
}


