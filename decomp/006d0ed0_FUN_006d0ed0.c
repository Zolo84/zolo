// FUN_006d0ed0 @ 6d0ed0 size=8509

/* WARNING: Removing unreachable block (ram,0x006d1b30) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006d0ed0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  int *piVar8;
  char *pcVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  char *pcVar18;
  char *pcVar19;
  int local_438;
  int *local_434;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007d91d3;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cVar7 = FUN_0042e910();
  if ((cVar7 == '\0') || (DAT_00dc1962 != '\0')) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  iVar14 = 0;
  piVar8 = &DAT_00dc0fd4;
  do {
    if (*piVar8 == 1) break;
    piVar8 = piVar8 + 1;
    iVar14 = iVar14 + 1;
  } while ((int)piVar8 < 0xdc1534);
  piVar8 = (int *)(&DAT_0089cad8)[iVar14];
  if (*(int *)(param_1 + 0x6ca) < 200) {
    *(int *)(param_1 + 0x6ca) = *(int *)(param_1 + 0x6ca) + 1;
  }
  else {
    FUN_00796cd8();
    if (*(int *)(param_1 + 0x6ba) == 0) {
      *(int *)(param_1 + 0x6ce) = *(int *)(param_1 + 0x6ce) + -1;
    }
  }
  iVar14 = *(int *)(param_1 + 0x6ca);
  if (0 < iVar14) {
    puVar12 = (undefined4 *)(param_1 + 0x82 + iVar14 * 8);
    do {
      *puVar12 = puVar12[-2];
      puVar12[1] = puVar12[-1];
      puVar12 = puVar12 + -2;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  uVar15 = 0xffffffff;
  pcVar9 = (char *)(param_1 + 0x12);
  do {
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    cVar7 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar7 != '\0');
  pcVar9 = operator_new(~uVar15);
  uVar15 = 0xffffffff;
  *(char **)(param_1 + 0x86) = pcVar9;
  pcVar18 = (char *)(param_1 + 0x12);
  do {
    pcVar19 = pcVar18;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar19 = pcVar18 + 1;
    cVar7 = *pcVar18;
    pcVar18 = pcVar19;
  } while (cVar7 != '\0');
  uVar15 = ~uVar15;
  pcVar18 = pcVar19 + -uVar15;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar18;
    pcVar18 = pcVar18 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar9 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    pcVar9 = pcVar9 + 1;
  }
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(int *)(param_1 + 0x6ce) = *(int *)(param_1 + 0x6ce) + 1;
  iVar14 = FUN_007a7c30();
  if (iVar14 != 1) goto LAB_006d2fef;
  iVar14 = FUN_007a8730();
  if (iVar14 == 0) {
    iVar14 = FUN_007a7c30();
    if ((((int)piVar8 < 0) || (9 < (int)piVar8)) || (iVar14 != 2)) {
      FUN_006d0ca0();
      ExceptionList = local_14;
      return;
    }
    FUN_0042a492();
    FUN_0042b6c9();
    goto LAB_006d2fef;
  }
  iVar14 = FUN_007a8730();
  if (iVar14 == 0) {
    iVar14 = FUN_007a7c30();
    if (((DAT_00bd1500 != 0) && (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) &&
       ((iVar14 == 3 && ((-1 < (int)piVar8 && ((int)piVar8 < 10)))))) {
      FUN_0057dc20();
    }
    goto LAB_006d2fef;
  }
  iVar14 = FUN_007a8730();
  if (iVar14 == 0) {
    iVar14 = FUN_007a7c30();
    if ((((DAT_00bd1500 != 0) && (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) && (iVar14 == 2)) &&
       ((-1 < (int)piVar8 && ((int)piVar8 < 10)))) {
      FUN_0057dda0();
    }
    goto LAB_006d2fef;
  }
  iVar14 = FUN_007a8730();
  if (iVar14 == 0) {
    iVar14 = FUN_007a7c30();
    if (((DAT_00bd1500 != 0) && (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) && (iVar14 == 2)) {
      pvVar10 = operator_new(0xc);
      local_c = 0;
      if (pvVar10 != (void *)0x0) {
        FUN_00566410();
      }
      local_c = 0xffffffff;
      FUN_00565ca0();
    }
    goto LAB_006d2fef;
  }
  iVar14 = FUN_007a8730();
  if (iVar14 == 0) {
    iVar14 = FUN_007a7c30();
    if (((DAT_00bd1500 != 0) && (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) &&
       ((iVar14 == 3 && ((-1 < (int)local_434 && ((int)local_434 < 10)))))) {
      FUN_0057dde0();
      FUN_006d0ca0();
      ExceptionList = local_14;
      return;
    }
    goto LAB_006d2fef;
  }
  iVar14 = FUN_007a8730();
  if (iVar14 == 0) {
    iVar14 = FUN_007a7c30();
    if ((((((DAT_00bd1500 != 0) && (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) && (iVar14 == 3)) &&
         ((-1 < local_438 && (local_438 < 10)))) && (iVar14 = FUN_004af6b0(), iVar14 != 0)) &&
       (((&DAT_00dc0fd4)[iVar14] != 1 && ((&DAT_00dc0fd4)[iVar14] != 0)))) {
      iVar17 = 0;
      if (0 < *(int *)(DAT_00bd1500 + 0xb70)) {
        piVar8 = (int *)(DAT_00bd1500 + 0x3cc);
        do {
          if (*piVar8 == iVar14) break;
          iVar17 = iVar17 + 1;
          piVar8 = (int *)((int)piVar8 + 0x3e);
        } while (iVar17 < *(int *)(DAT_00bd1500 + 0xb70));
      }
      if (DAT_00bd1500 != 0) {
        FUN_0057dd20();
      }
      FUN_006d0ca0();
      ExceptionList = local_14;
      return;
    }
    goto LAB_006d2fef;
  }
  iVar14 = FUN_007a8730();
  if (iVar14 == 0) {
    iVar14 = FUN_007a7c30();
    if ((((DAT_00bd1500 != 0) && (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) && (iVar14 == 3)) &&
       (((-1 < local_438 && (local_438 < 10)) &&
        ((iVar14 = FUN_004af6b0(), iVar14 != 0 &&
         (((&DAT_00dc0fd4)[iVar14] != 1 && ((&DAT_00dc0fd4)[iVar14] != 0)))))))) {
      iVar17 = 0;
      if (0 < *(int *)(DAT_00bd1500 + 0xb70)) {
        piVar8 = (int *)(DAT_00bd1500 + 0x3cc);
        do {
          if (*piVar8 == iVar14) break;
          iVar17 = iVar17 + 1;
          piVar8 = (int *)((int)piVar8 + 0x3e);
        } while (iVar17 < *(int *)(DAT_00bd1500 + 0xb70));
      }
      if (DAT_00bd1500 != 0) {
        FUN_0057dd60();
      }
      FUN_006d0ca0();
      ExceptionList = local_14;
      return;
    }
    goto LAB_006d2fef;
  }
  iVar17 = FUN_007a8730();
  iVar14 = DAT_00bd1500;
  if (iVar17 == 0) {
    if ((DAT_00bd1500 != 0) && (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) {
      FUN_006d0ca0();
      iVar17 = 0;
      if (*(int *)(iVar14 + 0xb70) < 1) {
        ExceptionList = local_14;
        return;
      }
      do {
        FUN_004af740();
        FUN_004af700();
        FUN_006d0ca0();
        iVar17 = iVar17 + 1;
      } while (iVar17 < *(int *)(iVar14 + 0xb70));
      ExceptionList = local_14;
      return;
    }
    goto LAB_006d2fef;
  }
  iVar14 = FUN_007a8730();
  if (iVar14 == 0) {
    FUN_006d0ca0();
    FUN_006d0ca0();
    FUN_006d0ca0();
    FUN_006d0ca0();
    FUN_006d0ca0();
    FUN_006d0ca0();
    FUN_006d0ca0();
    FUN_006d0ca0();
    FUN_006d0ca0();
    FUN_006d0ca0();
    FUN_006d0ca0();
    FUN_006d0ca0();
    goto LAB_006d2fef;
  }
  iVar14 = FUN_007a8730();
  if (iVar14 == 0) {
    iVar14 = FUN_007a7c30();
    if (iVar14 == 2) {
      FUN_007a630a();
      FUN_0042fa90();
      FUN_004300c0();
      FUN_0042efb0();
      goto LAB_006d2fef;
    }
  }
  else {
    iVar14 = FUN_007a8730();
    if (iVar14 == 0) {
      iVar14 = FUN_007a7c30();
      if (iVar14 == 2) {
        FUN_007a630a();
        FUN_0042ec20();
        goto LAB_006d2fef;
      }
    }
    else {
      iVar14 = FUN_007a8730();
      if ((iVar14 == 0) || (iVar14 = FUN_007a8730(), iVar14 == 0)) goto LAB_006d2fef;
      iVar14 = FUN_007a8730();
      if ((iVar14 == 0) && (bVar6)) {
        FUN_007a7c30();
        iVar14 = FUN_007a7b3c();
        if (((iVar14 != 0) && (iVar14 < DAT_00877690)) &&
           (iVar14 = (**(code **)(**(int **)((int)DAT_00d0ca90 + 0x21e5a) + 4))(), iVar14 != 0)) {
          (**(code **)(*(int *)**(undefined4 **)(*(int *)((int)DAT_00d0ca90 + 0x21e5a) + 4) + 0x60))
                    ();
        }
      }
      else {
        iVar14 = FUN_007a8730();
        if ((iVar14 == 0) && (bVar6)) {
          iVar14 = FUN_007a7c30();
          FUN_007a7b3c();
          *(undefined1 *)(param_1 + 0x80) = 1;
          if (iVar14 == 2) {
            FUN_00700a60();
            *(undefined1 *)(param_1 + 0x80) = 0;
          }
          else if (iVar14 == 3) {
            piVar8 = &DAT_0089cad8;
            do {
              if (*piVar8 != 0) {
                FUN_007a8730();
              }
              piVar8 = piVar8 + 1;
            } while ((int)piVar8 < 0x89d038);
            FUN_00700a60();
            *(undefined1 *)(param_1 + 0x80) = 0;
          }
          else {
            FUN_006d0ca0();
            *(undefined1 *)(param_1 + 0x80) = 0;
          }
          goto LAB_006d2fef;
        }
        iVar14 = FUN_007a8730();
        if ((iVar14 == 0) && (bVar6)) {
          iVar14 = FUN_007a7c30();
          iVar17 = FUN_007a7b3c();
          if (iVar14 != 2) goto LAB_006d2fef;
          iVar14 = FUN_004e9370();
          if (((*(int *)(iVar14 + 0x254) == 8) || (*(int *)(iVar14 + 0x254) == 9)) ||
             (iVar17 == *(int *)((int)DAT_00d0ca90 + 0x117de))) goto LAB_006d2fef;
          if (DAT_0089cd64 == 0) {
            local_c = 1;
            piVar8 = operator_new(0xe);
            if (piVar8 == (int *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              *piVar8 = iVar17;
              piVar8[1] = 0;
              piVar8[2] = 0;
              *(undefined1 *)(piVar8 + 3) = 0;
            }
            pvVar10 = operator_new(0xc);
            local_c._0_1_ = 2;
            if (pvVar10 != (void *)0x0) {
              uVar11 = FUN_0045fec0();
              FUN_00446d10(uVar11);
              FUN_0048f270(0xa1);
            }
            local_c = CONCAT31(local_c._1_3_,1);
            FUN_00565bc0();
            FUN_00460b30();
            local_c = 0xffffffff;
            while (piVar8 != (int *)0x0) {
              piVar8 = (int *)piVar8[2];
              FUN_00796cd8();
            }
            goto LAB_006d2fef;
          }
        }
        else {
          iVar14 = FUN_007a8730();
          if ((iVar14 == 0) && (bVar6)) {
            iVar14 = FUN_007a7c30();
            uVar11 = FUN_007a7b3c();
            *(undefined1 *)(param_1 + 0x80) = 1;
            if (iVar14 == 2) {
              puVar12 = operator_new(0xc);
              local_c = 3;
            }
            else {
              if (iVar14 != 3) {
                FUN_006d0ca0();
                *(undefined1 *)(param_1 + 0x80) = 0;
                goto LAB_006d2fef;
              }
              piVar8 = &DAT_0089cad8;
              do {
                if (*piVar8 != 0) {
                  FUN_007a8730();
                }
                piVar8 = piVar8 + 1;
              } while ((int)piVar8 < 0x89d038);
              puVar12 = operator_new(0xc);
              local_c = 4;
            }
            if (puVar12 != (undefined4 *)0x0) {
              FUN_00499310();
              *puVar12 = &PTR_FUN_007e5f60;
              *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
            }
            local_c = 0xffffffff;
            FUN_00565bc0();
            *(undefined1 *)(param_1 + 0x80) = 0;
            goto LAB_006d2fef;
          }
          iVar14 = FUN_007a8730();
          if ((iVar14 == 0) && (bVar6)) {
            iVar14 = FUN_007a7c30();
            iVar17 = FUN_007a7b3c();
            if ((((iVar14 == 2) && (0 < iVar17)) && (iVar17 < DAT_00877690)) &&
               (iVar14 = FUN_004e9370(), *(int *)(iVar14 + 0x3d4) != 0)) {
              FUN_004a89c0();
            }
            goto LAB_006d2fef;
          }
          iVar14 = FUN_007a8730();
          if ((iVar14 == 0) && (bVar6)) {
            DAT_00d610e6 = DAT_00d610e6 == '\0';
          }
          else {
            iVar14 = FUN_007a8730();
            if ((iVar14 == 0) && (bVar6)) {
              DAT_00d610dd = DAT_00d610dd == '\0';
            }
            else {
              iVar14 = FUN_007a8730();
              if ((iVar14 == 0) && (bVar6)) {
                DAT_00d610e8 = DAT_00d610e8 == '\0';
              }
              else {
                iVar14 = FUN_007a8730();
                if ((iVar14 == 0) && (bVar6)) {
                  DAT_00d610e9 = DAT_00d610e9 == '\0';
                }
                else {
                  iVar14 = FUN_007a8730();
                  if ((iVar14 == 0) && (bVar6)) {
                    DAT_00d610e5 = DAT_00d610e5 == '\0';
                  }
                  else {
                    iVar14 = FUN_007a8730();
                    if ((iVar14 == 0) && (bVar6)) {
                      FUN_0066bdb0();
                      goto LAB_006d2fef;
                    }
                    iVar14 = FUN_007a8730();
                    if ((iVar14 == 0) && (bVar6)) {
                      FUN_0066bfa0();
                      goto LAB_006d2fef;
                    }
                    iVar14 = FUN_007a8730();
                    if ((iVar14 == 0) && (bVar6)) {
                      DAT_00d610dc = DAT_00d610dc == '\0';
                      (**(code **)(*piVar8 + 0x490))();
                    }
                    else {
                      iVar14 = FUN_007a8730();
                      if ((iVar14 == 0) && (bVar6)) {
                        DAT_00d610de = 1;
                      }
                      else {
                        iVar14 = FUN_007a8730();
                        if ((iVar14 == 0) && (bVar6)) {
                          DAT_00d610e0 = DAT_00d610e0 == '\0';
                        }
                        else {
                          iVar14 = FUN_007a8730();
                          if ((iVar14 == 0) && (bVar6)) {
                            DAT_00d610e1 = DAT_00d610e1 == '\0';
                          }
                          else {
                            iVar14 = FUN_007a8730();
                            if ((iVar14 == 0) && (bVar6)) {
                              FUN_00462740();
                              FUN_0064e350();
                            }
                            else {
                              iVar14 = FUN_007a8730();
                              if ((iVar14 == 0) && (bVar6)) {
                                (**(code **)(*DAT_00d0ca90 + 0x28))();
                              }
                              else {
                                iVar14 = FUN_007a8730();
                                if ((iVar14 == 0) && (bVar6)) {
                                  FUN_0049eae0();
                                }
                                else {
                                  iVar14 = FUN_007a8730();
                                  if ((iVar14 == 0) && (bVar6)) {
                                    FUN_0049ebd0();
                                  }
                                  else {
                                    iVar14 = FUN_007a8730();
                                    if ((iVar14 == 0) && (bVar6)) {
                                      FUN_0049eb70();
                                    }
                                    else {
                                      iVar14 = FUN_007a8730();
                                      if ((iVar14 == 0) && (bVar6)) {
                                        FUN_0049eb10();
                                      }
                                      else {
                                        iVar14 = FUN_007a8730();
                                        if ((iVar14 == 0) && (bVar6)) {
                                          FUN_0049eb40();
                                        }
                                        else {
                                          iVar14 = FUN_007a8730();
                                          if ((iVar14 == 0) && (bVar6)) {
                                            iVar14 = FUN_007a7c30();
                                            FUN_007a7b3c();
                                            if (iVar14 != 1) {
                                              if (iVar14 == 2) {
                                                piVar8 = &DAT_0089cad8;
                                                do {
                                                  iVar14 = *piVar8;
                                                  if ((iVar14 != 0) &&
                                                     (iVar17 = FUN_007a8730(), iVar17 == 0)) {
                                                    *(int *)(iVar14 + 0x4652) =
                                                         *(int *)((int)DAT_00d0ca90 + 0x4652) + 1;
                                                    (**(code **)(*(int *)(iVar14 + 0xe) + 0xc))();
                                                    FUN_006d0ca0();
                                                  }
                                                  piVar8 = piVar8 + 1;
                                                } while ((int)piVar8 < 0x89d038);
                                              }
                                              goto LAB_006d2fef;
                                            }
                                            *(int *)((int)DAT_00d0ca90 + 0x4652) =
                                                 *(int *)((int)DAT_00d0ca90 + 0x4652) + 1;
                                          }
                                          else {
                                            iVar14 = FUN_007a8730();
                                            if ((iVar14 == 0) && (bVar6)) {
                                              DAT_00d610e3 = DAT_00d610e3 == '\0';
                                            }
                                            else {
                                              iVar14 = FUN_007a8730();
                                              if ((iVar14 == 0) && (bVar6)) {
                                                DAT_00d610e4 = DAT_00d610e4 == '\0';
                                              }
                                              else {
                                                iVar14 = FUN_007a8730();
                                                if ((iVar14 == 0) && (bVar6)) {
                                                  DAT_00d0ca90[0xe85] =
                                                       (int)((float)DAT_00d0ca90[0xe85] +
                                                            _DAT_007e4088);
                                                }
                                                else {
                                                  iVar14 = FUN_007a8730();
                                                  if ((iVar14 == 0) && (bVar6)) {
                                                    DAT_00d0ca90[0xe84] =
                                                         (int)((float)DAT_00d0ca90[0xe84] +
                                                              _DAT_007e4088);
                                                  }
                                                  else {
                                                    iVar14 = FUN_007a8730();
                                                    if ((iVar14 == 0) && (bVar6)) {
                                                      FUN_0049eba0();
                                                    }
                                                    else {
                                                      iVar14 = FUN_007a8730();
                                                      if ((iVar14 == 0) && (bVar6)) {
                                                        fVar5 = (float)DAT_00d0ca90[0x8d] +
                                                                _DAT_007e6858;
                                                        if (fVar5 <= _DAT_007e4088) {
                                                          if (fVar5 < _DAT_007e3380) {
                                                            fVar5 = _DAT_007e3380;
                                                          }
                                                          DAT_00d0ca90[0x8d] = (int)fVar5;
                                                        }
                                                        else {
                                                          DAT_00d0ca90[0x8d] = (int)_DAT_007e4088;
                                                        }
                                                      }
                                                      else {
                                                        iVar14 = FUN_007a8730();
                                                        if ((iVar14 == 0) && (bVar6)) {
                                                          iVar14 = FUN_007a7c30();
                                                          if (iVar14 == 2) {
                                                            FUN_00429d50();
                                                            iVar14 = 0;
                                                            piVar8 = &DAT_0089cad8;
                                                            do {
                                                              piVar1 = (int *)*piVar8;
                                                              if ((piVar1 != (int *)0x0) &&
                                                                 (iVar17 = FUN_007a8730(),
                                                                 iVar17 == 0)) {
                                                                (**(code **)(*(int *)((int)piVar1 +
                                                                                     0xe) + 0xc))();
                                                                FUN_006d0ca0();
                                                                cVar7 = FUN_0042e980();
                                                                if ((cVar7 != '\0') &&
                                                                   (cVar7 = (**(code **)(*piVar1 +
                                                                                        0x1c))(),
                                                                   cVar7 != '\0')) {
                                                                  piVar8 = (int *)piVar1[0x4f21];
                                                                  (**(code **)(*piVar8 + 0x150))();
                                                                  __ftol();
                                                                  FUN_006d0ca0();
                                                                  (**(code **)(*(int *)((int)piVar8
                                                                                       + 0x13e) + 4)
                                                                  )();
                                                                  FUN_006d0ca0();
                                                                  puVar12 = *(undefined4 **)
                                                                             ((int)piVar8 + 0x146);
                                                                  iVar17 = 0;
                                                                  while ((puVar12 !=
                                                                          (undefined4 *)0x0 &&
                                                                         (iVar17 < 2))) {
                                                                    puVar2 = (undefined4 *)
                                                                             puVar12[1];
                                                                    piVar1 = (int *)*puVar12;
                                                                    (**(code **)(*piVar1 + 0x150))()
                                                                    ;
                                                                    (**(code **)(*piVar1 + 0xf0))();
                                                                    FUN_006d0ca0();
                                                                    puVar12 = puVar2;
                                                                    iVar17 = iVar17 + 1;
                                                                  }
                                                                  (**(code **)(*(int *)((int)piVar8
                                                                                       + 0x8a) + 4))
                                                                            ();
                                                                  FUN_006d0ca0();
                                                                  local_438 = 0;
                                                                  piVar1 = *(int **)((int)piVar8 +
                                                                                    0x8e);
                                                                  while ((piVar1 != (int *)0x0 &&
                                                                         (local_438 < 8))) {
                                                                    piVar3 = (int *)piVar1[2];
                                                                    piVar4 = (int *)*piVar1;
                                                                    cVar7 = (**(code **)*piVar4)();
                                                                    piVar1 = piVar3;
                                                                    if ((cVar7 == '\0') &&
                                                                       (piVar3 = (int *)piVar4[2],
                                                                       piVar3 != (int *)0x0)) {
                                                                      (**(code **)(*piVar4 + 0xc))()
                                                                      ;
                                                                      (**(code **)(*piVar3 + 0xf0))
                                                                                ();
                                                                      FUN_006982b0();
                                                                      FUN_006d0ca0();
                                                                      local_438 = local_438 + 1;
                                                                    }
                                                                  }
                                                                  piVar1 = *(int **)((int)piVar8 +
                                                                                    0x25a);
                                                                  while (piVar1 != (int *)0x0) {
                                                                    piVar3 = (int *)piVar1[2];
                                                                    (**(code **)(*(int *)(*piVar1 +
                                                                                         0x16) + 4))
                                                                              ();
                                                                    piVar1 = piVar3;
                                                                  }
                                                                  (**(code **)(*(int *)((int)piVar8
                                                                                       + 0x256) + 4)
                                                                  )();
                                                                  FUN_006d0ca0();
                                                                }
                                                                break;
                                                              }
                                                              piVar8 = piVar8 + 1;
                                                              iVar14 = iVar14 + 1;
                                                            } while ((int)piVar8 < 0x89d038);
joined_r0x006d2b74:
                                                            if (iVar14 != 0x158) goto LAB_006d2fef;
                                                          }
                                                        }
                                                        else {
                                                          iVar14 = FUN_007a8730();
                                                          if ((iVar14 == 0) && (bVar6)) {
                                                            iVar14 = FUN_007a7c30();
                                                            if (iVar14 == 2) {
                                                              FUN_00540ab0();
                                                            }
                                                            goto LAB_006d2fef;
                                                          }
                                                          iVar14 = FUN_007a8730();
                                                          if ((iVar14 == 0) && (bVar6)) {
                                                            iVar14 = FUN_007a6615();
                                                            if (iVar14 != 0) {
                                                              FUN_007a6628();
                                                              piVar8 = &DAT_0089cad8;
                                                              do {
                                                                iVar14 = *piVar8;
                                                                if (iVar14 != 0) {
                                                                  __ftol();
                                                                  __ftol();
                                                                  __ftol();
                                                                  __ftol();
                                                                  (**(code **)(*(int *)(iVar14 + 0xe
                                                                                       ) + 0xc))();
                                                                  FUN_007a6628();
                                                                }
                                                                piVar8 = piVar8 + 1;
                                                              } while ((int)piVar8 < 0x89d038);
                                                              FUN_007a6429();
                                                            }
                                                          }
                                                          else {
                                                            iVar14 = FUN_007a8730();
                                                            if ((iVar14 == 0) && (bVar6)) {
                                                              iVar14 = FUN_007a7c30();
                                                              if (iVar14 == 2) {
                                                                piVar8 = &DAT_0089cad8;
                                                                do {
                                                                  piVar1 = (int *)*piVar8;
                                                                  if ((((piVar1 != (int *)0x0) &&
                                                                       (iVar14 = FUN_007a8730(),
                                                                       iVar14 == 0)) &&
                                                                      (cVar7 = FUN_0042e980(),
                                                                      cVar7 != '\0')) &&
                                                                     (cVar7 = (**(code **)(*piVar1 +
                                                                                          0x1c))(),
                                                                     cVar7 != '\0')) {
                                                                    piVar1 = *(int **)(piVar1[0x4f21
                                                  ] + 0x8e);
                                                  while (piVar1 != (int *)0x0) {
                                                    piVar3 = (int *)piVar1[2];
                                                    puVar12 = (undefined4 *)*piVar1;
                                                    cVar7 = (**(code **)*puVar12)();
                                                    piVar1 = (int *)puVar12[2];
                                                    if (cVar7 == '\0') {
                                                      if (piVar1 == (int *)0x0) {
                                                        (**(code **)(*_DAT_00000040 + 0xf0))();
                                                        (**(code **)(_DAT_00000000 + 0xf0))();
                                                      }
                                                      else {
                                                        (**(code **)(*(int *)piVar1[0x10] + 0xf0))()
                                                        ;
                                                        (**(code **)(*piVar1 + 0xf0))();
                                                      }
                                                    }
                                                    else {
                                                      (**(code **)(*(int *)piVar1[0x10] + 0xf0))();
                                                      (**(code **)(*piVar1 + 0xf0))();
                                                    }
                                                    FUN_00405ad0();
                                                    piVar1 = piVar3;
                                                  }
                                                  }
                                                  piVar8 = piVar8 + 1;
                                                  } while ((int)piVar8 < 0x89d038);
                                                  goto LAB_006d2fef;
                                                  }
                                                  }
                                                  else {
                                                    iVar14 = FUN_007a8730();
                                                    if ((iVar14 == 0) && (bVar6)) {
                                                      iVar14 = FUN_007a7c30();
                                                      if (iVar14 == 2) {
                                                        FUN_00429d50();
                                                        iVar14 = FUN_007a8730();
                                                        if (iVar14 != 0) {
                                                          iVar14 = 0;
                                                          piVar8 = &DAT_0089cad8;
                                                          do {
                                                            iVar17 = *piVar8;
                                                            if ((iVar17 != 0) &&
                                                               (iVar13 = FUN_007a8730(), iVar13 == 0
                                                               )) {
                                                              FUN_004a6780();
                                                              (**(code **)(*(int *)(iVar17 + 0xe) +
                                                                          0xc))();
                                                              FUN_006d0ca0();
                                                              break;
                                                            }
                                                            piVar8 = piVar8 + 1;
                                                            iVar14 = iVar14 + 1;
                                                          } while ((int)piVar8 < 0x89d038);
                                                          goto joined_r0x006d2b74;
                                                        }
                                                        piVar8 = &DAT_0089cad8;
                                                        do {
                                                          if (*piVar8 != 0) {
                                                            FUN_004a6780();
                                                          }
                                                          piVar8 = piVar8 + 1;
                                                        } while ((int)piVar8 < 0x89d034);
                                                      }
                                                    }
                                                    else {
                                                      iVar14 = FUN_007a8730();
                                                      if ((iVar14 == 0) &&
                                                         ((bVar6 && (iVar14 = FUN_007a7c30(),
                                                                    iVar14 == 2)))) {
                                                        FUN_00429d50();
                                                        iVar14 = FUN_007a8730();
                                                        if (iVar14 != 0) {
                                                          iVar14 = 0;
                                                          piVar8 = &DAT_0089cad8;
LAB_006d2ddf:
                                                          iVar17 = *piVar8;
                                                          if ((iVar17 == 0) ||
                                                             (iVar13 = FUN_007a8730(), iVar13 != 0))
                                                          goto LAB_006d2dfd;
                                                          (**(code **)(*(int *)(iVar17 + 0xe) + 0xc)
                                                          )();
                                                          FUN_00429a00();
                                                          iVar13 = 0;
                                                          if (0 < DAT_0087769c) {
                                                            do {
                                                              FUN_004ff300();
                                                              FUN_00429a00();
                                                              iVar13 = iVar13 + 1;
                                                            } while (iVar13 < DAT_0087769c);
                                                          }
                                                          FUN_00429a00();
                                                          FUN_00429a00(
                                                  s_OIL____4f_UsedByOwnTroops_____4f_0086bb38,
                                                  (double)*(float *)(iVar17 + 0x39b4),
                                                  (double)*(float *)(iVar17 + 0x4082),
                                                  (double)*(float *)(iVar17 + 0x408a),
                                                  (double)*(float *)(iVar17 + 0x4096));
                                                  FUN_00429a00(
                                                  s_SUPPLIES____4f_UsedByOwnTroops___0086ba94,
                                                  (double)*(float *)(iVar17 + 0x39c4),
                                                  (double)*(float *)(iVar17 + 0x4086),
                                                  (double)*(float *)(iVar17 + 0x408e),
                                                  (double)*(float *)(iVar17 + 0x4092));
                                                  (**(code **)(*(int *)(iVar17 + 0xe) + 0xc))();
                                                  FUN_006d0ca0();
                                                  goto joined_r0x006d2b74;
                                                  }
                                                  local_434 = &DAT_0089cad8;
                                                  do {
                                                    iVar14 = *local_434;
                                                    if (iVar14 != 0) {
                                                      iVar17 = 0;
                                                      (**(code **)(*(int *)(iVar14 + 0xe) + 0xc))();
                                                      FUN_00429a00();
                                                      if (0 < DAT_0087769c) {
                                                        do {
                                                          FUN_004ff300();
                                                          FUN_00429a00();
                                                          iVar17 = iVar17 + 1;
                                                        } while (iVar17 < DAT_0087769c);
                                                      }
                                                      FUN_00429a00();
                                                      FUN_00429a00(
                                                  s_OIL____4f_UsedByOwnTroops_____4f_0086bb38,
                                                  (double)*(float *)(iVar14 + 0x39b4),
                                                  (double)*(float *)(iVar14 + 0x4082),
                                                  (double)*(float *)(iVar14 + 0x408a),
                                                  (double)*(float *)(iVar14 + 0x4096));
                                                  FUN_00429a00(
                                                  s_SUPPLIES____4f_UsedByOwnTroops___0086ba94,
                                                  (double)*(float *)(iVar14 + 0x39c4),
                                                  (double)*(float *)(iVar14 + 0x4086),
                                                  (double)*(float *)(iVar14 + 0x408e),
                                                  (double)*(float *)(iVar14 + 0x4092));
                                                  }
                                                  local_434 = local_434 + 1;
                                                  } while ((int)local_434 < 0x89d034);
                                                  (**(code **)(*(int *)((int)piVar8 + 0xe) + 0xc))()
                                                  ;
                                                  FUN_006d0ca0();
                                                  goto LAB_006d2fef;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_006d0ca0();
LAB_006d2fef:
  FUN_006d0ca0();
  ExceptionList = local_14;
  return;
LAB_006d2dfd:
  piVar8 = piVar8 + 1;
  iVar14 = iVar14 + 1;
  if (0x89d037 < (int)piVar8) goto joined_r0x006d2b74;
  goto LAB_006d2ddf;
}


