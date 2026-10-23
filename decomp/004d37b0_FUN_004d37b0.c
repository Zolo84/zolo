// FUN_004d37b0 @ 4d37b0 size=2081

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d37b0(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined8 uVar8;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  FUN_004e9370();
  (**(code **)(*(int *)(param_1 + 0x10a) + 4))();
  iVar4 = FUN_004e9370();
  if (*(int *)(iVar4 + 0x3d4) != 0) {
    FUN_004e9370();
    FUN_0044b280();
  }
  iVar4 = FUN_004e9370();
  if (*(int *)(iVar4 + 0x3d4) != 0) {
    FUN_004e9370();
    FUN_0044b280();
  }
  uVar5 = __ftol();
  *(undefined4 *)(param_1 + 0xf0) = uVar5;
  iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
  if (*(int *)(iVar4 + 0x3d8) == *(int *)(param_1 + 0x12a)) {
    if (*(char *)(param_1 + 0x19) != '\0') {
LAB_004d38f8:
      fStack_10 = 0.0;
      fStack_8 = 0.0;
      fStack_4 = 0.0;
      fStack_14 = 0.0;
      iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
      iVar4 = *(int *)(*(int *)(iVar4 + 0x482) + 0x52);
      if (iVar4 == 0) {
        iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
        iVar4 = *(int *)(iVar4 + 0x12);
      }
      else {
        iVar6 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
        if (iVar4 != *(int *)(iVar6 + 0x12)) {
          iVar6 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
          iVar6 = FUN_004e9370(*(undefined4 *)(iVar6 + 0x12));
          fStack_10 = *(float *)(iVar6 + 0x268);
          fStack_8 = *(float *)(iVar6 + 0x26c);
          fStack_4 = *(float *)(iVar6 + 0x280);
          fStack_14 = *(float *)(iVar6 + 0x270);
        }
      }
      iVar4 = FUN_004e9370(iVar4);
      fVar1 = (*(float *)(iVar4 + 0x26c) + fStack_8) * _DAT_008775a0;
      if (DAT_0087759c <= fVar1) {
        fVar1 = DAT_0087759c;
      }
      fVar2 = _DAT_008775a0 * (*(float *)(iVar4 + 0x268) + fStack_10);
      if (DAT_0087759c <= fVar2) {
        fVar2 = DAT_0087759c;
      }
      fStack_14 = fVar1 - (*(float *)(iVar4 + 0x270) + fStack_14);
      fVar2 = fVar2 - (*(float *)(iVar4 + 0x280) + fStack_4);
      if (fStack_14 < fVar2) {
        fStack_14 = fVar2;
      }
      iVar4 = (&DAT_0089cad8)[*(int *)(param_1 + 0x150)];
      if (iVar4 == 0) {
        iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
        fStack_10 = *(float *)(*(int *)(iVar4 + 0x3d8) + 0x39c4);
        iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
        fStack_10 = fStack_10 - *(float *)(*(int *)(iVar4 + 0x3d8) + 0x39a0) * _DAT_007e3650;
      }
      else {
        fStack_10 = *(float *)(iVar4 + 0x39c4) - *(float *)(iVar4 + 0x39a0) * _DAT_007e3650;
      }
      if (fStack_10 < _DAT_007e3380) {
        fStack_10 = 0.0;
      }
      iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      fVar1 = *(float *)(*(int *)(iVar4 + 0x3d8) + 0x39b4);
      iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      fVar1 = fVar1 - *(float *)(*(int *)(iVar4 + 0x3d8) + 0x4092) * _DAT_007e3650;
      if (fVar1 < _DAT_007e3380) {
        fVar1 = _DAT_007e3380;
      }
      if (fVar1 < fStack_10) {
        fVar1 = fStack_10;
      }
      fStack_10 = fVar1;
      if (fStack_10 < fStack_14) {
        fStack_14 = fStack_10;
      }
      goto LAB_004d3f60;
    }
    if (*(char *)(param_1 + 0x16) != '\0') {
      iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      iVar4 = *(int *)(iVar4 + 0x482);
      iVar6 = FUN_0044e1d0();
      if (iVar4 == iVar6) goto LAB_004d38f8;
    }
  }
  if (DAT_00dc1540 != '\0') {
    if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x154)) {
      iVar4 = (&DAT_0089cad8)[*(int *)(param_1 + 0x154)];
      iVar6 = (&DAT_0089cad8)[*(int *)(param_1 + 0x150)];
      if (((iVar4 != 0) && (iVar6 != 0)) &&
         (iVar7 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c)), *(int *)(iVar7 + 0x482) != 0)) {
        uVar8 = CONCAT44(unaff_EBP,unaff_EBX);
        iVar7 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
        (**(code **)**(undefined4 **)(iVar7 + 0x482))(uVar8);
        unaff_EBP = (undefined4)((ulonglong)uVar8 >> 0x20);
        uVar5 = FUN_0044e1d0();
        cVar3 = FUN_004ccb10(uVar5);
        if (cVar3 != '\0') {
          fStack_10 = 0.0;
          fStack_14 = 0.0;
          fStack_8 = 0.0;
          fStack_c = 0.0;
          fStack_4 = 0.0;
          if (*(float *)(iVar4 + 0x3b20) == _DAT_007e3380) {
            fStack_10 = DAT_008775fc;
            if (DAT_00dc18cc != '\0') {
              fStack_10 = *(float *)(iVar6 + 0x3bbc) * _DAT_008775f8;
            }
            fStack_10 = *(float *)(iVar6 + 0x39b4) - fStack_10;
          }
          if (*(float *)(iVar4 + 0x3b34) == _DAT_007e3380) {
            fStack_14 = DAT_008775fc;
            if (DAT_00dc18cc != '\0') {
              fStack_14 = *(float *)(iVar6 + 0x3bd0) * _DAT_008775f8;
            }
            fStack_14 = *(float *)(iVar6 + 0x39c4) - fStack_14;
          }
          if (*(float *)(iVar4 + 0x3b24) == _DAT_007e3380) {
            fStack_c = DAT_008775fc;
            if (DAT_00dc18cc != '\0') {
              fStack_c = *(float *)(iVar6 + 0x3bc0) * DAT_008775fc;
            }
            fStack_c = *(float *)(iVar6 + 0x39bc) - fStack_c;
          }
          if (*(float *)(iVar4 + 0x3b2c) == _DAT_007e3380) {
            fStack_8 = DAT_008775fc;
            if (DAT_00dc18cc != '\0') {
              fStack_8 = *(float *)(iVar6 + 0x3bc8) * DAT_008775fc;
            }
            fStack_8 = *(float *)(iVar6 + 0x39c0) - fStack_8;
          }
          if (*(float *)(iVar4 + 0x3b28) == _DAT_007e3380) {
            fStack_4 = DAT_008775fc;
            if (DAT_00dc18cc != '\0') {
              fStack_4 = *(float *)(iVar6 + 0x3bc4) * DAT_008775fc;
            }
            fStack_4 = *(float *)(iVar6 + 0x39b8) - fStack_4;
          }
          if (fStack_10 < fStack_14) {
            fStack_10 = fStack_14;
          }
          fStack_14 = fStack_10;
          if (fStack_10 < fStack_c) {
            fStack_14 = fStack_c;
          }
          if (fStack_14 < fStack_8) {
            fStack_14 = fStack_8;
          }
          if (fStack_14 < fStack_4) {
            fStack_14 = fStack_4;
          }
          goto LAB_004d3f60;
        }
      }
    }
  }
  if (DAT_00dc1888 == '\0') {
    iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    fStack_14 = *(float *)(iVar4 + 0x280);
    iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    fVar1 = *(float *)(iVar4 + 0x268) * _DAT_008775a0;
    if (DAT_0087759c <= fVar1) {
      fVar1 = DAT_0087759c;
    }
    fStack_14 = fStack_14 - fVar1;
    if (fStack_14 < _DAT_007e3380) {
      fStack_14 = _DAT_007e3380;
    }
    fStack_14 = fStack_14 * (float)_DAT_007e3428;
    iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    if (fStack_14 < *(float *)(iVar4 + 0x274)) {
      iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      fStack_14 = *(float *)(iVar4 + 0x274);
    }
    iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    if (fStack_14 < *(float *)(iVar4 + 0x278)) {
      iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      fStack_14 = *(float *)(iVar4 + 0x278);
    }
    iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    if (*(float *)(iVar4 + 0x27c) <= fStack_14) goto LAB_004d3f60;
    uVar8 = CONCAT44(unaff_EBP,*(undefined4 *)(param_1 + 0x11c));
  }
  else {
    fStack_14 = *(float *)(param_1 + 0x24);
    if (fStack_14 < *(float *)(param_1 + 0x20)) {
      fStack_14 = *(float *)(param_1 + 0x20);
    }
    iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    if (fStack_14 < *(float *)(iVar4 + 0x274)) {
      iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      fStack_14 = *(float *)(iVar4 + 0x274);
    }
    iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    if (fStack_14 < *(float *)(iVar4 + 0x278)) {
      iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      fStack_14 = *(float *)(iVar4 + 0x278);
    }
    iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    if (*(float *)(iVar4 + 0x27c) <= fStack_14) goto LAB_004d3f60;
    uVar8 = CONCAT44(unaff_EBP,*(undefined4 *)(param_1 + 0x11c));
  }
  iVar4 = FUN_004e9370(uVar8);
  fStack_14 = *(float *)(iVar4 + 0x27c);
LAB_004d3f60:
  fVar1 = (fStack_14 / _DAT_008775a8) * _DAT_007e34c0 - _DAT_007e3848;
  if (0 < *(int *)(param_1 + 0x12e)) {
    fVar1 = (fVar1 + (float)*(int *)(param_1 + 0x12e)) - (float)*(int *)(param_1 + 0xf0);
  }
  fVar1 = fVar1 * _DAT_007e34c0 + _DAT_007e3374;
  if (fVar1 < _DAT_007e3374) {
    fVar1 = _DAT_007e3374;
  }
  FUN_007a8a7e((double)fVar1);
  uVar5 = __ftol();
  *(undefined4 *)(param_1 + 0xf0) = uVar5;
  return;
}


