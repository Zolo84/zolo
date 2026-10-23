// FUN_004bf2a0 @ 4bf2a0 size=3395

undefined4 * __fastcall FUN_004bf2a0(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  char *pcVar20;
  char *pcVar21;
  char acStack_450 [256];
  int aiStack_350 [37];
  int aiStack_2bc [37];
  int aiStack_228 [37];
  int aiStack_194 [37];
  char acStack_100 [256];
  
  if (DAT_00dc191a == '\0') {
    return (undefined4 *)0x0;
  }
  DAT_008e4324._0_1_ = 0;
  bVar2 = false;
  bVar4 = false;
  bVar3 = true;
  bVar7 = false;
  piVar17 = *(int **)(*(int *)(param_1 + 0x84) + 0x2c);
  do {
    if (piVar17 == (int *)0x0) {
      piVar17 = *(int **)(*(int *)(param_1 + 0x80) + 0x2c);
      goto joined_r0x004bf31c;
    }
    piVar19 = (int *)piVar17[2];
    iVar9 = *piVar17;
    piVar17 = piVar19;
  } while (((&DAT_0089cad8)[iVar9] == 0) ||
          ((cVar8 = FUN_00444290(), cVar8 == '\0' && (cVar8 = FUN_00444270(), cVar8 == '\0'))));
  goto LAB_004bf40a;
  while ((piVar19 = (int *)piVar17[2], iVar9 = *piVar17, piVar17 = piVar19,
         (&DAT_0089cad8)[iVar9] == 0 ||
         ((cVar8 = FUN_00444290(), cVar8 == '\0' && (cVar8 = FUN_00444270(), cVar8 == '\0'))))) {
joined_r0x004bf31c:
    if (piVar17 == (int *)0x0) {
      bVar6 = true;
      puVar10 = *(undefined4 **)(*(int *)(param_1 + 0x80) + 0x2c);
      goto joined_r0x004bf35a;
    }
  }
  bVar6 = true;
  goto LAB_004bf40f;
  while (puVar10 = puVar1, puVar1 != (undefined4 *)0x0) {
LAB_004bf384:
    puVar1 = (undefined4 *)puVar10[2];
    cVar8 = FUN_0044a690(*puVar10);
    if (cVar8 != '\0') goto LAB_004bf3a8;
  }
  goto LAB_004bf3ad;
  while( true ) {
    puVar1 = (undefined4 *)puVar10[2];
    cVar8 = FUN_0044b280(*puVar10);
    puVar10 = puVar1;
    if (cVar8 != '\0') break;
joined_r0x004bf35a:
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = *(undefined4 **)(*(int *)(param_1 + 0x84) + 0x2c);
      if (puVar10 == (undefined4 *)0x0) goto LAB_004bf3ad;
      goto LAB_004bf384;
    }
  }
LAB_004bf3a8:
  bVar6 = false;
