// FUN_004df7a0 @ 4df7a0 size=1622

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df7a0(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  byte bVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  short *psVar25;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_74;
  undefined *puStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_5c;
  int iStack_58;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_3c;
  int iStack_34;
  int iStack_30;
  int iStack_10;
  
  iVar9 = (**(code **)(*DAT_00a98460 + 8))();
  DAT_00a6b3c4 = 1;
  iStack_4c = 0;
  iStack_34 = 0;
  if (DAT_00a983f4 != 0) {
    iStack_4c = (**(code **)(**(int **)(DAT_00a983f4 + 0x62) + 8))();
    iStack_34 = *(int *)(*(int *)(DAT_00a983f4 + 0x62) + 0x18);
    iStack_3c = DAT_00a983f8 + 0x504;
    iStack_10 = DAT_00a983f8 + 0x904;
  }
  iVar18 = 0x20 << ((byte)DAT_00a98464 & 0x1f);
  if (0x74ff < param_1) {
    param_1 = param_1 + -0x7500;
  }
  iStack_50 = 0;
  iStack_80 = *(int *)((int)DAT_00a98460 + 0x24a);
  piVar16 = DAT_00a98460;
  if (DAT_00a9843c != DAT_00a98434 && -1 < DAT_00a9843c - DAT_00a98434) {
    do {
      iStack_74 = *(int *)((int)piVar16 + 0x246);
      iStack_58 = 0;
      if (0 < DAT_00a98438 - DAT_00a98430) {
        iStack_84 = param_1;
        iStack_7c = param_1;
        do {
          iStack_7c = iStack_7c + iVar18;
          iVar22 = DAT_00a9840c + (iStack_50 >> 5) * DAT_00a4ccd0;
          if (*(char *)((iStack_58 >> 5) + iVar22) != '\0') {
            *(undefined1 *)((iStack_58 >> 5) + iVar22) = 0;
            if ((param_2 < 0) || (0x2cff < param_2)) {
              iVar22 = DAT_00a98460[6];
              puVar13 = (undefined1 *)(**(code **)(*DAT_00a98460 + 4))(iStack_74,iStack_80);
              iVar10 = 0x20;
              do {
                iVar20 = 0x20;
                puVar17 = puVar13;
                do {
                  *puVar17 = DAT_00a44e34;
                  puVar17[1] = DAT_00a44e35;
                  puVar17 = puVar17 + 2;
                  iVar20 = iVar20 + -1;
                } while (iVar20 != 0);
                puVar13 = puVar13 + iVar22;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
              (**(code **)(*DAT_00a98460 + 0xc))();
            }
            else {
              if (0x74ff < iStack_84) {
                iStack_84 = iStack_84 + -0x7500;
                iStack_7c = iStack_7c + -0x7500;
              }
              iVar22 = iVar18 + param_2;
              if (iVar22 < 0x2d00) {
                FUN_004dafb0(iStack_7c,iVar22,DAT_00a98464);
                FUN_004db480(0,0,5);
                FUN_004dafb0(iStack_84,iVar22,DAT_00a98464);
                FUN_004db730(0,0,5);
              }
              else {
                iVar22 = 0;
                do {
                  iVar10 = iVar22 + 1;
                  PTR_DAT_00847864[iVar22] = 6;
                  PTR_DAT_00847868[iVar22] = 0;
                  iVar22 = iVar10;
                } while (iVar10 < 0x1000);
              }
              FUN_004dafb0(iStack_7c % 0x7500,param_2,DAT_00a98464);
              FUN_004db4a0(0,0,5);
              FUN_004dafb0(iStack_84,param_2,DAT_00a98464);
              _DAT_00a983c6 = DAT_00a98460[6] * iStack_80 + iVar9 + DAT_00a98460[3] * iStack_74;
              iVar22 = DAT_00a98460[6];
              _DAT_00a983ca = iVar22;
              FUN_004dc010(0,0,iStack_74,iStack_80,5);
              if (DAT_00a983f4 != 0) {
                iVar10 = DAT_00a98460[3];
                iVar20 = DAT_00a98460[6];
                sVar4 = FUN_00584270(0xf8,0xf4,0xd8);
                sVar5 = FUN_00584270(200,0,0);
                sVar6 = FUN_00584270(0x60,0,0);
                sVar7 = FUN_00584270(8,0,0);
                sVar8 = FUN_00584270(0x10,4,0);
                iVar11 = 1 << ((byte)DAT_00a98464 & 0x1f);
                iStack_68 = 0;
                uVar15 = DAT_00a98464;
                if (0 < iVar11) {
                  do {
                    iStack_64 = 0;
                    if (0 < iVar11) {
                      iVar11 = (param_2 >> 5) + iStack_68;
                      iStack_6c = iStack_84 >> 5;
                      iVar21 = iStack_6c * 0x2d00;
                      do {
                        iVar12 = iVar21;
                        if (0x3a7 < iStack_6c) {
                          iVar12 = iVar21 + -0xa48800;
                        }
                        iVar23 = iVar11;
                        if (0x167 < iVar11) {
                          iVar23 = 0x167;
                        }
                        uVar3 = *(uint *)(&DAT_008f00d4 +
                                         (((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) + iVar23)
                                         * 4);
                        iVar12 = *(int *)(*(int *)(DAT_00a983f4 + 0x62) + 0x18);
                        iVar24 = 0x20 >> ((byte)uVar15 & 0x1f);
                        iVar23 = iVar24 * iStack_68;
                        iStack_30 = 0;
                        if (0 < iVar24) {
                          iVar19 = iVar23 * iVar22;
                          iStack_5c = iStack_80 + iVar23;
                          puStack_70 = &DAT_00a9dcbc + iVar23 * 0x40;
                          do {
                            if (DAT_00a98460[2] <= iStack_5c) break;
                            iVar23 = iVar24 * iStack_64;
                            bVar14 = (byte)uVar15;
                            iStack_48 = 0;
                            if (0 < iVar24) {
                              psVar25 = (short *)(iVar20 * iStack_80 + iVar9 + iVar10 * iStack_74 +
                                                  (iVar19 / 2) * 2 + iVar23 * 2);
                              do {
                                bVar1 = *(byte *)((iStack_48 << ((byte)uVar15 & 0x1f)) +
                                                 (iStack_30 << (bVar14 & 0x1f)) * iStack_34 +
                                                 ((uVar3 >> 8) * iVar12 + (uVar3 & 0xff)) * 0x20 +
                                                 iStack_4c);
                                if ((((bVar1 != 0) && (sVar2 = *psVar25, sVar2 != sVar4)) &&
                                    (sVar2 != sVar5)) &&
                                   (((sVar2 != sVar6 && (sVar2 != sVar7)) && (sVar2 != sVar8)))) {
                                  iVar24 = iStack_3c;
                                  if (0x1f < (byte)puStack_70[iVar23]) {
                                    iVar24 = iStack_10;
                                  }
                                  *psVar25 = *(short *)(iVar24 + (uint)bVar1 * 4);
                                  uVar15 = DAT_00a98464;
                                }
                                iVar23 = iVar23 + 1;
                                psVar25 = psVar25 + 1;
                                iStack_48 = iStack_48 + 1;
                              } while (iStack_48 < 0x20 >> ((byte)uVar15 & 0x1f));
                            }
                            puStack_70 = puStack_70 + 0x40;
                            iVar19 = iVar19 + iVar22;
                            iStack_5c = iStack_5c + 1;
                            iVar24 = 0x20 >> ((byte)uVar15 & 0x1f);
                            iStack_30 = iStack_30 + 1;
                          } while (iStack_30 < iVar24);
                        }
                        iStack_64 = iStack_64 + 1;
                        iVar21 = iVar21 + 0x2d00;
                        iStack_6c = iStack_6c + 1;
                      } while (iStack_64 < 1 << ((byte)uVar15 & 0x1f));
                    }
                    iStack_68 = iStack_68 + 1;
                    iVar11 = 1 << ((byte)uVar15 & 0x1f);
                  } while (iStack_68 < iVar11);
                }
              }
            }
          }
          iStack_74 = iStack_74 + 0x20;
          iStack_84 = iStack_84 + iVar18;
          if (DAT_00a98460[1] <= iStack_74) {
            iStack_74 = iStack_74 - DAT_00a98460[1];
          }
          iStack_58 = iStack_58 + 0x20;
          piVar16 = DAT_00a98460;
        } while (iStack_58 < DAT_00a98438 - DAT_00a98430);
      }
      iStack_80 = iStack_80 + 0x20;
      param_2 = param_2 + iVar18;
      if (piVar16[2] <= iStack_80) {
        iStack_80 = iStack_80 - piVar16[2];
      }
      iStack_50 = iStack_50 + 0x20;
    } while (iStack_50 < DAT_00a9843c - DAT_00a98434);
  }
  (**(code **)(*piVar16 + 0xc))();
  return;
}


