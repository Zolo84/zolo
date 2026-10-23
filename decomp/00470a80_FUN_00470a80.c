// FUN_00470a80 @ 470a80 size=2673

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00470a80(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int *piVar12;
  char cVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float fStack_11c;
  int local_108;
  undefined4 *local_104;
  int *local_fc;
  float fStack_f8;
  int local_f4;
  float local_f0;
  char cStack_e7;
  char cStack_e6;
  char cStack_df;
  char cStack_de;
  undefined1 local_d4 [44];
  undefined1 uStack_a8;
  
  if (*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) != 0) {
    return;
  }
  iVar16 = *(int *)(param_1 + 0x120);
  local_f4 = 0;
  local_f0 = 0.0;
  local_108 = 0;
  local_104 = (undefined4 *)(param_1 + 0x2326);
  local_fc = &DAT_0089cad8;
  do {
    if ((((((*(int *)(param_1 + 6) != local_108) && (iVar18 = *local_fc, iVar18 != 0)) &&
          (cVar13 = FUN_0044b280(*(undefined4 *)(iVar18 + 6)), cVar13 == '\0')) &&
         ((fVar5 = *(float *)(param_1 + 0x39c8), iVar14 = FUN_00585e50(0x15,0,iVar18),
          (float)iVar14 <= fVar5 && (*(int *)(*(int *)(iVar18 + 0x12da) + 0x3b30) == 0)))) &&
        (cVar13 = FUN_004a09c0(*(undefined4 *)(iVar18 + 6)), cVar13 != '\0')) &&
       ((cVar13 = (**(code **)(*(int *)(iVar16 + 0x1c0) + 0x24))(*(undefined4 *)(iVar18 + 6)),
        cVar13 == '\0' &&
        (cVar13 = (**(code **)(*(int *)(*(int *)(iVar18 + 0x120) + 0x1c0) + 0x24))
                            (*(undefined4 *)(param_1 + 6)), cVar13 == '\0')))) {
      fVar5 = *(float *)(*(int *)(iVar18 + 6) * 4 + 0xf4ee + param_1);
      if (_DAT_00877600 <= fVar5) {
        if ((*(char *)(param_1 + 0x3bf2) == '\0') && ((&DAT_00dc0fd4)[*(int *)(iVar18 + 6)] != 0)) {
          cStack_e6 = (char)((uint)*local_104 >> 0x10);
          cStack_e7 = (char)((uint)*local_104 >> 8);
          if (((int)*(char *)(DAT_00893530 + 0x15) +
              (((int)*(char *)(DAT_00893530 + 0x16) +
               ((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(local_104 + 1)) * 0xc) -
              (int)cStack_e6) * 0x1e) - (int)cStack_e7 < 0xe) {
            return;
          }
        }
        if (0 < DAT_00dc18b0) {
          puVar1 = (undefined4 *)(iVar18 + 0x2326 + *(int *)(param_1 + 6) * 6);
          uVar6 = *puVar1;
          cStack_de = (char)((uint)uVar6 >> 0x10);
          cStack_df = (char)((uint)uVar6 >> 8);
          if ((((((int)*(short *)(puVar1 + 1) - (int)*(short *)(DAT_00893530 + 0x18)) * 0xc -
                (int)*(char *)(DAT_00893530 + 0x16)) + (int)cStack_de) * 0x1e -
              (int)*(char *)(DAT_00893530 + 0x15)) + (int)cStack_df == DAT_00dc18b0)
          goto LAB_00470fe9;
        }
        piVar12 = *(int **)(param_1 + 0x3c14);
        do {
          if (piVar12 == (int *)0x0) goto LAB_00470cae;
          piVar7 = (int *)*piVar12;
          piVar12 = (int *)piVar12[2];
        } while (*piVar7 != local_108);
        if (piVar7[1] < 10) {
          piVar7[1] = piVar7[1] + 1;
        }
        else {
          (**(code **)(*(int *)(param_1 + 0x3c10) + 0x18))(piVar7);
          FUN_00796cd8(piVar7);
LAB_00470cae:
          if ((DAT_00877618 == '\0') ||
             ((iVar14 = FUN_006b70c0(*(undefined4 *)(iVar18 + 6)), _DAT_007e3348 < (double)iVar14 &&
              ((((cVar13 = FUN_0044b300(*(undefined4 *)(iVar18 + 6)), cVar13 != '\0' ||
                 (cVar13 = FUN_0044a690(*(undefined4 *)(iVar18 + 6)), cVar13 != '\0')) ||
                (*(char *)(*(int *)(iVar18 + 6) + 0xe8d6 + param_1) != '\0')) ||
               (*(char *)(*(int *)(param_1 + 0x12da) + 0x35 + *(int *)(iVar18 + 6) * 0x2c) != '\0'))
              )))) {
            fVar4 = 0.0;
            iVar17 = 0;
            pfVar15 = (float *)(iVar18 + 0x3bd4);
            iVar19 = param_1 - iVar18;
            iVar14 = 0x16808;
            fVar3 = _DAT_007e3380;
            do {
              fVar2 = *(float *)((int)pfVar15 + iVar19 + -0x48);
              fVar8 = pfVar15[-0x12];
              if (fVar2 <= _DAT_007e3380) {
                if (((_DAT_007e3380 < fVar8) && (*(char *)(iVar17 + 0x3bf9 + iVar18) != '\0')) &&
                   (fVar2 < _DAT_007e68dc)) {
                  fVar9 = -fVar2;
                  if (fVar8 <= -fVar2) {
                    fVar9 = fVar8;
                  }
                  fVar3 = (*(float *)(&DAT_00d61380 + iVar14) * *pfVar15 * fVar9) /
                          *(float *)((int)pfVar15 + iVar19) + fVar3;
                }
              }
              else if ((fVar8 < _DAT_007e68dc) && (*(char *)(iVar17 + 0x3bf3 + iVar18) != '\0')) {
                fVar9 = -fVar8;
                if (fVar2 < -fVar8) {
                  fVar9 = fVar2;
                }
                fVar4 = (*(float *)(&DAT_00d61380 + iVar14) * *(float *)((int)pfVar15 + iVar19) *
                        fVar9) / *pfVar15 + fVar4;
              }
              iVar14 = iVar14 + 4;
              iVar17 = iVar17 + 1;
              pfVar15 = pfVar15 + 1;
            } while (iVar14 < 0x16820);
            fStack_f8 = fVar4;
            if (fVar3 < fVar4) {
              fStack_f8 = fVar3;
            }
            iVar14 = FUN_006b70c0(*(undefined4 *)(iVar18 + 6));
            fVar3 = (float)iVar14 * _DAT_007e68e0 + _DAT_007e3374;
            fVar20 = (float10)FUN_005885d0();
            fVar24 = (float10)_DAT_007e68e0;
            uVar6 = *(undefined4 *)(param_1 + 6);
            fVar23 = (float10)_DAT_007e3374;
            fVar21 = (float10)FUN_0044c670(0x12,*(undefined4 *)(iVar18 + 6));
            fVar22 = (float10)FUN_0044c670(0x12,uVar6);
            fStack_11c = (float)((((float10)(float)fVar21 - fVar22) * (float10)_DAT_007e543c +
                                 (float10)_DAT_007e3374) *
                                (float10)(float)((fVar20 * fVar24 + fVar23) *
                                                (float10)((fStack_f8 + fVar4) * fVar3)));
            iVar14 = FUN_006b5820(*(undefined4 *)(iVar18 + 6));
            if (_DAT_007e3380 < (float)iVar14) {
              iVar14 = FUN_006b5820(*(undefined4 *)(iVar18 + 6));
              fStack_11c = fStack_11c / ((float)iVar14 * _DAT_007e68e0 + _DAT_007e3374);
            }
            cVar13 = FUN_0044b300(*(undefined4 *)(iVar18 + 6));
            if (cVar13 == '\0') {
              fVar23 = (float10)FUN_005885d0();
              fVar23 = (fVar23 + (float10)_DAT_007e6818) * (float10)_DAT_007e68e0;
              if (fVar23 < (float10)_DAT_007e3374) {
                fVar23 = fVar23 - ((float10)_DAT_007e3374 - fVar23);
              }
              if (fVar23 < (float10)_DAT_007e3380) {
                fVar23 = (float10)_DAT_007e3380;
              }
            }
            else {
              fVar23 = (float10)_DAT_007e5e34;
            }
            if (*(char *)(*(int *)(iVar18 + 6) + 0xe8d6 + param_1) == '\0') {
              fVar24 = (float10)*(float *)(param_1 + 0xef8e + *(int *)(iVar18 + 6) * 4);
              if ((float10)_DAT_007e4088 < fVar24) {
                fVar24 = (float10)_DAT_007e4088;
              }
              fVar24 = ((float10)_DAT_007e4088 - fVar24) * (float10)_DAT_007e543c;
            }
            else {
              fVar24 = (float10)_DAT_007e5e34;
            }
            fVar23 = ((float10)fVar5 + fVar24 + fVar23) * (float10)fStack_11c *
                     (float10)_DAT_007e6808;
            if ((float10)local_f0 < fVar23) {
              local_f0 = (float)fVar23;
              local_f4 = iVar18;
            }
          }
        }
      }
    }
LAB_00470fe9:
    local_fc = local_fc + 1;
    local_108 = local_108 + 1;
    local_104 = (undefined4 *)((int)local_104 + 6);
  } while ((int)local_fc < 0x89d038);
  if (local_f4 == 0) {
    return;
  }
  FUN_00442b90();
  iVar16 = 0;
  fVar5 = *(float *)(param_1 + 0x3ba0);
  fVar3 = *(float *)(param_1 + 0x3b9c);
  iVar18 = param_1 - local_f4;
  uStack_a8 = 1;
  bVar11 = false;
  pfVar15 = (float *)(local_f4 + 0x3bd4);
  fVar4 = _DAT_007e3380;
  do {
    fVar2 = *(float *)((int)pfVar15 + iVar18 + -0x48);
    fVar8 = pfVar15[-0x12];
    if ((((fVar2 <= _DAT_007e3380) && (_DAT_007e3380 < fVar8)) &&
        (*(char *)(iVar16 + 0x3bf9 + local_f4) != '\0')) && (fVar2 < _DAT_007e68dc)) {
      fVar9 = -fVar2;
      if (fVar8 <= -fVar2) {
        fVar9 = fVar8;
      }
      fVar4 = *pfVar15 * fVar9 + fVar4;
    }
    iVar16 = iVar16 + 1;
    pfVar15 = pfVar15 + 1;
  } while (iVar16 < 4);
  iVar16 = 4;
  pfVar15 = (float *)(local_f4 + 0x3be4);
  do {
    fVar2 = *(float *)((int)pfVar15 + iVar18 + -0x48);
    if (((fVar2 <= _DAT_007e3380) && (fVar2 < _DAT_007e68dc)) &&
       (*(char *)(iVar16 + 0x3bf9 + local_f4) != '\0')) {
      fVar4 = fVar4 - *pfVar15 * fVar2;
    }
    iVar16 = iVar16 + 1;
    pfVar15 = pfVar15 + 1;
  } while (iVar16 < 6);
  uVar6 = *(undefined4 *)(param_1 + 6);
  fVar23 = (float10)FUN_0044c670(0x12,*(undefined4 *)(local_f4 + 6));
  fVar24 = (float10)FUN_0044c670(0x12,uVar6);
  fStack_11c = 0.0;
  iVar16 = 0;
  pfVar15 = (float *)(local_f4 + 0x3b8c);
  fVar4 = (float)((((float10)(float)fVar23 - fVar24) * (float10)_DAT_007e543c +
                  (float10)_DAT_007e3374) * (float10)fVar4);
  do {
    if (((fStack_11c < fVar4) && (fVar2 = *(float *)((int)pfVar15 + iVar18), _DAT_007e3380 < fVar2))
       && ((*pfVar15 < _DAT_007e68dc && (*(char *)(local_f4 + 0x3bf3 + iVar16) != '\0')))) {
      fVar8 = pfVar15[0x12];
      fVar9 = -*pfVar15;
      if (fVar2 < fVar9) {
        fVar9 = fVar2;
      }
      fVar2 = fVar4 - fStack_11c;
      fVar10 = fVar9 * fVar8;
      if (fVar2 <= fVar9 * fVar8) {
        fVar10 = fVar2;
      }
      fVar10 = fVar10 / fVar8;
      if (_DAT_007e34e0 < fVar10) {
        bVar11 = true;
        FUN_00442c60(iVar16,-fVar10);
        fStack_11c = fVar10 * fVar8 + fStack_11c;
      }
    }
    iVar16 = iVar16 + 1;
    pfVar15 = pfVar15 + 1;
  } while (iVar16 < 6);
  if (!bVar11) {
    return;
  }
  bVar11 = false;
  iVar16 = 0;
  pfVar15 = (float *)(local_f4 + 0x3b8c);
  do {
    fVar4 = *pfVar15;
    fVar2 = -*(float *)((int)pfVar15 + iVar18);
    if (((_DAT_007e3380 < fVar2) && (_DAT_007e3380 < fVar4)) &&
       (*(char *)(local_f4 + 0x3bf9 + iVar16) != '\0')) {
      fVar8 = pfVar15[0x12];
      if (fVar2 < fVar4) {
        fVar4 = fVar2;
      }
      fVar2 = fVar4 * fVar8;
      if (fStack_11c <= fVar4 * fVar8) {
        fVar2 = fStack_11c;
      }
      fVar2 = fVar2 / fVar8;
      if (_DAT_007e34e0 < fVar2) {
        bVar11 = true;
        FUN_00442c60(iVar16,fVar2);
        fStack_11c = fStack_11c - fVar2 * fVar8;
      }
    }
    iVar16 = iVar16 + 1;
    pfVar15 = pfVar15 + 1;
  } while (iVar16 < 4);
  if (_DAT_007e3380 < fStack_11c) {
    if ((_DAT_007e3380 < -fVar3) && (*(char *)(local_f4 + 0x3bfd) != '\0')) {
      local_104 = (undefined4 *)(-fVar3 * *(float *)(local_f4 + 0x3be4));
      if (fStack_11c <= (float)local_104) {
        local_104 = (undefined4 *)fStack_11c;
      }
      fVar3 = (float)local_104 / *(float *)(local_f4 + 0x3be4);
      if (_DAT_007e34e0 < fVar3) {
        bVar11 = true;
        FUN_00442c60(4,fVar3);
        fStack_11c = fStack_11c - (float)local_104;
      }
    }
    if (((_DAT_007e3380 < fStack_11c) && (_DAT_007e3380 < -fVar5)) &&
       (*(char *)(local_f4 + 0x3bfe) != '\0')) {
      fVar5 = -fVar5 * *(float *)(local_f4 + 0x3be8);
      if (fStack_11c <= fVar5) {
        fVar5 = fStack_11c;
      }
      fVar5 = fVar5 / *(float *)(local_f4 + 0x3be8);
      if (_DAT_007e34e0 < fVar5) {
        FUN_00442c60(5,fVar5);
        goto LAB_004714ca;
      }
    }
  }
  if (!bVar11) {
    return;
  }
LAB_004714ca:
  FUN_00471500(local_d4);
  FUN_0045cad0(local_f4);
  return;
}


