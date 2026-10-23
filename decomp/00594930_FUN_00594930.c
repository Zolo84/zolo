// FUN_00594930 @ 594930 size=2701

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00594930(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *piVar14;
  char *pcVar15;
  char *pcVar16;
  float10 fVar17;
  float10 fVar18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007ca2fb;
  pvStack_14 = ExceptionList;
  piVar2 = *(int **)(DAT_00bda0f8 + 0xe892);
  ExceptionList = &pvStack_14;
  uVar5 = FUN_004136a0();
  do {
    if (piVar2 == (int *)0x0) {
      FUN_005917f0();
      ExceptionList = pvStack_14;
      return;
    }
    piVar3 = (int *)piVar2[2];
    piVar2 = (int *)(DAT_00ab27b4 + *piVar2 * 0x4b2);
    puVar6 = operator_new(0x50);
    local_c = 0;
    puVar13 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      FUN_00598ae0();
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_00433f00();
      *(undefined4 *)((int)puVar6 + 0x3e) = uVar5;
      *(undefined4 *)((int)puVar6 + 0x42) = param_1;
      *(undefined2 *)((int)puVar6 + 0x4a) = 0;
      puVar6[0x13] = 0;
      *puVar6 = &PTR_FUN_007eb380;
      puVar6[2] = &PTR_LAB_007eb37c;
      puVar13 = puVar6;
    }
    local_c = 0xffffffff;
    *(undefined4 *)((int)puVar13 + 0x46) = *(undefined4 *)((int)piVar2 + 0x12);
    pcVar7 = operator_new(0x104);
    local_c = 2;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar8 = (char *)(**(code **)(*piVar2 + 0xc))();
      uVar11 = 0xffffffff;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb264;
      pcVar16 = &DAT_0083bf04;
      do {
        pcVar15 = pcVar16;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar15 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar15;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar15 = pcVar15 + -uVar11;
      pcVar16 = pcVar7;
      for (uVar12 = uVar11 >> 2; pcVar16 = pcVar16 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar16 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar16 = pcVar16 + 1;
      }
      *(undefined ***)pcVar7 = &PTR_LAB_007eb23c;
      if (pcVar8 != (char *)0x0) {
        uVar11 = 0xffffffff;
        do {
          pcVar16 = pcVar8;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar16 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar16;
        } while (cVar1 != '\0');
        uVar11 = ~uVar11;
        pcVar8 = pcVar16 + -uVar11;
        pcVar16 = pcVar7 + 8;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar16 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar16 = pcVar16 + 1;
        }
      }
    }
    piVar14 = (int *)((int)puVar13 + 0x2e);
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(char **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = pcVar7;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar7 = operator_new(0x108);
    local_c = 3;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x0;
    }
    else {
      fVar17 = (float10)FUN_004ed0e0();
      uVar11 = 0xffffffff;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb264;
      pcVar8 = &DAT_0083bf04;
      do {
        pcVar16 = pcVar8;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar16;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar16 = pcVar16 + -uVar11;
      pcVar8 = pcVar7;
      for (uVar12 = uVar11 >> 2; pcVar8 = pcVar8 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar8 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(float *)(pcVar7 + 0x104) = (float)fVar17;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar7 + 8,&PTR_PTR_0083c9e8,(double)fVar17);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(char **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = pcVar7;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar7 = operator_new(0x108);
    local_c = 4;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x0;
    }
    else {
      fVar17 = (float10)FUN_004ec900();
      uVar11 = 0xffffffff;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb264;
      pcVar8 = &DAT_0083bf04;
      do {
        pcVar16 = pcVar8;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar16;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar16 = pcVar16 + -uVar11;
      pcVar8 = pcVar7;
      for (uVar12 = uVar11 >> 2; pcVar8 = pcVar8 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar8 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(float *)(pcVar7 + 0x104) = (float)fVar17;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar7 + 8,&PTR_PTR_0083c9e8,(double)fVar17);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(char **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = pcVar7;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar7 = operator_new(0x108);
    local_c = 5;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x0;
    }
    else {
      fVar17 = (float10)FUN_004ec7e0();
      uVar11 = 0xffffffff;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb264;
      pcVar8 = &DAT_0083bf04;
      do {
        pcVar16 = pcVar8;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar16;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar16 = pcVar16 + -uVar11;
      pcVar8 = pcVar7;
      for (uVar12 = uVar11 >> 2; pcVar8 = pcVar8 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar8 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(float *)(pcVar7 + 0x104) = (float)fVar17;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar7 + 8,&PTR_PTR_0083c9e8,(double)fVar17);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(char **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = pcVar7;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar7 = operator_new(0x108);
    local_c = 6;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x0;
    }
    else {
      fVar17 = (float10)FUN_004ec6c0();
      uVar11 = 0xffffffff;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb264;
      pcVar8 = &DAT_0083bf04;
      do {
        pcVar16 = pcVar8;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar16;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar16 = pcVar16 + -uVar11;
      pcVar8 = pcVar7;
      for (uVar12 = uVar11 >> 2; pcVar8 = pcVar8 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar8 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(float *)(pcVar7 + 0x104) = (float)fVar17;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar7 + 8,&PTR_PTR_0083c9e8,(double)fVar17);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(char **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = pcVar7;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar7 = operator_new(0x108);
    local_c = 7;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x0;
    }
    else {
      fVar17 = (float10)FUN_004ec5a0();
      uVar11 = 0xffffffff;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb264;
      pcVar8 = &DAT_0083bf04;
      do {
        pcVar16 = pcVar8;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar16;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar16 = pcVar16 + -uVar11;
      pcVar8 = pcVar7;
      for (uVar12 = uVar11 >> 2; pcVar8 = pcVar8 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar8 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(float *)(pcVar7 + 0x104) = (float)fVar17;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar7 + 8,&PTR_PTR_0083c9e8,(double)fVar17);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(char **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = pcVar7;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar6 = operator_new(0x108);
    local_c = 8;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar9 = *(int *)((int)piVar2 + 0x1f2);
      FUN_00592190();
      *puVar6 = &PTR_LAB_007eb304;
      puVar6[0x41] = (float)iVar9;
      FUN_007a630a(puVar6 + 2,&PTR_PTR_0083c9e8,(double)iVar9);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(undefined4 **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = puVar6;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar6 = operator_new(0x108);
    local_c = 9;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      fVar4 = *(float *)(*(int *)((int)piVar2 + 0x1de) + 0x14);
      FUN_00592190();
      *puVar6 = &PTR_LAB_007eb304;
      puVar6[0x41] = fVar4;
      FUN_007a630a(puVar6 + 2,&PTR_PTR_0083c9e8,(double)fVar4);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(undefined4 **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = puVar6;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar7 = operator_new(0x108);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x0;
    }
    else {
      uVar11 = 0xffffffff;
      fVar4 = *(float *)(*(int *)((int)piVar2 + 0x1e2) + 0x14);
      *(undefined ***)pcVar7 = &PTR_LAB_007eb264;
      pcVar8 = &DAT_0083bf04;
      do {
        pcVar16 = pcVar8;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar16;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar16 = pcVar16 + -uVar11;
      pcVar8 = pcVar7;
      for (uVar12 = uVar11 >> 2; pcVar8 = pcVar8 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar8 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(float *)(pcVar7 + 0x104) = fVar4;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar7 + 8,&PTR_PTR_0083c9e8,(double)fVar4);
    }
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(char **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = pcVar7;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar6 = operator_new(0x108);
    local_c = 10;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      fVar17 = (float10)FUN_004ed1a0();
      FUN_00592190();
      *puVar6 = &PTR_LAB_007eb304;
      puVar6[0x41] = (float)fVar17;
      FUN_007a630a(puVar6 + 2,&PTR_PTR_0083c9e8,(double)(float)fVar17);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(undefined4 **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = puVar6;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar6 = operator_new(0x108);
    local_c = 0xb;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      FUN_004ecf60();
      iVar9 = __ftol();
      FUN_00592190();
      *puVar6 = &PTR_LAB_007eb304;
      puVar6[0x41] = (float)iVar9;
      FUN_007a630a(puVar6 + 2,&PTR_PTR_0083c9e8,(double)iVar9);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(undefined4 **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = puVar6;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar6 = operator_new(0x108);
    local_c = 0xc;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      FUN_004ed020();
      iVar9 = __ftol();
      FUN_00592190();
      *puVar6 = &PTR_LAB_007eb304;
      puVar6[0x41] = (float)iVar9;
      FUN_007a630a(puVar6 + 2,&PTR_PTR_0083c9e8,(double)iVar9);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(undefined4 **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = puVar6;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar6 = operator_new(0x108);
    local_c = 0xd;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      fVar18 = (float10)FUN_004ecea0();
      fVar17 = (float10)_DAT_007e4088;
      FUN_00598b50();
      *puVar6 = &PTR_LAB_007eb464;
      FUN_007a630a(puVar6 + 2,s___1f____00858320,(double)(float)(fVar18 * fVar17));
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(undefined4 **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = puVar6;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar6 = operator_new(0x108);
    local_c = 0xe;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      fVar4 = *(float *)(*(int *)((int)piVar2 + 0x1e6) + 0x14);
      FUN_00592190();
      *puVar6 = &PTR_LAB_007eb304;
      puVar6[0x41] = fVar4;
      FUN_007a630a(puVar6 + 2,&PTR_PTR_0083c9e8,(double)fVar4);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(undefined4 **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = puVar6;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar6 = operator_new(0x108);
    local_c = 0xf;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      fVar4 = *(float *)(*(int *)((int)piVar2 + 0x1ee) + 0x14);
      FUN_00592190();
      *puVar6 = &PTR_LAB_007eb304;
      puVar6[0x41] = fVar4;
      FUN_007a630a(puVar6 + 2,&PTR_PTR_0083c9e8,(double)fVar4);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar13 + 0x32) < *(int *)((int)puVar13 + 0x36)) {
      *(undefined4 **)(*piVar14 + *(int *)((int)puVar13 + 0x32) * 4) = puVar6;
      *(int *)((int)puVar13 + 0x32) = *(int *)((int)puVar13 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pvVar10 = operator_new(0x108);
    local_c = 0x10;
    if (pvVar10 != (void *)0x0) {
      FUN_00598bc0();
    }
    local_c = 0xffffffff;
    FUN_00598b10();
    FUN_00598ca0();
    piVar2 = piVar3;
  } while( true );
}


