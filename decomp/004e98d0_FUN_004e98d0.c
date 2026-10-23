// FUN_004e98d0 @ 4e98d0 size=1600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004e98d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  float10 fVar17;
  char *pcVar18;
  double dVar19;
  float fStack_10c;
  char acStack_100 [256];
  
  piVar9 = *(int **)(param_2 + 0x6c);
  if (((((piVar9 == (int *)0x0) || (piVar9[0x92] == 0)) || (*(int *)(param_1 + 0x3d4) == 0)) ||
      ((iVar8 = (**(code **)(*piVar9 + 0x10))(), *(int *)(iVar8 + 0x2b2) != 0 ||
       (*(int *)(param_1 + 0x254) == 8)))) ||
     ((*(int *)(param_1 + 0x254) == 9 ||
      (iVar8 = *(int *)(*(int *)(param_2 + 0x6c) + 0x248), *(int *)(iVar8 + 6) == 0x157)))) {
    return (undefined4 *)0x0;
  }
  DAT_00abe940._0_1_ = 0;
  if ((*(int *)(param_1 + 0x3d4) == iVar8) || (cVar7 = FUN_0044b300(), cVar7 != '\0')) {
LAB_004e998b:
    bVar6 = true;
  }
  else {
    cVar7 = FUN_005861a0();
    bVar6 = false;
    if (cVar7 != '\0') goto LAB_004e998b;
  }
  FUN_0044e1d0();
  bVar5 = false;
  if (bVar6) {
    cVar7 = FUN_0044beb0();
    if ((cVar7 != '\0') && (iVar13 = 0, 0 < *(int *)(param_1 + 0x290))) {
      iVar14 = 0;
      do {
        piVar9 = (int *)(*(int *)(param_1 + 0x298) + iVar14);
        if (piVar9[1] != 4) {
          iVar1 = *piVar9;
          iVar2 = *(int *)(DAT_00ab27b4 + 0x254 + iVar1 * 0x4b2);
          if ((((iVar2 != 8) && (iVar2 != 9)) &&
              (*(int *)(DAT_00ab27b4 + iVar1 * 0x4b2 + 0x3d8) != 0)) &&
             ((cVar7 = FUN_0044b280(), cVar7 != '\0' && (cVar7 = FUN_005216c0(), cVar7 != '\0')))) {
            bVar5 = true;
            goto LAB_004e9a4a;
          }
        }
        iVar13 = iVar13 + 1;
        iVar14 = iVar14 + 0xc;
        if (*(int *)(param_1 + 0x290) <= iVar13) {
          return &DAT_00abe940;
        }
      } while( true );
    }
    goto LAB_004e9eef;
  }
LAB_004e9a4a:
  fVar3 = *(float *)(*(int *)(param_1 + 0x1da) + 0x14);
  fVar17 = (float10)FUN_0044aaf0();
  fVar3 = (float)(fVar17 * (float10)fVar3);
  if (*(int *)(param_1 + 0x254) == 3) {
    iVar13 = *(int *)(param_1 + 0x250);
    if (iVar13 == 5) {
      fVar4 = (_DAT_007e3374 - fVar3) + _DAT_007e811c;
    }
    else if (iVar13 == 6) {
      fVar4 = (_DAT_007e3374 - fVar3) + _DAT_007e6800;
    }
    else {
      if (iVar13 != 7) goto LAB_004e9baf;
      fVar4 = (_DAT_007e3374 - fVar3) + _DAT_007e34c0;
    }
    if (fVar4 != _DAT_007e3380) {
      dVar19 = (double)fVar4;
      uVar10 = FUN_0042b6c9(s_ATTR_CLIMATE_008483d8);
      FUN_007a630a(acStack_100,uVar10,dVar19);
      uVar11 = 0xffffffff;
      pcVar18 = acStack_100;
      do {
        pcVar16 = pcVar18;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar18 + 1;
        cVar7 = *pcVar18;
        pcVar18 = pcVar16;
      } while (cVar7 != '\0');
      uVar11 = ~uVar11;
      iVar13 = -1;
      pcVar18 = (char *)&DAT_00abe940;
      do {
        pcVar15 = pcVar18;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar15 = pcVar18 + 1;
        cVar7 = *pcVar18;
        pcVar18 = pcVar15;
      } while (cVar7 != '\0');
      pcVar18 = pcVar16 + -uVar11;
      pcVar16 = pcVar15 + -1;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar16 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar16 = pcVar16 + 1;
      }
    }
  }
  else if (*(int *)(param_1 + 0x254) == 6) {
    fVar4 = (_DAT_007e3374 - fVar3) * _DAT_007e5390;
    if (*(int *)(param_1 + 0x3ac) == 2) {
      fVar4 = fVar4 + _DAT_007e7c08;
    }
    if (*(int *)(param_1 + 0x3ac) == 4) {
      fVar4 = fVar4 + _DAT_007e34e0;
    }
    dVar19 = (double)fVar4;
    uVar10 = FUN_0042b6c9(s_ATTR_JUNGLE_008483cc);
    FUN_007a630a(acStack_100,uVar10,dVar19);
    uVar11 = 0xffffffff;
    pcVar18 = acStack_100;
    do {
      pcVar16 = pcVar18;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar16 = pcVar18 + 1;
      cVar7 = *pcVar18;
      pcVar18 = pcVar16;
    } while (cVar7 != '\0');
    uVar11 = ~uVar11;
    iVar13 = -1;
    pcVar18 = (char *)&DAT_00abe940;
    do {
      pcVar15 = pcVar18;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar15 = pcVar18 + 1;
      cVar7 = *pcVar18;
      pcVar18 = pcVar15;
    } while (cVar7 != '\0');
    pcVar18 = pcVar16 + -uVar11;
    pcVar16 = pcVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar16 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar16 = pcVar16 + 1;
    }
  }
