// FUN_00474250 @ 474250 size=15593

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00474250(int *param_1,int param_2)

{
  float fVar1;
  short sVar2;
  ushort uVar3;
  int *piVar4;
  void **ppvVar5;
  char cVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  void *pvVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  int iVar24;
  bool bVar25;
  float10 fVar26;
  float10 fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  bool local_a71;
  float local_a70;
  int *local_a6c;
  int *local_a60;
  int local_a5c;
  float fStack_a50;
  float fStack_a4c;
  float fStack_a48;
  float fStack_a44;
  int *local_a3c;
  int iStack_a18;
  int iStack_a14;
  int iStack_a10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bcfa7;
  local_c = ExceptionList;
  iVar19 = *(int *)(param_2 + 4);
  piVar4 = (int *)(&DAT_0089cad8)[*(int *)(iVar19 + 0x16)];
  iVar16 = (&DAT_0089cad8)[*(int *)(iVar19 + 0x1a)];
  if (piVar4 == (int *)0x0) {
    return 3;
  }
  ppvVar5 = &local_c;
  switch(*(undefined4 *)(iVar19 + 0xe)) {
  case 6:
    local_a5c = *(int *)(iVar19 + 0x1e);
    if (local_a5c < 0) {
      local_a5c = 0;
    }
    else if (7 < local_a5c) {
      local_a5c = 7;
    }
    ExceptionList = &local_c;
    FUN_0042b6c9();
    FUN_00588600();
    FUN_005885d0();
    FUN_00588600();
    if (((1 < local_a5c) && ((float)param_1[0xe55] * _DAT_00d7cc04 <= (float)piVar4[0xe55])) &&
       (local_a5c = local_a5c + -1, -1 < local_a5c)) {
      piVar9 = (int *)(&DAT_0083cce4 + local_a5c * 4);
      do {
        if ((&DAT_00d56f2d)[*piVar9 * 3] != '\0') {
          iVar19 = FUN_0044dc80();
          iVar16 = FUN_0044dc80();
          if (iVar16 != iVar19) {
            if (*(int *)(&DAT_0083cce4 + local_a5c * 4) != 7) {
              FUN_00761440();
              FUN_007604a0();
              FUN_0042b6c9();
              FUN_007a630a();
            }
            break;
          }
        }
        local_a5c = local_a5c + -1;
        piVar9 = piVar9 + -1;
      } while (-1 < local_a5c);
    }
    cVar6 = FUN_00444290();
    if (cVar6 == '\0') {
      cVar6 = FUN_00444290();
      if (cVar6 == '\0') {
        uVar17 = *(undefined4 *)((int)param_1 + 6);
        (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
        uVar15 = (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
        FUN_006eaf00(0x10,uVar17,&DAT_0088ebf8,uVar15);
        ppvVar5 = ExceptionList;
      }
      else {
        uVar17 = *(undefined4 *)((int)piVar4 + 6);
        (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
        uVar15 = (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
        FUN_006ead30(0x11,uVar17,uVar15);
        ppvVar5 = ExceptionList;
      }
    }
    else {
      uVar17 = *(undefined4 *)((int)param_1 + 6);
      (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
      uVar15 = (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
      FUN_006ead30(0xf,uVar17,uVar15);
      ppvVar5 = ExceptionList;
    }
    break;
  case 7:
    ppvVar5 = &local_c;
    if (*(int *)(iVar19 + 0x1e) != 0) {
      ExceptionList = &local_c;
      pcVar22 = (char *)(**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
      uVar20 = 0xffffffff;
      do {
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        cVar6 = *pcVar22;
        pcVar22 = pcVar22 + 1;
      } while (cVar6 != '\0');
      pcVar22 = operator_new(~uVar20);
      pcVar7 = (char *)(**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
      uVar20 = 0xffffffff;
      do {
        pcVar23 = pcVar7;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar23 = pcVar7 + 1;
        cVar6 = *pcVar7;
        pcVar7 = pcVar23;
      } while (cVar6 != '\0');
      uVar20 = ~uVar20;
      pcVar7 = pcVar23 + -uVar20;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar22 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar22 = pcVar22 + 1;
      }
      fStack_a50 = *(float *)((int)param_1 + 6);
      iVar19 = *(int *)((int)param_1 + 0x1185e);
      iVar16 = FUN_0044d810();
      uVar20 = iVar16 - iVar19;
      uVar21 = (int)uVar20 >> 0x1f;
      fStack_a4c = (float)((uVar20 ^ uVar21) - uVar21);
      if (DAT_00dc17a0 == '\0') {
        iVar19 = 1;
        local_a60 = &DAT_0089cadc;
        piVar9 = &DAT_00d686ae;
        do {
          if (*local_a60 == 0) {
            if ((piVar9[-1] == *(int *)((int)param_1 + 6)) &&
               (cVar6 = FUN_0044d840(), cVar6 == '\0')) {
              iVar16 = FUN_0044d810();
              uVar20 = iVar16 - *piVar9 >> 0x1f;
              iVar16 = (iVar16 - *piVar9 ^ uVar20) - uVar20;
            }
            else {
              if (*(int *)((int)param_1 + 0x1185a) != iVar19) goto LAB_00475537;
              cVar6 = FUN_0044d840();
              if ((cVar6 != '\0') && (fVar1 = (float)iVar19, *(int *)((int)param_1 + 0x1185a) != 0))
              break;
              iVar16 = FUN_0044d810();
              uVar20 = iVar16 - *piVar9 >> 0x1f;
              iVar16 = (iVar16 - *piVar9 ^ uVar20) - uVar20;
            }
            if (iVar16 < (int)fStack_a4c) {
              fStack_a50 = (float)iVar19;
              fStack_a4c = (float)iVar16;
            }
          }
LAB_00475537:
          piVar9 = piVar9 + 0x2a;
          iVar19 = iVar19 + 1;
          local_a60 = local_a60 + 1;
          fVar1 = fStack_a50;
        } while ((int)piVar9 < 0xd767c6);
      }
      else {
        iVar19 = *(int *)((int)param_1 + 6) * 0xa8;
        iVar16 = (**(code **)(*(int *)(&DAT_00d68640 + iVar19) + 4))();
        if (iVar16 < 1) {
          iVar19 = 1;
          local_a60 = &DAT_0089cadc;
          piVar9 = &DAT_00d686aa;
          do {
            if ((*local_a60 == 0) &&
               ((((*piVar9 == *(int *)((int)param_1 + 6) ||
                  (iVar16 = *(int *)((int)param_1 + 0x1185a), iVar16 == iVar19)) ||
                 ((iVar16 != 0 && (*piVar9 == iVar16)))) &&
                ((cVar6 = FUN_0042dd70(), cVar6 == '\0' && (cVar6 = FUN_0042ddd0(), cVar6 != '\0')))
                ))) {
              iVar16 = (**(code **)(*(int *)((int)piVar9 + 0x1a) + 4))();
              if (iVar16 < 1) {
LAB_00475426:
                iVar16 = (**(code **)(piVar9[0xb] + 4))();
                if (iVar16 < 1) {
LAB_0047544a:
                  iVar16 = (**(code **)(piVar9[2] + 4))();
                  if (0 < iVar16) {
                    piVar8 = (int *)piVar9[3];
                    do {
                      if (piVar8 == (int *)0x0) goto LAB_0047548d;
                      iVar16 = *piVar8;
                      piVar8 = (int *)piVar8[2];
                    } while (iVar16 != *(int *)((int)piVar4 + 6));
                  }
                  iVar16 = FUN_0044d810();
                  uVar20 = iVar16 - piVar9[1] >> 0x1f;
                  iVar16 = (iVar16 - piVar9[1] ^ uVar20) - uVar20;
                  if (iVar16 < (int)fStack_a4c) {
                    fStack_a50 = (float)iVar19;
                    fStack_a4c = (float)iVar16;
                  }
                }
                else {
                  piVar8 = (int *)piVar9[0xc];
                  do {
                    if (piVar8 == (int *)0x0) goto LAB_0047544a;
                    iVar16 = *piVar8;
                    piVar8 = (int *)piVar8[2];
                  } while (iVar16 != *(int *)((int)piVar4 + 6));
                }
              }
              else {
                piVar8 = *(int **)((int)piVar9 + 0x1e);
                do {
                  if (piVar8 == (int *)0x0) goto LAB_00475426;
                  iVar16 = *piVar8;
                  piVar8 = (int *)piVar8[2];
                } while ((&DAT_0089cad8)[iVar16] == 0);
              }
            }
LAB_0047548d:
            piVar9 = piVar9 + 0x2a;
            iVar19 = iVar19 + 1;
            local_a60 = local_a60 + 1;
            fVar1 = fStack_a50;
          } while ((int)piVar9 < 0xd767c2);
        }
        else {
          piVar9 = *(int **)(&DAT_00d68644 + iVar19);
joined_r0x0047527b:
          fVar1 = fStack_a50;
          if (piVar9 != (int *)0x0) {
            iVar19 = *piVar9;
            piVar9 = (int *)piVar9[2];
            if ((&DAT_0089cad8)[iVar19] == 0) {
              iVar16 = iVar19 * 0xa8;
              cVar6 = FUN_0042dd70();
              if ((cVar6 == '\0') && (cVar6 = FUN_0042ddd0(), cVar6 != '\0')) {
                iVar11 = (**(code **)(*(int *)(&DAT_00d6861c + iVar16) + 4))();
                if (iVar11 < 1) {
LAB_00475307:
                  iVar11 = (**(code **)(*(int *)(&DAT_00d6862e + iVar16) + 4))();
                  if (iVar11 < 1) {
LAB_00475334:
                    iVar11 = (**(code **)(*(int *)(&DAT_00d6860a + iVar16) + 4))();
                    if (0 < iVar11) {
                      piVar8 = *(int **)(&DAT_00d6860e + iVar16);
                      do {
                        if (piVar8 == (int *)0x0) goto joined_r0x0047527b;
                        iVar11 = *piVar8;
                        piVar8 = (int *)piVar8[2];
                      } while (iVar11 != *(int *)((int)piVar4 + 6));
                    }
                    iVar11 = FUN_0044d810();
                    uVar20 = iVar11 - *(int *)(&DAT_00d68606 + iVar16) >> 0x1f;
                    iVar16 = (iVar11 - *(int *)(&DAT_00d68606 + iVar16) ^ uVar20) - uVar20;
                    if (iVar16 < (int)fStack_a4c) {
                      fStack_a50 = (float)iVar19;
                      fStack_a4c = (float)iVar16;
                    }
                  }
                  else {
                    piVar8 = *(int **)(&DAT_00d68632 + iVar16);
                    do {
                      if (piVar8 == (int *)0x0) goto LAB_00475334;
                      iVar11 = *piVar8;
                      piVar8 = (int *)piVar8[2];
                    } while (iVar11 != *(int *)((int)piVar4 + 6));
                  }
                }
                else {
                  piVar8 = *(int **)(&DAT_00d68620 + iVar16);
                  do {
                    if (piVar8 == (int *)0x0) goto LAB_00475307;
                    iVar11 = *piVar8;
                    piVar8 = (int *)piVar8[2];
                  } while ((&DAT_0089cad8)[iVar11] == 0);
                }
              }
            }
            goto joined_r0x0047527b;
          }
        }
      }
      fStack_a50 = fVar1;
      if (fStack_a50 != (float)*(int *)((int)param_1 + 6)) {
        puVar18 = operator_new(0xc);
        local_4 = 0xd;
        if (puVar18 != (undefined4 *)0x0) {
          FUN_00498bf0();
          *puVar18 = &PTR_FUN_007e6968;
          *(float *)(puVar18[1] + 0xe) = fStack_a50;
          *(undefined1 *)(puVar18[1] + 0x12) = 1;
        }
        local_4 = 0xffffffff;
        FUN_00565bc0();
      }
      pcVar22 = &DAT_00d56f2c;
      do {
        if (*pcVar22 != '\0') {
          FUN_0044dc80();
          FUN_00761440();
        }
        pcVar22 = pcVar22 + 3;
      } while ((int)pcVar22 < 0xd56f41);
      FUN_0044d8c0();
      iVar19 = param_1[0xcd4];
      if ((iVar19 != piVar4[0xcd4]) && (iVar19 != 0)) {
        FUN_00447250();
        FUN_00449290();
        FUN_00460310();
        FUN_00473ee0();
      }
      local_a60 = param_1 + 0xd2b;
      local_a3c = &DAT_0089cad8;
      do {
        *(undefined1 *)local_a60 = 0;
        FUN_005896d0();
        iVar16 = *local_a3c;
        if (iVar16 != 0) {
          FUN_005896d0();
          *(undefined1 *)(iVar16 + 0x34ac + *(int *)((int)param_1 + 6)) = 0;
          sVar2 = *(short *)(DAT_00893530 + 0x18);
          puVar18 = (undefined4 *)
                    (*(int *)(iVar16 + 0x12da) + 0x1a + *(int *)((int)param_1 + 6) * 0x2c);
          *puVar18 = *(undefined4 *)(DAT_00893530 + 0x14);
          *(short *)(puVar18 + 1) = sVar2 + -10;
          cVar6 = FUN_005861e0();
          if (cVar6 != '\0') {
            pvVar10 = operator_new(0xc);
            local_4 = 0xe;
            if (pvVar10 != (void *)0x0) {
              FUN_00458280();
              uVar17 = FUN_00458280();
              uVar29 = 2;
              uVar28 = 0x14;
              uVar15 = FUN_0045fec0(0x14,2,uVar17);
              FUN_00464820(0x89,uVar15,uVar28,uVar29,uVar17);
            }
            local_4 = 0xffffffff;
            FUN_00565c50();
          }
          if (((iVar19 != 0) &&
              (*(int *)(*(int *)(iVar16 + 0x12da) + 0x3b30) == *(int *)((int)param_1 + 6))) &&
             (*(int *)(iVar16 + 0x3350) == iVar19)) {
            puVar18 = operator_new(0xc);
            local_4 = 0xf;
            if (puVar18 != (undefined4 *)0x0) {
              uVar17 = *(undefined4 *)(iVar16 + 6);
              FUN_00498cd0();
              iVar16 = puVar18[1];
              *puVar18 = &PTR_FUN_007e6364;
              *(undefined4 *)(iVar16 + 0x12) = *(undefined4 *)(iVar19 + 0xc);
              *(undefined2 *)(iVar16 + 0x16) = *(undefined2 *)(iVar19 + 0x10);
              *(undefined4 *)(puVar18[1] + 0x18) = uVar17;
              *(undefined1 *)(puVar18[1] + 0x1c) = 0;
            }
            local_4 = 0xffffffff;
            FUN_00565c30();
          }
        }
        local_a60 = (int *)((int)local_a60 + 1);
        local_a3c = local_a3c + 1;
      } while ((int)local_a3c < 0x89d038);
      param_1[0x8d] = 0x41a00000;
      FUN_00588600();
      FUN_005885d0();
      FUN_00588600();
      FUN_00588670();
      FUN_00588640();
      FUN_00588670();
      cVar6 = FUN_00444290();
      if (cVar6 == '\0') {
        cVar6 = FUN_00444290();
        if (cVar6 == '\0') {
          (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
          FUN_006ea2c0();
          FUN_00796cd8();
          ppvVar5 = ExceptionList;
        }
        else {
          (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
          FUN_006ea0e0();
          FUN_00796cd8();
          ppvVar5 = ExceptionList;
        }
      }
      else {
        FUN_006ea0e0();
        FUN_00796cd8();
        ppvVar5 = ExceptionList;
      }
    }
    break;
  case 0xb:
    ExceptionList = &local_c;
    iVar19 = FUN_00498cc0();
    if (*(int *)(iVar19 + 0x12) == 2) {
      FUN_00458280();
      FUN_004912c0();
      cVar6 = FUN_00444290();
      if (cVar6 == '\0') {
        cVar6 = FUN_00444290();
        if (cVar6 == '\0') {
          FUN_00493d20();
          (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
          (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
          uVar17 = FUN_00458280();
          FUN_006eab80(0x43,uVar17);
        }
        else {
          FUN_00493d20();
          (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
          FUN_00458280();
          FUN_006eaa80(0x42);
        }
      }
      else {
        FUN_00493d20();
        (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
        FUN_00458280();
        FUN_006eaa80(0x44);
      }
      FUN_00458280();
      FUN_00488220();
      ppvVar5 = ExceptionList;
    }
    else {
      iVar19 = FUN_00498cc0();
      ppvVar5 = ExceptionList;
      if (*(int *)(iVar19 + 0x12) == 1) {
        cVar6 = FUN_00444290();
        if (cVar6 == '\0') {
          cVar6 = FUN_00444290();
          if (cVar6 == '\0') {
            FUN_00493d20();
            (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
            (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
            uVar17 = FUN_00458280();
            FUN_006eab80(0x46,uVar17);
          }
          else {
            FUN_00493d20();
            (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
            FUN_00458280();
            FUN_006eaa80(0x45);
          }
        }
        else {
          FUN_00493d20();
          (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
          FUN_00458280();
          FUN_006eaa80(0x47);
        }
        FUN_00498cc0();
        FUN_00488290();
        ppvVar5 = ExceptionList;
      }
    }
    break;
  case 0xc:
    ExceptionList = &local_c;
    FUN_00458280();
    FUN_004912c0();
    FUN_00458280();
    FUN_004912c0();
    cVar6 = FUN_00444290();
    if (cVar6 == '\0') {
      cVar6 = FUN_00444290();
      if (cVar6 == '\0') {
        FUN_00493d20();
        (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
        (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
        uVar17 = FUN_00458280();
        FUN_006eab80(0x49,uVar17);
        ppvVar5 = ExceptionList;
      }
      else {
        FUN_00493d20();
        (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
        FUN_00458280();
        FUN_006eaa80(0x48);
        ppvVar5 = ExceptionList;
      }
    }
    else {
      FUN_00493d20();
      (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
      FUN_00458280();
      FUN_006eaa80(0x4a);
      ppvVar5 = ExceptionList;
    }
    break;
  case 0xf:
    ExceptionList = &local_c;
    cVar6 = FUN_00444290();
    if (cVar6 == '\0') {
      uVar17 = *(undefined4 *)((int)piVar4 + 6);
      (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
      (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
      (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
      FUN_006eab80(0x23,uVar17);
    }
    else {
      (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
      (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
      FUN_006eaa80(0x1b);
    }
    FUN_00473ee0();
    FUN_0044aea0();
    FUN_00447360();
    FUN_005886c0();
    ExceptionList = local_c;
    return 3;
  case 0x10:
    if (iVar16 == 0) {
      return 3;
    }
    ExceptionList = &local_c;
    FUN_00463240();
    iVar19 = param_1[0xcd4];
    piVar9 = *(int **)((int)piVar4 + 0xe8b6);
    while (piVar9 != (int *)0x0) {
      piVar8 = (int *)piVar9[2];
      iVar11 = *piVar9;
      piVar9 = piVar8;
      if (((*(int **)(DAT_00ab27b4 + 0x3d4 + iVar11 * 0x4b2) == param_1) &&
          (iVar11 = *(int *)(DAT_00ab27b4 + iVar11 * 0x4b2 + 0x12),
          *(int *)((int)param_1 + 0x117de) != iVar11)) &&
         (iVar13 = FUN_0044e1b0(), iVar13 != iVar11)) {
        FUN_004e7190();
      }
    }
    piVar9 = (int *)piVar4[0x3a32];
    while (piVar9 != (int *)0x0) {
      piVar8 = (int *)piVar9[2];
      iVar11 = *piVar9;
      piVar9 = piVar8;
      if (((*(int **)(DAT_00ab27b4 + 0x3d4 + iVar11 * 0x4b2) == param_1) &&
          (iVar11 = *(int *)(DAT_00ab27b4 + iVar11 * 0x4b2 + 0x12),
          *(int *)((int)param_1 + 0x117de) != iVar11)) &&
         (iVar13 = FUN_0044e1b0(), iVar13 != iVar11)) {
        FUN_004e7190();
      }
    }
    if (*(int *)(iVar16 + 0x3350) != 0) {
      FUN_00465c40();
      FUN_00447250();
      FUN_00449290();
      FUN_00460310();
    }
    if (piVar4[0xcd4] == 0) {
      (**(code **)(*(int *)(param_1[0x48] + 0x204) + 0x18))();
      (**(code **)(*(int *)(param_1[0x48] + 0x1c0) + 0x18))();
      (**(code **)(*(int *)(piVar4[0x48] + 0x204) + 0x18))();
      (**(code **)(*(int *)(piVar4[0x48] + 0x1c0) + 0x18))();
      puVar18 = *(undefined4 **)(param_1[0x48] + 0xb3e);
      if (puVar18 != (undefined4 *)0x0) {
        do {
          piVar9 = puVar18 + 2;
          if (*(int *)*puVar18 == *(int *)((int)piVar4 + 6)) {
            (**(code **)(*(int *)(param_1[0x48] + 0xb3a) + 0x18))();
            break;
          }
          puVar18 = (undefined4 *)*piVar9;
        } while ((undefined4 *)*piVar9 != (undefined4 *)0x0);
      }
      puVar18 = *(undefined4 **)(piVar4[0x48] + 0xb3e);
      if (puVar18 != (undefined4 *)0x0) {
        do {
          piVar9 = puVar18 + 2;
          if (*(int *)*puVar18 == *(int *)((int)param_1 + 6)) {
            (**(code **)(*(int *)(piVar4[0x48] + 0xb3a) + 0x18))();
            break;
          }
          puVar18 = (undefined4 *)*piVar9;
        } while ((undefined4 *)*piVar9 != (undefined4 *)0x0);
      }
    }
    else {
      FUN_00465c40();
      uVar17 = FUN_00447250();
      FUN_00449290(uVar17);
      FUN_00460220();
      FUN_004512f0();
      piVar9 = *(int **)(*(int *)(piVar4[0xcd4] + 0x22) + 4);
joined_r0x004744b2:
      if (piVar9 != (int *)0x0) {
        piVar8 = (int *)piVar9[2];
        iVar16 = (&DAT_0089cad8)[*piVar9];
        piVar9 = piVar8;
        if (iVar16 == 0) {
          if (DAT_00dc4b5f != '\0') {
            (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
            (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
            FUN_00429a50();
          }
          (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
          (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
          FUN_00429a00();
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        else {
          (**(code **)(*(int *)(param_1[0x48] + 0x204) + 0x18))();
          (**(code **)(*(int *)(param_1[0x48] + 0x1c0) + 0x18))();
          (**(code **)(*(int *)(*(int *)(iVar16 + 0x120) + 0x204) + 0x18))();
          (**(code **)(*(int *)(*(int *)(iVar16 + 0x120) + 0x1c0) + 0x18))();
          puVar18 = *(undefined4 **)(param_1[0x48] + 0xb3e);
          if (puVar18 != (undefined4 *)0x0) {
            do {
              piVar8 = puVar18 + 2;
              if (*(int *)*puVar18 == *(int *)(iVar16 + 6)) {
                (**(code **)(*(int *)(param_1[0x48] + 0xb3a) + 0x18))();
                break;
              }
              puVar18 = (undefined4 *)*piVar8;
            } while ((undefined4 *)*piVar8 != (undefined4 *)0x0);
          }
          puVar18 = *(undefined4 **)(*(int *)(iVar16 + 0x120) + 0xb3e);
          if (puVar18 != (undefined4 *)0x0) {
            do {
              piVar8 = puVar18 + 2;
              if (*(int *)*puVar18 == *(int *)((int)param_1 + 6)) {
                (**(code **)(*(int *)(*(int *)(iVar16 + 0x120) + 0xb3a) + 0x18))();
                break;
              }
              puVar18 = (undefined4 *)*piVar8;
            } while ((undefined4 *)*piVar8 != (undefined4 *)0x0);
          }
        }
        goto joined_r0x004744b2;
      }
    }
    puVar18 = *(undefined4 **)(param_1[0x48] + 0x22c);
    if (puVar18 != (undefined4 *)0x0) {
      do {
        piVar9 = puVar18 + 2;
        if (*(int *)*puVar18 == *(int *)((int)piVar4 + 6)) {
          (**(code **)(*(int *)(param_1[0x48] + 0x228) + 0x18))();
          break;
        }
        puVar18 = (undefined4 *)*piVar9;
      } while ((undefined4 *)*piVar9 != (undefined4 *)0x0);
    }
    puVar18 = *(undefined4 **)(piVar4[0x48] + 0x22c);
    if (puVar18 != (undefined4 *)0x0) {
      do {
        piVar9 = puVar18 + 2;
        if (*(int *)*puVar18 == *(int *)((int)param_1 + 6)) {
          (**(code **)(*(int *)(piVar4[0x48] + 0x228) + 0x18))();
          break;
        }
        puVar18 = (undefined4 *)*piVar9;
      } while ((undefined4 *)*piVar9 != (undefined4 *)0x0);
    }
    puVar18 = *(undefined4 **)(param_1[0x48] + 0x1d6);
    if (puVar18 != (undefined4 *)0x0) {
      do {
        piVar9 = puVar18 + 2;
        if (*(int *)*puVar18 == *(int *)((int)piVar4 + 6)) {
          (**(code **)(*(int *)(param_1[0x48] + 0x1d2) + 0x18))();
          break;
        }
        puVar18 = (undefined4 *)*piVar9;
      } while ((undefined4 *)*piVar9 != (undefined4 *)0x0);
    }
    puVar18 = *(undefined4 **)(piVar4[0x48] + 0x1d6);
    if (puVar18 != (undefined4 *)0x0) {
      do {
        piVar9 = puVar18 + 2;
        if (*(int *)*puVar18 == *(int *)((int)param_1 + 6)) {
          (**(code **)(*(int *)(piVar4[0x48] + 0x1d2) + 0x18))();
          break;
        }
        puVar18 = (undefined4 *)*piVar9;
      } while ((undefined4 *)*piVar9 != (undefined4 *)0x0);
    }
    pvVar10 = operator_new(8);
    local_4 = 0;
    if (pvVar10 == (void *)0x0) {
      puVar18 = (undefined4 *)0x0;
    }
    else {
      puVar18 = (undefined4 *)FUN_0076c770();
    }
    uVar17 = *(undefined4 *)((int)piVar4 + 6);
    puVar18[1] = 100;
    *puVar18 = uVar17;
    iVar16 = param_1[0x48];
    local_4 = 0xffffffff;
    iVar11 = *(int *)(iVar16 + 0x230);
    pvVar10 = operator_new(0xe);
    local_4 = 1;
    if (pvVar10 == (void *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar17 = FUN_0049a850();
    }
    iVar13 = *(int *)(iVar16 + 0x234);
    local_4 = 0xffffffff;
    *(undefined4 *)(iVar16 + 0x230) = uVar17;
    *(int *)(iVar16 + 0x234) = iVar13 + 1;
    if (iVar13 == 0) {
      *(undefined4 *)(iVar16 + 0x22c) = uVar17;
    }
    else {
      *(undefined4 *)(iVar11 + 8) = uVar17;
    }
    pvVar10 = operator_new(8);
    local_4 = 2;
    if (pvVar10 == (void *)0x0) {
      puVar18 = (undefined4 *)0x0;
    }
    else {
      puVar18 = (undefined4 *)FUN_0076c770();
    }
    uVar17 = *(undefined4 *)((int)piVar4 + 6);
    puVar18[1] = 100;
    *puVar18 = uVar17;
    iVar16 = param_1[0x48];
    local_4 = 0xffffffff;
    iVar11 = *(int *)(iVar16 + 0x1da);
    pvVar10 = operator_new(0xe);
    local_4 = 3;
    if (pvVar10 == (void *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar17 = FUN_0049a850();
    }
    iVar13 = *(int *)(iVar16 + 0x1de);
    local_4 = 0xffffffff;
    *(undefined4 *)(iVar16 + 0x1da) = uVar17;
    *(int *)(iVar16 + 0x1de) = iVar13 + 1;
    if (iVar13 == 0) {
      *(undefined4 *)(iVar16 + 0x1d6) = uVar17;
    }
    else {
      *(undefined4 *)(iVar11 + 8) = uVar17;
    }
    pvVar10 = operator_new(8);
    local_4 = 4;
    if (pvVar10 == (void *)0x0) {
      puVar18 = (undefined4 *)0x0;
    }
    else {
      puVar18 = (undefined4 *)FUN_0076c770();
    }
    uVar17 = *(undefined4 *)((int)param_1 + 6);
    puVar18[1] = 100;
    *puVar18 = uVar17;
    iVar16 = piVar4[0x48];
    local_4 = 0xffffffff;
    iVar11 = *(int *)(iVar16 + 0x230);
    pvVar10 = operator_new(0xe);
    local_4 = 5;
    if (pvVar10 == (void *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar17 = FUN_0049a850();
    }
    iVar13 = *(int *)(iVar16 + 0x234);
    local_4 = 0xffffffff;
    *(undefined4 *)(iVar16 + 0x230) = uVar17;
    *(int *)(iVar16 + 0x234) = iVar13 + 1;
    if (iVar13 == 0) {
      *(undefined4 *)(iVar16 + 0x22c) = uVar17;
    }
    else {
      *(undefined4 *)(iVar11 + 8) = uVar17;
    }
    pvVar10 = operator_new(8);
    local_4 = 6;
    if (pvVar10 == (void *)0x0) {
      puVar18 = (undefined4 *)0x0;
    }
    else {
      puVar18 = (undefined4 *)FUN_0076c770();
    }
    uVar17 = *(undefined4 *)((int)param_1 + 6);
    puVar18[1] = 100;
    *puVar18 = uVar17;
    iVar16 = piVar4[0x48];
    local_4 = 0xffffffff;
    iVar11 = *(int *)(iVar16 + 0x1da);
    pvVar10 = operator_new(0xe);
    local_4 = 7;
    if (pvVar10 == (void *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar17 = FUN_0049a850();
    }
    iVar13 = *(int *)(iVar16 + 0x1de);
    local_4 = 0xffffffff;
    *(undefined4 *)(iVar16 + 0x1da) = uVar17;
    *(int *)(iVar16 + 0x1de) = iVar13 + 1;
    if (iVar13 == 0) {
      *(undefined4 *)(iVar16 + 0x1d6) = uVar17;
    }
    else {
      *(undefined4 *)(iVar11 + 8) = uVar17;
    }
    local_a60 = param_1 + 0xd2b;
    local_a6c = &DAT_0089cad8;
    do {
      *(undefined1 *)local_a60 = 0;
      FUN_005896d0();
      iVar16 = *local_a6c;
      if (iVar16 != 0) {
        FUN_005896d0();
        *(undefined1 *)(iVar16 + 0x34ac + *(int *)((int)param_1 + 6)) = 0;
        sVar2 = *(short *)(DAT_00893530 + 0x18);
        puVar18 = (undefined4 *)
                  (*(int *)(iVar16 + 0x12da) + 0x1a + *(int *)((int)param_1 + 6) * 0x2c);
        *puVar18 = *(undefined4 *)(DAT_00893530 + 0x14);
        *(short *)(puVar18 + 1) = sVar2 + -10;
        cVar6 = FUN_005861e0();
        if (cVar6 != '\0') {
          pvVar10 = operator_new(0xc);
          local_4 = 8;
          if (pvVar10 != (void *)0x0) {
            FUN_00458280();
            uVar17 = FUN_00458280();
            uVar29 = 2;
            uVar28 = 0x14;
            uVar15 = FUN_0045fec0(0x14,2,uVar17);
            FUN_00464820(0x89,uVar15,uVar28,uVar29,uVar17);
          }
          local_4 = 0xffffffff;
          FUN_00565c50();
        }
        if (((*(int *)(*(int *)(iVar16 + 0x12da) + 0x3b30) == *(int *)((int)param_1 + 6)) &&
            (*(int *)(iVar16 + 0x3350) != 0)) && (*(int *)(iVar16 + 0x3350) == iVar19)) {
          puVar18 = operator_new(0xc);
          local_4 = 9;
          if (puVar18 != (undefined4 *)0x0) {
            uVar17 = *(undefined4 *)(iVar16 + 6);
            FUN_00498cd0();
            iVar16 = puVar18[1];
            *puVar18 = &PTR_FUN_007e6364;
            *(undefined4 *)(iVar16 + 0x12) = *(undefined4 *)(iVar19 + 0xc);
            *(undefined2 *)(iVar16 + 0x16) = *(undefined2 *)(iVar19 + 0x10);
            *(undefined4 *)(puVar18[1] + 0x18) = uVar17;
            *(undefined1 *)(puVar18[1] + 0x1c) = 0;
          }
          local_4 = 0xffffffff;
          FUN_00565c30();
        }
      }
      local_a60 = (int *)((int)local_a60 + 1);
      local_a6c = local_a6c + 1;
    } while ((int)local_a6c < 0x89d038);
    FUN_005896d0();
    *(undefined4 *)(*(int *)((int)param_1 + 0x12da) + 0x3b30) = *(undefined4 *)((int)piVar4 + 6);
    if (*(int *)(*(int *)(param_2 + 4) + 0x1e) < 1) {
      fVar1 = (float)piVar4[0xcd3] + _DAT_007e409c;
      if ((float)piVar4[0xcd3] + _DAT_007e409c < _DAT_007e3380) {
        fVar1 = _DAT_007e3380;
      }
      piVar4[0xcd3] = (int)fVar1;
    }
    pcVar22 = &DAT_00d56f2c;
    do {
      if (*pcVar22 != '\0') {
        FUN_0044dc80();
        FUN_00761440();
      }
      pcVar22 = pcVar22 + 3;
    } while ((int)pcVar22 < 0xd56f41);
    FUN_0044d8c0();
    iVar19 = FUN_004a0750();
    if (*(int **)(iVar19 + 0x3d4) != param_1) {
      FUN_00449650();
    }
    FUN_00588600();
    FUN_005885d0();
    FUN_00588600();
    FUN_00473ee0();
    cVar6 = FUN_00444290();
    if (cVar6 == '\0') {
      uVar17 = *(undefined4 *)((int)param_1 + 6);
      (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
      (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
      FUN_006eab80(0xc,uVar17);
    }
    else {
      (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
      FUN_006eaa80(0xb);
    }
    piVar9 = &DAT_0089cad8;
    do {
      if ((((int *)*piVar9 != (int *)0x0) && ((int *)*piVar9 != param_1)) &&
         (iVar19 = FUN_005862f0(), iVar19 != 0)) {
        FUN_00473ee0();
      }
      piVar9 = piVar9 + 1;
    } while ((int)piVar9 < 0x89d038);
    cVar6 = FUN_0042e980();
    if ((cVar6 != '\0') && (FUN_005b0ad0(), DAT_00dc1791 != '\0')) {
      FUN_004734e0();
      local_4 = 10;
      piVar9 = &DAT_0089cad8;
      do {
        iVar19 = iStack_a18;
        iVar16 = iStack_a14;
        if (((*piVar9 != 0) && (iVar11 = *(int *)(*(int *)(*piVar9 + 0x12da) + 0x3b30), iVar11 != 0)
            ) && (iVar11 == *(int *)((int)param_1 + 6))) {
          pvVar10 = operator_new(0xe);
          local_4._0_1_ = 0xb;
          if (pvVar10 == (void *)0x0) {
            iVar16 = 0;
          }
          else {
            iVar16 = FUN_00473a90();
          }
          local_4 = CONCAT31(local_4._1_3_,10);
          iVar11 = iStack_a10 + 1;
          bVar25 = iStack_a10 != 0;
          iVar19 = iVar16;
          iStack_a10 = iVar11;
          if (bVar25) {
            *(int *)(iStack_a14 + 8) = iVar16;
            iVar19 = iStack_a18;
          }
        }
        iStack_a14 = iVar16;
        iStack_a18 = iVar19;
        piVar9 = piVar9 + 1;
      } while ((int)piVar9 < 0x89d038);
      while (iStack_a18 != 0) {
        iStack_a18 = *(int *)(iStack_a18 + 8);
        pvVar10 = operator_new(0xc);
        local_4._0_1_ = 0xc;
        if (pvVar10 != (void *)0x0) {
          FUN_00458280();
          uVar17 = FUN_00458280();
          uVar29 = 2;
          uVar28 = 0x10;
          uVar15 = FUN_0045fec0(0x10,2,uVar17);
          FUN_00464820(0x89,uVar15,uVar28,uVar29,uVar17);
        }
        local_4 = CONCAT31(local_4._1_3_,10);
        FUN_00565ca0();
      }
      local_4 = 0xffffffff;
      FUN_004309c0();
    }
    (**(code **)(*param_1 + 0x490))();
    (**(code **)(*piVar4 + 0x490))();
    FUN_00462380();
    FUN_005886c0();
    if (param_1[0xcd4] == 0) {
      iVar19 = param_1[0x3a29];
      while (iVar19 != 0) {
        iVar19 = *(int *)(iVar19 + 8);
        FUN_004e9370();
        FUN_004ea310();
        FUN_004e8540();
      }
      iVar19 = piVar4[0x3a29];
      while (iVar19 != 0) {
        iVar19 = *(int *)(iVar19 + 8);
        FUN_004e9370();
        FUN_004ea310();
        FUN_004e8540();
      }
    }
    else {
      piVar9 = *(int **)(*(int *)(param_1[0xcd4] + 0x22) + 4);
      while (piVar9 != (int *)0x0) {
        piVar8 = (int *)piVar9[2];
        iVar19 = *(int *)((&DAT_0089cad8)[*piVar9] + 0xe8a4);
        while (piVar9 = piVar8, iVar19 != 0) {
          iVar19 = *(int *)(iVar19 + 8);
          FUN_004e9370();
          FUN_004ea310();
          FUN_004e8540();
        }
      }
    }
    if (DAT_00a98440 == 3) {
      FUN_004dcb20();
    }
    FUN_004cc729();
    if (DAT_00a98440 == 3) {
      FUN_004dcb20();
    }
    if ((piVar4[0xcd4] != 0) && (cVar6 = FUN_00584e20(), cVar6 != '\0')) {
      (**(code **)(*DAT_00d0ca90 + 0x490))();
    }
    ppvVar5 = ExceptionList;
    if (*(int *)((int)DAT_00d0ca90 + 0x21e62) == 0x16) {
      iVar19 = *(int *)DAT_00d0ca90[0x878f];
      FUN_0061b9e0();
      (**(code **)(iVar19 + 0x74))();
      ppvVar5 = ExceptionList;
    }
    break;
  case 0x11:
    if (*(int *)(iVar19 + 0x12) == 2) {
      ExceptionList = &local_c;
      FUN_0049f380();
      cVar6 = FUN_00444290();
      if (cVar6 == '\0') {
        cVar6 = FUN_00444290();
        if (cVar6 == '\0') {
          uVar17 = *(undefined4 *)((int)param_1 + 6);
          (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
          (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
          FUN_006ead30(0x3d,uVar17,&DAT_0088ebf8);
        }
        else {
          uVar17 = *(undefined4 *)((int)piVar4 + 6);
          (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
          FUN_006eab80(0x3e,uVar17);
        }
      }
      else {
        uVar17 = *(undefined4 *)((int)param_1 + 6);
        (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
        FUN_006eab80(0x3c,uVar17);
      }
      FUN_00588600();
      FUN_005885d0();
      FUN_00588600();
      piVar9 = *(int **)((int)param_1 + 0xe8b6);
      while (piVar9 != (int *)0x0) {
        piVar8 = (int *)piVar9[2];
        iVar19 = *piVar9;
        piVar9 = piVar8;
        if (*(int **)(DAT_00ab27b4 + 0x3d4 + iVar19 * 0x4b2) == piVar4) {
          FUN_004e7190();
        }
      }
      piVar9 = (int *)param_1[0x3a32];
      while (ppvVar5 = ExceptionList, piVar9 != (int *)0x0) {
        piVar8 = (int *)piVar9[2];
        iVar19 = *piVar9;
        piVar9 = piVar8;
        if (*(int **)(DAT_00ab27b4 + 0x3d4 + iVar19 * 0x4b2) == piVar4) {
          FUN_004e7190();
        }
      }
    }
    else {
      ppvVar5 = &local_c;
      if (*(int *)(iVar19 + 0x12) == 1) {
        ExceptionList = &local_c;
        cVar6 = FUN_00444290();
        if (cVar6 == '\0') {
          cVar6 = FUN_00444290();
          if (cVar6 == '\0') {
            uVar17 = *(undefined4 *)((int)param_1 + 6);
            (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
            (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
            FUN_006eab80(0x40,uVar17);
          }
          else {
            (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
            FUN_006eaa80(0x41);
          }
        }
        else {
          (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
          FUN_006eaa80(0x3f);
        }
        FUN_00588670();
        FUN_00588640();
        FUN_00490f60();
        FUN_004965c0();
        FUN_00588670();
        FUN_00458280();
        FUN_00488220();
        ppvVar5 = ExceptionList;
      }
    }
    break;
  case 0x12:
  case 0x15:
    ExceptionList = &local_c;
    iVar19 = FUN_00498cc0();
    if (*(int *)(iVar19 + 0x12) != 2) {
      iVar19 = FUN_00498cc0();
      ppvVar5 = ExceptionList;
      if (*(int *)(iVar19 + 0x12) == 1) {
        iVar19 = FUN_00458280();
        if (((&DAT_00dc0fd4)[iVar19] == 0) && (cVar6 = FUN_0042e980(), cVar6 != '\0')) {
          FUN_00492db0();
          FUN_00499770();
          cVar6 = FUN_004997a0();
          while (cVar6 != '\0') {
            FUN_00499780();
            piVar9 = (int *)FUN_00499790();
            iVar19 = FUN_00458280();
            if (*piVar9 == iVar19) {
              piVar9[1] = 0;
              goto LAB_004777c4;
            }
            cVar6 = FUN_004997a0();
          }
          pvVar10 = operator_new(8);
          local_4 = 0x19;
          if (pvVar10 == (void *)0x0) {
            puVar18 = (undefined4 *)0x0;
          }
          else {
            puVar18 = (undefined4 *)FUN_0076c770();
          }
          local_4 = 0xffffffff;
          uVar17 = FUN_00458280();
          *puVar18 = uVar17;
          puVar18[1] = 0;
          FUN_00492db0();
          FUN_0049a730();
        }
LAB_004777c4:
        cVar6 = FUN_00444290();
        if (cVar6 == '\0') {
          cVar6 = FUN_00444290();
          if (cVar6 == '\0') {
            FUN_00493d20();
            (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
            (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
            uVar17 = FUN_00458280();
            FUN_006eab80(0x50,uVar17);
            ppvVar5 = ExceptionList;
          }
          else {
            FUN_00493d20();
            (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
            FUN_00458280();
            FUN_006eaa80(0x4f);
            ppvVar5 = ExceptionList;
          }
        }
        else {
          FUN_00493d20();
          (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
          FUN_00458280();
          FUN_006eaa80(0x51);
          ppvVar5 = ExceptionList;
        }
      }
      break;
    }
    cVar6 = FUN_00444290();
    if (cVar6 == '\0') {
      cVar6 = FUN_00444290();
      piVar9 = (int *)((int)param_1 + 0xe);
      if (cVar6 == '\0') {
        FUN_00493d20();
        (**(code **)(*piVar9 + 0xc))();
        (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
        uVar17 = FUN_00458280();
        FUN_006eab80(0x4d,uVar17);
      }
      else {
        FUN_00493d20();
        (**(code **)(*piVar9 + 0xc))();
        (**(code **)(*piVar9 + 0xc))();
        FUN_00458280();
        FUN_006eaa80(0x4e);
      }
    }
    else {
      FUN_00493d20();
      (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
      (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
      FUN_00458280();
      FUN_006eaa80(0x4c);
    }
    iVar19 = FUN_00498cc0();
    if ((*(char *)(iVar19 + 0xe0) != '\0') ||
       (iVar19 = FUN_00498cc0(), *(char *)(iVar19 + 0xe1) != '\0')) {
      pvVar10 = operator_new(0x4c);
      local_4 = 0x10;
      if (pvVar10 != (void *)0x0) {
        FUN_00498cc0();
        FUN_00498a40();
      }
      local_4 = 0xffffffff;
      FUN_00458280();
      FUN_00498b20();
      FUN_00458280();
      FUN_00498b40();
      FUN_00425f10();
      FUN_00458280();
      FUN_00490f60();
      FUN_004965c0();
      FUN_00495f00();
      FUN_00458280();
      FUN_00490f60();
      FUN_004965c0();
      FUN_00495f00();
      iVar19 = FUN_00498cc0();
      if (0 < *(int *)(iVar19 + 0xe2)) {
        FUN_00462830();
        FUN_00498cc0();
        FUN_0042dc20();
        FUN_00498af0();
      }
      iVar19 = FUN_00498cc0();
      if (*(char *)(iVar19 + 0xe6) != '\0') {
        FUN_00498be0();
      }
      local_a70 = -1.0;
      if (param_1 != piVar4) {
        local_a70 = 1.0;
      }
      iVar19 = 0;
      fVar1 = _DAT_007e3380;
      do {
        switch(iVar19) {
        case 0:
          iVar16 = FUN_00498cc0();
          fVar1 = *(float *)(iVar16 + 0xcc);
          break;
        case 1:
          iVar16 = FUN_00498cc0();
          fVar1 = *(float *)(iVar16 + 0xd0);
          break;
        case 2:
          iVar16 = FUN_00498cc0();
          fVar1 = *(float *)(iVar16 + 0xd8);
          break;
        case 3:
          iVar16 = FUN_00498cc0();
          fVar1 = *(float *)(iVar16 + 0xd4);
          break;
        case 4:
          iVar16 = FUN_00498cc0();
          fVar1 = *(float *)(iVar16 + 0xdc);
          break;
        case 5:
          iVar16 = FUN_00498cc0();
          fVar1 = *(float *)(iVar16 + 200);
        }
        if (fVar1 != _DAT_007e3380) {
          fVar1 = local_a70 * fVar1;
          FUN_00492940();
          FUN_00492920();
          FUN_00492940();
          FUN_00492920();
          switch(iVar19) {
          case 0:
            FUN_00498b60();
            break;
          case 1:
            FUN_00498b80();
            break;
          case 2:
            FUN_00498b90();
            break;
          case 3:
            FUN_00498b70();
            break;
          case 4:
            FUN_00498ba0();
            break;
          case 5:
            FUN_00498b50();
          }
          fVar27 = (float10)FUN_00492940();
          if ((fVar27 < (float10)_DAT_007e3380) && (cVar6 = FUN_00492960(), cVar6 == '\0')) {
            FUN_00492920();
          }
          fVar27 = (float10)FUN_00492940();
          if (((float10)_DAT_007e3380 < fVar27) && (cVar6 = FUN_00492950(), cVar6 == '\0')) {
            FUN_00492920();
          }
          fVar27 = (float10)FUN_00492940();
          if ((fVar27 < (float10)_DAT_007e3380) && (cVar6 = FUN_00492960(), cVar6 == '\0')) {
            FUN_00492920();
          }
          fVar27 = (float10)FUN_00492940();
          if (((float10)_DAT_007e3380 < fVar27) && (cVar6 = FUN_00492950(), cVar6 == '\0')) {
            FUN_00492920();
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < 6);
      ppvVar5 = ExceptionList;
      if (DAT_00dc18b4 != '\0') {
        pvVar10 = operator_new(0xc);
        local_4 = 0x11;
        if (pvVar10 != (void *)0x0) {
          FUN_00458280();
          uVar17 = FUN_00458280();
          uVar15 = FUN_0045fec0(uVar17);
          FUN_0047c090(0x181,uVar15,uVar17);
        }
        local_4 = 0xffffffff;
        FUN_00565bc0();
        ppvVar5 = ExceptionList;
      }
      break;
    }
    iVar19 = FUN_00498cc0();
    ppvVar5 = ExceptionList;
    if (*(int *)(iVar19 + 0xe) != 0x12) break;
    if (_DAT_008775f0 == _DAT_007e3374) {
      FUN_00458280();
      FUN_00493d30();
      FUN_00458280();
      FUN_00493d30();
      FUN_00442b90();
      FUN_00498cc0();
      FUN_00498cc0();
      FUN_00498cc0();
      FUN_00498cc0();
      FUN_00498cc0();
      FUN_00498cc0();
      iVar19 = 0;
      do {
        fVar27 = (float10)FUN_00442c00();
        if ((float10)_DAT_007e3380 <= fVar27) {
          fVar27 = (float10)FUN_00442c00();
          if ((float10)_DAT_007e3380 < fVar27) {
            FUN_00442c00();
            FUN_0049ec10();
            FUN_00442c00();
            goto LAB_00476398;
          }
        }
        else {
          FUN_00442c00();
          FUN_0049ec10();
          FUN_00442c00();
LAB_00476398:
          FUN_0049ec10();
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < 6);
    }
    else {
      pvVar10 = operator_new(0x4c);
      local_4 = 0x12;
      if (pvVar10 == (void *)0x0) {
        puVar18 = (undefined4 *)0x0;
      }
      else {
        FUN_00498cc0();
        puVar18 = (undefined4 *)FUN_00498a40();
      }
      local_4 = 0xffffffff;
      iVar19 = FUN_00498cc0();
      bVar25 = *(float *)(iVar19 + 200) != _DAT_007e3380;
      if (bVar25) {
        FUN_00498cc0();
        FUN_00498b50();
      }
      iVar19 = FUN_00498cc0();
      local_a71 = *(float *)(iVar19 + 0xcc) != _DAT_007e3380;
      if (local_a71) {
        FUN_00498cc0();
        FUN_00498b60();
      }
      local_a71 = local_a71 || bVar25;
      iVar19 = FUN_00498cc0();
      if (*(float *)(iVar19 + 0xd8) != _DAT_007e3380) {
        FUN_00498cc0();
        FUN_00498b90();
        local_a71 = true;
      }
      iVar19 = FUN_00498cc0();
      if (*(float *)(iVar19 + 0xd4) != _DAT_007e3380) {
        FUN_00498cc0();
        FUN_00498b70();
        local_a71 = true;
      }
      iVar19 = FUN_00498cc0();
      if (*(float *)(iVar19 + 0xd0) != _DAT_007e3380) {
        FUN_00498cc0();
        FUN_00498b80();
        local_a71 = true;
      }
      iVar19 = FUN_00498cc0();
      if (*(float *)(iVar19 + 0xdc) == _DAT_007e3380) {
        if (!local_a71) {
          if (puVar18 != (undefined4 *)0x0) {
            (**(code **)*puVar18)();
          }
          goto LAB_00476634;
        }
      }
      else {
        FUN_00498cc0();
        FUN_00498ba0();
      }
      FUN_00458280();
      FUN_00498b20();
      FUN_00458280();
      FUN_00498b40();
      FUN_00425f10();
      FUN_00458280();
      FUN_00490f60();
      FUN_004965c0();
      FUN_00495f00();
      FUN_00458280();
      FUN_00490f60();
      FUN_004965c0();
      FUN_00495f00();
      FUN_00462830();
      __ftol();
      FUN_0042dc20();
      FUN_00498af0();
      FUN_00498be0();
    }
LAB_00476634:
    local_a5c = 0;
    do {
      iVar19 = FUN_00498cc0();
      if (0 < *(int *)(iVar19 + 0x28 + local_a5c * 4)) {
        FUN_00498cc0();
        FUN_004e9370();
        iVar19 = FUN_0048b980();
        if ((iVar19 == 0) || (piVar9 = (int *)FUN_0048b980(), piVar9 == piVar4)) {
          pvVar10 = operator_new(0xc);
          local_4 = 0x14;
          if (pvVar10 != (void *)0x0) {
            FUN_00498cc0();
            FUN_0045fec0();
            FUN_0047de00();
          }
          local_4 = 0xffffffff;
          FUN_00565c30();
        }
        else {
          pvVar10 = operator_new(0xc);
          local_4 = 0x13;
          if (pvVar10 != (void *)0x0) {
            FUN_00498cc0();
            FUN_0045fec0();
            FUN_0047de00();
          }
          local_4 = 0xffffffff;
          FUN_00565bc0();
        }
      }
      iVar19 = FUN_00498cc0();
      if (0 < *(int *)(iVar19 + 0x3c + local_a5c * 4)) {
        FUN_00498cc0();
        FUN_004e9370();
        iVar19 = FUN_0048b980();
        if ((iVar19 == 0) || (piVar9 = (int *)FUN_0048b980(), piVar9 == param_1)) {
          pvVar10 = operator_new(0xc);
          local_4 = 0x16;
          if (pvVar10 != (void *)0x0) {
            FUN_00498cc0();
            FUN_0045fec0();
            FUN_0047de00();
          }
          local_4 = 0xffffffff;
          FUN_00565c30();
        }
        else {
          pvVar10 = operator_new(0xc);
          local_4 = 0x15;
          if (pvVar10 != (void *)0x0) {
            FUN_00498cc0();
            FUN_0045fec0();
            FUN_0047de00();
          }
          local_4 = 0xffffffff;
          FUN_00565bc0();
        }
      }
      iVar19 = FUN_00498cc0();
      if (0 < *(int *)(iVar19 + 0x50 + local_a5c * 4)) {
        iVar19 = *(int *)((int)param_1 + 0x361a);
        FUN_00498cc0();
        FUN_00477fc0();
        cVar6 = (**(code **)(iVar19 + 0x24))();
        if (cVar6 == '\0') {
          FUN_00498cc0();
          FUN_00477fc0();
          FUN_004739f0();
        }
      }
      iVar19 = FUN_00498cc0();
      if (0 < *(int *)(iVar19 + 100 + local_a5c * 4)) {
        piVar9 = (int *)FUN_004582d0();
        iVar19 = *piVar9;
        FUN_00498cc0();
        FUN_00477fc0();
        cVar6 = (**(code **)(iVar19 + 0x24))();
        if (cVar6 == '\0') {
          FUN_00498cc0();
          FUN_00477fc0();
          FUN_004582d0();
          FUN_004739f0();
        }
      }
      iVar19 = FUN_00498cc0();
      if (0 < *(int *)(iVar19 + 0x78 + local_a5c * 4)) {
        iVar19 = FUN_00498cc0();
        iVar19 = *(int *)(iVar19 + 0x78 + local_a5c * 4);
        FUN_00493150();
        FUN_004986f0();
        cVar6 = FUN_00498730();
        while (cVar6 != '\0') {
          FUN_00498700();
          iVar16 = FUN_00498710();
          FUN_00499720();
          cVar6 = FUN_00499750();
          while (cVar6 != '\0') {
            FUN_00499730();
            FUN_00499740();
            iVar11 = FUN_00447250();
            if (*(int *)(iVar11 + 2) == iVar19) {
              puVar12 = (ushort *)FUN_00447250();
              uVar3 = *puVar12;
              iVar11 = FUN_00498cc0();
              if ((uint)uVar3 == *(uint *)(iVar11 + 0x8c + local_a5c * 4)) {
                iVar11 = (**(code **)(*(int *)(iVar16 + 0x22) + 4))();
                fVar27 = (float10)FUN_0048e7b0();
                fVar1 = (float)fVar27;
                fStack_a50 = 0.0;
                iVar13 = FUN_004581f0();
                if (iVar13 != 0x8c) {
                  FUN_00458200();
                  FUN_004581f0();
                  FUN_00789c90();
                  FUN_004581f0();
                  FUN_0044c620();
                  fVar27 = (float10)FUN_0048d830();
                  fVar26 = (float10)FUN_0048d830();
                  fStack_a50 = (float)(fVar26 + (float10)(float)fVar27);
                }
                fStack_a44 = 0.0;
                iVar13 = FUN_0048e520();
                if (0 < iVar13) {
                  iVar24 = 0;
                  iVar13 = FUN_0048e520();
                  if (0 < iVar13) {
                    do {
                      iVar13 = FUN_0048e510();
                      if (iVar13 != 0) {
                        FUN_0048e500();
                        FUN_0048e510();
                        iVar13 = FUN_00789ce0();
                        FUN_0048e510();
                        iVar14 = FUN_0044c630();
                        if (iVar13 != 0) {
                          fVar27 = (float10)FUN_0048d830();
                          fStack_a44 = (float)(fVar27 + (float10)fStack_a44);
                        }
                        if (iVar14 != 0) {
                          fVar27 = (float10)FUN_0048d830();
                          fStack_a44 = (float)(fVar27 + (float10)fStack_a44);
                        }
                      }
                      iVar24 = iVar24 + 1;
                      iVar13 = FUN_0048e520();
                    } while (iVar24 < iVar13);
                  }
                }
                if (DAT_00dc1964 == '\0') {
                  fStack_a44 = fStack_a50 * fVar1 * _DAT_007e543c + fStack_a44;
                }
                else {
                  fStack_a44 = (fStack_a44 + fStack_a50) * fVar1 * _DAT_007e543c;
                }
                fStack_a50 = 0.0;
                piVar4[0xe73] = (int)(fStack_a44 + (float)piVar4[0xe73]);
                iVar13 = FUN_004581f0();
                if (iVar13 != 0x8c) {
                  FUN_00458200();
                  FUN_004581f0();
                  FUN_00789c90();
                  FUN_004581f0();
                  FUN_0044c620();
                  fVar27 = (float10)FUN_0048d830();
                  fVar26 = (float10)FUN_0048d830();
                  fStack_a50 = (float)(fVar26 + (float10)(float)fVar27);
                }
                fStack_a44 = 0.0;
                iVar13 = FUN_0048e520();
                if (0 < iVar13) {
                  iVar24 = 0;
                  iVar13 = FUN_0048e520();
                  if (0 < iVar13) {
                    do {
                      iVar13 = FUN_0048e510();
                      if (iVar13 != 0) {
                        FUN_0048e500();
                        FUN_0048e510();
                        iVar13 = FUN_00789ce0();
                        FUN_0048e510();
                        iVar14 = FUN_0044c630();
                        if (iVar13 != 0) {
                          fVar27 = (float10)FUN_0048d830();
                          fStack_a44 = (float)(fVar27 + (float10)fStack_a44);
                        }
                        if (iVar14 != 0) {
                          fVar27 = (float10)FUN_0048d830();
                          fStack_a44 = (float)(fVar27 + (float10)fStack_a44);
                        }
                      }
                      iVar24 = iVar24 + 1;
                      iVar13 = FUN_0048e520();
                    } while (iVar24 < iVar13);
                  }
                }
                if (DAT_00dc1964 == '\0') {
                  cVar6 = FUN_0048e0c0();
                  if (cVar6 == '\0') {
                    fStack_a44 = fStack_a50 * (float)_DAT_007e46d8 + fStack_a44;
                  }
                  else {
                    fStack_a44 = fStack_a50 * fVar1 * _DAT_007e543c + fStack_a44;
                  }
                }
                else {
                  cVar6 = FUN_0048e0c0();
                  if (cVar6 == '\0') {
                    fStack_a44 = (fStack_a44 + fStack_a50) * _DAT_007e46cc;
                  }
                  else {
                    fStack_a44 = (fStack_a44 + fStack_a50) * fVar1 * _DAT_007e543c;
                  }
                }
                param_1[0xe73] = (int)((float)param_1[0xe73] - fStack_a44);
                FUN_0048ea60();
                pvVar10 = operator_new(0xc);
                local_4 = 0x17;
                if (pvVar10 != (void *)0x0) {
                  FUN_00447250();
                  FUN_00447250();
                  uVar17 = FUN_0045fec0();
                  FUN_0047b310(0x6d,uVar17);
                }
                local_4 = 0xffffffff;
                FUN_00565c30();
                FUN_0048f4e0();
                FUN_0048ea50();
                FUN_00462830();
                FUN_0048c9b0();
                __ftol();
                FUN_0042dc20();
                FUN_0048e990();
                FUN_00458200();
                FUN_004581f0();
                uVar17 = FUN_0044c3d0();
                FUN_004fbc90(uVar17);
                FUN_0048e0c0();
                FUN_0048e7c0();
                FUN_0048e7f0();
                if (iVar11 == 1) {
                  FUN_00495ef0();
                  piVar9 = (int *)FUN_00494b80();
                  iVar11 = *piVar9;
                  FUN_0045f730();
                  FUN_00447250();
                  (**(code **)(iVar11 + 0x2c))();
                }
              }
            }
            cVar6 = FUN_00499750();
          }
          cVar6 = FUN_00498730();
        }
      }
      iVar19 = FUN_00498cc0();
      if (0 < *(int *)(iVar19 + 0xa0 + local_a5c * 4)) {
        iVar19 = FUN_00498cc0();
        iVar19 = *(int *)(iVar19 + 0xa0 + local_a5c * 4);
        FUN_00493150();
        FUN_004986f0();
        cVar6 = FUN_00498730();
        while (cVar6 != '\0') {
          FUN_00498700();
          iVar16 = FUN_00498710();
          FUN_00499720();
          cVar6 = FUN_00499750();
          while (cVar6 != '\0') {
            FUN_00499730();
            FUN_00499740();
            iVar11 = FUN_00447250();
            if (*(int *)(iVar11 + 2) == iVar19) {
              iVar11 = FUN_00498cc0();
              puVar12 = (ushort *)FUN_00447250();
              if ((uint)*puVar12 == *(uint *)(iVar11 + 0xb4 + local_a5c * 4)) {
                iVar11 = (**(code **)(*(int *)(iVar16 + 0x22) + 4))();
                fVar27 = (float10)FUN_0048e7b0();
                fVar1 = (float)fVar27;
                fStack_a4c = 0.0;
                iVar13 = FUN_004581f0();
                if (iVar13 != 0x8c) {
                  FUN_00458200();
                  FUN_004581f0();
                  FUN_00789c90();
                  FUN_004581f0();
                  FUN_0044c620();
                  fVar27 = (float10)FUN_0048d830();
                  fVar26 = (float10)FUN_0048d830();
                  fStack_a4c = (float)(fVar26 + (float10)(float)fVar27);
                }
                fStack_a48 = 0.0;
                iVar13 = FUN_0048e520();
                if (0 < iVar13) {
                  iVar24 = 0;
                  iVar13 = FUN_0048e520();
                  if (0 < iVar13) {
                    do {
                      iVar13 = FUN_0048e510();
                      if (iVar13 != 0) {
                        FUN_0048e500();
                        FUN_0048e510();
                        iVar13 = FUN_00789ce0();
                        FUN_0048e510();
                        iVar14 = FUN_0044c630();
                        if (iVar13 != 0) {
                          fVar27 = (float10)FUN_0048d830();
                          fStack_a48 = (float)(fVar27 + (float10)fStack_a48);
                        }
                        if (iVar14 != 0) {
                          fVar27 = (float10)FUN_0048d830();
                          fStack_a48 = (float)(fVar27 + (float10)fStack_a48);
                        }
                      }
                      iVar24 = iVar24 + 1;
                      iVar13 = FUN_0048e520();
                    } while (iVar24 < iVar13);
                  }
                }
                if (DAT_00dc1964 == '\0') {
                  fStack_a48 = fStack_a4c * fVar1 * _DAT_007e543c + fStack_a48;
                }
                else {
                  fStack_a48 = (fStack_a48 + fStack_a4c) * fVar1 * _DAT_007e543c;
                }
                fStack_a4c = 0.0;
                param_1[0xe73] = (int)(fStack_a48 + (float)param_1[0xe73]);
                iVar13 = FUN_004581f0();
                if (iVar13 != 0x8c) {
                  FUN_00458200();
                  FUN_004581f0();
                  FUN_00789c90();
                  FUN_004581f0();
                  FUN_0044c620();
                  fVar27 = (float10)FUN_0048d830();
                  fVar26 = (float10)FUN_0048d830();
                  fStack_a4c = (float)(fVar26 + (float10)(float)fVar27);
                }
                fStack_a48 = 0.0;
                iVar13 = FUN_0048e520();
                if (0 < iVar13) {
                  iVar24 = 0;
                  iVar13 = FUN_0048e520();
                  if (0 < iVar13) {
                    do {
                      iVar13 = FUN_0048e510();
                      if (iVar13 != 0) {
                        FUN_0048e500();
                        FUN_0048e510();
                        iVar13 = FUN_00789ce0();
                        FUN_0048e510();
                        iVar14 = FUN_0044c630();
                        if (iVar13 != 0) {
                          fVar27 = (float10)FUN_0048d830();
                          fStack_a48 = (float)(fVar27 + (float10)fStack_a48);
                        }
                        if (iVar14 != 0) {
                          fVar27 = (float10)FUN_0048d830();
                          fStack_a48 = (float)(fVar27 + (float10)fStack_a48);
                        }
                      }
                      iVar24 = iVar24 + 1;
                      iVar13 = FUN_0048e520();
                    } while (iVar24 < iVar13);
                  }
                }
                if (DAT_00dc1964 == '\0') {
                  cVar6 = FUN_0048e0c0();
                  if (cVar6 == '\0') {
                    fStack_a48 = fStack_a4c * (float)_DAT_007e46d8 + fStack_a48;
                  }
                  else {
                    fStack_a48 = fStack_a4c * fVar1 * _DAT_007e543c + fStack_a48;
                  }
                }
                else {
                  cVar6 = FUN_0048e0c0();
                  if (cVar6 == '\0') {
                    fStack_a48 = (fStack_a48 + fStack_a4c) * _DAT_007e46cc;
                  }
                  else {
                    fStack_a48 = (fStack_a48 + fStack_a4c) * fVar1 * _DAT_007e543c;
                  }
                }
                piVar4[0xe73] = (int)((float)piVar4[0xe73] - fStack_a48);
                FUN_0048ea60();
                pvVar10 = operator_new(0xc);
                local_4 = 0x18;
                if (pvVar10 != (void *)0x0) {
                  FUN_00447250();
                  FUN_00447250();
                  uVar17 = FUN_0045fec0();
                  FUN_0047b310(0x6d,uVar17);
                }
                local_4 = 0xffffffff;
                FUN_00565c30();
                FUN_0048f4e0();
                FUN_0048ea50();
                FUN_00462830();
                FUN_0048c9b0();
                __ftol();
                FUN_0042dc20();
                FUN_0048e990();
                FUN_00458200();
                FUN_004581f0();
                uVar17 = FUN_0044c3d0();
                FUN_004fbc90(uVar17);
                FUN_0048e0c0();
                FUN_0048e7c0();
                FUN_0048e7f0();
                if (iVar11 == 1) {
                  FUN_00495ef0();
                  piVar9 = (int *)FUN_00494b80();
                  iVar11 = *piVar9;
                  FUN_0045f730();
                  FUN_00447250();
                  (**(code **)(iVar11 + 0x2c))();
                }
              }
            }
            cVar6 = FUN_00499750();
          }
          cVar6 = FUN_00498730();
        }
      }
      local_a5c = local_a5c + 1;
      ppvVar5 = ExceptionList;
    } while (local_a5c < 5);
    break;
  case 0x13:
    ExceptionList = &local_c;
    iVar19 = FUN_00498cc0();
    if (*(int *)(iVar19 + 0x12) == 2) {
      cVar6 = FUN_00444290();
      if (cVar6 == '\0') {
        cVar6 = FUN_00444290();
        if (cVar6 == '\0') {
          FUN_00493d20();
          (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
          (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
          uVar17 = FUN_00458280();
          FUN_006eab80(0x54,uVar17);
        }
        else {
          FUN_00493d20();
          (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
          FUN_00458280();
          FUN_006eaa80(0x53);
        }
      }
      else {
        FUN_00493d20();
        (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
        FUN_00458280();
        FUN_006eaa80(0x55);
      }
      FUN_00458280();
      FUN_00488220();
      pvVar10 = operator_new(0x4c);
      local_4 = 0x1a;
      if (pvVar10 != (void *)0x0) {
        FUN_00498cc0();
        FUN_00498a40();
      }
      local_4 = 0xffffffff;
      FUN_00458280();
      FUN_00498b20();
      FUN_00458280();
      FUN_00498b40();
      FUN_00425f10();
      FUN_00458280();
      FUN_00490f60();
      FUN_004965c0();
      FUN_00495f10();
      FUN_00458280();
      FUN_00490f60();
      FUN_004965c0();
      FUN_00495f10();
      iVar19 = FUN_00498cc0();
      ppvVar5 = ExceptionList;
      if (0 < *(int *)(iVar19 + 0x1e)) {
        FUN_00462830();
        FUN_00498cc0();
        FUN_0042dc20();
        FUN_00498af0();
        ppvVar5 = ExceptionList;
      }
    }
    else {
      iVar19 = FUN_00498cc0();
      ppvVar5 = ExceptionList;
      if (*(int *)(iVar19 + 0x12) == 1) {
        cVar6 = FUN_00444290();
        if (cVar6 == '\0') {
          cVar6 = FUN_00444290();
          if (cVar6 == '\0') {
            FUN_00493d20();
            (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
            (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
            uVar17 = FUN_00458280();
            FUN_006eab80(0x57,uVar17);
            ppvVar5 = ExceptionList;
          }
          else {
            FUN_00493d20();
            (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
            FUN_00458280();
            FUN_006eaa80(0x56);
            ppvVar5 = ExceptionList;
          }
        }
        else {
          FUN_00493d20();
          (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
          FUN_00458280();
          FUN_006eaa80(0x58);
          ppvVar5 = ExceptionList;
        }
      }
    }
    break;
  case 0x14:
    ExceptionList = &local_c;
    FUN_004986b0();
    cVar6 = FUN_004986e0();
    if (cVar6 == '\0') {
LAB_00477c7c:
      FUN_00781b90();
      ppvVar5 = ExceptionList;
    }
    else {
      do {
        FUN_004986c0();
        puVar18 = (undefined4 *)FUN_004986d0();
        iVar19 = FUN_00498ae0();
        if (iVar19 == 1) {
          iVar19 = FUN_00498b10();
          iVar16 = FUN_00458280();
          if (iVar19 != iVar16) {
            iVar19 = FUN_00498b30();
            iVar16 = FUN_00458280();
            if (iVar19 != iVar16) goto LAB_00477bac;
          }
          iVar19 = FUN_00498b10();
          iVar16 = FUN_00458280();
          if (iVar19 != iVar16) {
            iVar19 = FUN_00498b30();
            iVar16 = FUN_00458280();
            if (iVar19 != iVar16) goto LAB_00477bac;
          }
          if (puVar18 != (undefined4 *)0x0) {
            FUN_00458280();
            FUN_00488220();
            FUN_00458280();
            FUN_00490f60();
            FUN_004965c0();
            FUN_00495f10();
            FUN_00458280();
            FUN_00490f60();
            FUN_004965c0();
            FUN_00495f10();
            cVar6 = FUN_00444290();
            if (cVar6 != '\0') {
              FUN_00493d20();
              (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
              FUN_00458280();
              FUN_006eaa80(0x1f);
            }
            FUN_00490df0();
            FUN_00425e20();
            (**(code **)*puVar18)();
          }
          goto LAB_00477c7c;
        }
LAB_00477bac:
        cVar6 = FUN_004986e0();
      } while (cVar6 != '\0');
      FUN_00781b90();
      ppvVar5 = ExceptionList;
    }
    break;
  case 0x16:
    ExceptionList = &local_c;
    FUN_00498cc0();
    puVar18 = (undefined4 *)FUN_00498a20();
    ppvVar5 = ExceptionList;
    if (puVar18 == (undefined4 *)0x0) break;
    bVar25 = false;
    FUN_00498bd0();
    iVar19 = FUN_00465c40();
    if (iVar19 != 0) {
      iVar19 = FUN_00465c40();
      iVar16 = FUN_00465c40();
      if (iVar16 == iVar19) {
        bVar25 = true;
      }
    }
    FUN_00490f60();
    iVar19 = FUN_004965b0();
    iVar16 = FUN_00458280();
    if (iVar19 == iVar16) {
      bVar25 = true;
    }
    FUN_00490f60();
    iVar19 = FUN_004965b0();
    iVar16 = FUN_00458280();
    if (iVar19 == iVar16) {
      bVar25 = true;
    }
    cVar6 = FUN_00498bc0();
    if (((cVar6 != '\0') && (fVar27 = (float10)FUN_00498bb0(), (float10)_DAT_007e6964 <= fVar27)) &&
       (!bVar25)) {
      FUN_00458280();
      FUN_00488220();
    }
    FUN_00458280();
    FUN_00490f60();
    FUN_004965c0();
    FUN_00495f00();
    FUN_00458280();
    FUN_00490f60();
    FUN_004965c0();
    FUN_00495f00();
    FUN_0058ab10();
    FUN_00442d90();
    cVar6 = FUN_00444290();
    if (cVar6 != '\0') {
      FUN_00493d20();
      (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
      uVar17 = FUN_00458280();
      FUN_006eab80(0x1e,uVar17);
    }
    FUN_00425e20();
    puVar18 = (undefined4 *)*puVar18;
    goto LAB_00477ea3;
  case 0x17:
    ExceptionList = &local_c;
    FUN_00498cc0();
    puVar18 = (undefined4 *)FUN_00498a20();
    FUN_00458280();
    FUN_00488220();
    FUN_00490df0();
    cVar6 = FUN_00444290();
    if (cVar6 != '\0') {
      FUN_00493d20();
      (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
      FUN_00458280();
      FUN_006eaa80(0x1d);
    }
    FUN_00425e20();
    ppvVar5 = ExceptionList;
    if (puVar18 == (undefined4 *)0x0) break;
    puVar18 = (undefined4 *)*puVar18;
LAB_00477ea3:
    (*(code *)*puVar18)();
    ppvVar5 = ExceptionList;
    break;
  case 0x19:
    ExceptionList = &local_c;
    *(undefined4 *)(*(int *)((int)param_1 + 0x12da) + 0x3b30) = 0;
    fVar1 = (float)piVar4[0xcd3] - _DAT_007e3848;
    if ((float)piVar4[0xcd3] - _DAT_007e3848 < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    piVar4[0xcd3] = (int)fVar1;
    cVar6 = FUN_00444290();
    if (cVar6 == '\0') {
      uVar17 = *(undefined4 *)((int)param_1 + 6);
      (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
      (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
      FUN_006eab80(0xe,uVar17);
      ppvVar5 = ExceptionList;
    }
    else {
      (**(code **)(*(int *)((int)piVar4 + 0xe) + 0xc))();
      FUN_006eaa80(0xd);
      ppvVar5 = ExceptionList;
    }
  }
  ExceptionList = ppvVar5;
  iVar19 = FUN_00498cc0();
  if (*(int *)(iVar19 + 0x12) == 0) {
    FUN_00498cc0();
    FUN_00498cc0();
    FUN_00490f60();
    FUN_00585e50();
    FUN_0049ebd0();
  }
  FUN_005886c0();
  FUN_0044aea0();
  FUN_0044aea0();
  cVar6 = FUN_00444290();
  if (cVar6 == '\0') {
    FUN_00444290();
  }
  ExceptionList = local_c;
  return 3;
}