LAB_004bf3ad:
  if ((((*(int *)(param_1 + 0x74) == 6) &&
       (iVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 0x28) + 4))(), iVar9 == 0)) &&
      (*(int *)(*(int *)(param_1 + 0x78) + 0x3d8) != 0)) &&
     (((cVar8 = FUN_00444290(), cVar8 != '\0' || (cVar8 = FUN_00444270(), cVar8 != '\0')) ||
      (cVar8 = FUN_0044a690(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x78) + 0x3d8) + 6)),
      cVar8 != '\0')))) {
LAB_004bf40a:
    bVar6 = false;
LAB_004bf40f:
    bVar2 = true;
    bVar7 = true;
  }
  iVar9 = *(int *)(*DAT_00d12b40 + 0x412);
  if (iVar9 != 0) {
    if (iVar9 == 1) {
      puVar10 = *(undefined4 **)(param_1 + 0xa2);
      piVar17 = aiStack_194;
      for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar17 = 0;
        piVar17 = piVar17 + 1;
      }
      piVar17 = aiStack_228;
      for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar17 = 0;
        piVar17 = piVar17 + 1;
      }
      piVar17 = aiStack_2bc;
      for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar17 = 0;
        piVar17 = piVar17 + 1;
      }
      piVar17 = aiStack_350;
      for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar17 = 0;
        piVar17 = piVar17 + 1;
      }
      bVar3 = false;
      if (puVar10 != (undefined4 *)0x0) {
        iVar9 = *(int *)(DAT_00d0ca90 + 6);
        do {
          puVar1 = (undefined4 *)puVar10[2];
          piVar17 = (int *)*puVar10;
          if (iVar9 == *piVar17) {
            bVar3 = true;
            piVar18 = aiStack_2bc;
            piVar19 = piVar17;
            for (iVar15 = 0x25; piVar19 = piVar19 + 1, iVar15 != 0; iVar15 = iVar15 + -1) {
              *piVar18 = *piVar19;
              piVar18 = piVar18 + 1;
            }
            piVar17 = piVar17 + 0x26;
            piVar19 = aiStack_350;
            for (iVar15 = 0x25; iVar15 != 0; iVar15 = iVar15 + -1) {
              *piVar19 = *piVar17;
              piVar17 = piVar17 + 1;
              piVar19 = piVar19 + 1;
            }
          }
          else if (*piVar17 == 0xa4) {
            piVar18 = aiStack_194;
            piVar19 = piVar17;
            for (iVar15 = 0x25; piVar19 = piVar19 + 1, iVar15 != 0; iVar15 = iVar15 + -1) {
              *piVar18 = *piVar19;
              piVar18 = piVar18 + 1;
            }
            piVar17 = piVar17 + 0x26;
            piVar19 = aiStack_228;
            for (iVar15 = 0x25; iVar15 != 0; iVar15 = iVar15 + -1) {
              *piVar19 = *piVar17;
              piVar17 = piVar17 + 1;
              piVar19 = piVar19 + 1;
            }
          }
          puVar10 = puVar1;
        } while (puVar1 != (undefined4 *)0x0);
        bVar4 = false;
        bVar5 = false;
        if (bVar3) {
          bVar4 = true;
          bVar5 = true;
          iVar9 = 0;
          do {
            if (bVar6) {
              if (*(int *)((int)aiStack_350 + iVar9) != *(int *)((int)aiStack_228 + iVar9)) {
                bVar5 = false;
              }
              if (*(int *)((int)aiStack_2bc + iVar9) != *(int *)((int)aiStack_194 + iVar9)) {
LAB_004bf71e:
                bVar4 = false;
              }
            }
            else {
              if (*(int *)((int)aiStack_350 + iVar9) != *(int *)((int)aiStack_194 + iVar9)) {
                bVar5 = false;
              }
              if (*(int *)((int)aiStack_2bc + iVar9) != *(int *)((int)aiStack_228 + iVar9))
              goto LAB_004bf71e;
            }
            iVar9 = iVar9 + 4;
          } while (iVar9 < 0x94);
        }
        if ((!bVar2) || (bVar6)) {
          uVar12 = FUN_0042b6c9(s_COMBAT_ATTACKER_0083f50c);
          uVar13 = FUN_0042b6c9(s_COMBAT_LOSSES_INFLICTED_STYLE_1_0083f554);
          FUN_007a630a(acStack_100,s__s__s_0083f54c,uVar13,uVar12);
          bVar2 = false;
          iVar9 = 0;
          do {
            iVar15 = aiStack_194[iVar9];
            if (0 < iVar15) {
              if (bVar4) {
                uVar12 = FUN_00506030(iVar9,aiStack_2bc[iVar9]);
                pcVar11 = &DAT_0083f53c;
LAB_004bf925:
                FUN_007a630a(acStack_450,pcVar11,uVar12);
              }
              else {
                if ((!bVar3) || (aiStack_2bc[iVar9] < 1)) {
                  uVar12 = FUN_00506030(iVar9,iVar15);
                  pcVar11 = s__s____d_0083f51c;
                  goto LAB_004bf925;
                }
                uVar12 = FUN_00506030(iVar9,iVar15,aiStack_2bc[iVar9]);
                FUN_007a630a(acStack_450,&DAT_0083f528,uVar12);
              }
              if (!bVar2) {
                uVar14 = 0xffffffff;
                bVar2 = true;
                pcVar11 = acStack_100;
                do {
                  pcVar21 = pcVar11;
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  pcVar21 = pcVar11 + 1;
                  cVar8 = *pcVar11;
                  pcVar11 = pcVar21;
                } while (cVar8 != '\0');
                uVar14 = ~uVar14;
                iVar15 = -1;
                pcVar11 = (char *)&DAT_008e4324;
                do {
                  pcVar20 = pcVar11;
                  if (iVar15 == 0) break;
                  iVar15 = iVar15 + -1;
                  pcVar20 = pcVar11 + 1;
                  cVar8 = *pcVar11;
                  pcVar11 = pcVar20;
                } while (cVar8 != '\0');
                pcVar11 = pcVar21 + -uVar14;
                pcVar21 = pcVar20 + -1;
                for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
                  pcVar11 = pcVar11 + 4;
                  pcVar21 = pcVar21 + 4;
                }
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *pcVar21 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  pcVar21 = pcVar21 + 1;
                }
              }
              uVar14 = 0xffffffff;
              pcVar11 = acStack_450;
              do {
                pcVar21 = pcVar11;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                pcVar21 = pcVar11 + 1;
                cVar8 = *pcVar11;
                pcVar11 = pcVar21;
              } while (cVar8 != '\0');
              uVar14 = ~uVar14;
              iVar15 = -1;
              pcVar11 = (char *)&DAT_008e4324;
              do {
                pcVar20 = pcVar11;
                if (iVar15 == 0) break;
                iVar15 = iVar15 + -1;
                pcVar20 = pcVar11 + 1;
                cVar8 = *pcVar11;
                pcVar11 = pcVar20;
              } while (cVar8 != '\0');
              pcVar11 = pcVar21 + -uVar14;
              pcVar21 = pcVar20 + -1;
              for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *pcVar21 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar21 = pcVar21 + 1;
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < 0x25);
        }
        else {
          uVar12 = FUN_0042b6c9(s_COMBAT_DEFENDER_0083f574);
          uVar13 = FUN_0042b6c9(s_COMBAT_LOSSES_INFLICTED_STYLE_1_0083f554);
          FUN_007a630a(acStack_100,s__s__s_0083f54c,uVar13,uVar12);
          bVar2 = false;
          iVar9 = 0;
          do {
            iVar15 = aiStack_228[iVar9];
            if (0 < iVar15) {
              if (bVar4) {
                uVar12 = FUN_00506030(iVar9,aiStack_2bc[iVar9]);
                pcVar11 = &DAT_0083f53c;
LAB_004bf7f7:
                FUN_007a630a(acStack_450,pcVar11,uVar12);
              }
              else {
                if ((!bVar3) || (aiStack_2bc[iVar9] < 1)) {
                  uVar12 = FUN_00506030(iVar9,iVar15);
                  pcVar11 = s__s____d_0083f51c;
                  goto LAB_004bf7f7;
                }
                uVar12 = FUN_00506030(iVar9,iVar15,aiStack_2bc[iVar9]);
                FUN_007a630a(acStack_450,&DAT_0083f528,uVar12);
              }
              if (!bVar2) {
                uVar14 = 0xffffffff;
                bVar2 = true;
                pcVar11 = acStack_100;
                do {
                  pcVar21 = pcVar11;
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  pcVar21 = pcVar11 + 1;
                  cVar8 = *pcVar11;
                  pcVar11 = pcVar21;
                } while (cVar8 != '\0');
                uVar14 = ~uVar14;
                iVar15 = -1;
                pcVar11 = (char *)&DAT_008e4324;
                do {
                  pcVar20 = pcVar11;
                  if (iVar15 == 0) break;
                  iVar15 = iVar15 + -1;
                  pcVar20 = pcVar11 + 1;
                  cVar8 = *pcVar11;
                  pcVar11 = pcVar20;
                } while (cVar8 != '\0');
                pcVar11 = pcVar21 + -uVar14;
                pcVar21 = pcVar20 + -1;
                for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
                  pcVar11 = pcVar11 + 4;
                  pcVar21 = pcVar21 + 4;
                }
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *pcVar21 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  pcVar21 = pcVar21 + 1;
                }
              }
              uVar14 = 0xffffffff;
              pcVar11 = acStack_450;
              do {
                pcVar21 = pcVar11;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                pcVar21 = pcVar11 + 1;
                cVar8 = *pcVar11;
                pcVar11 = pcVar21;
              } while (cVar8 != '\0');
              uVar14 = ~uVar14;
              iVar15 = -1;
              pcVar11 = (char *)&DAT_008e4324;
              do {
                pcVar20 = pcVar11;
                if (iVar15 == 0) break;
                iVar15 = iVar15 + -1;
                pcVar20 = pcVar11 + 1;
                cVar8 = *pcVar11;
                pcVar11 = pcVar20;
              } while (cVar8 != '\0');
              pcVar11 = pcVar21 + -uVar14;
              pcVar21 = pcVar20 + -1;
              for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *pcVar21 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar21 = pcVar21 + 1;
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < 0x25);
        }
        if ((!bVar7) || (bVar6)) {
          uVar12 = FUN_0042b6c9(s_COMBAT_ATTACKER_0083f50c);
          uVar13 = FUN_0042b6c9(s_COMBAT_LOSSES_TAKEN_STYLE_1_0083f4f0);
          FUN_007a630a(acStack_100,s__s__s_0083f54c,uVar13,uVar12);
          bVar2 = false;
          iVar9 = 0;
          do {
            iVar15 = aiStack_228[iVar9];
            if (0 < iVar15) {
              if (bVar5) {
                uVar12 = FUN_00506030(iVar9,aiStack_350[iVar9]);
                pcVar11 = &DAT_0083f4e0;
LAB_004bfb9f:
                FUN_007a630a(acStack_450,pcVar11,uVar12);
              }
              else {
                if ((!bVar3) || (aiStack_350[iVar9] < 1)) {
                  uVar12 = FUN_00506030(iVar9,iVar15);
                  pcVar11 = s__s____d_0083f51c;
                  goto LAB_004bfb9f;
                }
                uVar12 = FUN_00506030(iVar9,iVar15,aiStack_350[iVar9]);
                FUN_007a630a(acStack_450,&DAT_0083f4cc,uVar12);
              }
              if (!bVar2) {
                uVar14 = 0xffffffff;
                bVar2 = true;
                pcVar11 = acStack_100;
                do {
                  pcVar21 = pcVar11;
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  pcVar21 = pcVar11 + 1;
                  cVar8 = *pcVar11;
                  pcVar11 = pcVar21;
                } while (cVar8 != '\0');
                uVar14 = ~uVar14;
                iVar15 = -1;
                pcVar11 = (char *)&DAT_008e4324;
                do {
                  pcVar20 = pcVar11;
                  if (iVar15 == 0) break;
                  iVar15 = iVar15 + -1;
                  pcVar20 = pcVar11 + 1;
                  cVar8 = *pcVar11;
                  pcVar11 = pcVar20;
                } while (cVar8 != '\0');
                pcVar11 = pcVar21 + -uVar14;
                pcVar21 = pcVar20 + -1;
                for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
                  pcVar11 = pcVar11 + 4;
                  pcVar21 = pcVar21 + 4;
                }
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *pcVar21 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  pcVar21 = pcVar21 + 1;
                }
              }
              uVar14 = 0xffffffff;
              pcVar11 = acStack_450;
              do {
                pcVar21 = pcVar11;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                pcVar21 = pcVar11 + 1;
                cVar8 = *pcVar11;
                pcVar11 = pcVar21;
              } while (cVar8 != '\0');
              uVar14 = ~uVar14;
              iVar15 = -1;
              pcVar11 = (char *)&DAT_008e4324;
              do {
                pcVar20 = pcVar11;
                if (iVar15 == 0) break;
                iVar15 = iVar15 + -1;
                pcVar20 = pcVar11 + 1;
                cVar8 = *pcVar11;
                pcVar11 = pcVar20;
              } while (cVar8 != '\0');
              pcVar11 = pcVar21 + -uVar14;
              pcVar21 = pcVar20 + -1;
              for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *pcVar21 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar21 = pcVar21 + 1;
              }
            }
            iVar9 = iVar9 + 1;
            if (0x24 < iVar9) {
              return &DAT_008e4324;
            }
          } while( true );
        }
        uVar12 = FUN_0042b6c9(s_COMBAT_DEFENDER_0083f574);
        uVar13 = FUN_0042b6c9(s_COMBAT_LOSSES_TAKEN_STYLE_1_0083f4f0);
        FUN_007a630a(acStack_100,s__s__s_0083f54c,uVar13,uVar12);
        bVar2 = false;
        iVar9 = 0;
        do {
          iVar15 = aiStack_194[iVar9];
          if (0 < iVar15) {
            if (bVar5) {
              uVar12 = FUN_00506030(iVar9,aiStack_350[iVar9]);
              pcVar11 = &DAT_0083f4e0;
LAB_004bfa66:
              FUN_007a630a(acStack_450,pcVar11,uVar12);
            }
            else {
              if ((!bVar3) || (aiStack_350[iVar9] < 1)) {
                uVar12 = FUN_00506030(iVar9,iVar15);
                pcVar11 = s__s____d_0083f51c;
                goto LAB_004bfa66;
              }
              uVar12 = FUN_00506030(iVar9,iVar15,aiStack_350[iVar9]);
              FUN_007a630a(acStack_450,&DAT_0083f4cc,uVar12);
            }
            if (!bVar2) {
              uVar14 = 0xffffffff;
              bVar2 = true;
              pcVar11 = acStack_100;
              do {
                pcVar21 = pcVar11;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                pcVar21 = pcVar11 + 1;
                cVar8 = *pcVar11;
                pcVar11 = pcVar21;
              } while (cVar8 != '\0');
              uVar14 = ~uVar14;
              iVar15 = -1;
              pcVar11 = (char *)&DAT_008e4324;
              do {
                pcVar20 = pcVar11;
                if (iVar15 == 0) break;
                iVar15 = iVar15 + -1;
                pcVar20 = pcVar11 + 1;
                cVar8 = *pcVar11;
                pcVar11 = pcVar20;
              } while (cVar8 != '\0');
              pcVar11 = pcVar21 + -uVar14;
              pcVar21 = pcVar20 + -1;
              for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *pcVar21 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar21 = pcVar21 + 1;
              }
            }
            uVar14 = 0xffffffff;
            pcVar11 = acStack_450;
            do {
              pcVar21 = pcVar11;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar21 = pcVar11 + 1;
              cVar8 = *pcVar11;
              pcVar11 = pcVar21;
            } while (cVar8 != '\0');
            uVar14 = ~uVar14;
            iVar15 = -1;
            pcVar11 = (char *)&DAT_008e4324;
            do {
              pcVar20 = pcVar11;
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              pcVar20 = pcVar11 + 1;
              cVar8 = *pcVar11;
              pcVar11 = pcVar20;
            } while (cVar8 != '\0');
            pcVar11 = pcVar21 + -uVar14;
            pcVar21 = pcVar20 + -1;
            for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar21 = pcVar21 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar21 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar21 = pcVar21 + 1;
            }
          }
          iVar9 = iVar9 + 1;
          if (0x24 < iVar9) {
            return &DAT_008e4324;
          }
        } while( true );
      }
    }
    else if ((iVar9 == 2) &&
            (puVar10 = *(undefined4 **)(param_1 + 0xa2),
            *(undefined4 **)(param_1 + 0xa2) != (undefined4 *)0x0)) {
      do {
        puVar1 = (undefined4 *)puVar10[2];
        piVar17 = (int *)*puVar10;
        if (*piVar17 != 0xa4) {
          bVar2 = true;
          iVar9 = 0;
          piVar19 = piVar17;
          do {
            piVar18 = piVar19 + 1;
            if ((0 < *piVar18) || (0 < piVar19[0x26])) {
              if (bVar3) {
                pcVar11 = (char *)FUN_0042b6c9(s_COMBAT_LOSSES_HEADER_STYLE_2_0083f5c0);
                uVar14 = 0xffffffff;
                do {
                  pcVar21 = pcVar11;
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  pcVar21 = pcVar11 + 1;
                  cVar8 = *pcVar11;
                  pcVar11 = pcVar21;
                } while (cVar8 != '\0');
                uVar14 = ~uVar14;
                bVar3 = false;
                iVar15 = -1;
                pcVar11 = (char *)&DAT_008e4324;
                do {
                  pcVar20 = pcVar11;
                  if (iVar15 == 0) break;
                  iVar15 = iVar15 + -1;
                  pcVar20 = pcVar11 + 1;
                  cVar8 = *pcVar11;
                  pcVar11 = pcVar20;
                } while (cVar8 != '\0');
                pcVar11 = pcVar21 + -uVar14;
                pcVar21 = pcVar20 + -1;
                for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
                  pcVar11 = pcVar11 + 4;
                  pcVar21 = pcVar21 + 4;
                }
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *pcVar21 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  pcVar21 = pcVar21 + 1;
                }
LAB_004bf50d:
                if (bVar2) {
                  uVar12 = FUN_004af740(*piVar17);
                  FUN_007a630a(acStack_450,&DAT_0083f5a0,uVar12);
                  uVar14 = 0xffffffff;
                  pcVar11 = acStack_450;
                  do {
                    pcVar21 = pcVar11;
                    if (uVar14 == 0) break;
                    uVar14 = uVar14 - 1;
                    pcVar21 = pcVar11 + 1;
                    cVar8 = *pcVar11;
                    pcVar11 = pcVar21;
                  } while (cVar8 != '\0');
                  uVar14 = ~uVar14;
                  bVar2 = false;
                  iVar15 = -1;
                  pcVar11 = (char *)&DAT_008e4324;
                  do {
                    pcVar20 = pcVar11;
                    if (iVar15 == 0) break;
                    iVar15 = iVar15 + -1;
                    pcVar20 = pcVar11 + 1;
                    cVar8 = *pcVar11;
                    pcVar11 = pcVar20;
                  } while (cVar8 != '\0');
                  pcVar11 = pcVar21 + -uVar14;
                  pcVar21 = pcVar20 + -1;
                  for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
                    pcVar11 = pcVar11 + 4;
                    pcVar21 = pcVar21 + 4;
                  }
                  bVar4 = true;
                  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                    *pcVar21 = *pcVar11;
                    pcVar11 = pcVar11 + 1;
                    pcVar21 = pcVar21 + 1;
                  }
                }
              }
              else if (bVar2) {
                if (bVar4) {
                  uVar14 = 0xffffffff;
                  pcVar11 = s____________________________0083f5a4;
                  do {
                    pcVar21 = pcVar11;
                    if (uVar14 == 0) break;
                    uVar14 = uVar14 - 1;
                    pcVar21 = pcVar11 + 1;
                    cVar8 = *pcVar11;
                    pcVar11 = pcVar21;
                  } while (cVar8 != '\0');
                  uVar14 = ~uVar14;
                  bVar4 = false;
                  iVar15 = -1;
                  pcVar11 = (char *)&DAT_008e4324;
                  do {
                    pcVar20 = pcVar11;
                    if (iVar15 == 0) break;
                    iVar15 = iVar15 + -1;
                    pcVar20 = pcVar11 + 1;
                    cVar8 = *pcVar11;
                    pcVar11 = pcVar20;
                  } while (cVar8 != '\0');
                  pcVar11 = pcVar21 + -uVar14;
                  pcVar21 = pcVar20 + -1;
                  for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
                    pcVar11 = pcVar11 + 4;
                    pcVar21 = pcVar21 + 4;
                  }
                  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                    *pcVar21 = *pcVar11;
                    pcVar11 = pcVar11 + 1;
                    pcVar21 = pcVar21 + 1;
                  }
                }
                goto LAB_004bf50d;
              }
              uVar12 = FUN_00506030(iVar9,*piVar18,piVar19[0x26]);
              uVar13 = FUN_0042b6c9(s_COMBAT_LOSSES_TEXT_STYLE_2_0083f584);
              FUN_007a630a(acStack_450,uVar13,uVar12);
              uVar14 = 0xffffffff;
              pcVar11 = acStack_450;
              do {
                pcVar21 = pcVar11;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                pcVar21 = pcVar11 + 1;
                cVar8 = *pcVar11;
                pcVar11 = pcVar21;
              } while (cVar8 != '\0');
              uVar14 = ~uVar14;
              iVar15 = -1;
              pcVar11 = (char *)&DAT_008e4324;
              do {
                pcVar20 = pcVar11;
                if (iVar15 == 0) break;
                iVar15 = iVar15 + -1;
                pcVar20 = pcVar11 + 1;
                cVar8 = *pcVar11;
                pcVar11 = pcVar20;
              } while (cVar8 != '\0');
              pcVar11 = pcVar21 + -uVar14;
              pcVar21 = pcVar20 + -1;
              for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *pcVar21 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar21 = pcVar21 + 1;
              }
            }
            iVar9 = iVar9 + 1;
            piVar19 = piVar18;
          } while (iVar9 < 0x25);
        }
        puVar10 = puVar1;
        if (puVar1 == (undefined4 *)0x0) {
          return &DAT_008e4324;
        }
      } while( true );
    }
    goto LAB_004bffc9;
  }
  puVar10 = *(undefined4 **)(param_1 + 0xa2);
  piVar17 = aiStack_2bc;
  for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar17 = 0;
    piVar17 = piVar17 + 1;
  }
  piVar17 = aiStack_350;
  for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar17 = 0;
    piVar17 = piVar17 + 1;
  }
  piVar17 = aiStack_194;
  for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar17 = 0;
    piVar17 = piVar17 + 1;
  }
  bVar2 = false;
  piVar17 = aiStack_228;
  for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar17 = 0;
    piVar17 = piVar17 + 1;
  }
  if (puVar10 == (undefined4 *)0x0) goto LAB_004bffc9;
  iVar9 = *(int *)(DAT_00d0ca90 + 6);
  do {
    puVar1 = (undefined4 *)puVar10[2];
    piVar17 = (int *)*puVar10;
    if (iVar9 == *piVar17) {
      bVar2 = true;
      piVar18 = aiStack_194;
      piVar19 = piVar17;
      for (iVar15 = 0x25; piVar19 = piVar19 + 1, iVar15 != 0; iVar15 = iVar15 + -1) {
        *piVar18 = *piVar19;
        piVar18 = piVar18 + 1;
      }
      piVar17 = piVar17 + 0x26;
      piVar19 = aiStack_228;
      for (iVar15 = 0x25; iVar15 != 0; iVar15 = iVar15 + -1) {
        *piVar19 = *piVar17;
        piVar17 = piVar17 + 1;
        piVar19 = piVar19 + 1;
      }
    }
    else if (*piVar17 == 0xa4) {
      piVar18 = aiStack_2bc;
      piVar19 = piVar17;
      for (iVar15 = 0x25; piVar19 = piVar19 + 1, iVar15 != 0; iVar15 = iVar15 + -1) {
        *piVar18 = *piVar19;
        piVar18 = piVar18 + 1;
      }
      piVar17 = piVar17 + 0x26;
      piVar19 = aiStack_350;
      for (iVar15 = 0x25; iVar15 != 0; iVar15 = iVar15 + -1) {
        *piVar19 = *piVar17;
        piVar17 = piVar17 + 1;
        piVar19 = piVar19 + 1;
      }
    }
    puVar10 = puVar1;
  } while (puVar1 != (undefined4 *)0x0);
  pcVar11 = (char *)FUN_0042b6c9(s_COMBAT_LOSSES_HEADER_STYLE_0_0083f4ac);
  uVar14 = 0xffffffff;
  do {
    pcVar21 = pcVar11;
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    pcVar21 = pcVar11 + 1;
    cVar8 = *pcVar11;
    pcVar11 = pcVar21;
  } while (cVar8 != '\0');
  uVar14 = ~uVar14;
  iVar9 = -1;
  pcVar11 = (char *)&DAT_008e4324;
  do {
    pcVar20 = pcVar11;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar20 = pcVar11 + 1;
    cVar8 = *pcVar11;
    pcVar11 = pcVar20;
  } while (cVar8 != '\0');
  pcVar11 = pcVar21 + -uVar14;
  pcVar21 = pcVar20 + -1;
  for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *pcVar21 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar21 = pcVar21 + 1;
  }
  if (bVar2) {
    uVar12 = FUN_004af740(*(undefined4 *)(DAT_00d0ca90 + 6));
    FUN_007a630a(acStack_450,&DAT_0083f5a0,uVar12);
    uVar14 = 0xffffffff;
    pcVar11 = acStack_450;
    do {
      pcVar21 = pcVar11;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar21 = pcVar11 + 1;
      cVar8 = *pcVar11;
      pcVar11 = pcVar21;
    } while (cVar8 != '\0');
    uVar14 = ~uVar14;
    iVar9 = -1;
    pcVar11 = (char *)&DAT_008e4324;
    do {
      pcVar20 = pcVar11;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar20 = pcVar11 + 1;
      cVar8 = *pcVar11;
      pcVar11 = pcVar20;
    } while (cVar8 != '\0');
    pcVar11 = pcVar21 + -uVar14;
    pcVar21 = pcVar20 + -1;
    for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar21 = pcVar21 + 4;
    }
    iVar9 = 0;
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar21 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar21 = pcVar21 + 1;
    }
    do {
      if ((0 < aiStack_194[iVar9]) || (0 < aiStack_228[iVar9])) {
        uVar12 = FUN_00506030(iVar9,aiStack_194[iVar9],aiStack_228[iVar9]);
        uVar13 = FUN_0042b6c9(s_COMBAT_LOSSES_TEXT_STYLE_0_0083f490);
        FUN_007a630a(acStack_450,uVar13,uVar12);
        uVar14 = 0xffffffff;
        pcVar11 = acStack_450;
        do {
          pcVar21 = pcVar11;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar21 = pcVar11 + 1;
          cVar8 = *pcVar11;
          pcVar11 = pcVar21;
        } while (cVar8 != '\0');
        uVar14 = ~uVar14;
        iVar15 = -1;
        pcVar11 = (char *)&DAT_008e4324;
        do {
          pcVar20 = pcVar11;
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          pcVar20 = pcVar11 + 1;
          cVar8 = *pcVar11;
          pcVar11 = pcVar20;
        } while (cVar8 != '\0');
        pcVar11 = pcVar21 + -uVar14;
        pcVar21 = pcVar20 + -1;
        for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar21 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar21 = pcVar21 + 1;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x25);
    if (bVar6) {
      if ((aiStack_228[0] == aiStack_350[0]) && (aiStack_194[0] == aiStack_2bc[0])) {
        bVar3 = false;
      }
      else {
LAB_004bfe33:
        bVar3 = true;
      }
    }
    else {
      if ((aiStack_228[0] != aiStack_2bc[0]) || (aiStack_194[0] != aiStack_350[0]))
      goto LAB_004bfe33;
      bVar3 = false;
    }
    if (!bVar3) goto LAB_004bffc9;
    uVar14 = 0xffffffff;
    pcVar11 = s____________________________0083f5a4;
    do {
      pcVar21 = pcVar11;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar21 = pcVar11 + 1;
      cVar8 = *pcVar11;
      pcVar11 = pcVar21;
    } while (cVar8 != '\0');
    uVar14 = ~uVar14;
    iVar9 = -1;
    pcVar11 = (char *)&DAT_008e4324;
    do {
      pcVar20 = pcVar11;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar20 = pcVar11 + 1;
      cVar8 = *pcVar11;
      pcVar11 = pcVar20;
    } while (cVar8 != '\0');
    pcVar11 = pcVar21 + -uVar14;
    pcVar21 = pcVar20 + -1;
    for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar21 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar21 = pcVar21 + 1;
    }
    if (bVar6) goto LAB_004bff06;