LAB_004e9baf:
  iVar13 = *(int *)(param_1 + 0x3ac);
  fStack_10c = 0.0;
  if (iVar13 == 1) {
    fStack_10c = (_DAT_007e3374 - fVar3) * _DAT_007e40b8;
  }
  else if (iVar13 == 3) {
    fStack_10c = (_DAT_007e3374 - fVar3) * _DAT_007e5390;
  }
  else if (iVar13 == 5) {
    fStack_10c = _DAT_007e3374 - fVar3;
  }
  if ((*(int *)(*(int *)(param_2 + 0x6c) + 0x14a) == 0) ||
     (iVar13 = FUN_0051c480(), (*(uint *)(iVar13 + 0x1e) >> 3 & 1) == 0)) {
LAB_004e9c62:
    if (fStack_10c != _DAT_007e3380) {
      pcVar18 = s_ATTR_WINTER_008483b0;
LAB_004e9c82:
      dVar19 = (double)fStack_10c;
      uVar10 = FUN_0042b6c9(pcVar18);
      FUN_007a630a(acStack_100,uVar10,dVar19);
      uVar11 = 0xffffffff;
      pcVar18 = acStack_100;
      do {
        pcVar16 = pcVar18;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar18 + 1;
        cVar7 = *pcVar18;
        pcVar18 = pcVar16;
      } while (cVar7 != '\0');
      uVar11 = ~uVar11;
      iVar13 = -1;
      pcVar18 = (char *)&DAT_00abe940;
      do {
        pcVar15 = pcVar18;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar15 = pcVar18 + 1;
        cVar7 = *pcVar18;
        pcVar18 = pcVar15;
      } while (cVar7 != '\0');
      pcVar18 = pcVar16 + -uVar11;
      pcVar16 = pcVar15 + -1;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar16 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar16 = pcVar16 + 1;
      }
    }
  }
  else {
    iVar13 = *(int *)(param_2 + 0x6c);
    FUN_0051c480();
    iVar14 = FUN_0050a580();
    iVar13 = (**(code **)(*(int *)(iVar13 + 0x22) + 4))();
    if (iVar14 < iVar13) goto LAB_004e9c62;
    fStack_10c = fStack_10c * _DAT_007e6800;
    if (fStack_10c != _DAT_007e3380) {
      pcVar18 = s_ATTR_WINTER_L_008483bc;
      goto LAB_004e9c82;
    }
  }
  if ((*(int *)(*(int *)(param_2 + 0x6c) + 0x14a) != 0) &&
     (iVar13 = FUN_0051c480(), (*(byte *)(iVar13 + 0x1e) & 1) != 0)) {
    iVar13 = *(int *)(param_2 + 0x6c);
    FUN_0051c480();
    iVar14 = FUN_0050a580();
    iVar13 = (**(code **)(*(int *)(iVar13 + 0x22) + 4))();
    if (iVar13 <= iVar14) {
      uVar10 = FUN_0042b6c9(s_ATTR_LOGIST_008483a4);
      FUN_007a630a(acStack_100,uVar10);
      uVar11 = 0xffffffff;
      pcVar18 = acStack_100;
      do {
        pcVar16 = pcVar18;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar18 + 1;
        cVar7 = *pcVar18;
        pcVar18 = pcVar16;
      } while (cVar7 != '\0');
      uVar11 = ~uVar11;
      iVar13 = -1;
      pcVar18 = (char *)&DAT_00abe940;
      do {
        pcVar15 = pcVar18;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar15 = pcVar18 + 1;
        cVar7 = *pcVar18;
        pcVar18 = pcVar15;
      } while (cVar7 != '\0');
      pcVar18 = pcVar16 + -uVar11;
      pcVar16 = pcVar15 + -1;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar16 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar16 = pcVar16 + 1;
      }
    }
  }
  if ((bVar6) && (bVar5)) {
    uVar10 = FUN_0042b6c9(s_ATTR_FRIEND_00848398);
    FUN_007a630a(acStack_100,uVar10);
    uVar11 = 0xffffffff;
    pcVar18 = acStack_100;
    do {
      pcVar16 = pcVar18;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar16 = pcVar18 + 1;
      cVar7 = *pcVar18;
      pcVar18 = pcVar16;
    } while (cVar7 != '\0');
    uVar11 = ~uVar11;
    iVar13 = -1;
    pcVar18 = (char *)&DAT_00abe940;
    do {
      pcVar15 = pcVar18;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar15 = pcVar18 + 1;
      cVar7 = *pcVar18;
      pcVar18 = pcVar15;
    } while (cVar7 != '\0');
    pcVar18 = pcVar16 + -uVar11;
    pcVar16 = pcVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar16 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar16 = pcVar16 + 1;
    }
  }
  if (*(float *)(param_2 + 0x10c) * *(float *)(param_2 + 0xf0) * _DAT_007e543c == _DAT_007e3380) {
    uVar10 = FUN_0042b6c9(s_ATTR_FUEL_0084838c);
    FUN_007a630a(acStack_100,uVar10);
    uVar11 = 0xffffffff;
    pcVar18 = acStack_100;
    do {
      pcVar16 = pcVar18;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar16 = pcVar18 + 1;
      cVar7 = *pcVar18;
      pcVar18 = pcVar16;
    } while (cVar7 != '\0');
    uVar11 = ~uVar11;
    iVar13 = -1;
    pcVar18 = (char *)&DAT_00abe940;
    do {
      pcVar15 = pcVar18;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar15 = pcVar18 + 1;
      cVar7 = *pcVar18;
      pcVar18 = pcVar15;
    } while (cVar7 != '\0');
    pcVar18 = pcVar16 + -uVar11;
    pcVar16 = pcVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar16 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar16 = pcVar16 + 1;
    }
  }
  if (*(float *)(iVar8 + 0xe850) != _DAT_007e3374) {
    dVar19 = (double)*(float *)(iVar8 + 0xe850);
    uVar10 = FUN_0042b6c9(s_ATTR_TECH_00848380);
    FUN_007a630a(acStack_100,uVar10,dVar19);
    uVar11 = 0xffffffff;
    pcVar18 = acStack_100;
    do {
      pcVar16 = pcVar18;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar16 = pcVar18 + 1;
      cVar7 = *pcVar18;
      pcVar18 = pcVar16;
    } while (cVar7 != '\0');
    uVar11 = ~uVar11;
    iVar8 = -1;
    pcVar18 = (char *)&DAT_00abe940;
    do {
      pcVar15 = pcVar18;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar15 = pcVar18 + 1;
      cVar7 = *pcVar18;
      pcVar18 = pcVar15;
    } while (cVar7 != '\0');
    pcVar18 = pcVar16 + -uVar11;
    pcVar16 = pcVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar16 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar16 = pcVar16 + 1;
    }
  }
  if (_DAT_00dc1560 != _DAT_007e3380) {
    dVar19 = (double)_DAT_00dc1560;
    uVar10 = FUN_0042b6c9(s_ATTR_MOD_00848374);
    FUN_007a630a(acStack_100,uVar10,dVar19);
    uVar11 = 0xffffffff;
    pcVar18 = acStack_100;
    do {
      pcVar16 = pcVar18;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar16 = pcVar18 + 1;
      cVar7 = *pcVar18;
      pcVar18 = pcVar16;
    } while (cVar7 != '\0');
    uVar11 = ~uVar11;
    iVar8 = -1;
    pcVar18 = (char *)&DAT_00abe940;
    do {
      pcVar15 = pcVar18;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar15 = pcVar18 + 1;
      cVar7 = *pcVar18;
      pcVar18 = pcVar15;
    } while (cVar7 != '\0');
    pcVar18 = pcVar16 + -uVar11;
    pcVar16 = pcVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar16 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar16 = pcVar16 + 1;
    }
  }
LAB_004e9eef:
  return &DAT_00abe940;
}


