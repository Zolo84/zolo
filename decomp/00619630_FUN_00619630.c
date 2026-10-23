// FUN_00619630 @ 619630 size=2483

void __fastcall FUN_00619630(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  char *pcVar16;
  char *pcVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
  int *piStack_270;
  undefined **ppuStack_264;
  int *piStack_260;
  int *piStack_25c;
  int iStack_258;
  undefined1 uStack_254;
  undefined **ppuStack_250;
  int *piStack_24c;
  int *piStack_248;
  int iStack_244;
  undefined1 uStack_240;
  undefined **ppuStack_23c;
  int *piStack_238;
  int *piStack_234;
  int iStack_230;
  undefined1 uStack_22c;
  undefined **ppuStack_228;
  int *piStack_224;
  int *piStack_220;
  int iStack_21c;
  undefined1 uStack_218;
  undefined4 uStack_214;
  undefined2 uStack_210;
  undefined1 auStack_20c [256];
  char acStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d0bba;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 0x11c) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0x11c))(1);
  }
  puVar5 = operator_new(0x76);
  uVar6 = DAT_00d0ca90;
  uStack_4 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_00434930(0x158,0xa6,0,0);
    *(undefined4 *)((int)puVar5 + 0x72) = uVar6;
    *puVar5 = &PTR_FUN_007ed740;
    *(undefined ***)((int)puVar5 + 0x12) = &PTR_LAB_007ed72c;
    *(undefined ***)((int)puVar5 + 0x1a) = &PTR_LAB_007ed728;
    *(undefined ***)((int)puVar5 + 0x1e) = &PTR_LAB_007ed724;
  }
  *(undefined4 **)(param_1 + 0x11c) = puVar5;
  DAT_00cfa108._0_1_ = 0;
  uStack_4 = 0xffffffff;
  iVar1 = (&DAT_0089cad8)[*(int *)(param_1 + 200)];
  iVar14 = *(int *)(iVar1 + 0x12da);
  if (*(int *)(iVar14 + 0x3b30) != 0) {
    uVar6 = FUN_004af740(*(undefined4 *)(iVar14 + 0x3b30));
    uVar6 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))(uVar6);
    uVar7 = FUN_0042b6c9(s_DIP_PUPPET_0085f0cc);
    FUN_007a630a(&DAT_00cfa108,uVar7,uVar6);
    pvVar8 = operator_new(0x50);
    uStack_4 = 1;
    if (pvVar8 != (void *)0x0) {
      uVar6 = *(undefined4 *)(param_1 + 0x11c);
      uVar20 = 0;
      uVar19 = 5;
      puVar5 = &DAT_00cfa108;
      uVar7 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar7,puVar5,uVar19,uVar6,uVar20);
    }
  }
  piVar15 = &DAT_0089cad8;
  do {
    uStack_4 = 0xffffffff;
    iVar1 = *piVar15;
    if ((iVar1 != 0) &&
       (iVar14 = (&DAT_0089cad8)[*(int *)(param_1 + 200)],
       *(int *)(*(int *)(iVar1 + 0x12da) + 0x3b30) == *(int *)(iVar14 + 6))) {
      uVar6 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))();
      uVar6 = (**(code **)(*(int *)(iVar14 + 0xe) + 0xc))(uVar6);
      uVar7 = FUN_0042b6c9(s_DIP_PURPUPPET_0085f0bc);
      FUN_007a630a(&DAT_00cfa108,uVar7,uVar6);
      pvVar8 = operator_new(0x50);
      uStack_4 = 2;
      if (pvVar8 != (void *)0x0) {
        uVar6 = *(undefined4 *)(param_1 + 0x11c);
        uVar20 = 0;
        uVar19 = 5;
        puVar5 = &DAT_00cfa108;
        uVar7 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
        FUN_00607a30(uVar7,puVar5,uVar19,uVar6,uVar20);
      }
    }
    uStack_4 = 0xffffffff;
    piVar15 = piVar15 + 1;
  } while ((int)piVar15 < 0x89d038);
  iVar1 = (&DAT_0089cad8)[*(int *)(param_1 + 200)];
  piVar15 = DAT_00d615f6;
  while (piVar15 != (int *)0x0) {
    piVar2 = (int *)piVar15[2];
    iVar14 = *piVar15;
    piVar15 = piVar2;
    if ((*(int *)(iVar14 + 0x1a) == *(int *)(iVar1 + 6)) ||
       (*(int *)(iVar14 + 0x16) == *(int *)(iVar1 + 6))) {
      uStack_214 = *(undefined4 *)(iVar14 + 0x22);
      uStack_210 = *(undefined2 *)(iVar14 + 0x26);
      FUN_00791b3b(auStack_20c,&uStack_214);
      iVar11 = *(int *)(iVar14 + 0x1a);
      if (iVar11 == *(int *)(iVar1 + 6)) {
        iVar11 = *(int *)(iVar14 + 0x16);
      }
      uVar6 = FUN_004af740(iVar11);
      if (*(int *)(iVar14 + 0x1e) == 2) {
        puVar21 = auStack_20c;
        uVar7 = FUN_0042b6c9(s_DIPEACETREATY_0085f0ac);
        FUN_007a630a(&DAT_00cfa108,uVar7,uVar6,puVar21);
        pvVar8 = operator_new(0x50);
        uStack_4 = 3;
        if (pvVar8 != (void *)0x0) {
          uVar20 = 0;
          uVar6 = *(undefined4 *)(param_1 + 0x11c);
          uVar19 = 4;
          puVar5 = &DAT_00cfa108;
          uVar7 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
          FUN_00607a30(uVar7,puVar5,uVar19,uVar6,uVar20);
        }
        uStack_4 = 0xffffffff;
      }
      else if (*(int *)(iVar14 + 0x1e) == 1) {
        uVar6 = FUN_004af740(*(undefined4 *)(iVar1 + 6),uVar6);
        uVar7 = FUN_0042b6c9(s_DIP_NON_AGGRESSION_0085f098);
        FUN_007a630a(&DAT_00cfa108,uVar7,uVar6);
        puVar21 = auStack_20c;
        uVar6 = FUN_0042b6c9(s_TRADE_EXPIRATION_DATE_0085f080);
        FUN_007a630a(acStack_10c,uVar6,puVar21);
        uVar12 = 0xffffffff;
        pcVar9 = &DAT_0083bf1c;
        do {
          pcVar17 = pcVar9;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar17 = pcVar9 + 1;
          cVar3 = *pcVar9;
          pcVar9 = pcVar17;
        } while (cVar3 != '\0');
        uVar12 = ~uVar12;
        iVar14 = -1;
        pcVar9 = (char *)&DAT_00cfa108;
        do {
          pcVar16 = pcVar9;
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          pcVar16 = pcVar9 + 1;
          cVar3 = *pcVar9;
          pcVar9 = pcVar16;
        } while (cVar3 != '\0');
        pcVar9 = pcVar17 + -uVar12;
        pcVar17 = pcVar16 + -1;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar17 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar17 = pcVar17 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar9 = acStack_10c;
        do {
          pcVar17 = pcVar9;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar17 = pcVar9 + 1;
          cVar3 = *pcVar9;
          pcVar9 = pcVar17;
        } while (cVar3 != '\0');
        uVar12 = ~uVar12;
        iVar14 = -1;
        pcVar9 = (char *)&DAT_00cfa108;
        do {
          pcVar16 = pcVar9;
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          pcVar16 = pcVar9 + 1;
          cVar3 = *pcVar9;
          pcVar9 = pcVar16;
        } while (cVar3 != '\0');
        pcVar9 = pcVar17 + -uVar12;
        pcVar17 = pcVar16 + -1;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar17 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar17 = pcVar17 + 1;
        }
        pvVar8 = operator_new(0x50);
        uStack_4 = 4;
        if (pvVar8 != (void *)0x0) {
          uVar20 = 0;
          uVar6 = *(undefined4 *)(param_1 + 0x11c);
          uVar19 = 3;
          puVar5 = &DAT_00cfa108;
          uVar7 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
          FUN_00607a30(uVar7,puVar5,uVar19,uVar6,uVar20);
        }
        uStack_4 = 0xffffffff;
      }
    }
  }
  uVar4 = FUN_00584270(0xff,0xff,0xff);
  *(undefined2 *)(*(int *)(param_1 + 0x11c) + 0x5a) = uVar4;
  FUN_006087b0((&DAT_0089cad8)[*(int *)(param_1 + 200)]);
  FUN_00608b40((&DAT_0089cad8)[*(int *)(param_1 + 200)]);
  piStack_224 = (int *)0x0;
  piStack_220 = (int *)0x0;
  iStack_21c = 0;
  uStack_218 = 0;
  ppuStack_228 = &PTR_FUN_007e5258;
  piStack_24c = (int *)0x0;
  piStack_248 = (int *)0x0;
  iStack_244 = 0;
  uStack_240 = 0;
  ppuStack_250 = &PTR_FUN_007e5258;
  piStack_238 = (int *)0x0;
  piStack_234 = (int *)0x0;
  iStack_230 = 0;
  uStack_22c = 0;
  ppuStack_23c = &PTR_FUN_007e5258;
  piStack_260 = (int *)0x0;
  piStack_25c = (int *)0x0;
  iStack_258 = 0;
  uStack_254 = 0;
  ppuStack_264 = &PTR_FUN_007e5258;
  uStack_4._0_1_ = 8;
  uStack_4._1_3_ = 0;
  iVar14 = 0;
  piStack_270 = &DAT_0089cad8;
  do {
    iVar11 = *piStack_270;
    piVar15 = piStack_260;
    if (iVar11 != 0) {
      cVar3 = FUN_004a74e0(*(undefined4 *)(iVar1 + 6));
      piVar15 = piStack_220;
      piVar2 = piStack_224;
      if (cVar3 != '\0') {
        piStack_220 = operator_new(0xe);
        if (piStack_220 == (int *)0x0) {
          piStack_220 = (int *)0x0;
        }
        else {
          *piStack_220 = iVar14;
          piStack_220[1] = (int)piVar15;
          piStack_220[2] = 0;
          *(undefined1 *)(piStack_220 + 3) = 0;
        }
        iVar10 = iStack_21c + 1;
        bVar18 = iStack_21c != 0;
        piVar2 = piStack_220;
        iStack_21c = iVar10;
        if (bVar18) {
          piVar15[2] = (int)piStack_220;
          piVar2 = piStack_224;
        }
      }
      piStack_224 = piVar2;
      cVar3 = FUN_004a7500(*(undefined4 *)(iVar1 + 6));
      piVar15 = piStack_248;
      piVar2 = piStack_24c;
      if (cVar3 != '\0') {
        piStack_248 = operator_new(0xe);
        if (piStack_248 == (int *)0x0) {
          piStack_248 = (int *)0x0;
        }
        else {
          *piStack_248 = iVar14;
          piStack_248[1] = (int)piVar15;
          piStack_248[2] = 0;
          *(undefined1 *)(piStack_248 + 3) = 0;
        }
        iVar10 = iStack_244 + 1;
        bVar18 = iStack_244 != 0;
        piVar2 = piStack_248;
        iStack_244 = iVar10;
        if (bVar18) {
          piVar15[2] = (int)piStack_248;
          piVar2 = piStack_24c;
        }
      }
      piStack_24c = piVar2;
      cVar3 = FUN_004a74e0(*(undefined4 *)(iVar11 + 6));
      piVar15 = piStack_234;
      piVar2 = piStack_238;
      if (cVar3 != '\0') {
        piStack_234 = operator_new(0xe);
        if (piStack_234 == (int *)0x0) {
          piStack_234 = (int *)0x0;
        }
        else {
          *piStack_234 = iVar14;
          piStack_234[1] = (int)piVar15;
          piStack_234[2] = 0;
          *(undefined1 *)(piStack_234 + 3) = 0;
        }
        iVar10 = iStack_230 + 1;
        bVar18 = iStack_230 != 0;
        piVar2 = piStack_234;
        iStack_230 = iVar10;
        if (bVar18) {
          piVar15[2] = (int)piStack_234;
          piVar2 = piStack_238;
        }
      }
      piStack_238 = piVar2;
      cVar3 = FUN_004a7500(*(undefined4 *)(iVar11 + 6));
      piVar2 = piStack_25c;
      piVar15 = piStack_260;
      if (cVar3 != '\0') {
        piStack_25c = operator_new(0xe);
        if (piStack_25c == (int *)0x0) {
          piStack_25c = (int *)0x0;
        }
        else {
          *piStack_25c = iVar14;
          piStack_25c[1] = (int)piVar2;
          piStack_25c[2] = 0;
          *(undefined1 *)(piStack_25c + 3) = 0;
        }
        iVar11 = iStack_258 + 1;
        bVar18 = iStack_258 != 0;
        piVar15 = piStack_25c;
        iStack_258 = iVar11;
        if (bVar18) {
          piVar2[2] = (int)piStack_25c;
          piVar15 = piStack_260;
        }
      }
    }
    piStack_260 = piVar15;
    iVar14 = iVar14 + 1;
    piStack_270 = piStack_270 + 1;
  } while ((int)piStack_270 < 0x89d038);
  if (iStack_21c != 0) {
    pcVar9 = (char *)FUN_0042b6c9(s_DIPLOMACY_UNDER_TRADE_EMBARGO_0085f060);
    uVar12 = 0xffffffff;
    do {
      pcVar17 = pcVar9;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar17 = pcVar9 + 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar17;
    } while (cVar3 != '\0');
    uVar12 = ~uVar12;
    pcVar9 = pcVar17 + -uVar12;
    pcVar17 = (char *)&DAT_00cfa108;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar17 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar17 = pcVar17 + 1;
    }
    FUN_00608290(&DAT_00cfa108,&ppuStack_228,*(undefined4 *)(iVar1 + 6),99999);
    pvVar8 = operator_new(0x50);
    uStack_4._0_1_ = 9;
    if (pvVar8 != (void *)0x0) {
      uVar20 = 0;
      uVar6 = *(undefined4 *)(param_1 + 0x11c);
      uVar19 = 3;
      puVar5 = &DAT_00cfa108;
      uVar7 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar7,puVar5,uVar19,uVar6,uVar20);
    }
    uStack_4._0_1_ = 8;
  }
  if (iStack_244 != 0) {
    pcVar9 = (char *)FUN_0042b6c9(s_DIPLOMACY_UNDER_TECH_EMBARGO_0085f040);
    uVar12 = 0xffffffff;
    do {
      pcVar17 = pcVar9;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar17 = pcVar9 + 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar17;
    } while (cVar3 != '\0');
    uVar12 = ~uVar12;
    pcVar9 = pcVar17 + -uVar12;
    pcVar17 = (char *)&DAT_00cfa108;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar17 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar17 = pcVar17 + 1;
    }
    FUN_00608290(&DAT_00cfa108,&ppuStack_250,*(undefined4 *)(iVar1 + 6),99999);
    pvVar8 = operator_new(0x50);
    uStack_4._0_1_ = 10;
    if (pvVar8 != (void *)0x0) {
      uVar20 = 0;
      uVar6 = *(undefined4 *)(param_1 + 0x11c);
      uVar19 = 3;
      puVar5 = &DAT_00cfa108;
      uVar7 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar7,puVar5,uVar19,uVar6,uVar20);
    }
    uStack_4._0_1_ = 8;
  }
  if (iStack_230 != 0) {
    pcVar9 = (char *)FUN_0042b6c9(s_DIPLOMACY_TRADE_EMBARGO_TO_0085f024);
    uVar12 = 0xffffffff;
    do {
      pcVar17 = pcVar9;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar17 = pcVar9 + 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar17;
    } while (cVar3 != '\0');
    uVar12 = ~uVar12;
    pcVar9 = pcVar17 + -uVar12;
    pcVar17 = (char *)&DAT_00cfa108;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar17 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar17 = pcVar17 + 1;
    }
    FUN_00608290(&DAT_00cfa108,&ppuStack_23c,*(undefined4 *)(iVar1 + 6),99999);
    pvVar8 = operator_new(0x50);
    uStack_4._0_1_ = 0xb;
    if (pvVar8 != (void *)0x0) {
      uVar20 = 0;
      uVar6 = *(undefined4 *)(param_1 + 0x11c);
      uVar19 = 3;
      puVar5 = &DAT_00cfa108;
      uVar7 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar7,puVar5,uVar19,uVar6,uVar20);
    }
    uStack_4._0_1_ = 8;
  }
  if (iStack_258 != 0) {
    pcVar9 = (char *)FUN_0042b6c9(s_DIPLOMACY_TECH_EMBARGO_TO_0085f008);
    uVar12 = 0xffffffff;
    do {
      pcVar17 = pcVar9;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar17 = pcVar9 + 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar17;
    } while (cVar3 != '\0');
    uVar12 = ~uVar12;
    pcVar9 = pcVar17 + -uVar12;
    pcVar17 = (char *)&DAT_00cfa108;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar17 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar17 = pcVar17 + 1;
    }
    FUN_00608290(&DAT_00cfa108,&ppuStack_264,*(undefined4 *)(iVar1 + 6),99999);
    pvVar8 = operator_new(0x50);
    uStack_4._0_1_ = 0xc;
    if (pvVar8 != (void *)0x0) {
      uVar20 = 0;
      uVar6 = *(undefined4 *)(param_1 + 0x11c);
      uVar19 = 3;
      puVar5 = &DAT_00cfa108;
      uVar7 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar7,puVar5,uVar19,uVar6,uVar20);
    }
    uStack_4._0_1_ = 8;
  }
  (*(code *)ppuStack_228[4])();
  (*(code *)ppuStack_250[4])();
  (*(code *)ppuStack_23c[4])();
  (*(code *)ppuStack_264[4])();
  ppuStack_264 = &PTR_LAB_007e3ff0;
  piVar15 = piStack_260;
  while (piVar15 != (int *)0x0) {
    piVar2 = (int *)piVar15[2];
    FUN_00796cd8(piVar15);
    piVar15 = piVar2;
  }
  piStack_260 = (int *)0x0;
  piStack_25c = (int *)0x0;
  iStack_258 = 0;
  ppuStack_23c = &PTR_LAB_007e3ff0;
  piVar15 = piStack_238;
  while (piVar15 != (int *)0x0) {
    piVar2 = (int *)piVar15[2];
    FUN_00796cd8(piVar15);
    piVar15 = piVar2;
  }
  piStack_238 = (int *)0x0;
  piStack_234 = (int *)0x0;
  iStack_230 = 0;
  ppuStack_250 = &PTR_LAB_007e3ff0;
  piVar15 = piStack_24c;
  while (piVar15 != (int *)0x0) {
    piVar2 = (int *)piVar15[2];
    FUN_00796cd8(piVar15);
    piVar15 = piVar2;
  }
  ppuStack_228 = &PTR_LAB_007e3ff0;
  piStack_24c = (int *)0x0;
  piStack_248 = (int *)0x0;
  iStack_244 = 0;
  piVar15 = piStack_224;
  while (piVar15 != (int *)0x0) {
    piVar2 = (int *)piVar15[2];
    FUN_00796cd8(piVar15);
    piVar15 = piVar2;
  }
  ExceptionList = pvStack_c;
  return;
}