LAB_004bfe72:
    uVar12 = FUN_0042b6c9(s_COMBAT_DEFENDER_0083f574);
    uVar13 = FUN_0042b6c9(s_COMBAT_ATTACKER_0083f50c);
  }
  else {
    if (!bVar6) goto LAB_004bfe72;
LAB_004bff06:
    uVar12 = FUN_0042b6c9(s_COMBAT_ATTACKER_0083f50c);
    uVar13 = FUN_0042b6c9(s_COMBAT_DEFENDER_0083f574);
  }
  FUN_007a630a(acStack_450,s__s____s_0083f484,uVar13,uVar12);
  uVar14 = 0xffffffff;
  pcVar11 = acStack_450;
  do {
    pcVar21 = pcVar11;
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    pcVar21 = pcVar11 + 1;
    cVar8 = *pcVar11;
    pcVar11 = pcVar21;
  } while (cVar8 != '\0');
  uVar14 = ~uVar14;
  iVar9 = -1;
  pcVar11 = (char *)&DAT_008e4324;
  do {
    pcVar20 = pcVar11;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar20 = pcVar11 + 1;
    cVar8 = *pcVar11;
    pcVar11 = pcVar20;
  } while (cVar8 != '\0');
  pcVar11 = pcVar21 + -uVar14;
  pcVar21 = pcVar20 + -1;
  for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar21 = pcVar21 + 4;
  }
  iVar9 = 0;
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *pcVar21 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar21 = pcVar21 + 1;
  }
  do {
    iVar15 = aiStack_2bc[iVar9];
    if ((0 < iVar15) || (0 < aiStack_350[iVar9])) {
      if (bVar2) {
        if (!bVar6) goto LAB_004bff63;
LAB_004bff39:
        uVar12 = FUN_00506030(iVar9,iVar15,aiStack_350[iVar9]);
        uVar13 = FUN_0042b6c9(s_COMBAT_LOSSES_TEXT_STYLE_0_0083f490);
      }
      else {
        if (bVar6) goto LAB_004bff39;
LAB_004bff63:
        uVar12 = FUN_00506030(iVar9,aiStack_350[iVar9],iVar15);
        uVar13 = FUN_0042b6c9(s_COMBAT_LOSSES_TEXT_STYLE_0_0083f490);
      }
      FUN_007a630a(acStack_450,uVar13,uVar12);
      uVar14 = 0xffffffff;
      pcVar11 = acStack_450;
      do {
        pcVar21 = pcVar11;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar21 = pcVar11 + 1;
        cVar8 = *pcVar11;
        pcVar11 = pcVar21;
      } while (cVar8 != '\0');
      uVar14 = ~uVar14;
      iVar15 = -1;
      pcVar11 = (char *)&DAT_008e4324;
      do {
        pcVar20 = pcVar11;
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        pcVar20 = pcVar11 + 1;
        cVar8 = *pcVar11;
        pcVar11 = pcVar20;
      } while (cVar8 != '\0');
      pcVar11 = pcVar21 + -uVar14;
      pcVar21 = pcVar20 + -1;
      for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar21 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar21 = pcVar21 + 1;
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x25);
LAB_004bffc9:
  return &DAT_008e4324;
}


