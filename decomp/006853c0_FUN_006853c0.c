// FUN_006853c0 @ 6853c0 size=3371

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006853c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  void *pvVar20;
  undefined4 uVar21;
  int *piVar22;
  bool bVar23;
  float10 fVar24;
  float fVar25;
  float fVar26;
  int local_7c;
  float fStack_78;
  float local_74;
  int iStack_70;
  int iStack_5c;
  undefined1 auStack_54 [4];
  uint uStack_50;
  undefined **local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  int local_3c;
  undefined1 local_38;
  undefined **ppuStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined **ppuStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d4d1c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar12 = FUN_006a8720();
  if (cVar12 == '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x120);
    piVar5 = *(int **)(param_1 + 0x110);
    while (piVar5 != (int *)0x0) {
      piVar2 = (int *)piVar5[2];
      iVar3 = *piVar5;
      iVar13 = FUN_004e9370(*(undefined4 *)(iVar3 + 4));
      fVar26 = *(float *)(iVar1 + 0x97c);
      cVar12 = FUN_004e46e0();
      if (cVar12 != '\0') {
        local_44 = (undefined4 *)0x0;
        local_40 = (undefined4 *)0x0;
        local_3c = 0;
        local_38 = 0;
        local_48 = &PTR_LAB_007e378c;
        local_4._0_1_ = 0;
        local_4._1_3_ = 0;
        piVar5 = *(int **)(*(int *)(iVar13 + 0x1aa) + 4);
        iVar14 = local_3c;
        while (local_3c = iVar14, piVar5 != (int *)0x0) {
          piVar22 = (int *)piVar5[2];
          iVar14 = (**(code **)(**(int **)(*piVar5 + 0x80) + 0xc))();
          piVar4 = *(int **)(iVar14 + 4);
          puVar15 = local_44;
          uVar11 = (undefined1)local_4;
joined_r0x0068549c:
          local_4._0_1_ = uVar11;
          local_44 = puVar15;
          piVar5 = piVar22;
          iVar14 = local_3c;
          if (piVar4 != (int *)0x0) {
            piVar5 = (int *)*piVar4;
            piVar4 = (int *)piVar4[2];
            puVar15 = local_44;
            uVar11 = (undefined1)local_4;
            if ((((*(char *)((int)piVar5 + 0x17b) == '\0') &&
                 (cVar12 = (**(code **)(*piVar5 + 0x28))(), puVar15 = local_44,
                 uVar11 = (undefined1)local_4, cVar12 != '\0')) &&
                (iVar14 = (**(code **)(piVar5[0x47] + 4))(), puVar15 = local_44,
                uVar11 = (undefined1)local_4, iVar14 != 0)) &&
               (*(char *)((int)piVar5 + 0x17d) == '\0')) {
              iVar14 = piVar5[0x92];
              if ((iVar14 != 0) &&
                 ((iVar17 = *(int *)(*(int *)(param_1 + 0x1c) + 6), *(int *)(iVar14 + 6) == iVar17
                  || (*(char *)(iVar14 + 0x34ac + iVar17) != '\0')))) {
                fStack_78 = 0.0;
                piVar9 = *(int **)((int)piVar5 + 0x26);
                while (piVar9 != (int *)0x0) {
                  piVar6 = (int *)piVar9[2];
                  fVar25 = *(float *)(*piVar9 + 0xf4);
                  fVar24 = (float10)FUN_004fd510();
                  fStack_78 = (float)((float10)fVar25 / fVar24 + (float10)fStack_78);
                  piVar9 = piVar6;
                }
                iVar14 = (**(code **)(*(int *)((int)piVar5 + 0x22) + 4))();
                if (iVar14 != 0) {
                  iVar14 = (**(code **)(*(int *)((int)piVar5 + 0x22) + 4))();
                  fStack_78 = fStack_78 / (float)iVar14;
                }
                if (fStack_78 < _DAT_007e6868) {
                  FUN_0051bbd0();
                  puVar15 = local_44;
                  uVar11 = (undefined1)local_4;
                  goto joined_r0x0068549c;
                }
              }
              iVar14 = *(int *)(iVar3 + 0x76);
              pvVar20 = operator_new(0xe);
              local_4._0_1_ = 1;
              if (pvVar20 == (void *)0x0) {
                uVar16 = 0;
              }
              else {
                uVar16 = FUN_0045bab0(piVar5,iVar14,0);
              }
              iVar17 = *(int *)(iVar3 + 0x7a);
              local_4._0_1_ = 0;
              uVar11 = (undefined1)local_4;
              local_4._0_1_ = 0;
              *(undefined4 *)(iVar3 + 0x76) = uVar16;
              *(int *)(iVar3 + 0x7a) = iVar17 + 1;
              if (iVar17 == 0) {
                *(undefined4 *)(iVar3 + 0x72) = uVar16;
              }
              else {
                *(undefined4 *)(iVar14 + 8) = uVar16;
              }
              iVar14 = piVar5[0x90];
              puVar7 = local_44;
              puVar15 = local_44;
              if (iVar14 != 0) {
                for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[2]) {
                  cVar12 = (*(code *)local_48[3])(*puVar7,iVar14);
                  if (cVar12 != '\0') {
                    puVar15 = local_44;
                    uVar11 = (undefined1)local_4;
                    if (puVar7 != (undefined4 *)0x0) goto joined_r0x0068549c;
                    break;
                  }
                }
                puVar7 = local_40;
                iVar14 = piVar5[0x90];
                pvVar20 = operator_new(0xe);
                local_4._0_1_ = 2;
                if (pvVar20 == (void *)0x0) {
                  local_40 = (undefined4 *)0x0;
                }
                else {
                  local_40 = (undefined4 *)FUN_0049a7a0(iVar14,puVar7,0);
                }
                local_4._0_1_ = 0;
                iVar14 = local_3c + 1;
                bVar23 = local_3c != 0;
                puVar15 = local_40;
                local_3c = iVar14;
                uVar11 = (undefined1)local_4;
                if (bVar23) {
                  puVar7[2] = local_40;
                  puVar15 = local_44;
                }
              }
            }
            goto joined_r0x0068549c;
          }
        }
        fVar24 = (float10)FUN_006afaf0(0);
        fVar25 = (float)(((float10)_DAT_007e3374 - (float10)(iVar14 + -1) * (float10)_DAT_007e40b8)
                        * fVar24);
        fVar24 = (float10)FUN_006afdb0(1);
        fVar24 = (float10)FUN_00689210((float)fVar24,fVar25,iVar13);
        if (fVar24 <= (float10)fVar26) {
          piVar5 = *(int **)(iVar3 + 0x72);
          while (piVar5 != (int *)0x0) {
            piVar22 = (int *)piVar5[2];
            iVar13 = *(int *)(*piVar5 + 0x248);
            piVar5 = piVar22;
            if (((iVar13 == 0) || (*(int *)(iVar13 + 6) == *(int *)(*(int *)(param_1 + 0x1c) + 6)))
               || (*(char *)(iVar13 + 0x34ac + *(int *)(*(int *)(param_1 + 0x1c) + 6)) != '\0')) {
              FUN_0051bbd0();
            }
          }
        }
        local_4 = 0xffffffff;
        local_48 = &PTR_LAB_007e378c;
        FUN_004174b0();
      }
      (**(code **)(*(int *)(iVar3 + 0x6e) + 0x10))();
      piVar5 = piVar2;
    }
    piVar5 = *(int **)(param_1 + 4);
    while (piVar5 != (int *)0x0) {
      piVar2 = (int *)piVar5[2];
      iVar3 = *piVar5;
      iVar13 = *(int *)(iVar3 + 4);
      iVar14 = FUN_0044e1b0();
      piVar5 = piVar2;
      if (iVar13 != iVar14) {
        iVar13 = FUN_004e9370(*(undefined4 *)(iVar3 + 4));
        fVar24 = (float10)FUN_004ecf60();
        if (fVar24 <= (float10)_DAT_007e384c) {
          cVar12 = FUN_004e46e0();
          if (cVar12 != '\0') {
            FUN_00457e10();
            ppuStack_20 = &PTR_FUN_007e4c84;
            local_4 = 3;
            iStack_5c = 0;
            if (0 < *(int *)(iVar13 + 0x290)) {
              iStack_70 = 0;
              do {
                puVar15 = (undefined4 *)(iStack_70 + *(int *)(iVar13 + 0x298));
                if (puVar15[1] != 4) {
                  iVar14 = FUN_004e9370(*puVar15);
                  if (((*(int *)(iVar14 + 0x254) != 8) && (*(int *)(iVar14 + 0x254) != 9)) &&
                     (*(int *)(iVar14 + 0x3d8) != 0)) {
                    if (*(int *)(iVar14 + 0x3d8) != *(int *)(param_1 + 0x1c)) {
                      uVar16 = FUN_006a9d50();
                      cVar12 = FUN_0044b300(uVar16);
                      if (cVar12 == '\0') goto LAB_00685a78;
                    }
                    local_7c = 0;
                    piVar2 = *(int **)(*(int *)(iVar14 + 0x1c2) + 4);
                    while (piVar2 != (int *)0x0) {
                      piVar22 = (int *)piVar2[2];
                      piVar4 = (int *)*piVar2;
                      cVar12 = (**(code **)(*piVar4 + 0x28))();
                      piVar2 = piVar22;
                      if (((cVar12 != '\0') && (piVar4[0x99] == 5)) &&
                         (cVar12 = FUN_006813e0(piVar4[3]), cVar12 != '\0')) {
                        local_7c = (**(code **)(*(int *)((int)piVar4 + 0x22) + 4))();
                      }
                    }
                    iVar17 = *(int *)(iVar14 + 0x12);
                    iVar18 = *(int *)(param_1 + 4);
                    do {
                      if (iVar18 == 0) goto LAB_00685908;
                      puVar15 = (undefined4 *)FUN_0068a980(auStack_54,0);
                    } while (*(int *)(*(int *)*puVar15 + 4) != iVar17);
                    if (*(int *)*puVar15 != 0) {
                      FUN_00527b40();
                    }
LAB_00685908:
                    iVar17 = __ftol();
                    piVar2 = *(int **)(*(int *)(iVar14 + 0x1c2) + 4);
                    while ((piVar2 != (int *)0x0 && (local_7c < iVar17))) {
                      piVar22 = (int *)piVar2[2];
                      piVar4 = (int *)*piVar2;
                      cVar12 = (**(code **)(*piVar4 + 0x28))();
                      piVar2 = piVar22;
                      if ((((cVar12 != '\0') &&
                           (((iVar18 = (**(code **)(piVar4[0x47] + 4))(), iVar18 == 0 &&
                             (cVar12 = (**(code **)(*(int *)((int)piVar4 + 0x22e) + 8))(),
                             cVar12 != '\0')) && (*(char *)((int)piVar4 + 0x17b) == '\0')))) &&
                          (*(int *)((int)piVar4 + 0x176) == 0)) &&
                         ((piVar4[0x92] == 0 ||
                          (iVar18 = *(int *)(piVar4[0x92] + 6), iVar19 = FUN_006a9d50(),
                          iVar18 == iVar19)))) {
                        iVar18 = (**(code **)(*(int *)((int)piVar4 + 0x22) + 4))();
                        if ((iVar18 + local_7c <= iVar17) &&
                           (iVar18 = (**(code **)(**(int **)(iVar14 + 0x1c2) + 4))(),
                           puVar15 = puStack_18, 1 < iVar18)) {
                          pvVar20 = operator_new(0xe);
                          local_4._0_1_ = 4;
                          if (pvVar20 == (void *)0x0) {
                            puStack_18 = (undefined4 *)0x0;
                          }
                          else {
                            puStack_18 = (undefined4 *)FUN_0045bab0(piVar4,puVar15,0);
                          }
                          local_4 = CONCAT31(local_4._1_3_,3);
                          puVar7 = puStack_18;
                          if (iStack_14 != 0) {
                            puVar15[2] = puStack_18;
                            puVar7 = puStack_1c;
                          }
                          puStack_1c = puVar7;
                          iStack_14 = iStack_14 + 1;
                          iVar18 = (**(code **)(*(int *)((int)piVar4 + 0x22) + 4))();
                          local_7c = local_7c + iVar18;
                        }
                      }
                    }
                  }
                }
LAB_00685a78:
                iStack_5c = iStack_5c + 1;
                iStack_70 = iStack_70 + 0xc;
              } while (iStack_5c < *(int *)(iVar13 + 0x290));
            }
            ppuStack_34 = &PTR_LAB_007e378c;
            uStack_30 = 0;
            uStack_2c = 0;
            uStack_28 = 0;
            uStack_24 = 0;
            local_4 = CONCAT31(local_4._1_3_,5);
            iVar14 = iVar13;
            fVar24 = (float10)FUN_006afaf0(0);
            fVar26 = (float)fVar24;
            fVar24 = (float10)FUN_006afdb0(0);
            fVar24 = (float10)FUN_00689210((float)fVar24,fVar26,iVar14);
            puVar15 = puStack_1c;
            while (((fVar26 = (float)fVar24, puVar15 != (undefined4 *)0x0 &&
                    (fVar26 < *(float *)(iVar1 + 0x96c))) && (0 < iStack_14))) {
              iVar14 = *(int *)(iVar3 + 0x4c);
              puVar7 = (undefined4 *)puVar15[2];
              uVar16 = *puVar15;
              pvVar20 = operator_new(0xe);
              local_4._0_1_ = 6;
              if (pvVar20 == (void *)0x0) {
                uVar21 = 0;
              }
              else {
                uVar21 = FUN_0045bab0(uVar16,iVar14,0);
              }
              iVar17 = *(int *)(iVar3 + 0x50);
              local_4 = CONCAT31(local_4._1_3_,5);
              *(undefined4 *)(iVar3 + 0x4c) = uVar21;
              *(int *)(iVar3 + 0x50) = iVar17 + 1;
              if (iVar17 == 0) {
                *(undefined4 *)(iVar3 + 0x48) = uVar21;
              }
              else {
                *(undefined4 *)(iVar14 + 8) = uVar21;
              }
              uStack_50 = uStack_50 & 0xff000000;
              FUN_0050b600(uVar16,5,*(undefined4 *)(iVar13 + 0x12),0x3f800000,1,1,
                           *(undefined4 *)(DAT_00893530 + 0x14),*(undefined2 *)(DAT_00893530 + 0x18)
                           ,uStack_50,0,1,0xffffffff,0,1,0,0xbf800000,1);
              iVar14 = iVar13;
              fVar24 = (float10)FUN_006afaf0(0);
              fVar26 = (float)fVar24;
              fVar24 = (float10)FUN_006afdb0(0);
              fVar24 = (float10)FUN_00689210((float)fVar24,fVar26,iVar14);
              puVar15 = puVar7;
            }
            iVar13 = *(int *)(iVar13 + 0x19e);
            fVar24 = (float10)FUN_00468560();
            fVar25 = (float)((float10)iVar13 * (float10)_DAT_007e40b8 +
                             fVar24 * (float10)_DAT_007e4090 + (float10)_DAT_007f3ab0);
            if (fVar25 <= fVar26) {
LAB_00685c72:
              bVar23 = true;
            }
            else {
              fVar24 = (float10)FUN_005277e0();
              bVar23 = false;
              if (fVar24 <= (float10)_DAT_007e3848) goto LAB_00685c72;
            }
            if (fVar26 < fVar25 * _DAT_007e34c0) {
              fVar24 = (float10)FUN_005277e0();
              bVar10 = false;
              if (fVar24 <= (float10)_DAT_007e3834) goto LAB_00685ca6;
            }
            else {
LAB_00685ca6:
              bVar10 = true;
            }
            if (*(char *)(iVar3 + 0x40) != '\0') {
              iVar13 = (**(code **)(*(int *)(iVar3 + 0x58) + 4))();
              bVar23 = iVar13 != 0;
              for (piVar2 = *(int **)(iVar3 + 0x5c); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]
                  ) {
                FUN_004e9370(*(undefined4 *)(*piVar2 + 4));
                cVar12 = FUN_004e46e0();
                if (cVar12 == '\0') {
                  bVar23 = false;
                }
                else {
                  iVar13 = FUN_004e9370(*(undefined4 *)(*piVar2 + 4));
                  cVar12 = FUN_004e46e0();
                  if (cVar12 != '\0') {
                    local_44 = (undefined4 *)0x0;
                    local_40 = (undefined4 *)0x0;
                    local_3c = 0;
                    local_38 = 0;
                    local_48 = &PTR_LAB_007e378c;
                    local_4._0_1_ = 7;
                    piVar22 = *(int **)(*(int *)(iVar13 + 0x1aa) + 4);
                    while (piVar22 != (int *)0x0) {
                      piVar4 = (int *)piVar22[2];
                      iVar13 = (**(code **)(**(int **)(*piVar22 + 0x80) + 0xc))();
                      piVar9 = *(int **)(iVar13 + 4);
joined_r0x00685d6d:
                      piVar22 = piVar4;
                      if (piVar9 != (int *)0x0) {
                        piVar22 = (int *)piVar9[2];
                        piVar6 = (int *)*piVar9;
                        piVar9 = piVar22;
                        if ((((*(char *)((int)piVar6 + 0x17b) == '\0') &&
                             (cVar12 = (**(code **)(*piVar6 + 0x28))(), cVar12 != '\0')) &&
                            (iVar13 = (**(code **)(piVar6[0x47] + 4))(), iVar13 != 0)) &&
                           (*(char *)((int)piVar6 + 0x17d) == '\0')) {
                          iVar13 = piVar6[0x92];
                          if ((iVar13 != 0) &&
                             ((iVar14 = *(int *)(*(int *)(param_1 + 0x1c) + 6),
                              *(int *)(iVar13 + 6) == iVar14 ||
                              (*(char *)(iVar13 + 0x34ac + iVar14) == '\0')))) {
                            local_74 = 0.0;
                            piVar22 = *(int **)((int)piVar6 + 0x26);
                            while (piVar22 != (int *)0x0) {
                              piVar8 = (int *)piVar22[2];
                              fVar26 = *(float *)(*piVar22 + 0xf4);
                              fVar24 = (float10)FUN_004fd510();
                              local_74 = (float)((float10)fVar26 / fVar24 + (float10)local_74);
                              piVar22 = piVar8;
                            }
                            iVar13 = (**(code **)(*(int *)((int)piVar6 + 0x22) + 4))();
                            if (iVar13 != 0) {
                              iVar13 = (**(code **)(*(int *)((int)piVar6 + 0x22) + 4))();
                              local_74 = local_74 / (float)iVar13;
                            }
                            if (local_74 < _DAT_007e6868) {
                              FUN_0051bbd0();
                              goto joined_r0x00685d6d;
                            }
                          }
                          iVar13 = *piVar2;
                          iVar14 = *(int *)(iVar13 + 0x76);
                          piVar22 = operator_new(0xe);
                          if (piVar22 == (int *)0x0) {
                            piVar22 = (int *)0x0;
                          }
                          else {
                            *piVar22 = (int)piVar6;
                            piVar22[1] = iVar14;
                            piVar22[2] = 0;
                            *(undefined1 *)(piVar22 + 3) = 0;
                          }
                          iVar17 = *(int *)(iVar13 + 0x7a);
                          *(int **)(iVar13 + 0x76) = piVar22;
                          *(int *)(iVar13 + 0x7a) = iVar17 + 1;
                          if (iVar17 == 0) {
                            *(int **)(iVar13 + 0x72) = piVar22;
                          }
                          else {
                            *(int **)(iVar14 + 8) = piVar22;
                          }
                        }
                        goto joined_r0x00685d6d;
                      }
                    }
                    local_4 = CONCAT31(local_4._1_3_,5);
                    local_48 = &PTR_LAB_007e378c;
                    local_44 = (undefined4 *)0x0;
                    local_40 = (undefined4 *)0x0;
                    local_3c = 0;
                  }
                  uVar16 = FUN_004e9370(*(undefined4 *)(*piVar2 + 4));
                  fVar24 = (float10)FUN_006afaf0(1);
                  fVar26 = (float)fVar24;
                  fVar24 = (float10)FUN_006afdb0(1);
                  fVar24 = (float10)FUN_00689210((float)fVar24,fVar26,uVar16);
                  bVar23 = (float10)_DAT_007e8420 < fVar24;
                  iVar13 = *piVar2;
                  iVar14 = *(int *)(iVar13 + 0x76);
                  if (iVar14 != 0) {
                    if (*(char *)(iVar13 + 0x7e) == '\0') {
                      iVar17 = *(int *)(iVar14 + 4);
                      *(int *)(iVar13 + 0x76) = iVar17;
                      if (iVar17 == 0) {
                        *(undefined4 *)(iVar13 + 0x72) = 0;
                      }
                      else {
                        *(undefined4 *)(iVar17 + 8) = 0;
                      }
                      FUN_00796cd8(iVar14);
                      *(int *)(iVar13 + 0x7a) = *(int *)(iVar13 + 0x7a) + -1;
                    }
                    else {
                      *(undefined1 *)(iVar14 + 0xc) = 1;
                    }
                  }
                }
              }
            }
            piVar2 = *(int **)(iVar3 + 0x48);
joined_r0x00685f76:
            if (piVar2 != (int *)0x0) {
              piVar22 = (int *)piVar2[2];
              piVar4 = (int *)*piVar2;
              iVar13 = (**(code **)(piVar4[0x47] + 4))();
              piVar2 = piVar22;
              if ((iVar13 != 0) &&
                 (((iVar13 = piVar4[0x92], iVar13 == 0 ||
                   (iVar14 = *(int *)(*(int *)(param_1 + 0x1c) + 6), *(int *)(iVar13 + 6) == iVar14)
                   ) || (*(char *)(iVar13 + 0x34ac + iVar14) != '\0')))) {
                if (bVar10) {
                  piVar22 = (int *)piVar4[0x48];
                  do {
                    if (piVar22 == (int *)0x0) goto LAB_00686010;
                    piVar9 = (int *)piVar22[2];
                    piVar22 = (int *)(**(code **)(**(int **)(*piVar22 + 0x80) + 0xc))();
                    cVar12 = (**(code **)(*piVar22 + 0x24))(piVar4);
                    piVar22 = piVar9;
                  } while (cVar12 == '\0');
                  FUN_0051bbd0();
                }
LAB_00686010:
                if ((bVar23) && (iVar13 = (**(code **)(*piVar4 + 0x40))(1), 0 < iVar13)) {
                  piVar22 = (int *)piVar4[0x48];
                  do {
                    if (piVar22 == (int *)0x0) goto joined_r0x00685f76;
                    piVar9 = (int *)piVar22[2];
                    iVar14 = *piVar22;
                    piVar22 = (int *)(**(code **)(**(int **)(iVar14 + 0x84) + 0xc))();
                    cVar12 = (**(code **)(*piVar22 + 0x24))(piVar4);
                    piVar22 = piVar9;
                  } while (cVar12 == '\0');
                  (**(code **)(*piVar4 + 0x10))();
                  uVar16 = (**(code **)(*piVar4 + 0x10))();
                  FUN_0050bca0(uVar16);
                  (**(code **)(**(int **)(iVar14 + 0x84) + 0x48))(piVar4,iVar13);
                }
              }
              goto joined_r0x00685f76;
            }
            ppuStack_34 = &PTR_LAB_007e378c;
            uStack_30 = 0;
            uStack_2c = 0;
            uStack_28 = 0;
            local_4 = 0xffffffff;
            FUN_00527230();
          }
          (**(code **)(*(int *)(iVar3 + 0x6e) + 0x10))();
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


