// FUN_00503610 @ 503610 size=3890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00503610(int param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float10 fVar11;
  float fVar12;
  float fStack_10;
  float fStack_c;
  
  piVar1 = *(int **)(param_1 + 0x6c);
  if (DAT_00dc16fc == '\0') {
    if (piVar1 == (int *)0x0) goto LAB_00504532;
    if (*(int *)(*(int *)(param_1 + 0x5c) + 6) == 0x157) {
      return (float10)_DAT_00877680;
    }
    iVar6 = piVar1[3];
    if ((iVar6 == 0) && (*(char *)(param_1 + 0x15f) != '\0')) {
      iVar8 = (**(code **)(*piVar1 + 0x10))();
      if (*(int *)(iVar8 + 0x2ae) == 0) {
        iVar8 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))();
        if (*(int *)(iVar8 + 0x2b2) != 0) {
          iVar6 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))();
          iVar6 = *(int *)(*(int *)(iVar6 + 0x2b2) + 0x212);
        }
      }
      else {
        iVar6 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))();
        iVar6 = *(int *)(*(int *)(iVar6 + 0x2ae) + 0x212);
      }
    }
    iVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x11c) + 4))();
    if ((iVar8 != 0) ||
       ((*(int *)(*(int *)(param_1 + 0x6c) + 0x176) != 0 &&
        (*(char *)(*(int *)(param_1 + 0x6c) + 0x17b) == '\0')))) {
      if (*(char *)(param_1 + 0x161) == '\0') {
        if (*(char *)(param_1 + 0x160) != '\0') {
          iVar6 = *(int *)(*(int *)(param_1 + 0x6c) + 0x212);
        }
      }
      else {
        iVar6 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))();
        iVar6 = *(int *)(iVar6 + 0x212);
      }
      uVar10 = FUN_004e9370(iVar6);
      fVar12 = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0xf0) * _DAT_007e543c;
      uVar7 = uVar10;
      uVar9 = param_2;
      fVar11 = (float10)FUN_004fd5d0(1);
      cVar4 = FUN_0044d1d0((float)fVar11,fVar12,uVar7,uVar9);
      if (cVar4 == '\0') {
        *(undefined1 *)(param_1 + 0x157) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x157) = 0;
      }
      fVar11 = (float10)FUN_004fd7c0(1);
      cVar4 = FUN_0044ccf0((float)fVar11,uVar10,param_2);
      if (cVar4 == '\0') {
        fVar11 = (float10)_DAT_007e3380;
        *(undefined1 *)(param_1 + 0x156) = 1;
        return fVar11;
      }
      *(undefined1 *)(param_1 + 0x156) = 0;
      goto LAB_00504532;
    }
    iVar6 = FUN_004e9370(iVar6);
    fVar12 = *(float *)(param_1 + 0xfc);
    fVar11 = (float10)FUN_0051c550();
    fStack_10 = (float)((((float10)fVar12 - (float10)_DAT_007e685c) * (float10)_DAT_007e543c +
                        (float10)_DAT_007e3374) * fVar11);
    if (*(char *)(param_1 + 0x161) == '\0') {
      if (*(char *)(param_1 + 0x15f) != '\0') {
        if (((*(int *)(*(int *)(param_1 + 0x6c) + 0xc) < 1) || (*(int *)(iVar6 + 0x254) == 8)) ||
           (*(int *)(iVar6 + 0x254) == 9)) {
          fStack_10 = 0.0;
        }
        else {
          fVar11 = (float10)FUN_004ecea0();
          iVar8 = *(int *)(iVar6 + 0x3d4);
          fVar12 = (float)fVar11;
          if ((((iVar8 != *(int *)(param_1 + 0x5c)) && (iVar5 = FUN_00522770(), iVar8 != iVar5)) &&
              ((*(int *)(*(int *)(param_1 + 0x5c) + 0x3350) !=
                *(int *)(*(int *)(iVar6 + 0x3d4) + 0x3350) &&
               (cVar4 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar6 + 0x3d4) + 6)), cVar4 == '\0')))
              ) || (fVar12 = fVar12 + fVar12 + _DAT_00dc1714, fVar12 <= _DAT_00877314)) {
            fStack_10 = fVar12 * fStack_10;
          }
          else {
            fStack_10 = _DAT_00877314 * fStack_10;
          }
        }
        if (0 < *(int *)(param_1 + 0x150)) {
          fStack_10 = fStack_10 * _DAT_007e34c0;
        }
        fVar11 = (float10)FUN_004fd5d0(1);
        if (fVar11 <= (float10)_DAT_007e3380) {
LAB_005040e8:
          *(undefined1 *)(param_1 + 0x157) = 0;
        }
        else {
          fVar12 = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0xf0) * _DAT_007e543c;
          iVar8 = iVar6;
          uVar7 = param_2;
          fVar11 = (float10)FUN_004fd5d0(1);
          cVar4 = FUN_0044d1d0((float)fVar11,fVar12,iVar8,uVar7);
          if (cVar4 != '\0') goto LAB_005040e8;
          fStack_10 = fStack_10 * _DAT_007e34c0;
          *(undefined1 *)(param_1 + 0x157) = 1;
        }
        (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))();
        fVar11 = (float10)FUN_005095a0();
        fVar2 = *(float *)(param_1 + 0xf4);
        fStack_10 = (float)(fVar11 * (float10)fStack_10);
        fVar12 = *(float *)(param_1 + 0xf8);
        fVar11 = (float10)fVar12;
        if (*(int *)(param_1 + 0x5c) != 0) {
          fVar3 = *(float *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x244) + 0x3e);
          fVar11 = (float10)FUN_0044c830(param_1,2);
          fVar11 = (float10)fVar3 * (float10)fVar12 * fVar11;
        }
        fVar11 = (float10)fVar2 / fVar11;
        if ((float10)_DAT_007e6800 <= fVar11) {
          if (fVar11 < (float10)_DAT_007e34c0) {
            fStack_10 = fStack_10 + fStack_10;
          }
          else if ((float10)_DAT_007e4094 <= fVar11) {
            fStack_10 = fStack_10 * _DAT_007e34c0;
          }
        }
        else {
          fStack_10 = fStack_10 * _DAT_007e384c;
        }
        cVar4 = FUN_0051d5c0();
        if ((cVar4 != '\0') && (*(char *)(*(int *)(param_1 + 0x6c) + 0x17b) == '\0')) {
          fStack_10 = -0.2;
        }
        iVar8 = iVar6;
        fVar11 = (float10)FUN_004fd7c0(1);
        cVar4 = FUN_0044ccf0((float)fVar11,iVar8,param_2);
        if (cVar4 == '\0') {
          *(undefined1 *)(param_1 + 0x156) = 1;
          fStack_10 = -0.5;
          goto LAB_00504389;
        }
        goto LAB_00504357;
      }
      if (*(char *)(param_1 + 0x160) == '\0') goto LAB_0050435e;
      if (0 < *(int *)(param_1 + 0x150)) {
        fStack_10 = fStack_10 * (float)_DAT_007e3358;
      }
      (**(code **)(**(int **)(param_1 + 0x6c) + 0x18))();
      cVar4 = FUN_004f0aa0();
      if (cVar4 == '\0') {
        fStack_10 = 0.0;
      }
      else {
        iVar8 = FUN_004ece80();
        if (iVar8 != 0) {
          fStack_c = *(float *)(iVar8 + 0x2e);
          if (*(float *)(iVar8 + 0x2e) < _DAT_007e3374) {
            fStack_c = _DAT_007e3374;
          }
          fStack_c = *(float *)(iVar8 + 0x14) / fStack_c;
          if (fStack_c <= _DAT_007e3374) {
            if (fStack_c < _DAT_007e46cc) {
              fStack_c = 0.01;
            }
          }
          else {
            fStack_c = 1.0;
          }
          FUN_004e9370(*(undefined4 *)(iVar8 + 0xc));
          fVar11 = (float10)FUN_004ecea0();
          fStack_10 = (float)((float10)fStack_c * (float10)fStack_10 * fVar11);
        }
      }
      fVar12 = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0xf0) * _DAT_007e543c;
      uVar7 = param_2;
      uVar9 = FUN_004e9370(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x212),param_2);
      fVar11 = (float10)FUN_004fd5d0(1);
      cVar4 = FUN_0044d1d0((float)fVar11,fVar12,uVar9,uVar7);
      if (cVar4 == '\0') {
        *(undefined1 *)(param_1 + 0x157) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x157) = 0;
      }
      uVar7 = FUN_004e9370(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x212),param_2);
      fVar11 = (float10)FUN_004fd7c0(1);
      cVar4 = FUN_0044ccf0((float)fVar11,uVar7,param_2);
      if (cVar4 != '\0') goto LAB_00504357;
      *(undefined1 *)(param_1 + 0x156) = 1;
      fStack_10 = 0.0;
    }
    else {
      if (*(int *)(iVar6 + 0x46a) == 0) {
        fStack_10 = 0.0;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))();
        fVar12 = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0xf0) * _DAT_007e543c;
        uVar7 = param_2;
        uVar9 = FUN_004e9370(*(undefined4 *)(iVar8 + 0x212),param_2);
        fVar11 = (float10)FUN_004fd5d0(1);
        cVar4 = FUN_0044d1d0((float)fVar11,fVar12,uVar9,uVar7);
        if (cVar4 != '\0') goto LAB_00503f54;
        *(undefined1 *)(param_1 + 0x157) = 1;
      }
      else {
        fStack_10 = fStack_10 * _DAT_007e34c0;
        iVar8 = FUN_004ece90();
        if (iVar8 != 0) {
          iVar8 = FUN_004ece90();
          fStack_10 = *(float *)(iVar8 + 0x14) * _DAT_007e6868 + fStack_10;
        }
        iVar8 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))();
        fVar12 = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0xf0) * _DAT_007e543c;
        uVar7 = param_2;
        uVar9 = FUN_004e9370(*(undefined4 *)(iVar8 + 0x212),param_2);
        fVar11 = (float10)FUN_004fd5d0(1);
        cVar4 = FUN_0044d1d0((float)fVar11,fVar12,uVar9,uVar7);
        if (cVar4 == '\0') {
          *(undefined1 *)(param_1 + 0x157) = 1;
        }
        else {
LAB_00503f54:
          *(undefined1 *)(param_1 + 0x157) = 0;
        }
      }
      iVar8 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))();
      uVar7 = FUN_004e9370(*(undefined4 *)(iVar8 + 0x212),param_2);
      fVar11 = (float10)FUN_004fd7c0(1);
      cVar4 = FUN_0044ccf0((float)fVar11,uVar7,param_2);
      if (cVar4 == '\0') {
        *(undefined1 *)(param_1 + 0x156) = 1;
        fStack_10 = -0.2;
        goto LAB_00504389;
      }
