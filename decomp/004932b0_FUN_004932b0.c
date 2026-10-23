// FUN_004932b0 @ 4932b0 size=2672

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004932b0(int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  void *pvVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  char *pcVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iStack_34;
  int *piStack_28;
  int *local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bdacc;
  pvStack_c = ExceptionList;
  iVar20 = (&DAT_0089cad8)[*(int *)(*(int *)(param_2 + 4) + 0xe)];
  iVar3 = (&DAT_0089cad8)[*(int *)(*(int *)(param_2 + 4) + 0x12)];
  ExceptionList = &pvStack_c;
  FUN_00586a70();
  FUN_0049ebd0();
  piVar1 = (int *)(iVar3 + 0xe);
  (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))();
  (**(code **)(*(int *)(iVar20 + 0xe) + 0xc))();
  FUN_0042b6c9();
  FUN_007a630a(param_1 + 0xed2);
  if (*(char *)(*(int *)(param_2 + 4) + 0x16) == '\0') {
    FUN_00588600();
    FUN_005885d0();
    FUN_00588600();
    FUN_00588670();
    FUN_00588640();
    FUN_00588670();
    FUN_00451290();
    cVar4 = FUN_00444290();
    if (cVar4 == '\0') {
      cVar4 = FUN_00444290();
      uVar11 = *(undefined4 *)(iVar3 + 6);
      if (cVar4 == '\0') {
        (**(code **)(*(int *)(iVar20 + 0xe) + 0xc))();
        (**(code **)(*piVar1 + 0xc))();
        FUN_006ea4c0(0x34,uVar11);
      }
      else {
        (**(code **)(*piVar1 + 0xc))();
        FUN_006ea2c0(0x33);
      }
    }
    else {
      (**(code **)(*(int *)(param_1 + 0xe) + 0xc))();
      FUN_006ea2c0(0x32);
    }
  }
  else {
    pcVar5 = (char *)(**(code **)(*(int *)(param_1 + 0xe) + 0xc))();
    uVar16 = 0xffffffff;
    do {
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      cVar4 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar4 != '\0');
    pcVar5 = operator_new(~uVar16);
    pcVar6 = (char *)(**(code **)(*(int *)(param_1 + 0xe) + 0xc))();
    uVar16 = 0xffffffff;
    do {
      pcVar19 = pcVar6;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar19 = pcVar6 + 1;
      cVar4 = *pcVar6;
      pcVar6 = pcVar19;
    } while (cVar4 != '\0');
    uVar16 = ~uVar16;
    pcVar6 = pcVar19 + -uVar16;
    for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pcVar5 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    }
    iStack_34 = *(int *)(param_1 + 6);
    iVar20 = *(int *)(param_1 + 0x1185e);
    iVar7 = FUN_0044d810();
    uVar16 = iVar7 - iVar20;
    uVar17 = (int)uVar16 >> 0x1f;
    param_2 = (uVar16 ^ uVar17) - uVar17;
    if (DAT_00dc17a0 == '\0') {
      iVar20 = 1;
      piStack_28 = &DAT_0089cadc;
      piVar18 = &DAT_00d686ae;
      do {
        if (*piStack_28 == 0) {
          if ((piVar18[-1] == *(int *)(param_1 + 6)) && (cVar4 = FUN_0044d840(), cVar4 == '\0')) {
            iVar7 = FUN_0044d810();
            uVar16 = iVar7 - *piVar18 >> 0x1f;
            iVar7 = (iVar7 - *piVar18 ^ uVar16) - uVar16;
          }
          else {
            if (*(int *)(param_1 + 0x1185a) != iVar20) goto LAB_004936c2;
            cVar4 = FUN_0044d840();
            if ((cVar4 != '\0') && (iVar7 = iVar20, *(int *)(param_1 + 0x1185a) != 0)) break;
            iVar7 = FUN_0044d810();
            uVar16 = iVar7 - *piVar18 >> 0x1f;
            iVar7 = (iVar7 - *piVar18 ^ uVar16) - uVar16;
          }
          if (iVar7 < param_2) {
            param_2 = iVar7;
            iStack_34 = iVar20;
          }
        }
LAB_004936c2:
        piVar18 = piVar18 + 0x2a;
        iVar20 = iVar20 + 1;
        piStack_28 = piStack_28 + 1;
        iVar7 = iStack_34;
      } while ((int)piVar18 < 0xd767c6);
    }
    else {
      iVar20 = *(int *)(param_1 + 6) * 0xa8;
      iVar7 = (**(code **)(*(int *)(&DAT_00d68640 + iVar20) + 4))();
      if (iVar7 < 1) {
        iVar20 = 1;
        piStack_28 = &DAT_0089cadc;
        piVar18 = &DAT_00d686aa;
        do {
          if ((*piStack_28 == 0) &&
             ((((*piVar18 == *(int *)(param_1 + 6) ||
                (iVar7 = *(int *)(param_1 + 0x1185a), iVar7 == iVar20)) ||
               ((iVar7 != 0 && (*piVar18 == iVar7)))) &&
              ((cVar4 = FUN_0042dd70(), cVar4 == '\0' && (cVar4 = FUN_0042ddd0(), cVar4 != '\0')))))
             ) {
            iVar7 = (**(code **)(*(int *)((int)piVar18 + 0x1a) + 4))();
            if (iVar7 < 1) {
LAB_004935b1:
              iVar7 = (**(code **)(piVar18[0xb] + 4))();
              if (iVar7 < 1) {
LAB_004935d5:
                iVar7 = (**(code **)(piVar18[2] + 4))();
                if (0 < iVar7) {
                  piVar9 = (int *)piVar18[3];
                  do {
                    if (piVar9 == (int *)0x0) goto LAB_00493618;
                    iVar7 = *piVar9;
                    piVar9 = (int *)piVar9[2];
                  } while (iVar7 != *(int *)(iVar3 + 6));
                }
                iVar7 = FUN_0044d810();
                uVar16 = iVar7 - piVar18[1] >> 0x1f;
                iVar7 = (iVar7 - piVar18[1] ^ uVar16) - uVar16;
                if (iVar7 < param_2) {
                  param_2 = iVar7;
                  iStack_34 = iVar20;
                }
              }
              else {
                piVar9 = (int *)piVar18[0xc];
                do {
                  if (piVar9 == (int *)0x0) goto LAB_004935d5;
                  iVar7 = *piVar9;
                  piVar9 = (int *)piVar9[2];
                } while (iVar7 != *(int *)(iVar3 + 6));
              }
            }
            else {
              piVar9 = *(int **)((int)piVar18 + 0x1e);
              do {
                if (piVar9 == (int *)0x0) goto LAB_004935b1;
                iVar7 = *piVar9;
                piVar9 = (int *)piVar9[2];
              } while ((&DAT_0089cad8)[iVar7] == 0);
            }
          }
LAB_00493618:
          piVar18 = piVar18 + 0x2a;
          iVar20 = iVar20 + 1;
          piStack_28 = piStack_28 + 1;
          iVar7 = iStack_34;
        } while ((int)piVar18 < 0xd767c2);
      }
      else {
        piVar18 = *(int **)(&DAT_00d68644 + iVar20);
joined_r0x00493406:
        iVar7 = iStack_34;
        if (piVar18 != (int *)0x0) {
          iVar20 = *piVar18;
          piVar18 = (int *)piVar18[2];
          if ((&DAT_0089cad8)[iVar20] == 0) {
            iVar7 = iVar20 * 0xa8;
            cVar4 = FUN_0042dd70();
            if ((cVar4 == '\0') && (cVar4 = FUN_0042ddd0(), cVar4 != '\0')) {
              iVar8 = (**(code **)(*(int *)(&DAT_00d6861c + iVar7) + 4))();
              if (iVar8 < 1) {
LAB_00493492:
                iVar8 = (**(code **)(*(int *)(&DAT_00d6862e + iVar7) + 4))();
                if (iVar8 < 1) {
LAB_004934bf:
                  iVar8 = (**(code **)(*(int *)(&DAT_00d6860a + iVar7) + 4))();
                  if (0 < iVar8) {
                    piVar9 = *(int **)(&DAT_00d6860e + iVar7);
                    do {
                      if (piVar9 == (int *)0x0) goto joined_r0x00493406;
                      iVar8 = *piVar9;
                      piVar9 = (int *)piVar9[2];
                    } while (iVar8 != *(int *)(iVar3 + 6));
                  }
                  iVar8 = FUN_0044d810();
                  uVar16 = iVar8 - *(int *)(&DAT_00d68606 + iVar7) >> 0x1f;
                  iVar7 = (iVar8 - *(int *)(&DAT_00d68606 + iVar7) ^ uVar16) - uVar16;
                  if (iVar7 < param_2) {
                    iStack_34 = iVar20;
                    param_2 = iVar7;
                  }
                }
                else {
                  piVar9 = *(int **)(&DAT_00d68632 + iVar7);
                  do {
                    if (piVar9 == (int *)0x0) goto LAB_004934bf;
                    iVar8 = *piVar9;
                    piVar9 = (int *)piVar9[2];
                  } while (iVar8 != *(int *)(iVar3 + 6));
                }
              }
              else {
                piVar9 = *(int **)(&DAT_00d68620 + iVar7);
                do {
                  if (piVar9 == (int *)0x0) goto LAB_00493492;
                  iVar8 = *piVar9;
                  piVar9 = (int *)piVar9[2];
                } while ((&DAT_0089cad8)[iVar8] == 0);
              }
            }
          }
          goto joined_r0x00493406;
        }
      }
    }
    iStack_34 = iVar7;
    if (iStack_34 != *(int *)(param_1 + 6)) {
      puVar10 = operator_new(0xc);
      uStack_4 = 0;
      if (puVar10 != (undefined4 *)0x0) {
        FUN_00498bf0();
        *puVar10 = &PTR_FUN_007e6968;
        *(int *)(puVar10[1] + 0xe) = iStack_34;
        *(undefined1 *)(puVar10[1] + 0x12) = 1;
      }
      uStack_4 = 0xffffffff;
      FUN_00565bc0();
    }
    pcVar5 = &DAT_00d56f2c;
    do {
      if (*pcVar5 != '\0') {
        FUN_0044dc80();
        FUN_00761440();
      }
      pcVar5 = pcVar5 + 3;
    } while ((int)pcVar5 < 0xd56f41);
    FUN_0044d8c0();
    iVar20 = *(int *)(param_1 + 0x3350);
    if ((iVar20 != *(int *)(iVar3 + 0x3350)) && (iVar20 != 0)) {
      uVar11 = FUN_00447250();
      FUN_00449290(uVar11);
      FUN_00460310();
      FUN_00473ee0();
    }
    piStack_28 = (int *)0x0;
    iStack_34 = 0;
    local_24 = &DAT_0089cad8;
    do {
      if ((int *)*(int *)(iVar3 + 6) != piStack_28) {
        *(undefined1 *)((int)piStack_28 + 0x34ac + param_1) = 0;
        FUN_005896d0();
        puVar10 = (undefined4 *)(*(int *)(param_1 + 0x12da) + 0x1a + iStack_34);
        sVar2 = *(short *)(DAT_00893530 + 0x18);
        *puVar10 = *(undefined4 *)(DAT_00893530 + 0x14);
        *(short *)(puVar10 + 1) = sVar2 + -10;
      }
      iVar7 = *local_24;
      if ((iVar7 != 0) && (iVar7 != iVar3)) {
        FUN_005896d0();
        *(undefined1 *)(*(int *)(param_1 + 6) + 0x34ac + iVar7) = 0;
        sVar2 = *(short *)(DAT_00893530 + 0x18);
        puVar10 = (undefined4 *)(*(int *)(iVar7 + 0x12da) + 0x1a + *(int *)(param_1 + 6) * 0x2c);
        *puVar10 = *(undefined4 *)(DAT_00893530 + 0x14);
        *(short *)(puVar10 + 1) = sVar2 + -10;
        cVar4 = FUN_005861e0();
        if (cVar4 != '\0') {
          pvVar12 = operator_new(0xc);
          uStack_4 = 1;
          if (pvVar12 != (void *)0x0) {
            uVar11 = FUN_00458280();
            uVar13 = FUN_00458280(uVar11);
            uVar22 = 2;
            uVar21 = 0x14;
            uVar14 = FUN_0045fec0(0x14,2,uVar13);
            FUN_00464820(0x89,uVar14,uVar21,uVar22,uVar13,uVar11);
          }
          uStack_4 = 0xffffffff;
          FUN_00565c50();
        }
        if (((*(int *)(*(int *)(iVar7 + 0x12da) + 0x3b30) == *(int *)(param_1 + 6)) &&
            (*(int *)(iVar7 + 0x3350) == iVar20)) && (iVar20 != 0)) {
          puVar10 = operator_new(0xc);
          uStack_4 = 2;
          if (puVar10 != (undefined4 *)0x0) {
            uVar11 = *(undefined4 *)(iVar7 + 6);
            pvVar12 = operator_new(0x1e);
            uStack_4 = CONCAT31(uStack_4._1_3_,3);
            if (pvVar12 != (void *)0x0) {
              FUN_004664c0();
            }
            FUN_0042d320();
            *puVar10 = &PTR_FUN_007e6384;
            *(undefined1 *)((int)puVar10 + 10) = 0;
            *(undefined2 *)puVar10[1] = 0xd6;
            iVar8 = puVar10[1];
            *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar7 + 4);
            *(undefined2 *)(iVar8 + 0xc) = *(undefined2 *)(iVar7 + 8);
            puVar15 = (undefined4 *)FUN_0042d2f0(0);
            iVar7 = puVar10[1];
            *(undefined4 *)(iVar7 + 2) = *puVar15;
            *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar15 + 1);
            iVar7 = puVar10[1];
            *puVar10 = &PTR_FUN_007e6364;
            *(undefined4 *)(iVar7 + 0x12) = *(undefined4 *)(iVar20 + 0xc);
            *(undefined2 *)(iVar7 + 0x16) = *(undefined2 *)(iVar20 + 0x10);
            *(undefined4 *)(puVar10[1] + 0x18) = uVar11;
            *(undefined1 *)(puVar10[1] + 0x1c) = 0;
          }
          uStack_4 = 0xffffffff;
          FUN_00565c30();
        }
      }
      local_24 = local_24 + 1;
      piStack_28 = (int *)((int)piStack_28 + 1);
      iStack_34 = iStack_34 + 0x2c;
    } while ((int)local_24 < 0x89d038);
    *(undefined4 *)(param_1 + 0x234) = 0x41a00000;
    FUN_00588600();
    FUN_005885d0();
    FUN_00588600();
    FUN_00588670();
    FUN_00588640();
    FUN_00588670();
    cVar4 = FUN_00444290();
    if (cVar4 == '\0') {
      cVar4 = FUN_00444290();
      if (cVar4 == '\0') {
        (**(code **)(*piVar1 + 0xc))();
        FUN_006ea2c0(0x31);
        FUN_00796cd8();
      }
      else {
        (**(code **)(*piVar1 + 0xc))();
        FUN_006ea0e0();
        FUN_00796cd8();
      }
    }
    else {
      FUN_006ea0e0();
      FUN_00796cd8();
    }
  }
  ExceptionList = pvStack_c;
  return 3;
}


