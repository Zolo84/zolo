// FUN_0044e800 @ 44e800 size=3263

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044e800(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  undefined4 *puVar20;
  int local_68;
  int local_64;
  int local_60;
  float local_58;
  int local_54;
  float local_48;
  float local_44;
  int local_38;
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined **local_28;
  int local_24;
  undefined **local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbc68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar9 = FUN_0044e1b0();
  iVar10 = FUN_004e9370(uVar9);
  if (*(int *)(iVar10 + 0x482) == 0) {
    puVar20 = (undefined4 *)(param_1 + 0xf4ee);
    for (iVar10 = 0x158; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar20 = 0;
      puVar20 = puVar20 + 1;
    }
    ExceptionList = local_c;
    return;
  }
  local_28 = &PTR_FUN_007e5e38;
  local_68 = 0;
  local_24 = param_1;
  uVar9 = FUN_0044e1b0();
  iVar10 = FUN_004e9370(uVar9);
  uVar9 = *(undefined4 *)(*(int *)(iVar10 + 0x482) + 0x52);
  iVar10 = FUN_004e9370(uVar9);
  if (*(int *)(iVar10 + 0x46a) == 0) {
    if (DAT_00dc1910 != '\0') {
      local_58 = 0.0;
      uVar9 = FUN_0044e1b0();
      iVar10 = FUN_004e9370(uVar9);
      puVar20 = *(undefined4 **)(*(int *)(iVar10 + 0x482) + 0x3e);
      while ((puVar20 != (undefined4 *)0x0 && ((int)local_58 < 100))) {
        puVar1 = (undefined4 *)puVar20[2];
        piVar15 = (int *)*puVar20;
        iVar10 = FUN_004c9f81();
        puVar20 = puVar1;
        if ((iVar10 != 0) && (*(int *)(*piVar15 + 0x4c) == 0)) {
          iVar12 = *(int *)(iVar10 + 6);
          iVar13 = 0;
          if ((((param_1 == iVar10) || (cVar8 = FUN_005861a0(iVar12), cVar8 != '\0')) ||
              ((*(int *)(param_1 + 0x3350) != 0 &&
               (*(int *)(iVar10 + 0x3350) == *(int *)(param_1 + 0x3350))))) ||
             ((iVar14 = *(int *)(param_1 + 6),
              *(int *)(*(int *)(iVar10 + 0x12da) + 0x3b30) == iVar14 ||
              (*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) == iVar12)))) {
            iVar13 = 100;
          }
          else if ((((&DAT_0089cad8)[iVar12] == 0) || (iVar12 == iVar14)) ||
                  (((iVar12 != 0x157 && (iVar14 != 0x157)) &&
                   ((cVar8 = FUN_005861e0(iVar12), cVar8 != '\0' ||
                    (*(char *)(*(int *)(param_1 + 0x12da) + iVar12 * 0x2c + 0x2c) == '\0')))))) {
            iVar13 = 0x32;
          }
          if (*(char *)(*(int *)(iVar10 + 0x12da) + 0x3b38) != '\0') {
            iVar13 = iVar13 + -0x31;
          }
          if ((int)local_58 <= iVar13) {
            uVar9 = *(undefined4 *)(*piVar15 + 0x52);
            iVar10 = FUN_004e9370(uVar9);
            if (*(int *)(iVar10 + 0x46a) == 0) {
              uVar9 = FUN_0044e1b0();
              iVar10 = FUN_004e9370(uVar9);
              uVar9 = *(undefined4 *)(iVar10 + 0x482);
              uVar11 = FUN_0044e1b0();
              FUN_004e9370(uVar11);
              piVar15 = (int *)FUN_004c7fad(&local_38,uVar9);
              if (*piVar15 != 0) {
                uVar9 = FUN_0044e1b0();
                iVar10 = FUN_004e9370(uVar9);
                uVar9 = *(undefined4 *)(*(int *)(iVar10 + 0x482) + 0x52);
                iVar10 = FUN_004e9370(uVar9);
                if (*(int *)(iVar10 + 0x46a) != 0) {
                  local_68 = FUN_004e9370(uVar9);
                  local_58 = (float)iVar13;
                }
              }
            }
            else {
              local_68 = FUN_004e9370(uVar9);
              local_58 = (float)iVar13;
            }
          }
        }
      }
    }
  }
  else {
    local_68 = FUN_004e9370(uVar9);
  }
  iVar10 = *(int *)(param_1 + 0x117e4);
  local_38 = local_68;
  iVar12 = __ftol();
  local_44 = (float)(iVar12 / 10) + (float)(iVar10 / 6);
  if (local_44 < _DAT_007e5e34) {
    local_44 = 2.0;
  }
  iVar10 = *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30);
  local_60 = 0;
  do {
    *(undefined4 *)(param_1 + 0xf4ee + local_60 * 4) = 0;
    iVar12 = (&DAT_0089cad8)[local_60];
    if (((((iVar10 == 0) || (iVar10 == local_60)) && (iVar12 != 0)) &&
        ((iVar13 = *(int *)(*(int *)(iVar12 + 0x12da) + 0x3b30), iVar13 == 0 ||
         (iVar13 == *(int *)(param_1 + 6))))) && (cVar8 = FUN_004a0780(local_60), cVar8 != '\0')) {
      iVar13 = FUN_004a0750();
      if (*(int *)(iVar13 + 0x3d8) == iVar12) {
        uVar9 = *(undefined4 *)(iVar12 + 0x117de);
      }
      else {
        uVar9 = *(undefined4 *)(iVar12 + 0x117f0);
      }
      iVar13 = FUN_004e9370(uVar9);
      if (*(int *)(iVar13 + 0x482) != 0) {
        iVar13 = (local_60 * 0xb + 0xb) * 4;
        if (*(char *)(*(int *)(param_1 + 0x12da) + iVar13) == '\0') {
          if ((*(char *)(*(int *)(param_1 + 0x12da) + 0x3b38) == '\0') &&
             (*(char *)(*(int *)(iVar12 + 0x12da) + 0x3b38) == '\0')) {
            *(undefined4 *)(param_1 + 0xf4ee + local_60 * 4) = 0x3f800000;
          }
          else {
            iVar14 = FUN_004a0750();
            if (*(int *)(iVar14 + 0x3d8) == iVar12) {
              uVar9 = *(undefined4 *)(iVar12 + 0x117de);
            }
            else {
              uVar9 = *(undefined4 *)(iVar12 + 0x117f0);
            }
            iVar14 = FUN_004e9370(uVar9);
            uVar9 = *(undefined4 *)(iVar14 + 0x482);
            iVar14 = FUN_004a0750();
            if (*(int *)(iVar14 + 0x3d8) == param_1) {
              uVar11 = *(undefined4 *)(param_1 + 0x117de);
            }
            else {
              uVar11 = *(undefined4 *)(param_1 + 0x117f0);
            }
            FUN_004e9370(uVar11);
            piVar15 = (int *)FUN_004c7fad(local_34,uVar9);
            if (*piVar15 == 0) {
              local_20 = &PTR_LAB_007e5e04;
              local_1c = 0;
              local_18 = 0;
              local_14 = 0;
              local_10 = 0;
              local_4 = 0;
              iVar14 = FUN_004a0750();
              if (*(int *)(iVar14 + 0x3d8) == iVar12) {
                uVar9 = *(undefined4 *)(iVar12 + 0x117de);
              }
              else {
                uVar9 = *(undefined4 *)(iVar12 + 0x117f0);
              }
              iVar14 = FUN_004e9370(uVar9);
              uVar9 = *(undefined4 *)(iVar14 + 0x482);
              iVar14 = FUN_004a0750();
              if (*(int *)(iVar14 + 0x3d8) == param_1) {
                uVar11 = *(undefined4 *)(param_1 + 0x117de);
              }
              else {
                uVar11 = *(undefined4 *)(param_1 + 0x117f0);
              }
              iVar14 = FUN_004e9370(uVar11);
              cVar8 = FUN_004c815f(*(undefined4 *)(iVar14 + 0x482),uVar9,&local_28,&local_20);
              if (cVar8 == '\x01') {
                *(undefined4 *)(param_1 + 0xf4ee + local_60 * 4) = 0x3f800000;
              }
              else if (local_68 != 0) {
                local_64 = 0;
                iVar14 = FUN_004a0750();
                if (*(int *)(iVar14 + 0x3d8) == iVar12) {
                  uVar9 = *(undefined4 *)(iVar12 + 0x117de);
                }
                else {
                  uVar9 = *(undefined4 *)(iVar12 + 0x117f0);
                }
                iVar14 = FUN_004e9370(uVar9);
                uVar9 = *(undefined4 *)(*(int *)(iVar14 + 0x482) + 0x52);
                iVar14 = FUN_004e9370(uVar9);
                if (*(int *)(iVar14 + 0x46a) == 0) {
                  if (DAT_00dc1910 != '\0') {
                    local_54 = 0;
                    bVar6 = false;
                    iVar14 = FUN_004a0750();
                    if (*(int *)(iVar14 + 0x3d8) == iVar12) {
                      uVar9 = *(undefined4 *)(iVar12 + 0x117de);
                    }
                    else {
                      uVar9 = *(undefined4 *)(iVar12 + 0x117f0);
                    }
                    iVar14 = FUN_004e9370(uVar9);
                    puVar20 = *(undefined4 **)(*(int *)(iVar14 + 0x482) + 0x3e);
                    while (((puVar20 != (undefined4 *)0x0 && (local_54 < 100)) && (!bVar6))) {
                      puVar1 = (undefined4 *)puVar20[2];
                      piVar15 = (int *)*puVar20;
                      iVar14 = FUN_004c9f81();
                      puVar20 = puVar1;
                      if (((iVar14 != 0) && (*(int *)(*piVar15 + 0x4c) == 0)) &&
                         ((iVar17 = *(int *)(iVar14 + 6), (&DAT_0089cad8)[iVar17] == 0 ||
                          (((iVar17 == *(int *)(iVar12 + 6) ||
                            (((iVar17 != 0x157 && (*(int *)(iVar12 + 6) != 0x157)) &&
                             ((cVar8 = FUN_005861e0(iVar17), cVar8 != '\0' ||
                              (*(char *)(*(int *)(iVar12 + 0x12da) + iVar17 * 0x2c + 0x2c) == '\0'))
                             )))) && ((((&DAT_0089cad8)[iVar17] == 0 ||
                                       (iVar17 == *(int *)(param_1 + 6))) ||
                                      ((iVar17 != 0x157 &&
                                       ((*(int *)(param_1 + 6) != 0x157 &&
                                        ((cVar8 = FUN_005861e0(iVar17), cVar8 != '\0' ||
                                         (*(char *)(*(int *)(param_1 + 0x12da) +
                                                   iVar17 * 0x2c + 0x2c) == '\0')))))))))))))) {
                        iVar16 = FUN_004a0750();
                        if (*(int *)(iVar16 + 0x3d8) == iVar14) {
                          uVar9 = *(undefined4 *)(iVar14 + 0x117de);
                        }
                        else {
                          uVar9 = *(undefined4 *)(iVar14 + 0x117f0);
                        }
                        FUN_004e9370(uVar9);
                        piVar18 = (int *)FUN_004c7fad(local_30,*piVar15);
                        if (*piVar18 == 0) {
                          if ((((iVar12 == iVar14) || (cVar8 = FUN_005861a0(iVar17), cVar8 != '\0'))
                              || ((*(int *)(iVar12 + 0x3350) != 0 &&
                                  (*(int *)(iVar14 + 0x3350) == *(int *)(iVar12 + 0x3350))))) ||
                             ((*(int *)(*(int *)(iVar14 + 0x12da) + 0x3b30) == local_60 ||
                              (iVar16 = 0x32, *(int *)(*(int *)(iVar12 + 0x12da) + 0x3b30) == iVar17
                              )))) {
                            iVar16 = 100;
                          }
                          if (*(char *)(*(int *)(iVar14 + 0x12da) + 0x3b38) != '\0') {
                            iVar16 = iVar16 + -0x31;
                          }
                          if (local_54 < iVar16) {
                            uVar9 = *(undefined4 *)(*piVar15 + 0x52);
                            iVar17 = FUN_004e9370(uVar9);
                            if (*(int *)(iVar17 + 0x46a) == 0) {
                              iVar17 = FUN_004a0750();
                              if (*(int *)(iVar17 + 0x3d8) == iVar12) {
                                uVar9 = *(undefined4 *)(iVar12 + 0x117de);
                              }
                              else {
                                uVar9 = *(undefined4 *)(iVar12 + 0x117f0);
                              }
                              iVar17 = FUN_004e9370(uVar9);
                              uVar9 = *(undefined4 *)(iVar17 + 0x482);
                              iVar17 = FUN_004a0750();
                              if (*(int *)(iVar17 + 0x3d8) == iVar14) {
                                uVar11 = *(undefined4 *)(iVar14 + 0x117de);
                              }
                              else {
                                uVar11 = *(undefined4 *)(iVar14 + 0x117f0);
                              }
                              FUN_004e9370(uVar11);
                              piVar15 = (int *)FUN_004c7fad(local_2c,uVar9);
                              if (*piVar15 != 0) {
                                iVar17 = FUN_004a0750();
                                if (*(int *)(iVar17 + 0x3d8) == iVar14) {
                                  uVar9 = *(undefined4 *)(iVar14 + 0x117de);
                                }
                                else {
                                  uVar9 = *(undefined4 *)(iVar14 + 0x117f0);
                                }
                                iVar14 = FUN_004e9370(uVar9);
                                uVar9 = *(undefined4 *)(*(int *)(iVar14 + 0x482) + 0x52);
                                iVar14 = FUN_004e9370(uVar9);
                                if (*(int *)(iVar14 + 0x46a) != 0) {
                                  local_64 = FUN_004e9370(uVar9);
                                  local_54 = iVar16;
                                }
                              }
                            }
                            else {
                              local_64 = FUN_004e9370(uVar9);
                              local_54 = iVar16;
                            }
                          }
                        }
                        else {
                          local_64 = 0;
                          bVar6 = true;
                          *(undefined4 *)(param_1 + 0xf4ee + local_60 * 4) = 0x3f800000;
                        }
                      }
                    }
                  }
                }
                else {
                  local_64 = FUN_004e9370(uVar9);
                }
                bVar6 = false;
                if (DAT_00dc1910 != '\0') {
                  if ((local_64 == 0) ||
                     (*(char *)(*(int *)(*(int *)(local_68 + 0x3d8) + 0x12da) + iVar13) != '\0'))
                  goto LAB_0044f45b;
                  if (*(int *)(local_64 + 0x3d8) == iVar12) {
                    uVar9 = *(undefined4 *)(local_68 + 0x12);
                    iVar13 = FUN_004a0750();
                    if (*(int *)(iVar13 + 0x3d8) == iVar12) {
                      uVar11 = *(undefined4 *)(iVar12 + 0x117de);
                    }
                    else {
                      uVar11 = *(undefined4 *)(iVar12 + 0x117f0);
                    }
                    FUN_004e9370(uVar11);
                    uVar9 = FUN_004cc4d5(iVar12,uVar9);
                    local_64 = FUN_004e9370(uVar9);
                  }
                  if (*(int *)(local_68 + 0x3d8) == param_1) {
                    uVar9 = *(undefined4 *)(local_64 + 0x12);
                    iVar12 = FUN_004a0750();
                    if (*(int *)(iVar12 + 0x3d8) == param_1) {
                      uVar11 = *(undefined4 *)(param_1 + 0x117de);
                    }
                    else {
                      uVar11 = *(undefined4 *)(param_1 + 0x117f0);
                    }
                    FUN_004e9370(uVar11);
                    uVar9 = FUN_004cc4d5(param_1,uVar9);
                    iVar12 = FUN_004e9370(uVar9);
                    if (iVar12 != 0) {
                      bVar6 = true;
                      local_68 = iVar12;
                    }
                  }
                }
                if (local_64 != 0) {
                  iVar12 = param_1 + local_60 * 0x16;
                  piVar15 = (int *)(iVar12 + 0xfa4e);
                  iVar13 = (**(code **)(*(int *)(iVar12 + 0xfa4e) + 4))();
                  if (((iVar13 == 0) ||
                      (*(int *)(**(int **)(param_1 + local_60 * 0x16 + 0xfa56) + 0x12) !=
                       *(int *)(local_64 + 0x12))) ||
                     (*(int *)(**(int **)(iVar12 + 0xfa52) + 0x12) != *(int *)(local_68 + 0x12))) {
                    *(undefined4 *)(iVar12 + 0xfa60) = *(undefined4 *)(param_1 + 6);
                    FUN_00431220(0,local_68,local_64);
                    iVar13 = *(int *)(iVar12 + 0xfa52);
                    piVar18 = operator_new(0xe);
                    if (piVar18 == (int *)0x0) {
                      piVar18 = (int *)0x0;
                    }
                    else {
                      piVar18[1] = 0;
                      *piVar18 = local_68;
                      piVar18[2] = iVar13;
                      *(undefined1 *)(piVar18 + 3) = 0;
                    }
                    iVar14 = *(int *)(iVar12 + 0xfa5a);
                    *(int **)(iVar12 + 0xfa52) = piVar18;
                    *(int *)(iVar12 + 0xfa5a) = iVar14 + 1;
                    if (iVar14 == 0) {
                      *(int **)(iVar12 + 0xfa56) = piVar18;
                    }
                    else {
                      *(int **)(iVar13 + 4) = piVar18;
                    }
                  }
                  iVar13 = (**(code **)(*piVar15 + 4))();
                  if (0 < iVar13) {
                    local_58 = 0.0;
                    local_48 = 0.0;
                    piVar18 = *(int **)(iVar12 + 0xfa52);
                    while (piVar18 != (int *)0x0) {
                      piVar19 = (int *)piVar18[2];
                      bVar7 = false;
                      iVar12 = *piVar18;
                      piVar18 = piVar19;
                      if (((*(int *)(iVar12 + 0x254) == 8) &&
                          (iVar12 = *(int *)(iVar12 + 0x1c2), iVar12 != 0)) &&
                         (piVar19 = *(int **)(iVar12 + 4), piVar19 != (int *)0x0)) {
                        do {
                          piVar2 = (int *)piVar19[2];
                          piVar19 = (int *)*piVar19;
                          cVar8 = (**(code **)(*piVar19 + 0x2c))();
                          if ((((cVar8 != '\0') &&
                               (iVar12 = *(int *)(piVar19[0x92] + 6), (&DAT_0089cad8)[iVar12] != 0))
                              && (iVar12 != *(int *)(param_1 + 6))) &&
                             (((iVar12 == 0x157 || (*(int *)(param_1 + 6) == 0x157)) ||
                              ((cVar8 = FUN_005861e0(iVar12), cVar8 == '\0' &&
                               (*(char *)(*(int *)(param_1 + 0x12da) + iVar12 * 0x2c + 0x2c) != '\0'
                               )))))) {
                            iVar12 = (**(code **)(*(int *)((int)piVar19 + 0x22) + 4))();
                            bVar7 = true;
                            local_58 = (float)iVar12 + local_58;
                          }
                          piVar19 = piVar2;
                        } while (piVar2 != (int *)0x0);
                        if (bVar7) {
                          local_48 = local_48 + _DAT_007e3374;
                        }
                      }
                    }
                    iVar12 = (**(code **)(*piVar15 + 4))();
                    fVar3 = _DAT_007e3374 - local_48 / (float)iVar12;
                    if (local_58 < _DAT_007e3374) {
                      local_58 = 1.0;
                    }
                    iVar12 = (**(code **)(*piVar15 + 4))();
                    fVar4 = local_44 / (float)iVar12;
                    if (local_44 / (float)iVar12 < _DAT_007e3374) {
                      fVar4 = _DAT_007e3374;
                    }
                    fVar5 = fVar4 / local_58;
                    if (_DAT_007e3374 < fVar4 / local_58) {
                      fVar5 = _DAT_007e3374;
                    }
                    fVar5 = fVar5 * fVar3;
                    fVar3 = _DAT_007e3380;
                    if ((_DAT_007e3380 <= fVar5) && (fVar3 = fVar5, _DAT_007e3374 < fVar5)) {
                      fVar3 = _DAT_007e3374;
                    }
                    *(float *)(param_1 + 0xf4ee + local_60 * 4) = fVar3;
                  }
                }
                if (bVar6) {
                  local_68 = local_38;
                }
              }
LAB_0044f45b:
              local_4 = 0xffffffff;
              local_20 = &PTR_LAB_007e5e04;
              iVar12 = local_1c;
              while (iVar12 != 0) {
                iVar13 = *(int *)(iVar12 + 8);
                FUN_00796cd8(iVar12);
                iVar12 = iVar13;
              }
              local_1c = 0;
              local_18 = 0;
              local_14 = 0;
            }
            else {
              *(undefined4 *)(param_1 + 0xf4ee + local_60 * 4) = 0x3f800000;
            }
          }
        }
      }
    }
    local_60 = local_60 + 1;
    if (0x157 < local_60) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