LAB_00504357:
      *(undefined1 *)(param_1 + 0x156) = 0;
LAB_0050435e:
      if (fStack_10 < _DAT_007e3380) goto LAB_00504389;
    }
    fStack_10 = (*(float *)(param_1 + 0xfc) - _DAT_007e685c) * _DAT_007e543c + fStack_10;
LAB_00504389:
    switch(*(undefined4 *)(iVar6 + 0x3ac)) {
    case 3:
    case 4:
      fStack_10 = fStack_10 - _DAT_007e6868;
      break;
    case 5:
      fStack_10 = fStack_10 - _DAT_007e68c4;
      break;
    case 6:
      fStack_10 = fStack_10 - _DAT_007e6a94;
    }
    cVar4 = FUN_00524000();
    if (cVar4 == '\0') {
      if (*(char *)(param_1 + 0x161) == '\0') {
        fStack_10 = -0.5;
      }
      else {
        fStack_10 = -0.1;
      }
    }
    else if ((_DAT_007e3380 < fStack_10) && (iVar6 = FUN_00522770(), iVar6 != 0)) {
      uVar7 = 3;
      iVar6 = param_1;
      FUN_00522770(param_1,3);
      fVar11 = (float10)FUN_0044c830(iVar6,uVar7);
      fStack_10 = (float)(fVar11 * (float10)fStack_10);
    }
    fVar11 = (float10)FUN_0076bbb0(*(undefined4 *)(param_1 + 0x5c),4);
    if (_DAT_007e3380 <= fStack_10) {
      return (fVar11 + (float10)_DAT_007e3374) * (float10)fStack_10 * (float10)_DAT_007e34e0;
    }
    return ((float10)_DAT_007e3374 - fVar11) * (float10)fStack_10 * (float10)_DAT_007e34e0;
  }
  if (piVar1 == (int *)0x0) goto LAB_00504532;
  if (*(int *)(*(int *)(param_1 + 0x5c) + 6) == 0x157) {
    *(undefined1 *)(param_1 + 0x156) = 0;
    *(undefined1 *)(param_1 + 0x157) = 0;
    return (float10)_DAT_00877680;
  }
  iVar6 = piVar1[3];
  iVar8 = iVar6;
  if (*(char *)(param_1 + 0x15f) == '\0') {
    if (*(char *)(param_1 + 0x161) == '\0') {
      if (*(char *)(param_1 + 0x160) != '\0') {
        iVar8 = *(int *)((int)piVar1 + 0x212);
      }
    }
    else {
      iVar8 = (**(code **)(*piVar1 + 0x14))();
      iVar8 = *(int *)(iVar8 + 0x212);
    }
  }
  else if (iVar6 == 0) {
    iVar5 = (**(code **)(*piVar1 + 0x10))();
    if (*(int *)(iVar5 + 0x2ae) == 0) {
      iVar5 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))();
      if (*(int *)(iVar5 + 0x2b2) != 0) {
        iVar6 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))();
        iVar8 = *(int *)(*(int *)(iVar6 + 0x2b2) + 0x212);
        iVar6 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))();
        iVar6 = *(int *)(*(int *)(iVar6 + 0x2b2) + 0xc);
      }
    }
    else {
      iVar6 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))();
      iVar8 = *(int *)(*(int *)(iVar6 + 0x2ae) + 0x212);
      iVar6 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))();
      iVar6 = *(int *)(*(int *)(iVar6 + 0x2ae) + 0xc);
    }
  }
  uVar7 = FUN_004e9370(iVar8);
  fVar12 = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0xf0) * _DAT_007e543c;
  if (fVar12 <= _DAT_007e3380) {
LAB_00503768:
    *(undefined1 *)(param_1 + 0x157) = 0;
  }
  else {
    uVar9 = uVar7;
    uVar10 = param_2;
    fVar11 = (float10)FUN_004fd5d0(1);
    cVar4 = FUN_0044d1d0((float)fVar11,fVar12,uVar9,uVar10);
    if (cVar4 != '\0') goto LAB_00503768;
    *(undefined1 *)(param_1 + 0x157) = 1;
  }
  if (*(float *)(param_1 + 0x108) * *(float *)(param_1 + 0xf0) * _DAT_007e543c <= _DAT_007e3380) {
LAB_005037b8:
    *(undefined1 *)(param_1 + 0x156) = 0;
  }
  else {
    fVar11 = (float10)FUN_004fd7c0(1);
    cVar4 = FUN_0044ccf0((float)fVar11,uVar7,param_2);
    if (cVar4 != '\0') goto LAB_005037b8;
    *(undefined1 *)(param_1 + 0x156) = 1;
  }
  iVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x11c) + 4))();
  if ((iVar8 != 0) ||
     ((*(int *)(*(int *)(param_1 + 0x6c) + 0x176) != 0 &&
      (*(char *)(*(int *)(param_1 + 0x6c) + 0x17b) == '\0')))) {
LAB_00504532:
    return (float10)_DAT_007e3380;
  }
  iVar6 = FUN_004e9370(iVar6);
  fVar11 = (float10)FUN_0051c550();
  param_2 = (float)(((float10)*(float *)(param_1 + 0xfc) * (float10)_DAT_008772b8 +
                    (float10)_DAT_007e3374) * fVar11);
  if (*(char *)(param_1 + 0x161) == '\0') {
    if (*(char *)(param_1 + 0x15f) == '\0') {
      if (*(char *)(param_1 + 0x160) != '\0') {
        param_2 = _DAT_008772ec * param_2;
        if (*(char *)(param_1 + 0x157) != '\0') {
          param_2 = _DAT_008772f0 * param_2;
        }
        if (*(char *)(param_1 + 0x156) != '\0') {
          param_2 = _DAT_008772f4 * param_2;
        }
        if (param_2 == _DAT_007e3380) goto LAB_00504532;
        if (_DAT_007e3380 < _DAT_00dc1704) {
          fVar12 = *(float *)(param_1 + 0xf8);
          fVar11 = (float10)fVar12;
          fVar2 = *(float *)(param_1 + 0xf4);
          if (*(int *)(param_1 + 0x5c) != 0) {
            fVar3 = *(float *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x244) + 0x3e);
            fVar11 = (float10)FUN_0044c830(param_1,2);
            fVar11 = (float10)fVar3 * (float10)fVar12 * fVar11;
          }
          fVar11 = (float10)fVar2 / fVar11;
          if (fVar11 < (float10)_DAT_007e3374) {
            param_2 = (float)((((float10)_DAT_007e3374 - fVar11) * (float10)_DAT_00dc1704 +
                              (float10)_DAT_007e3374) * (float10)param_2);
          }
        }
        (**(code **)(**(int **)(param_1 + 0x6c) + 0x18))();
        cVar4 = FUN_004f0aa0();
        fVar12 = _DAT_00dc1708;
        if (cVar4 == '\0') goto LAB_00503c9b;
        iVar8 = FUN_004ece80();
        if (iVar8 != 0) {
          fVar12 = *(float *)(iVar8 + 0x2e);
          if (*(float *)(iVar8 + 0x2e) < _DAT_007e3374) {
            fVar12 = _DAT_007e3374;
          }
          fVar12 = *(float *)(iVar8 + 0x14) / fVar12;
          fVar2 = _DAT_007e3374;
          if ((fVar12 <= _DAT_007e3374) && (fVar2 = fVar12, fVar12 < _DAT_007e46cc)) {
            fVar2 = _DAT_007e46cc;
          }
          param_2 = (_DAT_008772f8 * fVar2 + _DAT_007e3374) * param_2;
        }
      }
    }
    else {
      param_2 = _DAT_008772fc * param_2;
      if (*(char *)(param_1 + 0x157) != '\0') {
        param_2 = _DAT_00877300 * param_2;
      }
      if (*(char *)(param_1 + 0x156) != '\0') {
        if (_DAT_00877304 < _DAT_007e3380) {
          return (float10)_DAT_00877304;
        }
        param_2 = _DAT_00877304 * param_2;
      }
      if (param_2 == _DAT_007e3380) goto LAB_00504532;
      if (_DAT_007e3380 < _DAT_00877308) {
        fVar2 = *(float *)(param_1 + 0xf4);
        fVar12 = *(float *)(param_1 + 0xf8);
        fVar11 = (float10)fVar12;
        if (*(int *)(param_1 + 0x5c) != 0) {
          fVar3 = *(float *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x244) + 0x3e);
          fVar11 = (float10)FUN_0044c830(param_1,2);
          fVar11 = (float10)fVar3 * (float10)fVar12 * fVar11;
        }
        fVar11 = (float10)fVar2 / fVar11;
        if (fVar11 < (float10)_DAT_007e3374) {
          param_2 = (float)((((float10)_DAT_007e3374 - fVar11) * (float10)_DAT_00877308 +
                            (float10)_DAT_007e3374) * (float10)param_2);
        }
      }
      if (*(int *)(*(int *)(param_1 + 0x6c) + 0xc) < 1) {
        fVar11 = (float10)_DAT_00dc170c;
LAB_00503ad5:
        param_2 = (float)(fVar11 * (float10)param_2);
      }
      else if (((*(int *)(iVar6 + 0x254) != 8) && (*(int *)(iVar6 + 0x254) != 9)) &&
              (*(int *)(iVar6 + 0x3d4) != 0)) {
        cVar4 = FUN_0044a690(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x248) + 6));
        if ((cVar4 == '\0') &&
           (cVar4 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar6 + 0x3d4) + 6)), cVar4 == '\0')) {
          (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))();
          fVar11 = (float10)FUN_005095a0();
        }
        else {
          fVar11 = (float10)_DAT_0087730c;
        }
        goto LAB_00503ad5;
      }
      cVar4 = FUN_0051d5c0();
      if (cVar4 != '\0') {
        fVar12 = _DAT_00877310;
        if ((*(char *)(*(int *)(param_1 + 0x6c) + 0x17b) == '\0') &&
           (fVar12 = _DAT_00dc1710, _DAT_00dc1710 < _DAT_007e3380)) {
          return (float10)_DAT_00dc1710;
        }
        goto LAB_00503c9b;
      }
    }
  }
  else {
    param_2 = _DAT_008772d8 * param_2;
    if (*(char *)(param_1 + 0x157) != '\0') {
      param_2 = _DAT_008772dc * param_2;
    }
    if (*(char *)(param_1 + 0x156) != '\0') {
      param_2 = _DAT_008772e0 * param_2;
    }
    if (param_2 == _DAT_007e3380) goto LAB_00504532;
    if (_DAT_007e3380 < _DAT_00dc1700) {
      fVar2 = *(float *)(param_1 + 0xf4);
      fVar12 = *(float *)(param_1 + 0xf8);
      fVar11 = (float10)fVar12;
      if (*(int *)(param_1 + 0x5c) != 0) {
        fVar3 = *(float *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x244) + 0x3e);
        fVar11 = (float10)FUN_0044c830(param_1,2);
        fVar11 = (float10)fVar3 * (float10)fVar12 * fVar11;
      }
      fVar11 = (float10)fVar2 / fVar11;
      if (fVar11 < (float10)_DAT_007e3374) {
        param_2 = (float)((((float10)_DAT_007e3374 - fVar11) * (float10)_DAT_00dc1700 +
                          (float10)_DAT_007e3374) * (float10)param_2);
      }
    }
    cVar4 = FUN_0051d5c0();
    fVar12 = _DAT_008772e8;
    if (((cVar4 == '\0') && (*(int *)(iVar6 + 0x254) != 8)) && (*(int *)(iVar6 + 0x254) != 9)) {
      if ((*(int *)(iVar6 + 0x46a) == 0) || (iVar8 = FUN_004ece90(), iVar8 == 0)) goto LAB_00503ca3;
      iVar8 = FUN_004ece90();
      fVar12 = *(float *)(iVar8 + 0x14) * _DAT_008772e4 + _DAT_007e3374;
    }
