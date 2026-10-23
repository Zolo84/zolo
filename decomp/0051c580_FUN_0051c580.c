// FUN_0051c580 @ 51c580 size=1427

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0051c580(int *param_1)

{
  bool bVar1;
  float10 fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  char acStack_108 [260];
  
  DAT_00adcf3c._0_1_ = 0;
  iVar5 = FUN_004e9370();
  if ((*(int *)(iVar5 + 0x254) == 8) || (*(int *)(iVar5 + 0x254) == 9)) {
    iVar5 = FUN_004e9370();
  }
  iVar6 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
  if (((0 < iVar6) && (*(int *)(iVar5 + 0x254) != 8)) && (*(int *)(iVar5 + 0x254) != 9)) {
    fVar14 = (float10)FUN_0044aaf0();
    fVar2 = (float10)_DAT_007e4088;
    dVar18 = (double)(fVar14 * fVar2);
    dVar16 = dVar18;
    uVar7 = FUN_0042b6c9(s_ESE_SUPPLY_EFFICIENCY_0084b104);
    FUN_007a630a(acStack_108,uVar7,dVar16);
    uVar9 = 0xffffffff;
    pcVar11 = acStack_108;
    do {
      pcVar13 = pcVar11;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar11 + 1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar4 != '\0');
    uVar9 = ~uVar9;
    fStack_12c = 0.0;
    iVar6 = -1;
    pcVar11 = (char *)&DAT_00adcf3c;
    do {
      pcVar12 = pcVar11;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar12 = pcVar11 + 1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar4 != '\0');
    pcVar11 = pcVar13 + -uVar9;
    pcVar13 = pcVar12 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (((0 < param_1[3]) && (*(int *)(iVar5 + 0x254) != 8)) && (*(int *)(iVar5 + 0x254) != 9)) {
      FUN_004e9370();
      fVar15 = (float10)FUN_004ecea0();
      fStack_12c = (float)(fVar15 * (float10)_DAT_007e4088);
    }
    dVar16 = (double)fStack_12c;
    dVar17 = dVar16;
    uVar7 = FUN_0042b6c9(s_ESE_INFRA_0084b0f8);
    FUN_007a630a(acStack_108,uVar7,dVar17);
    uVar9 = 0xffffffff;
    pcVar11 = acStack_108;
    do {
      pcVar13 = pcVar11;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar11 + 1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar4 != '\0');
    uVar9 = ~uVar9;
    fStack_124 = 0.0;
    iVar5 = -1;
    pcVar11 = (char *)&DAT_00adcf3c;
    do {
      pcVar12 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar11 + 1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar4 != '\0');
    pcVar11 = pcVar13 + -uVar9;
    pcVar13 = pcVar12 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar13 = pcVar13 + 1;
    }
    cVar4 = FUN_004fd350();
    if (cVar4 != '\0') {
      fStack_124 = DAT_008772b0 * _DAT_007e4088;
      dVar17 = (double)fStack_124;
      uVar7 = FUN_0042b6c9(s_ESE_OFFENSIVE_0084b0e8);
      FUN_007a630a(acStack_108,uVar7,dVar17);
      uVar9 = 0xffffffff;
      pcVar11 = acStack_108;
      do {
        pcVar13 = pcVar11;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar11 + 1;
        cVar4 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar4 != '\0');
      uVar9 = ~uVar9;
      iVar5 = -1;
      pcVar11 = (char *)&DAT_00adcf3c;
      do {
        pcVar12 = pcVar11;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar11 + 1;
        cVar4 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar4 != '\0');
      pcVar11 = pcVar13 + -uVar9;
      pcVar13 = pcVar12 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    fStack_128 = 0.0;
    cVar4 = (**(code **)(*param_1 + 0x28))();
    if (cVar4 != '\0') {
      piVar8 = *(int **)((int)param_1 + 0x14a);
      if (piVar8 == (int *)0x0) {
        piVar8 = param_1 + 0x62;
      }
      if (piVar8 != (int *)0x0) {
        iVar5 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
        iVar6 = FUN_0050a580();
        if (iVar5 <= iVar6) {
          piVar8 = *(int **)((int)param_1 + 0x14a);
          if (piVar8 == (int *)0x0) {
            piVar8 = param_1 + 0x62;
          }
          if ((*(byte *)((int)piVar8 + 0x1e) & 1) != 0) {
            fStack_128 = _DAT_00dc16f4 * _DAT_007e4088;
            fVar3 = (fStack_12c + (float)(fVar14 * fVar2)) * _DAT_007e34c0 + fStack_124;
            if (_DAT_007e4088 <= fVar3) {
              fStack_128 = 0.0;
            }
            else if (_DAT_007e4088 < fVar3 + fStack_128) {
              fStack_128 = _DAT_007e4088 - fVar3;
            }
            dVar17 = (double)fStack_128;
            uVar7 = FUN_0042b6c9(s_ESE_LW_0084b0e0);
            FUN_007a630a(acStack_108,uVar7,dVar17);
            uVar9 = 0xffffffff;
            pcVar11 = acStack_108;
            do {
              pcVar13 = pcVar11;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar11 + 1;
              cVar4 = *pcVar11;
              pcVar11 = pcVar13;
            } while (cVar4 != '\0');
            uVar9 = ~uVar9;
            iVar5 = -1;
            pcVar11 = (char *)&DAT_00adcf3c;
            do {
              pcVar12 = pcVar11;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar12 = pcVar11 + 1;
              cVar4 = *pcVar11;
              pcVar11 = pcVar12;
            } while (cVar4 != '\0');
            pcVar11 = pcVar13 + -uVar9;
            pcVar13 = pcVar12 + -1;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar13 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
        }
      }
    }
    fStack_12c = 0.0;
    iVar5 = FUN_004e9370();
    piVar8 = *(int **)((int)param_1 + 0x14a);
    if (piVar8 == (int *)0x0) {
      piVar8 = param_1 + 0x62;
    }
    if (((*(int *)((int)piVar8 + 0x22) < 2) && (cVar4 = FUN_0051cc00(), cVar4 != '\0')) ||
       (cVar4 = FUN_00527940(), cVar4 != '\0')) {
LAB_0051c918:
      fStack_12c = *(float *)(param_1[0x92] + 0xe2f6) * _DAT_007e4088;
      dVar17 = (double)fStack_12c;
      uVar7 = FUN_0042b6c9(s_ESE_HQ_0084b0d8);
      FUN_007a630a(acStack_108,uVar7,dVar17);
      uVar9 = 0xffffffff;
      pcVar11 = acStack_108;
      do {
        pcVar13 = pcVar11;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar11 + 1;
        cVar4 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar4 != '\0');
      uVar9 = ~uVar9;
      iVar5 = -1;
      pcVar11 = (char *)&DAT_00adcf3c;
      do {
        pcVar12 = pcVar11;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar11 + 1;
        cVar4 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar4 != '\0');
      pcVar11 = pcVar13 + -uVar9;
      pcVar13 = pcVar12 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      iVar6 = 0;
      if (0 < *(int *)(iVar5 + 0x290)) {
        do {
          FUN_004e9370();
          cVar4 = FUN_00527940();
          if (cVar4 != '\0') goto LAB_0051c918;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar5 + 0x290));
      }
    }
    uVar7 = FUN_0042b6c9(s_ESE_TOTAL_BASE_0084b0c8);
    FUN_007a630a(acStack_108,uVar7,dVar18,dVar16);
    uVar9 = 0xffffffff;
    pcVar11 = acStack_108;
    do {
      pcVar13 = pcVar11;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar11 + 1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar4 != '\0');
    bVar1 = fStack_124 != _DAT_007e3380;
    uVar9 = ~uVar9;
    iVar5 = -1;
    pcVar11 = (char *)&DAT_00adcf3c;
    do {
      pcVar12 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar11 + 1;
      cVar4 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar4 != '\0');
    pcVar11 = pcVar13 + -uVar9;
    pcVar13 = pcVar12 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (bVar1) {
      dVar18 = (double)fStack_124;
      uVar7 = FUN_0042b6c9(s_ESE_TOTAL_OFFENSIVE_BONUS_0084b0ac);
      FUN_007a630a(acStack_108,uVar7,dVar18);
      uVar9 = 0xffffffff;
      pcVar11 = acStack_108;
      do {
        pcVar13 = pcVar11;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar11 + 1;
        cVar4 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar4 != '\0');
      uVar9 = ~uVar9;
      iVar5 = -1;
      pcVar11 = (char *)&DAT_00adcf3c;
      do {
        pcVar12 = pcVar11;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar11 + 1;
        cVar4 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar4 != '\0');
      pcVar11 = pcVar13 + -uVar9;
      pcVar13 = pcVar12 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    if (fStack_128 != _DAT_007e3380) {
      dVar18 = (double)fStack_128;
      uVar7 = FUN_0042b6c9(s_ESE_TOTAL_LOGISTIC_WIZARD_BONUS_0084b08c);
      FUN_007a630a(acStack_108,uVar7,dVar18);
      uVar9 = 0xffffffff;
      pcVar11 = acStack_108;
      do {
        pcVar13 = pcVar11;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar11 + 1;
        cVar4 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar4 != '\0');
      uVar9 = ~uVar9;
      iVar5 = -1;
      pcVar11 = (char *)&DAT_00adcf3c;
      do {
        pcVar12 = pcVar11;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar11 + 1;
        cVar4 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar4 != '\0');
      pcVar11 = pcVar13 + -uVar9;
      pcVar13 = pcVar12 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    if (fStack_12c != _DAT_007e3380) {
      dVar18 = (double)fStack_12c;
      uVar7 = FUN_0042b6c9(s_ESE_TOTAL_HQ_BONUS_0084b078);
      FUN_007a630a(acStack_108,uVar7,dVar18);
      uVar9 = 0xffffffff;
      pcVar11 = acStack_108;
      do {
        pcVar13 = pcVar11;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar11 + 1;
        cVar4 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar4 != '\0');
      uVar9 = ~uVar9;
      iVar5 = -1;
      pcVar11 = (char *)&DAT_00adcf3c;
      do {
        pcVar12 = pcVar11;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar11 + 1;
        cVar4 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar4 != '\0');
      pcVar11 = pcVar13 + -uVar9;
      pcVar13 = pcVar12 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
  }
  return &DAT_00adcf3c;
}


