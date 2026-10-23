// FUN_004e9530 @ 4e9530 size=928

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004e9530(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float fStack_10;
  float fStack_c;
  
  piVar2 = *(int **)(param_2 + 0x6c);
  if ((((piVar2 == (int *)0x0) || (piVar2[0x92] == 0)) ||
      (cVar6 = (**(code **)(*piVar2 + 0x28))(), cVar6 == '\0')) ||
     (((*(int *)(param_1 + 0x3d4) == 0 ||
       (iVar7 = (**(code **)(**(int **)(param_2 + 0x6c) + 0x10))(), *(int *)(iVar7 + 0x2b2) != 0))
      || ((*(int *)(param_1 + 0x254) == 8 ||
          ((*(int *)(param_1 + 0x254) == 9 ||
           (iVar7 = *(int *)(*(int *)(param_2 + 0x6c) + 0x248), *(int *)(iVar7 + 6) == 0x157))))))))
  {
    return (float10)_DAT_007e3380;
  }
  if ((*(int *)(param_1 + 0x3d4) == iVar7) ||
     (cVar6 = FUN_0044b300(*(undefined4 *)(*(int *)(param_1 + 0x3d4) + 6)), cVar6 != '\0')) {
LAB_004e95ed:
    bVar5 = true;
  }
  else {
    cVar6 = FUN_005861a0(*(undefined4 *)(*(int *)(param_1 + 0x3d4) + 6));
    bVar5 = false;
    if (cVar6 != '\0') goto LAB_004e95ed;
  }
  FUN_0044e1d0();
  fStack_10 = 0.0;
  fVar3 = *(float *)(*(int *)(param_1 + 0x1da) + 0x14);
  fVar10 = (float10)FUN_0044aaf0(0);
  fVar10 = fVar10 * (float10)fVar3;
  if (*(int *)(param_1 + 0x254) == 3) {
    iVar8 = *(int *)(param_1 + 0x250);
    if (iVar8 == 5) {
      fVar11 = ((float10)_DAT_007e3374 - fVar10) + (float10)_DAT_007e811c;
    }
    else if (iVar8 == 6) {
      fVar11 = ((float10)_DAT_007e3374 - fVar10) + (float10)_DAT_007e6800;
    }
    else {
      if (iVar8 != 7) goto LAB_004e96ae;
      fVar11 = ((float10)_DAT_007e3374 - fVar10) + (float10)_DAT_007e34c0;
    }
LAB_004e96aa:
    fStack_10 = (float)fVar11;
  }
  else if (*(int *)(param_1 + 0x254) == 6) {
    fStack_10 = (float)(((float10)_DAT_007e3374 - fVar10) * (float10)_DAT_007e5390);
    if (*(int *)(param_1 + 0x3ac) == 2) {
      fStack_10 = fStack_10 + _DAT_007e7c08;
    }
    if (*(int *)(param_1 + 0x3ac) == 4) {
      fVar11 = (float10)fStack_10 + (float10)_DAT_007e34e0;
      goto LAB_004e96aa;
    }
  }
LAB_004e96ae:
  iVar8 = *(int *)(param_1 + 0x3ac);
  fStack_c = 0.0;
  if (iVar8 == 1) {
    fVar10 = ((float10)_DAT_007e3374 - fVar10) * (float10)_DAT_007e40b8;
LAB_004e96f1:
    fStack_c = (float)fVar10;
  }
  else {
    if (iVar8 == 3) {
      fVar10 = ((float10)_DAT_007e3374 - fVar10) * (float10)_DAT_007e5390;
      goto LAB_004e96f1;
    }
    if (iVar8 == 5) {
      fVar10 = (float10)_DAT_007e3374 - fVar10;
      goto LAB_004e96f1;
    }
  }
  if ((*(int *)(*(int *)(param_2 + 0x6c) + 0x14a) != 0) &&
     (iVar8 = FUN_0051c480(), (*(uint *)(iVar8 + 0x1e) >> 3 & 1) != 0)) {
    iVar8 = *(int *)(param_2 + 0x6c);
    FUN_0051c480();
    iVar9 = FUN_0050a580();
    iVar8 = (**(code **)(*(int *)(iVar8 + 0x22) + 4))();
    if (iVar8 <= iVar9) {
      fStack_c = fStack_c * _DAT_007e6800;
    }
  }
  fVar10 = (float10)fStack_c + (float10)fStack_10;
  fStack_10 = (float)fVar10;
  if (*(int *)(*(int *)(param_2 + 0x6c) + 0x14a) != 0) {
    iVar8 = FUN_0051c480();
    if ((*(byte *)(iVar8 + 0x1e) & 1) != 0) {
      iVar8 = *(int *)(param_2 + 0x6c);
      FUN_0051c480();
      iVar9 = FUN_0050a580();
      iVar8 = (**(code **)(*(int *)(iVar8 + 0x22) + 4))();
      if (iVar8 <= iVar9) {
        fVar10 = (float10)fStack_10 * (float10)_DAT_007e34c0;
        fStack_10 = (float)fVar10;
        goto LAB_004e97ab;
      }
    }
    fVar10 = (float10)fStack_10;
  }
LAB_004e97ab:
  if (bVar5) {
    cVar6 = FUN_0044beb0();
    if ((cVar6 != '\0') && (iVar8 = 0, 0 < *(int *)(param_1 + 0x290))) {
      iVar9 = 0;
      do {
        if (*(int *)(iVar9 + 4 + *(int *)(param_1 + 0x298)) != 4) {
          iVar4 = *(int *)(iVar9 + *(int *)(param_1 + 0x298));
          iVar1 = DAT_00ab27b4 + iVar4 * 0x4b2;
          iVar4 = *(int *)(DAT_00ab27b4 + 0x254 + iVar4 * 0x4b2);
          if ((((iVar4 != 8) && (iVar4 != 9)) && (iVar4 = *(int *)(iVar1 + 0x3d8), iVar4 != 0)) &&
             ((cVar6 = FUN_0044b280(*(undefined4 *)(iVar4 + 6)), cVar6 != '\0' &&
              (cVar6 = FUN_005216c0(iVar1), cVar6 != '\0')))) {
            fVar10 = (float10)fStack_10 * (float10)_DAT_007e40b8;
            goto LAB_004e9869;
          }
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 0xc;
      } while (iVar8 < *(int *)(param_1 + 0x290));
    }
    fVar10 = (float10)_DAT_007e3380;
  }
LAB_004e9869:
  if (*(float *)(param_2 + 0x10c) * *(float *)(param_2 + 0xf0) * _DAT_007e543c == _DAT_007e3380) {
    fVar10 = fVar10 * (float10)_DAT_007e34c0;
  }
  fVar10 = ((float10)_DAT_007e3374 / (float10)*(float *)(iVar7 + 0xe850)) * fVar10 *
           (float10)_DAT_00dc1560;
  if ((float10)_DAT_007e3380 <= fVar10) {
    return fVar10;
  }
  return (float10)_DAT_007e3380;
}