LAB_00503c9b:
    param_2 = fVar12 * param_2;
  }
LAB_00503ca3:
  if (param_2 <= _DAT_007e3380) goto LAB_00503d50;
  switch(*(undefined4 *)(iVar6 + 0x3ac)) {
  case 0:
    fVar12 = _DAT_008772bc;
    break;
  case 1:
    fVar12 = _DAT_008772c0;
    break;
  case 2:
    fVar12 = _DAT_008772c4;
    break;
  case 3:
    fVar12 = _DAT_008772c8;
    break;
  case 4:
    fVar12 = _DAT_008772cc;
    break;
  case 5:
    fVar12 = _DAT_008772d0;
    break;
  case 6:
    fVar12 = _DAT_008772d4;
    break;
  default:
    goto switchD_00503cc3_default;
  }
  param_2 = fVar12 * param_2;
switchD_00503cc3_default:
  iVar6 = FUN_00522770();
  if (iVar6 != 0) {
    uVar7 = 3;
    iVar6 = param_1;
    FUN_00522770(param_1,3);
    fVar11 = (float10)FUN_0044c830(iVar6,uVar7);
    param_2 = (float)(fVar11 * (float10)param_2);
  }
  fVar11 = (float10)FUN_0076bbb0(*(undefined4 *)(param_1 + 0x5c),4);
  param_2 = (float)((fVar11 + (float10)_DAT_007e3374) * (float10)param_2 * (float10)_DAT_007e5dcc);
LAB_00503d50:
  return (float10)param_2;
}


