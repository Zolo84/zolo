// FUN_00782090 @ 782090 size=24205

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00782090(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  int *piVar16;
  undefined4 uVar17;
  int *piVar18;
  double *pdVar19;
  int extraout_ECX;
  uint uVar20;
  uint uVar21;
  undefined **ppuVar22;
  int *piVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  float10 fVar27;
  int *piStack00000024;
  undefined *puStack00000028;
  undefined2 uStack0000003a;
  undefined2 uStack0000003c;
  undefined2 uStack00000042;
  undefined2 uStack00000044;
  undefined2 uStack0000004a;
  undefined2 uStack0000004c;
  float in_stack_00000074;
  float in_stack_00000078;
  int in_stack_0000007c;
  undefined2 in_stack_00000080;
  int in_stack_00000084;
  undefined2 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_000001d4;
  char in_stack_000001e8;
  void *in_stack_00002cf4;
  undefined8 uStackY_38;
  void *pvStack_14;
  int *piStack_10;
  int *piStack_c;
  int *piStack_8;
  
  piStack_c = (int *)0xffffffff;
  piStack_10 = (int *)&LAB_007e1017;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_007a69e0();
  iVar9 = (**(code **)(*param_1 + 8))();
  if (0x4d < iVar9) {
    if (iVar9 == 0x18e) {
      FUN_0078e060();
      FUN_0078e060();
      FUN_006aeaa0();
    }
    else if (iVar9 == 399) {
      FUN_0078e060();
      FUN_0078e060();
      FUN_006aeb10();
    }
    goto LAB_00787ed7;
  }
  if (iVar9 == 0x4d) {
    FUN_00781b90();
    if (*(char *)(*(int *)(extraout_ECX + 0x7226) + 0x2ce2) == '\0') {
      *(int *)(DAT_00d685a6 + 0x2d0a) = (int)*(short *)(extraout_ECX + 0xc);
      if (*(char *)(DAT_00d685a6 + 0x57c) == '\0') {
        FUN_0076e1d0();
      }
      else {
        piVar23 = &DAT_0089cad8;
        do {
          if ((*piVar23 != 0) &&
             (iVar9 = (**(code **)(*(int *)(*piVar23 + 0x117f4) + 4))(), iVar9 == 0)) {
            FUN_0076e2a0();
          }
          piVar23 = piVar23 + 1;
        } while ((int)piVar23 < 0x89d038);
      }
      FUN_0076c7c0();
      iVar9 = (**(code **)(*(int *)(extraout_ECX + 0x167de) + 4))();
      if (0 < iVar9) {
        piVar23 = *(int **)(extraout_ECX + 0x167e2);
        while (piVar23 != (int *)0x0) {
          piVar16 = (int *)piVar23[2];
          puVar12 = (undefined4 *)*piVar23;
          piVar23 = piVar16;
          if (((puVar12 == (undefined4 *)0x0) || (*(int *)((int)puVar12 + 0x62) != 0)) ||
             (*(int *)((int)puVar12 + 0x5e) != 0)) {
            (**(code **)(*(int *)(extraout_ECX + 0x167de) + 0x18))();
          }
          else {
            (**(code **)(*(int *)(extraout_ECX + 0x167de) + 0x18))();
            (**(code **)*puVar12)();
          }
        }
      }
      *(undefined4 *)(*DAT_00d12b40 + 0x3e2) = 0;
      *(undefined4 *)(*DAT_00d12b40 + 0x3e6) = 1;
      *(undefined4 *)(*DAT_00d12b40 + 0x3d2) = 0;
      *(undefined4 *)(*DAT_00d12b40 + 0x3d6) = 0;
      *(undefined4 *)(*DAT_00d12b40 + 0x3da) = 0;
      *(undefined4 *)(*DAT_00d12b40 + 0x3de) = 0;
      *(undefined4 *)(*DAT_00d12b40 + 0x3ea) = 1;
      *(undefined4 *)(*DAT_00d12b40 + 0x3ee) = 0;
      *(undefined4 *)(*DAT_00d12b40 + 0x3f2) = 0;
      *(undefined4 *)(*DAT_00d12b40 + 0x3f6) = 0;
    }
    else {
      iVar9 = *(int *)(*(int *)(extraout_ECX + 0x1c574) + 4);
      while (iVar9 != 0) {
        iVar9 = *(int *)(iVar9 + 10);
        FUN_00446d10();
        iVar10 = FUN_00428460();
        if ((iVar10 != 0) && (iVar10 != 0xc)) {
          *(undefined1 *)(iVar10 + 0x20) = 1;
        }
      }
      iVar9 = *(int *)(*(int *)(extraout_ECX + 0x1c570) + 4);
      while (iVar9 != 0) {
        iVar9 = *(int *)(iVar9 + 10);
        FUN_00446d10();
        FUN_00446d10();
        iVar10 = FUN_00428ee0();
        if ((iVar10 != 0) && (iVar10 != 8)) {
          *(undefined1 *)(iVar10 + 0xb6) = 1;
        }
      }
      iVar9 = *(int *)(*(int *)(extraout_ECX + 0x1c56c) + 4);
      while (iVar9 != 0) {
        iVar9 = *(int *)(iVar9 + 10);
        FUN_00446d10();
        FUN_00446d10();
        iVar10 = FUN_00428ee0();
        if ((iVar10 != 0) && (iVar10 != 8)) {
          *(undefined1 *)(iVar10 + 0xd4) = 1;
        }
      }
    }
    if (DAT_00dc1963 != '\0') {
      *(undefined4 *)(*DAT_00d12b40 + 0x392) = 1;
    }
    iVar9 = *(int *)(extraout_ECX + 0x1c57c);
    while (iVar9 != 0) {
      iVar9 = *(int *)(iVar9 + 8);
      FUN_00767880();
    }
    FUN_0078cad0();
    if (*(char *)(*(int *)(extraout_ECX + 0x7226) + 0x2ce2) != '\0') {
      FUN_005886c0();
      FUN_004cc729();
    }
    if (DAT_0089d034 != (int *)0x0) {
      (**(code **)(*DAT_0089d034 + 0x494))();
    }
    piStack_8 = &DAT_0089cad8;
    do {
      if (*piStack_8 != 0) {
        piStack_10 = &DAT_0089cad8;
        do {
          if (*piStack_10 != 0) {
            FUN_005885d0();
            FUN_00588600();
          }
          piStack_10 = piStack_10 + 1;
        } while ((int)piStack_10 < 0x89d034);
        FUN_004513d0();
        FUN_0046f5c0();
      }
      piStack_8 = piStack_8 + 1;
    } while ((int)piStack_8 < 0x89d034);
    (**(code **)(*(int *)(extraout_ECX + 0x272) + 4))();
    (**(code **)(*(int *)(extraout_ECX + 0x167de) + 4))();
    FUN_0075dfc0();
    if (DAT_00a98440 == 2) {
      FUN_004dcb20();
      FUN_004d87c0();
    }
    DAT_00dc153c = 0;
    DAT_00dc1540 = 0;
    DAT_00877618 = 1;
    cVar8 = FUN_0042e980();
    if (cVar8 != '\0') {
      piVar23 = *(int **)(extraout_ECX + 0x356d8);
      while (piVar23 != (int *)0x0) {
        piVar16 = (int *)piVar23[2];
        piVar18 = (int *)*piVar23;
        piStack_8 = piVar16;
        iVar9 = FUN_00428460();
        piVar23 = piVar16;
        if (((iVar9 != 0) && (iVar9 != 8)) && ((&DAT_0089cad8)[*piVar18] != 0)) {
          in_stack_00000084 = piVar18[2];
          in_stack_00000088 = (undefined2)piVar18[3];
          cVar8 = FUN_0042ddd0();
          if (cVar8 != '\0') {
            puVar12 = operator_new(0xc);
            if (puVar12 != (undefined4 *)0x0) {
              iVar9 = (&DAT_0089cad8)[*piVar18];
              iVar10 = FUN_00428460();
              if (iVar10 == 0) {
                piStack_10 = (int *)0x0;
              }
              else {
                piStack_10 = (int *)(iVar10 + -8);
              }
              iVar13 = _rand();
              FUN_00701630();
              *puVar12 = &PTR_FUN_007e52d0;
              iVar10 = puVar12[1];
              *(int *)(iVar10 + 0xe) = piStack_10[3];
              *(short *)(iVar10 + 0x12) = (short)piStack_10[4];
              iVar10 = puVar12[1];
              *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(iVar9 + 4);
              *(undefined2 *)(iVar10 + 0x18) = *(undefined2 *)(iVar9 + 8);
              *(int *)(puVar12[1] + 0x1a) = iVar13;
              piVar16 = piStack_8;
            }
            in_stack_0000007c = piVar18[2];
            in_stack_00000080 = (undefined2)piVar18[3];
            FUN_00565af0();
            piVar23 = piVar16;
          }
        }
      }
    }
    piVar23 = *(int **)(DAT_00d615b2 + 0x1d51e);
    iVar9 = DAT_00d0ca90;
    while (DAT_00d0ca90 = iVar9, piVar23 != (int *)0x0) {
      piStack_8 = (int *)piVar23[2];
      iVar10 = *piVar23;
      if (*(int *)(iVar10 + 0x1256) == 0) {
        iVar9 = (**(code **)(*(int *)(iVar10 + 0x23ac) + 4))();
        if (iVar9 < 1) {
          iVar13 = 1;
          piStack_c = &DAT_00dc0fd8;
          do {
            iVar9 = DAT_00d0ca90;
            if (*piStack_c == 1) {
              piStack_10 = *(int **)(DAT_00d0ca90 + 0x221aa);
              piVar23 = (int *)(DAT_00d0ca90 + 0x221aa);
              pvVar11 = operator_new(0xe);
              if (pvVar11 == (void *)0x0) {
                iVar14 = 0;
              }
              else {
                iVar14 = FUN_0049a870();
              }
              *piVar23 = iVar14;
              iVar14 = *(int *)(iVar9 + 0x221ae);
              *(int *)(iVar9 + 0x221ae) = iVar14 + 1;
              if (iVar14 == 0) {
                *(int *)(iVar9 + 0x221a6) = *piVar23;
              }
              else {
                piStack_10[2] = *piVar23;
              }
            }
            else if ((*piStack_c != 2) && (cVar8 = FUN_0042e980(), cVar8 != '\0')) {
              cVar8 = FUN_0042dd70();
              if (cVar8 == '\0') {
                if (0 < *(int *)(iVar10 + 0x1252)) {
                  _rand();
                }
                FUN_0042dc20();
              }
              puVar12 = operator_new(0xc);
              if (puVar12 != (undefined4 *)0x0) {
                uStack0000004a = (undefined2)iVar13;
                uStack0000004c = (undefined2)((uint)iVar13 >> 0x10);
                iVar14 = _rand();
                FUN_00701630();
                *puVar12 = &PTR_FUN_007e52d0;
                iVar9 = puVar12[1];
                *(undefined4 *)(iVar9 + 0xe) = *(undefined4 *)(iVar10 + 0xc);
                *(undefined2 *)(iVar9 + 0x12) = *(undefined2 *)(iVar10 + 0x10);
                iVar9 = puVar12[1];
                *(uint *)(iVar9 + 0x14) = CONCAT22(uStack0000004a,3);
                *(undefined2 *)(iVar9 + 0x18) = uStack0000004c;
                *(int *)(puVar12[1] + 0x1a) = iVar14;
              }
              FUN_00565af0();
            }
            piStack_c = piStack_c + 1;
            iVar13 = iVar13 + 1;
            piVar23 = piStack_8;
            iVar9 = DAT_00d0ca90;
          } while ((int)piStack_c < 0xdc1530);
        }
        else {
          piVar16 = *(int **)(iVar10 + 0x23b0);
          iVar9 = DAT_00d0ca90;
          while (piVar23 = piStack_8, piVar16 != (int *)0x0) {
            iVar13 = *piVar16;
            piVar16 = (int *)piVar16[2];
            DAT_00d0ca90 = iVar9;
            if ((&DAT_00dc0fd4)[iVar13] == 1) {
              piStack_10 = *(int **)(iVar9 + 0x221aa);
              piVar23 = (int *)(iVar9 + 0x221aa);
              pvVar11 = operator_new(0xe);
              if (pvVar11 == (void *)0x0) {
                iVar13 = 0;
              }
              else {
                iVar13 = FUN_0049a870();
              }
              *piVar23 = iVar13;
              iVar13 = *(int *)(iVar9 + 0x221ae);
              *(int *)(iVar9 + 0x221ae) = iVar13 + 1;
              if (iVar13 == 0) {
                *(int *)(iVar9 + 0x221a6) = *piVar23;
                iVar9 = DAT_00d0ca90;
              }
              else {
                piStack_10[2] = *piVar23;
                iVar9 = DAT_00d0ca90;
              }
            }
            else if (((&DAT_00dc0fd4)[iVar13] != 2) &&
                    (cVar8 = FUN_0042e980(), iVar9 = DAT_00d0ca90, cVar8 != '\0')) {
              cVar8 = FUN_0042dd70();
              if (cVar8 == '\0') {
                if (0 < *(int *)(iVar10 + 0x1252)) {
                  _rand();
                }
                FUN_0042dc20();
              }
              puVar12 = operator_new(0xc);
              if (puVar12 != (undefined4 *)0x0) {
                uStack0000003a = (undefined2)iVar13;
                uStack0000003c = (undefined2)((uint)iVar13 >> 0x10);
                iVar13 = _rand();
                FUN_00701630();
                *puVar12 = &PTR_FUN_007e52d0;
                iVar9 = puVar12[1];
                *(undefined4 *)(iVar9 + 0xe) = *(undefined4 *)(iVar10 + 0xc);
                *(undefined2 *)(iVar9 + 0x12) = *(undefined2 *)(iVar10 + 0x10);
                iVar9 = puVar12[1];
                *(uint *)(iVar9 + 0x14) = CONCAT22(uStack0000003a,3);
                *(undefined2 *)(iVar9 + 0x18) = uStack0000003c;
                *(int *)(puVar12[1] + 0x1a) = iVar13;
              }
              FUN_00565af0();
              iVar9 = DAT_00d0ca90;
            }
          }
        }
      }
      else if ((&DAT_00dc0fd4)[*(int *)(iVar10 + 0x1256)] == 1) {
        piStack_10 = *(int **)(iVar9 + 0x221aa);
        piVar16 = (int *)(iVar9 + 0x221aa);
        pvVar11 = operator_new(0xe);
        if (pvVar11 == (void *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = FUN_0049a870();
        }
        *piVar16 = iVar10;
        iVar10 = *(int *)(iVar9 + 0x221ae);
        *(int *)(iVar9 + 0x221ae) = iVar10 + 1;
        piVar23 = piStack_8;
        if (iVar10 == 0) {
          *(int *)(iVar9 + 0x221a6) = *piVar16;
          iVar9 = DAT_00d0ca90;
        }
        else {
          piStack_10[2] = *piVar16;
          iVar9 = DAT_00d0ca90;
        }
      }
      else {
        piVar23 = piStack_8;
        if (((&DAT_00dc0fd4)[*(int *)(iVar10 + 0x1256)] != 2) &&
           (cVar8 = FUN_0042e980(), piVar23 = piStack_8, iVar9 = DAT_00d0ca90, cVar8 != '\0')) {
          cVar8 = FUN_0042dd70();
          if (cVar8 == '\0') {
            if (0 < *(int *)(iVar10 + 0x1252)) {
              _rand();
            }
            FUN_0042dc20();
          }
          puVar12 = operator_new(0xc);
          if (puVar12 != (undefined4 *)0x0) {
            uStack00000042 = (undefined2)*(undefined4 *)(iVar10 + 0x1256);
            uStack00000044 = (undefined2)((uint)*(undefined4 *)(iVar10 + 0x1256) >> 0x10);
            iVar13 = _rand();
            FUN_00701630();
            *puVar12 = &PTR_FUN_007e52d0;
            iVar9 = puVar12[1];
            *(undefined4 *)(iVar9 + 0xe) = *(undefined4 *)(iVar10 + 0xc);
            *(undefined2 *)(iVar9 + 0x12) = *(undefined2 *)(iVar10 + 0x10);
            iVar9 = puVar12[1];
            *(uint *)(iVar9 + 0x14) = CONCAT22(uStack00000042,3);
            *(undefined2 *)(iVar9 + 0x18) = uStack00000044;
            *(int *)(puVar12[1] + 0x1a) = iVar13;
          }
          FUN_00565af0();
          piVar23 = piStack_8;
          iVar9 = DAT_00d0ca90;
        }
      }
    }
    if (DAT_00dc4b5e != '\0') {
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        iVar10 = 0x4b2;
        do {
          piVar23 = (int *)(DAT_00ab27b4 + iVar10);
          if (((*(char *)(DAT_00ab27b4 + 0x180 + iVar10) == '\0') && (piVar23[0x95] != 8)) &&
             (piVar23[0x95] != 9)) {
            if (piVar23[0xf6] == 0) {
              (**(code **)(*piVar23 + 0xc))();
              FUN_00429a00();
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            if (piVar23[0xf5] == 0) {
              (**(code **)(*piVar23 + 0xc))();
              FUN_00429a00();
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 0x4b2;
        } while (iVar9 < (int)DAT_00877690);
      }
      puVar12 = (undefined4 *)&stack0x00001e38;
      for (iVar9 = 0x158; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar12 = (undefined4 *)&stack0x00002398;
      for (iVar9 = 0x158; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar12 = (undefined4 *)&stack0x00000704;
      for (iVar9 = 0x158; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar12 = (undefined4 *)&stack0x00001378;
      for (iVar9 = 0x158; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar12 = (undefined4 *)&stack0x00000e18;
      for (iVar9 = 0x158; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar12 = (undefined4 *)&stack0x000018d8;
      for (iVar9 = 0x158; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a00();
      }
      piStack00000024 = &DAT_0089cad8;
      do {
        iVar9 = *piStack00000024;
        if (iVar9 != 0) {
          if (DAT_00dc4b5f != '\0') {
            (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))();
            FUN_00429a00();
          }
          puVar12 = *(undefined4 **)(iVar9 + 0x4508);
          while (puVar12 != (undefined4 *)0x0) {
            puVar1 = (undefined4 *)puVar12[2];
            piStack_c = (int *)*puVar12;
            iVar10 = FUN_00522770();
            pvStack_14 = (void *)0x0;
            if (DAT_00dc4b5f != '\0') {
              (**(code **)(*piStack_c + 0xc))();
              FUN_00429a00();
              uVar20 = 0xffffffff;
              pcVar24 = &DAT_0087b2f0;
              do {
                pcVar26 = pcVar24;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar26 = pcVar24 + 1;
                cVar8 = *pcVar24;
                pcVar24 = pcVar26;
              } while (cVar8 != '\0');
              uVar20 = ~uVar20;
              pcVar24 = pcVar26 + -uVar20;
              pcVar26 = &stack0x000000d4;
              for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar26 = *(undefined4 *)pcVar24;
                pcVar24 = pcVar24 + 4;
                pcVar26 = pcVar26 + 4;
              }
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar26 = *pcVar24;
                pcVar24 = pcVar24 + 1;
                pcVar26 = pcVar26 + 1;
              }
              puStack00000028 = &DAT_00be19d8 + *(int *)(iVar10 + 6) * 0x12;
              cVar8 = (**(code **)(*piStack_c + 0x2c))();
              piVar23 = piStack_c;
              if (cVar8 == '\0') {
                cVar8 = (**(code **)(*piStack_c + 0x30))();
                if (cVar8 != '\0') {
                  pcVar24 = &DAT_0087b2e4;
                  puStack00000028 = &DAT_00be3310 + *(int *)(iVar10 + 6) * 0x12;
                  goto LAB_0078330f;
                }
              }
              else {
                pcVar24 = s_Naval_0087b2e8;
                puStack00000028 = &DAT_00cb8588 + *(int *)(iVar10 + 6) * 0x12;
LAB_0078330f:
                uVar20 = 0xffffffff;
                do {
                  pcVar26 = pcVar24;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pcVar26 = pcVar24 + 1;
                  cVar8 = *pcVar24;
                  pcVar24 = pcVar26;
                } while (cVar8 != '\0');
                uVar20 = ~uVar20;
                pcVar24 = pcVar26 + -uVar20;
                pcVar26 = &stack0x000000d4;
                for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *(undefined4 *)pcVar26 = *(undefined4 *)pcVar24;
                  pcVar24 = pcVar24 + 4;
                  pcVar26 = pcVar26 + 4;
                }
                for (uVar20 = uVar20 & 3; piVar23 = piStack_c, uVar20 != 0; uVar20 = uVar20 - 1) {
                  *pcVar26 = *pcVar24;
                  pcVar24 = pcVar24 + 1;
                  pcVar26 = pcVar26 + 1;
                }
              }
              puVar12 = *(undefined4 **)(puStack00000028 + 4);
              do {
                if (puVar12 == (undefined4 *)0x0) {
                  (**(code **)(*piVar23 + 0xc))();
                  uStackY_38 = 4.2183510873709265e-306;
                  FUN_00429a00();
                  break;
                }
                puVar2 = (undefined4 *)puVar12[2];
                piStack_10 = (int *)*puVar12;
                (**(code **)(*piVar23 + 0xc))();
                iVar13 = FUN_007a8730();
                puVar12 = puVar2;
                piVar23 = piStack_c;
              } while (iVar13 != 0);
            }
            piVar23 = *(int **)((int)piStack_c + 0x26);
            piVar16 = piStack_c;
joined_r0x0078339d:
            piStack_c = piVar16;
            if (piVar23 != (int *)0x0) {
              piVar16 = (int *)piVar23[2];
              piVar18 = (int *)*piVar23;
              piStack_10 = (int *)piVar18[0x22];
              piStack_8 = (int *)piVar18[0x4c];
              fVar3 = (float)piVar18[0x3b];
              uStackY_38 = (double)CONCAT44(0x7833eb,(int **)uStackY_38);
              fVar27 = (float10)FUN_004673a0();
              pvStack_14 = (void *)(float)(fVar27 * (float10)fVar3 * (float10)_DAT_007e543c +
                                          (float10)(float)pvStack_14);
              piVar23 = piVar16;
              piVar16 = piStack_c;
              if (DAT_00dc4b5f != '\0') {
                puVar12 = *(undefined4 **)
                           (&DAT_00be4b4c + (piVar18[0x4c] + *(int *)(iVar10 + 6) * 0x8c) * 0x12);
                do {
                  if (puVar12 == (undefined4 *)0x0) {
                    FUN_004ff320();
                    (**(code **)(*piVar18 + 0xc))();
                    uStackY_38 = 4.2181555242389886e-306;
                    FUN_00429a00();
                    piVar16 = piStack_c;
                    break;
                  }
                  puVar2 = (undefined4 *)puVar12[2];
                  piStack_10 = (int *)*puVar12;
                  (**(code **)(*piVar18 + 0xc))();
                  iVar13 = FUN_007a8730();
                  puVar12 = puVar2;
                  piVar16 = piStack_c;
                } while (iVar13 != 0);
              }
              goto joined_r0x0078339d;
            }
            cVar8 = (**(code **)(*piVar16 + 0x28))();
            if (cVar8 == '\0') {
              cVar8 = (**(code **)(*piVar16 + 0x2c))();
              pfVar15 = (float *)(&stack0x00000e18 + *(int *)(iVar10 + 6) * 4);
              if (cVar8 == '\0') {
                pfVar15 = (float *)(&stack0x00001378 + *(int *)(iVar10 + 6) * 4);
              }
            }
            else {
              pfVar15 = (float *)(&stack0x000018d8 + *(int *)(iVar10 + 6) * 4);
            }
            *pfVar15 = (float)pvStack_14 + *pfVar15;
            puVar12 = puVar1;
          }
          if (DAT_00dc4b5f != '\0') {
            FUN_00429a00();
          }
          piVar23 = *(int **)(iVar9 + 0x451c);
joined_r0x00783502:
          if (piVar23 != (int *)0x0) {
            piStack_10 = (int *)piVar23[2];
            piVar16 = (int *)*piVar23;
            iVar10 = iVar9;
            if (piVar16[0x16] != 0) {
              iVar10 = (&DAT_0089cad8)[piVar16[0x16]];
            }
            piVar23 = piStack_10;
            if (iVar10 != 0) {
              if (*(char *)((int)piVar16 + 0x15f) == '\0') {
                if (*(char *)((int)piVar16 + 0x161) == '\0') {
                  pfVar15 = (float *)(&stack0x00001378 + *(int *)(iVar10 + 6) * 4);
                  piStack_8 = (int *)piVar16[0x22];
                  fVar3 = (float)piVar16[0x3b];
                  uStackY_38 = (double)CONCAT44(0x783646,(int **)uStackY_38);
                  fVar27 = (float10)FUN_004673a0();
                  fVar27 = fVar27 * (float10)fVar3 * (float10)_DAT_007e543c;
                }
                else {
                  pfVar15 = (float *)(&stack0x00000e18 + *(int *)(iVar10 + 6) * 4);
                  piStack_8 = (int *)piVar16[0x22];
                  fVar3 = (float)piVar16[0x3b];
                  uStackY_38 = (double)CONCAT44(0x7835ee,(int **)uStackY_38);
                  fVar27 = (float10)FUN_004673a0();
                  fVar27 = fVar27 * (float10)fVar3 * (float10)_DAT_007e543c;
                }
              }
              else {
                pfVar15 = (float *)(&stack0x000018d8 + *(int *)(iVar10 + 6) * 4);
                piStack_8 = (int *)piVar16[0x22];
                fVar3 = (float)piVar16[0x3b];
                uStackY_38 = (double)CONCAT44(0x783586,(int **)uStackY_38);
                fVar27 = (float10)FUN_004673a0();
                fVar27 = fVar27 * (float10)fVar3 * (float10)_DAT_007e543c;
              }
              *pfVar15 = (float)(fVar27 + (float10)*pfVar15);
              piVar23 = piStack_10;
              if ((DAT_00dc4b5f != '\0') && (*(char *)((int)piVar16 + 0x162) == '\0')) {
                puVar12 = *(undefined4 **)
                           (&DAT_00be4b4c + (piVar16[0x4c] + *(int *)(iVar10 + 6) * 0x8c) * 0x12);
                do {
                  if (puVar12 == (undefined4 *)0x0) {
                    FUN_004ff320();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = 4.2181555242393877e-306;
                    FUN_00429a00();
                    piVar23 = piStack_10;
                    break;
                  }
                  puVar1 = (undefined4 *)puVar12[2];
                  piStack_8 = (int *)*puVar12;
                  (**(code **)(*piVar16 + 0xc))();
                  iVar10 = FUN_007a8730();
                  puVar12 = puVar1;
                  piVar23 = piStack_10;
                } while (iVar10 != 0);
              }
            }
            goto joined_r0x00783502;
          }
          if (DAT_00dc4b5f != '\0') {
            FUN_00429a00();
          }
          piVar23 = *(int **)(iVar9 + 0x3b7e);
joined_r0x0078372a:
          if (piVar23 != (int *)0x0) {
            piStack_10 = (int *)piVar23[2];
            piVar16 = (int *)*piVar23;
            piVar23 = piStack_10;
            if ((char)piVar16[0xf] == '\0') {
              cVar8 = (**(code **)(*piVar16 + 0x14))();
              if (cVar8 == '\0') {
                cVar8 = (**(code **)(*piVar16 + 0x18))();
                piVar23 = piStack_10;
                if (cVar8 != '\0') {
                  iVar10 = FUN_0044c5b0();
                  iVar13 = FUN_0044c630();
                  pvStack_14 = (void *)(*(float *)(iVar13 + 0x14) + *(float *)(iVar10 + 0x14));
                  cVar8 = FUN_004f4a70();
                  if (cVar8 == '\0') {
                    cVar8 = FUN_004f4a90();
                    if (cVar8 == '\0') {
                      pfVar15 = (float *)(&stack0x00001e38 + *(int *)(iVar9 + 6) * 4);
                    }
                    else {
                      pfVar15 = (float *)(&stack0x00002398 + *(int *)(iVar9 + 6) * 4);
                    }
                  }
                  else {
                    pfVar15 = (float *)(&stack0x00000704 + *(int *)(iVar9 + 6) * 4);
                  }
                  *pfVar15 = (float)pvStack_14 + *pfVar15;
                  piVar23 = piStack_10;
                }
              }
              else {
                *(int *)(iVar9 + 0x3e52 + *(int *)((int)piVar16 + 0x5a) * 4) =
                     *(int *)(iVar9 + 0x3e52 + *(int *)((int)piVar16 + 0x5a) * 4) +
                     (piVar16[0xc] - piVar16[0xd]);
                iVar10 = FUN_0044c620();
                iVar13 = FUN_0044c3d0();
                pvStack_14 = (void *)(*(float *)(iVar10 + 0x14) + *(float *)(iVar13 + 0x14));
                if (*(int *)((int)piVar16 + 0x5e) != 0) {
                  iVar10 = FUN_0044c5b0();
                  iVar13 = FUN_0044c630();
                  pvStack_14 = (void *)((float)pvStack_14 + *(float *)(iVar13 + 0x14) +
                                       *(float *)(iVar10 + 0x14));
                }
                if (*(int *)((int)piVar16 + 0x7a) != 0) {
                  iVar10 = FUN_0044c5b0();
                  iVar13 = FUN_0044c630();
                  pvStack_14 = (void *)((float)pvStack_14 + *(float *)(iVar13 + 0x14) +
                                       *(float *)(iVar10 + 0x14));
                }
                if (*(int *)((int)piVar16 + 0x7e) != 0) {
                  iVar10 = FUN_0044c5b0();
                  iVar13 = FUN_0044c630();
                  pvStack_14 = (void *)((float)pvStack_14 + *(float *)(iVar13 + 0x14) +
                                       *(float *)(iVar10 + 0x14));
                }
                if (*(int *)((int)piVar16 + 0x82) != 0) {
                  iVar10 = FUN_0044c5b0();
                  iVar13 = FUN_0044c630();
                  pvStack_14 = (void *)((float)pvStack_14 + *(float *)(iVar13 + 0x14) +
                                       *(float *)(iVar10 + 0x14));
                }
                if (*(int *)((int)piVar16 + 0x86) != 0) {
                  iVar10 = FUN_0044c5b0();
                  iVar13 = FUN_0044c630();
                  pvStack_14 = (void *)((float)pvStack_14 + *(float *)(iVar13 + 0x14) +
                                       *(float *)(iVar10 + 0x14));
                }
                cVar8 = FUN_004f3f80();
                if (cVar8 == '\0') {
                  cVar8 = FUN_004f3fa0();
                  if (cVar8 == '\0') {
                    pfVar15 = (float *)(&stack0x00001e38 + *(int *)(iVar9 + 6) * 4);
                  }
                  else {
                    pfVar15 = (float *)(&stack0x00002398 + *(int *)(iVar9 + 6) * 4);
                  }
                }
                else {
                  pfVar15 = (float *)(&stack0x00000704 + *(int *)(iVar9 + 6) * 4);
                }
                *pfVar15 = (float)pvStack_14 + *pfVar15;
                piVar23 = piStack_10;
                if (DAT_00dc4b5f != '\0') {
                  puVar12 = *(undefined4 **)
                             (&DAT_00be4b4c +
                             (*(int *)((int)piVar16 + 0x5a) + *(int *)(iVar9 + 6) * 0x8c) * 0x12);
                  do {
                    if (puVar12 == (undefined4 *)0x0) {
                      FUN_004ff320();
                      (**(code **)(*piVar16 + 0xc))();
                      uStackY_38 = 4.218155524239792e-306;
                      FUN_00429a00();
                      piVar23 = piStack_10;
                      break;
                    }
                    puVar1 = (undefined4 *)puVar12[2];
                    piStack_8 = (int *)*puVar12;
                    (**(code **)(*piVar16 + 0xc))();
                    iVar10 = FUN_007a8730();
                    puVar12 = puVar1;
                    piVar23 = piStack_10;
                  } while (iVar10 != 0);
                }
              }
            }
            goto joined_r0x0078372a;
          }
        }
        piStack00000024 = piStack00000024 + 1;
      } while ((int)piStack00000024 < 0x89d038);
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a00();
      }
      if (DAT_00dc4b5e != '\0') {
        FUN_00429a00();
        piStack00000024 = &DAT_0089cad8;
        do {
          piVar23 = (int *)*piStack00000024;
          piStack_8 = piVar23;
          if (piVar23 != (int *)0x0) {
            (**(code **)(*(int *)((int)piVar23 + 0xe) + 0xc))();
            FUN_00429a00();
            piVar16 = (int *)piVar23[0x1142];
            while (piVar16 != (int *)0x0) {
              piVar18 = (int *)piVar16[2];
              piVar5 = *(int **)(*piVar16 + 0x26);
              piVar6 = piStack_10;
              while (piStack_10 = piVar6, piVar16 = piVar18, piVar5 != (int *)0x0) {
                piVar16 = (int *)piVar5[2];
                piVar4 = (int *)*piVar5;
                piStack_10 = (int *)piVar4[0x4f];
                piVar5 = piVar16;
                if (0 < (int)piStack_10) {
                  do {
                    cVar8 = FUN_004a4340();
                    if (cVar8 == '\0') {
                      FUN_004ff320();
                      FUN_004ff3a0();
                      (**(code **)(*piVar4 + 0xc))();
                      uStackY_38 = (double)CONCAT44(0x783b00,(int **)uStackY_38);
                      FUN_00429a00();
                      DAT_00dc4b60 = DAT_00dc4b60 + 1;
                      piVar23 = piStack_8;
                    }
                    piStack_10 = (int *)((int)piStack_10 + -1);
                  } while (piStack_10 != (int *)0x0);
                  piVar6 = (int *)0x0;
                }
              }
            }
            FUN_00429a00();
            piVar16 = (int *)piVar23[0x1147];
            while (piVar16 != (int *)0x0) {
              piVar18 = (int *)piVar16[2];
              piVar5 = (int *)*piVar16;
              piVar16 = piVar18;
              if ((*(char *)((int)piVar5 + 0x162) == '\0') && (0 < piVar5[0x4f])) {
                piVar18 = piVar5 + 0x22;
                piStack_10 = (int *)piVar5[0x4f];
                do {
                  cVar8 = FUN_004a4340();
                  if (cVar8 == '\0') {
                    piStack_8 = (int *)*piVar18;
                    FUN_004ff320();
                    FUN_004ff3a0();
                    (**(code **)(*piVar5 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x783bc7,(int **)uStackY_38);
                    FUN_00429a00();
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                  piVar18 = piVar18 + 1;
                  piStack_10 = (int *)((int)piStack_10 + -1);
                } while (piStack_10 != (int *)0x0);
                piStack_10 = (int *)0x0;
              }
            }
            FUN_00429a00();
            piVar16 = *(int **)((int)piVar23 + 0x3b7e);
            while (piVar16 != (int *)0x0) {
              piVar18 = (int *)piVar16[2];
              piVar5 = (int *)*piVar16;
              piStack_10 = piVar18;
              cVar8 = (**(code **)(*piVar5 + 0x14))();
              piVar16 = piVar18;
              if (cVar8 != '\0') {
                *(int *)((int)piVar23 + *(int *)((int)piVar5 + 0x5a) * 4 + 0x3e52) =
                     *(int *)((int)piVar23 + *(int *)((int)piVar5 + 0x5a) * 4 + 0x3e52) +
                     (piVar5[0xc] - piVar5[0xd]);
                FUN_0044c620();
                FUN_0044c3d0();
                if ((*(int *)((int)piVar5 + 0x5e) != 0) && (cVar8 = FUN_004a4340(), cVar8 == '\0'))
                {
                  FUN_004ff320();
                  FUN_004ff3a0();
                  (**(code **)(*piVar5 + 0xc))();
                  uStackY_38 = (double)CONCAT44(0x783c9c,(int **)uStackY_38);
                  FUN_00429a00();
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                if ((*(int *)((int)piVar5 + 0x7a) != 0) && (cVar8 = FUN_004a4340(), cVar8 == '\0'))
                {
                  FUN_004ff320();
                  FUN_004ff3a0();
                  (**(code **)(*piVar5 + 0xc))();
                  uStackY_38 = (double)CONCAT44(0x783ced,(int **)uStackY_38);
                  FUN_00429a00();
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                if ((*(int *)((int)piVar5 + 0x7e) != 0) && (cVar8 = FUN_004a4340(), cVar8 == '\0'))
                {
                  FUN_004ff320();
                  FUN_004ff3a0();
                  (**(code **)(*piVar5 + 0xc))();
                  uStackY_38 = (double)CONCAT44(0x783d3e,(int **)uStackY_38);
                  FUN_00429a00();
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                if ((*(int *)((int)piVar5 + 0x82) != 0) && (cVar8 = FUN_004a4340(), cVar8 == '\0'))
                {
                  FUN_004ff320();
                  FUN_004ff3a0();
                  (**(code **)(*piVar5 + 0xc))();
                  uStackY_38 = (double)CONCAT44(0x783d95,(int **)uStackY_38);
                  FUN_00429a00();
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                piVar16 = piStack_10;
                if ((*(int *)((int)piVar5 + 0x86) != 0) &&
                   (cVar8 = FUN_004a4340(), piVar16 = piStack_10, cVar8 == '\0')) {
                  FUN_00788190();
                  FUN_004ff320();
                  FUN_007881a0();
                  FUN_004ff3a0();
                  (**(code **)(*piVar5 + 0xc))();
                  uStackY_38 = (double)CONCAT44(0x783df1,(int **)uStackY_38);
                  FUN_00429a00();
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  piVar16 = piStack_10;
                }
              }
            }
          }
          piStack00000024 = piStack00000024 + 1;
        } while ((int)piStack00000024 < 0x89d038);
        FUN_00429a00();
      }
      FUN_00429a00();
      FUN_00429a00();
      iVar9 = 0;
      do {
        iVar10 = FUN_00465c30();
        if (iVar10 != 0) {
          piStack_10 = (int *)(*(float *)(&stack0x00002398 + iVar9 * 4) +
                               *(float *)(&stack0x00001e38 + iVar9 * 4) +
                              *(float *)(&stack0x00000704 + iVar9 * 4));
          FUN_0071c330();
          FUN_0071c330();
          uStackY_38 = (double)(*(float *)(&stack0x00001378 + iVar9 * 4) +
                                *(float *)(&stack0x000018d8 + iVar9 * 4) + (float)piStack_10 +
                               *(float *)(&stack0x00000e18 + iVar9 * 4));
          (**(code **)(*(int *)(iVar10 + 0xe) + 0xc))();
          FUN_00429a00();
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x158);
      FUN_00429a00();
      FUN_00429a00();
      FUN_00429a00();
      piStack_8 = (int *)0x0;
      do {
        piVar23 = piStack_8;
        piVar16 = (int *)FUN_00465c30();
        piStack_10 = piVar16;
        if (piVar16 != (int *)0x0) {
          ppuVar22 = &PTR_DAT_008776c8;
          do {
            FUN_0071c2e0();
            FUN_0071eb80();
            cVar8 = FUN_006ae9b0();
            if (cVar8 != '\0') {
              FUN_007a630a();
              uVar20 = 0xffffffff;
              pcVar24 = &stack0x00000050;
              do {
                pcVar26 = pcVar24;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar26 = pcVar24 + 1;
                cVar8 = *pcVar24;
                pcVar24 = pcVar26;
              } while (cVar8 != '\0');
              uVar20 = ~uVar20;
              iVar9 = -1;
              pcVar24 = &stack0x000028f8;
              do {
                pcVar25 = pcVar24;
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                pcVar25 = pcVar24 + 1;
                cVar8 = *pcVar24;
                pcVar24 = pcVar25;
              } while (cVar8 != '\0');
              pcVar24 = pcVar26 + -uVar20;
              pcVar26 = pcVar25 + -1;
              for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar26 = *(undefined4 *)pcVar24;
                pcVar24 = pcVar24 + 4;
                pcVar26 = pcVar26 + 4;
              }
              for (uVar20 = uVar20 & 3; piVar16 = piStack_10, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar26 = *pcVar24;
                pcVar24 = pcVar24 + 1;
                pcVar26 = pcVar26 + 1;
              }
            }
            ppuVar22 = ppuVar22 + 1;
          } while ((int)ppuVar22 < 0x8776f0);
          FUN_0044dc80();
          FUN_00788090();
          (**(code **)(*(int *)((int)piVar16 + 0xe) + 0xc))();
          uStackY_38 = 4.2166018838026005e-306;
          FUN_00429a00();
          piVar23 = piStack_8;
        }
        piStack_8 = (int *)((int)piVar23 + 1);
      } while ((int)piStack_8 < 0x158);
      FUN_00429a00();
    }
    if (DAT_00dc4b5f != '\0') {
      FUN_00429a00();
      pvStack_14 = (void *)0x0;
      do {
        pvVar11 = pvStack_14;
        iVar9 = FUN_00465c30();
        if (iVar9 != 0) {
          piVar23 = (int *)FUN_004a0750();
          FUN_00493d20();
          (**(code **)(*piVar23 + 0xc))();
          (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))();
          uStackY_38 = (double)CONCAT44(0x7840ec,(int **)uStackY_38);
          FUN_00429a00();
          pvVar11 = pvStack_14;
        }
        pvStack_14 = (void *)((int)pvVar11 + 1);
      } while ((int)pvStack_14 < 0x157);
      FUN_00429a00();
      FUN_00429a00();
      FUN_00429a00();
      pvStack_14 = (void *)0x1;
      if (1 < (int)DAT_00877690) {
        do {
          pvVar11 = pvStack_14;
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if (cVar8 == '\0') {
            FUN_00787f40();
            FUN_00513f60();
            FUN_004c7c14();
            FUN_00513f50();
            FUN_004c7bfa();
            (**(code **)(*piVar23 + 0xc))();
            uStackY_38 = (double)CONCAT44(pvVar11,s___d__s__s__s__s__0087ae14);
            FUN_00429a00();
          }
          else {
            iVar9 = FUN_0048b980();
            if (iVar9 != 0) {
              iVar9 = FUN_0048b980();
              (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))();
            }
            iVar9 = FUN_00513f90();
            if (iVar9 != 0) {
              iVar9 = FUN_00513f90();
              (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))();
            }
            FUN_00513ff0();
            FUN_007881b0();
            FUN_00513ff0();
            FUN_007881b0();
            uStackY_38 = 1.69798601440563e-313;
            FUN_00513ff0();
            uStackY_38 = (double)CONCAT44(0x7841db,(int **)uStackY_38);
            fVar27 = (float10)FUN_007881b0();
            uStackY_38 = (double)fVar27;
            FUN_00513ff0();
            FUN_007881b0();
            FUN_004ed080();
            FUN_004ecfc0();
            FUN_00513ff0();
            FUN_007881b0();
            FUN_00513ff0();
            FUN_007881b0();
            FUN_004eceb0();
            FUN_00788060();
            FUN_00788070();
            FUN_00788080();
            FUN_00788050();
            FUN_0071c210();
            FUN_004ed140();
            FUN_00787f20();
            FUN_004c7c2e();
            FUN_00513f60();
            FUN_004c7c14();
            FUN_00513f50();
            FUN_004c7bfa();
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
            pvVar11 = pvStack_14;
          }
          pvStack_14 = (void *)((int)pvVar11 + 1);
        } while ((int)pvStack_14 < (int)DAT_00877690);
      }
      FUN_00429a00();
      FUN_00429a00();
      iVar9 = 0;
      do {
        iVar10 = FUN_00465c30();
        if (iVar10 != 0) {
          piStack_10 = (int *)0x0;
          piStack_8 = (int *)0x0;
          in_stack_00000074 = 0.0;
          in_stack_00000078 = 0.0;
          pvStack_14 = (void *)0x0;
          piStack_c = (int *)0x0;
          FUN_00526a60();
          FUN_00526ac0();
          cVar8 = FUN_00526b10();
          while (cVar8 != '\0') {
            FUN_00526af0();
            FUN_00526b00();
            FUN_004e9370();
            cVar8 = FUN_004e8f30();
            if (cVar8 != '\0') {
              fVar27 = (float10)FUN_004ed140();
              piStack_10 = (int *)(float)(fVar27 + (float10)(float)piStack_10);
              iVar13 = FUN_0071c210();
              piStack_8 = (int *)((float)iVar13 + (float)piStack_8);
              FUN_00788060();
              FUN_00788080();
              FUN_00788070();
              FUN_00788050();
              FUN_00513ff0();
              FUN_007881b0();
              FUN_00513ff0();
              FUN_007881b0();
              FUN_00513ff0();
              fVar27 = (float10)FUN_007881b0();
              in_stack_00000074 = (float)(fVar27 + (float10)in_stack_00000074);
              FUN_00513ff0();
              fVar27 = (float10)FUN_007881b0();
              in_stack_00000078 = (float)(fVar27 + (float10)in_stack_00000078);
              FUN_00513ff0();
              fVar27 = (float10)FUN_007881b0();
              pvStack_14 = (void *)(float)(fVar27 + (float10)(float)pvStack_14);
              FUN_00513ff0();
              fVar27 = (float10)FUN_007881b0();
              piStack_c = (int *)(float)(fVar27 + (float10)(float)piStack_c);
              FUN_00513ff0();
              FUN_007881b0();
              FUN_00513ff0();
              FUN_007881b0();
            }
            cVar8 = FUN_00526b10();
          }
          piVar23 = (int *)FUN_00526a60();
          uStackY_38 = (double)(float)piStack_c;
          (**(code **)(*piVar23 + 4))();
          (**(code **)(*(int *)(iVar10 + 0xe) + 0xc))();
          FUN_00429a00();
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x157);
      FUN_00429a00();
      iVar9 = 0;
      do {
        if (0x156 < iVar9) goto LAB_007878b6;
        iVar10 = FUN_00465c30();
        iVar9 = iVar9 + 1;
      } while (iVar10 == 0);
      FUN_00429a00();
      FUN_00429a00();
      pvStack_14 = (void *)0x0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if ((cVar8 != '\0') && (iVar9 = FUN_005269a0(), 0 < iVar9)) {
            FUN_005269a0();
            cVar8 = FUN_004e7940();
            if (cVar8 == '\0') {
              FUN_005269a0();
              piVar16 = (int *)FUN_00465bd0();
              (**(code **)(*piVar16 + 0xc))();
              FUN_005269a0();
              (**(code **)(*piVar23 + 0xc))();
              uStackY_38 = 4.21382054148057e-306;
              FUN_00429a00();
              iVar9 = 0;
              piStack_10 = (int *)0x4b189680;
              iVar13 = 0;
              iVar10 = FUN_00513fb0();
              if (0 < iVar10) {
                do {
                  FUN_00787f60();
                  FUN_00465bd0();
                  cVar8 = FUN_00513f70();
                  if (cVar8 != '\0') {
                    FUN_00787f60();
                    fVar27 = (float10)FUN_004ed6d0();
                    if (fVar27 < (float10)(float)piStack_10) {
                      piVar23 = (int *)FUN_00787f60();
                      iVar9 = *piVar23;
                      FUN_00787f60();
                      fVar27 = (float10)FUN_004ed6d0();
                      piStack_10 = (int *)(float)fVar27;
                    }
                  }
                  iVar13 = iVar13 + 1;
                  iVar10 = FUN_00513fb0();
                } while (iVar13 < iVar10);
                if (0 < iVar9) {
                  piVar23 = (int *)FUN_00465bd0();
                  (**(code **)(*piVar23 + 0xc))();
                  uStackY_38 = 4.213711895296184e-306;
                  FUN_00429a00();
                  goto LAB_007847fd;
                }
              }
              FUN_00429a00();
            }
          }
LAB_007847fd:
          pvStack_14 = (void *)((int)pvStack_14 + 1);
        } while ((int)pvStack_14 < (int)DAT_00877690);
      }
      FUN_00429a00();
      pvStack_14 = (void *)0x0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if (((cVar8 != '\0') && (iVar9 = FUN_00788020(), iVar9 == 1)) &&
             (iVar9 = FUN_005269a0(), iVar9 == 0)) {
            iVar9 = 0;
            piStack_10 = (int *)0x4b189680;
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_00513f70();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_004ed6d0();
                  if (fVar27 < (float10)(float)piStack_10) {
                    piVar16 = (int *)FUN_00787f60();
                    iVar9 = *piVar16;
                    FUN_00787f60();
                    fVar27 = (float10)FUN_0044a9c0();
                    piStack_10 = (int *)(float)fVar27;
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
              if (0 < iVar9) {
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x784923,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,pvStack_14);
                FUN_00429a00();
                goto LAB_00784952;
              }
            }
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
LAB_00784952:
          pvStack_14 = (void *)((int)pvStack_14 + 1);
        } while ((int)pvStack_14 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if (((cVar8 != '\0') && (cVar8 = FUN_00526990(), cVar8 == '\0')) &&
             (iVar10 = FUN_004ece90(), iVar10 != 0)) {
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if ((cVar8 != '\0') && (iVar10 = FUN_00788000(), iVar10 < 8)) {
            FUN_00787f90();
            iVar10 = FUN_004d8520();
            if (iVar10 != iVar9) {
              FUN_00787f90();
              FUN_004d8520();
              piVar16 = (int *)FUN_00465bd0();
              (**(code **)(*piVar16 + 0xc))();
              FUN_00787f90();
              FUN_004d8520();
              (**(code **)(*piVar23 + 0xc))();
              uStackY_38 = 4.2123864118457284e-306;
              FUN_00429a00();
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if ((cVar8 != '\0') && (iVar10 = FUN_00788000(), iVar10 < 8)) {
            FUN_00787fe0();
            iVar10 = FUN_004d8520();
            if (iVar10 != iVar9) {
              FUN_00787fe0();
              FUN_004d8520();
              piVar16 = (int *)FUN_00465bd0();
              (**(code **)(*piVar16 + 0xc))();
              FUN_00787fe0();
              FUN_004d8520();
              (**(code **)(*piVar23 + 0xc))();
              uStackY_38 = 4.2121147963846005e-306;
              FUN_00429a00();
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if ((cVar8 != '\0') && (iVar10 = FUN_00788000(), iVar10 < 8)) {
            FUN_00787fd0();
            iVar10 = FUN_004d8520();
            if (iVar10 != iVar9) {
              FUN_00787fd0();
              FUN_004d8520();
              piVar16 = (int *)FUN_00465bd0();
              (**(code **)(*piVar16 + 0xc))();
              FUN_00787fd0();
              FUN_004d8520();
              (**(code **)(*piVar23 + 0xc))();
              uStackY_38 = 4.211832316305023e-306;
              FUN_00429a00();
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if ((((cVar8 != '\0') && (cVar8 = FUN_00526990(), cVar8 != '\0')) &&
              (iVar10 = FUN_005269a0(), 0 < iVar10)) && (iVar10 = FUN_00788000(), iVar10 < 8)) {
            FUN_00787fa0();
            iVar10 = FUN_004d8520();
            if (iVar10 != iVar9) {
              FUN_00787fa0();
              iVar10 = FUN_004d8520();
              iVar13 = FUN_005269a0();
              if (iVar10 != iVar13) {
                FUN_00787fa0();
                FUN_004d8520();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                FUN_00787fa0();
                FUN_004d8520();
                (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = 4.2115172423701424e-306;
                FUN_00429a00();
              }
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if (((cVar8 != '\0') && (iVar10 = FUN_005269a0(), 0 < iVar10)) &&
             (iVar10 = FUN_00788000(), iVar10 < 8)) {
            FUN_00787fc0();
            iVar10 = FUN_004d8520();
            if (iVar10 != iVar9) {
              FUN_00787fc0();
              iVar10 = FUN_004d8520();
              iVar13 = FUN_005269a0();
              if (iVar10 != iVar13) {
                FUN_00787fc0();
                FUN_004d8520();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                FUN_00787fc0();
                FUN_004d8520();
                (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = 4.2112021684352554e-306;
                FUN_00429a00();
              }
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      iVar10 = 1;
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar13 = FUN_00788000();
          if (iVar13 < 9) {
            FUN_00787fb0();
            iVar13 = FUN_004d8520();
            if (iVar13 != iVar9) {
              FUN_00787fb0();
              FUN_004d8520();
              piVar16 = (int *)FUN_00465bd0();
              (**(code **)(*piVar16 + 0xc))();
              FUN_00787fb0();
              FUN_004d8520();
              (**(code **)(*piVar23 + 0xc))();
              uStackY_38 = 4.210908823737224e-306;
              FUN_00429a00();
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar9 = FUN_00788000();
          if (iVar9 < 9) {
            FUN_00787f80();
            iVar9 = FUN_004d8520();
            if (iVar9 != iVar10) {
              FUN_00787f80();
              FUN_004d8520();
              piVar16 = (int *)FUN_00465bd0();
              (**(code **)(*piVar16 + 0xc))();
              FUN_00787f80();
              FUN_004d8520();
              (**(code **)(*piVar23 + 0xc))();
              uStackY_38 = 4.2106154790391894e-306;
              FUN_00429a00();
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)DAT_00877690);
      }
      FUN_00429a00();
      pvStack_14 = (void *)0x0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if ((cVar8 != '\0') && (iVar9 = FUN_005269a0(), 0 < iVar9)) {
            FUN_005269a0();
            cVar8 = FUN_004e7940();
            if (cVar8 != '\0') {
              bVar7 = false;
              FUN_005269a0();
              fVar27 = (float10)FUN_004ed6d0();
              piStack_10 = (int *)(float)fVar27;
              iVar10 = 0;
              iVar9 = FUN_00513fb0();
              if (0 < iVar9) {
                do {
                  FUN_00787f60();
                  FUN_00465bd0();
                  cVar8 = FUN_00513f70();
                  if (cVar8 != '\0') {
                    FUN_00787f60();
                    fVar27 = (float10)FUN_004ed6d0();
                    if (fVar27 < (float10)(float)piStack_10) {
                      FUN_00787f60();
                      FUN_00787f60();
                      fVar27 = (float10)FUN_004ed6d0();
                      piStack_10 = (int *)(float)fVar27;
                      bVar7 = true;
                    }
                  }
                  iVar10 = iVar10 + 1;
                  iVar9 = FUN_00513fb0();
                } while (iVar10 < iVar9);
                if (bVar7) {
                  piVar16 = (int *)FUN_00465bd0();
                  FUN_005269a0();
                  piVar18 = (int *)FUN_00465bd0();
                  (**(code **)(*piVar16 + 0xc))();
                  uStackY_38 = (double)CONCAT44(0x785088,(int **)uStackY_38);
                  uVar17 = FUN_005269a0();
                  uStackY_38 = (double)CONCAT44(uVar17,0x785090);
                  fVar27 = (float10)FUN_004ed6d0();
                  uStackY_38 = (double)(fVar27 * (float10)_DAT_007e4088);
                  (**(code **)(*piVar18 + 0xc))();
                  FUN_005269a0();
                  (**(code **)(*piVar23 + 0xc))();
                  FUN_00429a00();
                }
              }
            }
          }
          pvStack_14 = (void *)((int)pvStack_14 + 1);
        } while ((int)pvStack_14 < (int)DAT_00877690);
      }
      FUN_00429a00();
      pvStack_14 = (void *)0x0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if ((cVar8 != '\0') && (iVar9 = FUN_005269a0(), iVar9 == 0)) {
            iVar9 = 0;
            piStack_10 = (int *)0x4b189680;
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_00513f70();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_004ed6d0();
                  if (fVar27 < (float10)(float)piStack_10) {
                    piVar16 = (int *)FUN_00787f60();
                    iVar9 = *piVar16;
                    FUN_00787f60();
                    fVar27 = (float10)FUN_0044a9c0();
                    piStack_10 = (int *)(float)fVar27;
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
              if (0 < iVar9) {
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x7851e3,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,pvStack_14);
                FUN_00429a00();
              }
            }
          }
          pvStack_14 = (void *)((int)pvStack_14 + 1);
        } while ((int)pvStack_14 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar10 = FUN_00513fb0();
          if (iVar10 == 0) {
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar10 = FUN_00513fb0();
          if (iVar10 == 1) {
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar10 = FUN_00513fb0();
          if (iVar10 == 2) {
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar10 = FUN_00513fb0();
          if (iVar10 == 3) {
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar10 = FUN_00513fb0();
          if (iVar10 == 4) {
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar10 = FUN_00513fb0();
          if (iVar10 == 5) {
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar10 = FUN_00513fb0();
          if (iVar10 == 6) {
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar10 = FUN_00513fb0();
          if (iVar10 == 7) {
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar10 = FUN_00513fb0();
          if (iVar10 == 8) {
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar10 = FUN_00513fb0();
          if (8 < iVar10) {
            FUN_00513fb0();
            (**(code **)(*piVar23 + 0xc))();
            uStackY_38 = (double)CONCAT44(0x785521,(int **)uStackY_38);
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if (((cVar8 != '\0') && (iVar10 = FUN_00513fb0(), 5 < iVar10)) &&
             (iVar10 = FUN_00513fb0(), iVar10 < 9)) {
            FUN_00513fb0();
            (**(code **)(*piVar23 + 0xc))();
            uStackY_38 = (double)CONCAT44(0x78558f,(int **)uStackY_38);
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if ((cVar8 != '\0') && (iVar10 = FUN_00513fb0(), 8 < iVar10)) {
            FUN_00513fb0();
            (**(code **)(*piVar23 + 0xc))();
            uStackY_38 = (double)CONCAT44(0x7855f1,(int **)uStackY_38);
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_00513f70();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_00513f70();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_004ed6d0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if (fVar27 * (float10)_DAT_007e4088 < (float10)_DAT_007e4088) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x7856b4,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x7856be,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_00513f70();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_00513f70();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_004ed6d0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if (((float10)_DAT_007e4088 <= fVar27 * (float10)_DAT_007e4088) &&
                     ((float)pvStack_14 < _DAT_007e67e8)) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x7857b2,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x7857bc,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_00513f70();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_00513f70();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_004ed6d0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if (((float10)_DAT_007e67e8 <= fVar27 * (float10)_DAT_007e4088) &&
                     ((float)pvStack_14 < _DAT_007e68c8)) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x7858b0,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x7858ba,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_00513f70();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_00513f70();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_004ed6d0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if (((float10)_DAT_007e68c8 <= fVar27 * (float10)_DAT_007e4088) &&
                     ((float)pvStack_14 < _DAT_007f3ac8)) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x7859ae,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x7859b8,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_00513f70();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_00513f70();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_004ed6d0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if (((float10)_DAT_007f3ac8 <= fVar27 * (float10)_DAT_007e4088) &&
                     ((float)pvStack_14 < _DAT_007fa6e4)) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x785aac,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x785ab6,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_00513f70();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_00513f70();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_004ed6d0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if (((float10)_DAT_007fa6e4 <= fVar27 * (float10)_DAT_007e4088) &&
                     ((float)pvStack_14 < _DAT_007e67ec)) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x785baa,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x785bb4,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_00513f70();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_00513f70();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_004ed6d0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if ((float10)_DAT_007e67ec <= fVar27 * (float10)_DAT_007e4088) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x785c97,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x785ca1,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_004e8f30();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_0044a9c0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if (fVar27 * (float10)_DAT_007e4088 < (float10)_DAT_007e4088) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x785d86,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x785d90,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_004e8f30();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_0044a9c0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if (((float10)_DAT_007e4088 <= fVar27 * (float10)_DAT_007e4088) &&
                     ((float)pvStack_14 < _DAT_007e6864)) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x785e86,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x785e90,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_004e8f30();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_0044a9c0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if (((float10)_DAT_007e6864 <= fVar27 * (float10)_DAT_007e4088) &&
                     ((float)pvStack_14 < _DAT_007e67e8)) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x785f86,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x785f90,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_004e8f30();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_0044a9c0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if (((float10)_DAT_007e67e8 <= fVar27 * (float10)_DAT_007e4088) &&
                     ((float)pvStack_14 < _DAT_007fa6e0)) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x786086,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x786090,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_004e8f30();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_0044a9c0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if (((float10)_DAT_007fa6e0 <= fVar27 * (float10)_DAT_007e4088) &&
                     ((float)pvStack_14 < _DAT_007e68c8)) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x786186,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x786190,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_004e8f30();
          if (cVar8 != '\0') {
            iVar13 = 0;
            iVar10 = FUN_00513fb0();
            if (0 < iVar10) {
              do {
                FUN_00787f60();
                FUN_00465bd0();
                cVar8 = FUN_004e8f30();
                if (cVar8 != '\0') {
                  FUN_00787f60();
                  fVar27 = (float10)FUN_0044a9c0();
                  pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
                  if ((float10)_DAT_007e68c8 <= fVar27 * (float10)_DAT_007e4088) {
                    FUN_00787f60();
                    piVar16 = (int *)FUN_00465bd0();
                    (**(code **)(*piVar16 + 0xc))();
                    uStackY_38 = (double)CONCAT44(0x786275,(int **)uStackY_38);
                    FUN_00787f60();
                    uStackY_38 = (double)CONCAT44(0x78627f,(int **)uStackY_38);
                    uVar17 = (**(code **)(*piVar23 + 0xc))();
                    uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                    FUN_00429a00();
                  }
                }
                iVar13 = iVar13 + 1;
                iVar10 = FUN_00513fb0();
              } while (iVar13 < iVar10);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar13 = 0;
          iVar10 = FUN_00513fb0();
          if (0 < iVar10) {
            do {
              FUN_00787f60();
              fVar27 = (float10)FUN_0044a9c0();
              pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
              if (fVar27 * (float10)_DAT_007e4088 < (float10)_DAT_007e4090) {
                FUN_00787f60();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x786333,(int **)uStackY_38);
                FUN_00787f60();
                uStackY_38 = (double)CONCAT44(0x78633d,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                FUN_00429a00();
              }
              iVar13 = iVar13 + 1;
              iVar10 = FUN_00513fb0();
            } while (iVar13 < iVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar13 = 0;
          iVar10 = FUN_00513fb0();
          if (0 < iVar10) {
            do {
              FUN_00787f60();
              fVar27 = (float10)FUN_0044a9c0();
              pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
              if (((float10)_DAT_007e4090 <= fVar27 * (float10)_DAT_007e4088) &&
                 ((float)pvStack_14 < _DAT_007e681c)) {
                FUN_00787f60();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x786402,(int **)uStackY_38);
                FUN_00787f60();
                uStackY_38 = (double)CONCAT44(0x78640c,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                FUN_00429a00();
              }
              iVar13 = iVar13 + 1;
              iVar10 = FUN_00513fb0();
            } while (iVar13 < iVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar13 = 0;
          iVar10 = FUN_00513fb0();
          if (0 < iVar10) {
            do {
              FUN_00787f60();
              fVar27 = (float10)FUN_0044a9c0();
              pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
              if (((float10)_DAT_007e681c <= fVar27 * (float10)_DAT_007e4088) &&
                 ((float)pvStack_14 < _DAT_007e4088)) {
                FUN_00787f60();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x7864d5,(int **)uStackY_38);
                FUN_00787f60();
                uStackY_38 = (double)CONCAT44(0x7864df,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                FUN_00429a00();
              }
              iVar13 = iVar13 + 1;
              iVar10 = FUN_00513fb0();
            } while (iVar13 < iVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar13 = 0;
          iVar10 = FUN_00513fb0();
          if (0 < iVar10) {
            do {
              FUN_00787f60();
              fVar27 = (float10)FUN_0044a9c0();
              pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
              if (((float10)_DAT_007e4088 <= fVar27 * (float10)_DAT_007e4088) &&
                 ((float)pvStack_14 < _DAT_007e6864)) {
                FUN_00787f60();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x7865a8,(int **)uStackY_38);
                FUN_00787f60();
                uStackY_38 = (double)CONCAT44(0x7865b2,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                FUN_00429a00();
              }
              iVar13 = iVar13 + 1;
              iVar10 = FUN_00513fb0();
            } while (iVar13 < iVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar13 = 0;
          iVar10 = FUN_00513fb0();
          if (0 < iVar10) {
            do {
              FUN_00787f60();
              fVar27 = (float10)FUN_0044a9c0();
              pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
              if (((float10)_DAT_007e6864 <= fVar27 * (float10)_DAT_007e4088) &&
                 ((float)pvStack_14 < _DAT_007e67e8)) {
                FUN_00787f60();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x78667b,(int **)uStackY_38);
                FUN_00787f60();
                uStackY_38 = (double)CONCAT44(0x786685,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                FUN_00429a00();
              }
              iVar13 = iVar13 + 1;
              iVar10 = FUN_00513fb0();
            } while (iVar13 < iVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar13 = 0;
          iVar10 = FUN_00513fb0();
          if (0 < iVar10) {
            do {
              FUN_00787f60();
              fVar27 = (float10)FUN_0044a9c0();
              pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
              if (((float10)_DAT_007e67e8 <= fVar27 * (float10)_DAT_007e4088) &&
                 ((float)pvStack_14 < _DAT_007fa6e0)) {
                FUN_00787f60();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x78674e,(int **)uStackY_38);
                FUN_00787f60();
                uStackY_38 = (double)CONCAT44(0x786758,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                FUN_00429a00();
              }
              iVar13 = iVar13 + 1;
              iVar10 = FUN_00513fb0();
            } while (iVar13 < iVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar13 = 0;
          iVar10 = FUN_00513fb0();
          if (0 < iVar10) {
            do {
              FUN_00787f60();
              fVar27 = (float10)FUN_0044a9c0();
              pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
              if (((float10)_DAT_007fa6e0 <= fVar27 * (float10)_DAT_007e4088) &&
                 ((float)pvStack_14 < _DAT_007e68c8)) {
                FUN_00787f60();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x786821,(int **)uStackY_38);
                FUN_00787f60();
                uStackY_38 = (double)CONCAT44(0x78682b,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                FUN_00429a00();
              }
              iVar13 = iVar13 + 1;
              iVar10 = FUN_00513fb0();
            } while (iVar13 < iVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar13 = 0;
          iVar10 = FUN_00513fb0();
          if (0 < iVar10) {
            do {
              FUN_00787f60();
              fVar27 = (float10)FUN_0044a9c0();
              pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
              if (((float10)_DAT_007e68c8 <= fVar27 * (float10)_DAT_007e4088) &&
                 ((float)pvStack_14 < _DAT_007fa6dc)) {
                FUN_00787f60();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x7868f4,(int **)uStackY_38);
                FUN_00787f60();
                uStackY_38 = (double)CONCAT44(0x7868fe,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                FUN_00429a00();
              }
              iVar13 = iVar13 + 1;
              iVar10 = FUN_00513fb0();
            } while (iVar13 < iVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar13 = 0;
          iVar10 = FUN_00513fb0();
          if (0 < iVar10) {
            do {
              FUN_00787f60();
              fVar27 = (float10)FUN_0044a9c0();
              pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
              if (((float10)_DAT_007fa6dc <= fVar27 * (float10)_DAT_007e4088) &&
                 ((float)pvStack_14 < _DAT_007e67f4)) {
                FUN_00787f60();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x7869c7,(int **)uStackY_38);
                FUN_00787f60();
                uStackY_38 = (double)CONCAT44(0x7869d1,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                FUN_00429a00();
              }
              iVar13 = iVar13 + 1;
              iVar10 = FUN_00513fb0();
            } while (iVar13 < iVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar13 = 0;
          iVar10 = FUN_00513fb0();
          if (0 < iVar10) {
            do {
              FUN_00787f60();
              fVar27 = (float10)FUN_0044a9c0();
              pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
              if (((float10)_DAT_007e67f4 <= fVar27 * (float10)_DAT_007e4088) &&
                 ((float)pvStack_14 < _DAT_007fa6d8)) {
                FUN_00787f60();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x786a9a,(int **)uStackY_38);
                FUN_00787f60();
                uStackY_38 = (double)CONCAT44(0x786aa4,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                FUN_00429a00();
              }
              iVar13 = iVar13 + 1;
              iVar10 = FUN_00513fb0();
            } while (iVar13 < iVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          iVar13 = 0;
          iVar10 = FUN_00513fb0();
          if (0 < iVar10) {
            do {
              FUN_00787f60();
              fVar27 = (float10)FUN_0044a9c0();
              pvStack_14 = (void *)(float)(fVar27 * (float10)_DAT_007e4088);
              if ((float10)_DAT_007fa6d8 <= fVar27 * (float10)_DAT_007e4088) {
                FUN_00787f60();
                piVar16 = (int *)FUN_00465bd0();
                (**(code **)(*piVar16 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x786b58,(int **)uStackY_38);
                FUN_00787f60();
                uStackY_38 = (double)CONCAT44(0x786b62,(int **)uStackY_38);
                uVar17 = (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(uVar17,iVar9);
                FUN_00429a00();
              }
              iVar13 = iVar13 + 1;
              iVar10 = FUN_00513fb0();
            } while (iVar13 < iVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          FUN_00513fb0();
          (**(code **)(*piVar23 + 0xc))();
          uStackY_38 = (double)CONCAT44(0x786bcd,(int **)uStackY_38);
          FUN_00429a00();
          iVar13 = 0;
          iVar10 = FUN_00513fb0();
          if (0 < iVar10) {
            do {
              FUN_00787f60();
              piVar23 = (int *)FUN_00465bd0();
              (**(code **)(*piVar23 + 0xc))();
              FUN_00787f60();
              FUN_00787f60();
              uStackY_38 = (double)CONCAT44(0x786c14,(int **)uStackY_38);
              FUN_0044a9c0();
              uStackY_38 = 4.202477879825017e-306;
              FUN_00429a00();
              iVar13 = iVar13 + 1;
              iVar10 = FUN_00513fb0();
            } while (iVar13 < iVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      FUN_007a630a();
      uStackY_38 = (double)CONCAT44(0x786c6f,(int **)uStackY_38);
      pvVar11 = operator_new(8);
      if (pvVar11 != (void *)0x0) {
        FUN_00426120();
      }
      iVar9 = FUN_00426720();
      FUN_00426380();
      if ((piStack_c == DAT_00877690) && ((int *)(iVar9 + -2) == DAT_00877690)) {
        piStack_c = (int *)((int)piStack_c + -1);
        FUN_00426330();
        in_stack_0000008c = 0;
        in_stack_00000090 = 0;
        FUN_0078e5b0();
        iVar10 = 0;
        if (0 < iVar9 + -3) {
          do {
            FUN_0078e640();
            FUN_00426470();
            FUN_00426330();
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar9 + -3);
        }
        iVar9 = 9;
        FUN_00429a00();
        iVar10 = 1;
        if (1 < (int)DAT_00877690) {
          do {
            piVar23 = (int *)FUN_00465bd0();
            cVar8 = FUN_004e8f30();
            if (cVar8 != '\0') {
              pdVar19 = (double *)FUN_0078e640();
              if ((_DAT_007fa6d0 <= *pdVar19) ||
                 (pdVar19 = (double *)FUN_0078e640(), *pdVar19 <= _DAT_007fa6c8)) {
                iVar9 = 1;
              }
              else {
                pdVar19 = (double *)FUN_0078e640();
                if (((*pdVar19 < _DAT_007fa6d0) &&
                    (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa6c0 <= *pdVar19)) ||
                   ((pdVar19 = (double *)FUN_0078e640(), *pdVar19 <= _DAT_007fa6b8 &&
                    (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa6c8 < *pdVar19)))) {
                  iVar9 = 2;
                }
                else {
                  pdVar19 = (double *)FUN_0078e640();
                  if (((*pdVar19 < _DAT_007fa6c0) &&
                      (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa6b0 <= *pdVar19)) ||
                     ((pdVar19 = (double *)FUN_0078e640(), *pdVar19 <= _DAT_007fa6a8 &&
                      (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa6b8 < *pdVar19)))) {
                    iVar9 = 3;
                  }
                  else {
                    pdVar19 = (double *)FUN_0078e640();
                    if (((*pdVar19 < _DAT_007fa6b0) &&
                        (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa6a0 <= *pdVar19)) ||
                       ((pdVar19 = (double *)FUN_0078e640(), *pdVar19 <= _DAT_007fa698 &&
                        (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa6a8 < *pdVar19)))) {
                      iVar9 = 5;
                    }
                    else {
                      pdVar19 = (double *)FUN_0078e640();
                      if (((*pdVar19 < _DAT_007fa6a0) &&
                          (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa690 <= *pdVar19)) ||
                         ((pdVar19 = (double *)FUN_0078e640(), *pdVar19 <= _DAT_007fa688 &&
                          (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa698 < *pdVar19)))) {
                        iVar9 = 6;
                      }
                      else {
                        pdVar19 = (double *)FUN_0078e640();
                        if ((*pdVar19 < _DAT_007fa690) &&
                           (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa688 < *pdVar19)) {
                          iVar9 = 7;
                        }
                      }
                    }
                  }
                }
              }
              iVar13 = FUN_00787ff0();
              if (iVar13 == 0) {
                (**(code **)(*piVar23 + 0xc))();
                FUN_00429a00();
              }
              else if (((iVar13 != 4) && (iVar13 != 8)) &&
                      (iVar13 = FUN_00787ff0(), iVar13 != iVar9)) {
                FUN_004c7be0();
                FUN_00787ff0();
                FUN_004c7be0();
                (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = 4.2021845351274985e-306;
                FUN_00429a00();
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)DAT_00877690);
        }
        FUN_00429a00();
        iVar10 = 1;
        if (1 < (int)DAT_00877690) {
          do {
            piVar23 = (int *)FUN_00465bd0();
            cVar8 = FUN_004e8f30();
            if (cVar8 == '\0') {
              pdVar19 = (double *)FUN_0078e640();
              if ((_DAT_007fa6d0 <= *pdVar19) ||
                 (pdVar19 = (double *)FUN_0078e640(), *pdVar19 <= _DAT_007fa6c8)) {
                iVar9 = 1;
              }
              else {
                pdVar19 = (double *)FUN_0078e640();
                if (((*pdVar19 < _DAT_007fa6d0) &&
                    (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa6c0 <= *pdVar19)) ||
                   ((pdVar19 = (double *)FUN_0078e640(), *pdVar19 <= _DAT_007fa6b8 &&
                    (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa6c8 < *pdVar19)))) {
                  iVar9 = 2;
                }
                else {
                  pdVar19 = (double *)FUN_0078e640();
                  if (((*pdVar19 < _DAT_007fa6c0) &&
                      (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa6b0 <= *pdVar19)) ||
                     ((pdVar19 = (double *)FUN_0078e640(), *pdVar19 <= _DAT_007fa6a8 &&
                      (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa6b8 < *pdVar19)))) {
                    iVar9 = 3;
                  }
                  else {
                    pdVar19 = (double *)FUN_0078e640();
                    if (((*pdVar19 < _DAT_007fa6b0) &&
                        (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa6a0 <= *pdVar19)) ||
                       ((pdVar19 = (double *)FUN_0078e640(), *pdVar19 <= _DAT_007fa698 &&
                        (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa6a8 < *pdVar19)))) {
                      iVar9 = 5;
                    }
                    else {
                      pdVar19 = (double *)FUN_0078e640();
                      if (((*pdVar19 < _DAT_007fa6a0) &&
                          (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa690 <= *pdVar19)) ||
                         ((pdVar19 = (double *)FUN_0078e640(), *pdVar19 <= _DAT_007fa688 &&
                          (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa698 < *pdVar19)))) {
                        iVar9 = 6;
                      }
                      else {
                        pdVar19 = (double *)FUN_0078e640();
                        if ((*pdVar19 < _DAT_007fa690) &&
                           (pdVar19 = (double *)FUN_0078e640(), _DAT_007fa688 < *pdVar19)) {
                          iVar9 = 7;
                        }
                      }
                    }
                  }
                }
              }
              iVar13 = FUN_00787ff0();
              if (iVar13 == 0) {
                (**(code **)(*piVar23 + 0xc))();
                FUN_00429a00();
              }
              else if ((iVar13 == 4) || (iVar13 == 8)) {
                FUN_00787ff0();
                FUN_004c7be0();
                (**(code **)(*piVar23 + 0xc))();
                uStackY_38 = (double)CONCAT44(0x787309,(int **)uStackY_38);
                FUN_00429a00();
              }
              else {
                iVar13 = FUN_00787ff0();
                if (iVar13 != iVar9) {
                  FUN_004c7be0();
                  FUN_00787ff0();
                  FUN_004c7be0();
                  (**(code **)(*piVar23 + 0xc))();
                  uStackY_38 = 4.202184535127962e-306;
                  FUN_00429a00();
                }
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)DAT_00877690);
        }
        FUN_0078e610();
      }
      FUN_00429a00();
      FUN_00429a00();
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_00514000();
          if ((cVar8 == '\0') && (cVar8 = FUN_004e8f30(), cVar8 != '\0')) {
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
            iVar10 = FUN_00513f90();
            if (iVar10 == 0) {
              FUN_00429a00();
            }
            else {
              FUN_00513f90();
              FUN_00788090();
              FUN_00429a00();
            }
            iVar10 = FUN_0048b980();
            if (iVar10 == 0) {
              FUN_00429a00();
            }
            else {
              FUN_0048b980();
              FUN_00788090();
              FUN_00429a00();
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_00514000();
          if ((((cVar8 == '\0') && (cVar8 = FUN_004e8f30(), cVar8 != '\0')) &&
              (cVar8 = FUN_00787f30(), cVar8 != '\0')) &&
             ((iVar10 = FUN_00513f90(), iVar10 != 0 && (iVar10 = FUN_0048b980(), iVar10 != 0)))) {
            cVar8 = FUN_004e4b60();
            ppuVar22 = &PTR_LAB_0083de30;
            if (cVar8 == '\0') {
              ppuVar22 = (undefined **)&DAT_0083de2c;
            }
            FUN_0048b980();
            FUN_00788090();
            FUN_00513f90();
            FUN_00788090();
            FUN_00787f20();
            FUN_004c7c2e();
            FUN_00513f60();
            uStackY_38 = (double)CONCAT44(0x787507,(int **)uStackY_38);
            FUN_004c7c14();
            uStackY_38 = (double)CONCAT44(0x787512,(int **)uStackY_38);
            uVar17 = FUN_00513f50();
            uStackY_38 = (double)CONCAT44(uVar17,0x787518);
            uVar17 = FUN_004c7bfa();
            uStackY_38 = (double)CONCAT44(uVar17,ppuVar22);
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_00514000();
          if (((cVar8 == '\0') && (cVar8 = FUN_004e8f30(), cVar8 != '\0')) &&
             ((iVar10 = FUN_00788020(), iVar10 != 0 &&
              ((iVar10 = FUN_00513f90(), iVar10 != 0 && (iVar10 = FUN_0048b980(), iVar10 != 0))))))
          {
            cVar8 = FUN_004e4b60();
            ppuVar22 = &PTR_LAB_0083de30;
            if (cVar8 == '\0') {
              ppuVar22 = (undefined **)&DAT_0083de2c;
            }
            FUN_0048b980();
            FUN_00788090();
            FUN_00513f90();
            FUN_00788090();
            FUN_00787f20();
            FUN_004c7c2e();
            FUN_00513f60();
            uStackY_38 = (double)CONCAT44(0x787610,(int **)uStackY_38);
            FUN_004c7c14();
            uStackY_38 = (double)CONCAT44(0x78761b,(int **)uStackY_38);
            uVar17 = FUN_00513f50();
            uStackY_38 = (double)CONCAT44(uVar17,0x787621);
            uVar17 = FUN_004c7bfa();
            uStackY_38 = (double)CONCAT44(uVar17,ppuVar22);
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_00514000();
          if ((((cVar8 == '\0') && (cVar8 = FUN_004e8f30(), cVar8 != '\0')) &&
              (cVar8 = FUN_00526990(), cVar8 != '\0')) &&
             ((iVar10 = FUN_00513f90(), iVar10 != 0 && (iVar10 = FUN_0048b980(), iVar10 != 0)))) {
            cVar8 = FUN_004e4b60();
            ppuVar22 = &PTR_LAB_0083de30;
            if (cVar8 == '\0') {
              ppuVar22 = (undefined **)&DAT_0083de2c;
            }
            iVar10 = FUN_004ece90();
            if (iVar10 == 0) {
              piStack_10 = (int *)0x0;
            }
            else {
              FUN_004ece90();
              fVar27 = (float10)FUN_007881b0();
              piStack_10 = (int *)(float)fVar27;
            }
            FUN_0048b980();
            FUN_00788090();
            FUN_00513f90();
            FUN_00788090();
            FUN_00787f20();
            FUN_004c7c2e();
            FUN_00513f60();
            uStackY_38 = (double)CONCAT44(0x787744,(int **)uStackY_38);
            FUN_004c7c14();
            uStackY_38 = (double)CONCAT44(0x78774f,(int **)uStackY_38);
            uVar17 = FUN_00513f50();
            uStackY_38 = (double)CONCAT44(uVar17,0x787755);
            uVar17 = FUN_004c7bfa();
            uStackY_38 = (double)CONCAT44(uVar17,ppuVar22);
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
      FUN_00429a00();
      iVar9 = 1;
      if (1 < (int)DAT_00877690) {
        do {
          piVar23 = (int *)FUN_00465bd0();
          cVar8 = FUN_00514000();
          if (((cVar8 == '\0') && (cVar8 = FUN_004e8f30(), cVar8 != '\0')) &&
             ((iVar10 = FUN_004ece80(), iVar10 != 0 &&
              ((iVar10 = FUN_00513f90(), iVar10 != 0 && (iVar10 = FUN_0048b980(), iVar10 != 0))))))
          {
            cVar8 = FUN_004e4b60();
            ppuVar22 = &PTR_LAB_0083de30;
            if (cVar8 == '\0') {
              ppuVar22 = (undefined **)&DAT_0083de2c;
            }
            FUN_0048b980();
            FUN_00788090();
            FUN_00513f90();
            FUN_00788090();
            FUN_00787f20();
            FUN_004c7c2e();
            FUN_00513f60();
            uStackY_38 = (double)CONCAT44(0x78785b,(int **)uStackY_38);
            FUN_004c7c14();
            uStackY_38 = (double)CONCAT44(0x787866,(int **)uStackY_38);
            uVar17 = FUN_00513f50();
            uStackY_38 = (double)CONCAT44(uVar17,0x78786c);
            uVar17 = FUN_004c7bfa();
            uStackY_38 = (double)CONCAT44(uVar17,ppuVar22);
            FUN_004ece80();
            FUN_007881b0();
            (**(code **)(*piVar23 + 0xc))();
            FUN_00429a00();
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      FUN_00429a00();
    }
LAB_007878b6:
    if (DAT_00dc4b5e != '\0') {
      FUN_00429a00();
      FUN_00429a00();
      FUN_007a630a();
      uStackY_38 = (double)CONCAT44(&stack0x000000d4,0x78790e);
      iVar9 = FUN_007a7c64();
      if (iVar9 != -1) {
        uVar20 = 0xffffffff;
        pcVar24 = &stack0x000000d4;
        do {
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          cVar8 = *pcVar24;
          pcVar24 = pcVar24 + 1;
        } while (cVar8 != '\0');
        (&stack0x000000ce)[~uVar20] = 0;
        do {
          pvVar11 = operator_new(0xbae);
          if (pvVar11 == (void *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = FUN_006b0050();
          }
          uStackY_38 = (double)CONCAT44(0x787994,(int **)uStackY_38);
          FUN_007a630a();
          FUN_00429a00();
          FUN_00534930();
          FUN_006b3b90();
          if (iVar9 != 0) {
            FUN_007881d0();
          }
          FUN_005349a0();
          iVar9 = FUN_007a7d31();
        } while (iVar9 == 0);
        FUN_007a7df9();
      }
      FUN_00429a00();
      FUN_007a630a();
      uStackY_38 = (double)CONCAT44(&stack0x000000d4,0x787a5a);
      iVar9 = FUN_007a7c64();
      if (iVar9 != -1) {
        uVar20 = 0xffffffff;
        pcVar24 = &stack0x000000d4;
        do {
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          cVar8 = *pcVar24;
          pcVar24 = pcVar24 + 1;
        } while (cVar8 != '\0');
        (&stack0x000000ce)[~uVar20] = 0;
        do {
          if ((((byte)in_stack_000001d4 & 0x10) == 0x10) && (in_stack_000001e8 != '.')) {
            FUN_00429a00();
            uStackY_38 = (double)CONCAT44(0x787ae3,(int **)uStackY_38);
            FUN_007a630a();
            uStackY_38 = (double)CONCAT44(&stack0x000005ec,&stack0x000002ec);
            iVar9 = FUN_007a7c64();
            if (iVar9 != -1) {
              uVar20 = 0xffffffff;
              pcVar24 = &stack0x000002ec;
              do {
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                cVar8 = *pcVar24;
                pcVar24 = pcVar24 + 1;
              } while (cVar8 != '\0');
              (&stack0x000002e6)[~uVar20] = 0;
              do {
                piStack_10 = operator_new(0xbae);
                if (piStack_10 == (int *)0x0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = FUN_006b0050();
                }
                uStackY_38 = (double)CONCAT44(0x787b7e,(int **)uStackY_38);
                FUN_007a630a();
                FUN_00429a00();
                FUN_00534930();
                FUN_006b3b90();
                if (iVar9 != 0) {
                  FUN_007881d0();
                }
                FUN_005349a0();
                iVar9 = FUN_007a7d31();
              } while (iVar9 == 0);
              FUN_007a7df9();
            }
            FUN_00429a00();
          }
          iVar9 = FUN_007a7d31();
        } while (iVar9 == 0);
        FUN_007a7df9();
      }
      FUN_00429a00();
      if (DAT_00dc4b5e != '\0') {
        FUN_00429a00();
        iVar9 = 0;
        piStack_c = (int *)(extraout_ECX + 0x724c);
        do {
          FUN_00526ac0();
          cVar8 = FUN_00526b10();
          while (cVar8 != '\0') {
            FUN_00526af0();
            FUN_00526b00();
            FUN_004e9370();
            cVar8 = FUN_004e8f30();
            if (cVar8 == '\0') {
              piVar23 = (int *)FUN_004e9370();
              FUN_004af700();
              (**(code **)(*piVar23 + 0xc))();
              uStackY_38 = (double)CONCAT44(0x787ce7,(int **)uStackY_38);
              FUN_00429a00();
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            cVar8 = FUN_00526b10();
          }
          FUN_00526ac0();
          FUN_0054ed60();
          cVar8 = FUN_00526b10();
          while (cVar8 != '\0') {
            FUN_00526af0();
            FUN_00526b00();
            FUN_004e9370();
            cVar8 = FUN_004e8f30();
            if (cVar8 == '\0') {
              piVar23 = (int *)FUN_004e9370();
              FUN_004af700();
              (**(code **)(*piVar23 + 0xc))();
              uStackY_38 = (double)CONCAT44(0x787d7f,(int **)uStackY_38);
              FUN_00429a00();
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            cVar8 = FUN_00526b10();
          }
          FUN_00526ac0();
          FUN_0054ed60();
          cVar8 = FUN_00526b10();
          while (cVar8 != '\0') {
            FUN_00526af0();
            FUN_00526b00();
            FUN_004e9370();
            cVar8 = FUN_004e8f30();
            if (cVar8 == '\0') {
              piVar23 = (int *)FUN_004e9370();
              FUN_004af700();
              (**(code **)(*piVar23 + 0xc))();
              uStackY_38 = (double)CONCAT44(0x787e1a,(int **)uStackY_38);
              FUN_00429a00();
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            cVar8 = FUN_00526b10();
          }
          iVar9 = iVar9 + 1;
          piStack_c = piStack_c + 0x2a;
        } while (iVar9 < 0x158);
        FUN_00429a00();
      }
    }
    if (0 < DAT_00dc4b60) {
      FUN_00429a50();
      DAT_00dc4b60 = 0;
    }
    goto LAB_00787ed7;
  }
  if (iVar9 != 0x17) {
    if (iVar9 == 0x18) {
      iVar9 = 0;
      do {
        iVar10 = FUN_00465c30();
        if (iVar10 != 0) {
          iVar10 = 0;
          do {
            FUN_00788100();
            FUN_007880e0();
            FUN_00788160();
            FUN_007880c0();
            FUN_007880a0();
            FUN_00788120();
            FUN_00788140();
            iVar10 = iVar10 + 1;
          } while (iVar10 < 6);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x158);
      FUN_00781b90();
      FUN_00781d60();
      iVar9 = 0;
      if (0 < (int)DAT_00877690) {
        do {
          iVar10 = FUN_004e9370();
          (**(code **)(*(int *)(iVar10 + 0x1a) + 0x14))();
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)DAT_00877690);
      }
      piStack_c = (int *)0x0;
      do {
        piVar23 = piStack_c;
        iVar9 = FUN_00465c30();
        if (iVar9 != 0) {
          FUN_00490f60();
          cVar8 = FUN_0054ef60();
          if ((cVar8 != '\0') && (iVar9 = FUN_00465c40(), iVar9 == 0)) {
            FUN_00490f60();
            FUN_004965b0();
            iVar9 = FUN_00465c30();
            if (iVar9 != 0) {
              if (DAT_00dc1790 == '\0') {
                FUN_00490f60();
                cVar8 = FUN_00788180();
                if (cVar8 != '\0') {
                  FUN_0071c2e0();
                  fVar27 = (float10)FUN_007881c0();
                  if (fVar27 < (float10)_DAT_00dc18ec) goto LAB_0078223a;
                }
              }
              else {
LAB_0078223a:
                iVar9 = FUN_00465c40();
                if (iVar9 == 0) {
                  FUN_00428eb0();
                  pvVar11 = operator_new(0xc);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00458280();
                    piStack_10 = (int *)((int)&uStackY_38 + 4);
                    uStackY_38._0_4_ = &piStack_8;
                    FUN_00449290();
                    uStackY_38 = (double)CONCAT44(uStackY_38._4_4_,0x78229c);
                    iVar9 = FUN_00462830();
                    uStackY_38 = (double)CONCAT62(uStackY_38._2_6_,*(undefined2 *)(iVar9 + 4));
                    FUN_0045fec0();
                    FUN_00464a00();
                  }
                  FUN_005b4c40();
                  FUN_00565bc0();
                  pvVar11 = operator_new(0xc);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00458280();
                    FUN_0045fec0();
                    uStackY_38 = (double)CONCAT44(0x78231f,(int **)uStackY_38);
                    FUN_005b4790();
                  }
                }
                else {
                  pvVar11 = operator_new(0xc);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00458280();
                    FUN_00490f60();
                    FUN_00586600();
                    FUN_0045fec0();
                    uStackY_38 = (double)CONCAT44(0x782373,(int **)uStackY_38);
                    FUN_005b4790();
                  }
                }
                FUN_00565bc0();
                FUN_00458280();
                FUN_00458280();
                FUN_005b0ad0();
                piVar23 = piStack_c;
              }
            }
          }
        }
        piStack_c = (int *)((int)piVar23 + 1);
      } while ((int)piStack_c < 0x157);
      DAT_00dc153c = DAT_00dc153c + 1;
      if (DAT_00dc18bc <= DAT_00dc153c) {
        DAT_00dc1540 = 1;
      }
      if (*(float *)(extraout_ECX + 0x1bd1c) <= (float)DAT_00dc153c) {
        DAT_00877618 = 0;
      }
      FUN_0078cad0();
      if (DAT_00dc153c == 1) {
        FUN_00577fb0();
      }
    }
    else if (iVar9 == 0x19) {
      FUN_00788300();
    }
    goto LAB_00787ed7;
  }
  FUN_00462830();
  iVar9 = FUN_00521150();
  if ((iVar9 == 0x17) && (iVar9 = 0, 0 < (int)DAT_00877690)) {
    do {
      FUN_00465bd0();
      cVar8 = FUN_004e8f30();
      if (cVar8 != '\0') {
        FUN_00788030();
        FUN_00788040();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)DAT_00877690);
  }
  FUN_007881f0();
  FUN_0078c950();
  FUN_006accb0();
  FUN_0078c950();
  FUN_006acba0();
  FUN_00462830();
  iVar9 = FUN_00521150();
  if (iVar9 % 6 == 0) {
    FUN_00521210();
    FUN_0075dfc0();
    if (DAT_00a98440 == 2) {
      FUN_00458280();
      FUN_004dcb20();
      FUN_004d87c0();
    }
  }
  FUN_00462830();
  iVar9 = FUN_00521150();
  if (iVar9 == 0) {
    iVar9 = 0;
    do {
      iVar10 = FUN_00465c30();
      if (iVar10 != 0) {
        FUN_0046f5c0();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x157);
  }
  if (DAT_00dc1730 < 1) {
LAB_0078254f:
    DAT_00dc1734 = 0;
  }
  else {
    FUN_00462830();
    iVar9 = FUN_00512530();
    DAT_00dc1734 = 1;
    if (iVar9 % DAT_00dc1730 != 0) goto LAB_0078254f;
  }
  iVar9 = 0;
  if (0 < (int)DAT_00877690) {
    do {
      FUN_004e9370();
      iVar10 = FUN_00788010();
      if (iVar10 != 0) {
        FUN_00788010();
        FUN_00526e70();
        cVar8 = FUN_00526ea0();
        while (cVar8 != '\0') {
          FUN_00526e80();
          FUN_00526e90();
          FUN_004becb0();
          cVar8 = FUN_00526ea0();
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)DAT_00877690);
  }
LAB_00787ed7:
  iVar9 = (**(code **)(*(int *)(extraout_ECX + 0x272) + 0x30))();
  if (iVar9 == 0) {
    (**(code **)(*(int *)(extraout_ECX + 0x24e) + 0x30))();
  }
  ExceptionList = in_stack_00002cf4;
  return iVar9;
}


