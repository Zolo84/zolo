// FUN_00597580 @ 597580 size=1687

void __fastcall FUN_00597580(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  undefined4 *local_3c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007ca598;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  uVar6 = FUN_004136a0();
  piVar8 = *(int **)(DAT_00bda0f8 + 0x3b6c);
  do {
    if (piVar8 == (int *)0x0) {
      FUN_005917f0();
      ExceptionList = pvStack_14;
      return;
    }
    piVar3 = (int *)piVar8[2];
    iVar4 = *piVar8;
    local_3c = operator_new(0x50);
    local_c = 0;
    if (local_3c == (undefined4 *)0x0) {
      local_3c = (undefined4 *)0x0;
    }
    else {
      FUN_00598ae0();
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_00433f00();
      *(undefined4 *)((int)local_3c + 0x3e) = uVar6;
      *(undefined4 *)((int)local_3c + 0x42) = param_1;
      *(undefined2 *)((int)local_3c + 0x4a) = 0;
      local_3c[0x13] = 0;
      *local_3c = &PTR_FUN_007eb380;
      local_3c[2] = &PTR_LAB_007eb37c;
    }
    local_c = 0xffffffff;
    FUN_00447250();
    FUN_00598c30();
    pcVar7 = operator_new(0x104);
    local_c = 2;
    pcVar10 = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      piVar8 = (int *)FUN_004d5be0();
      pcVar9 = (char *)(**(code **)(*piVar8 + 0xc))();
      uVar13 = 0xffffffff;
      *(undefined ***)pcVar7 = &PTR_LAB_007eb264;
      pcVar10 = &DAT_0083bf04;
      do {
        pcVar15 = pcVar10;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar15 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar15;
      } while (cVar2 != '\0');
      uVar13 = ~uVar13;
      pcVar15 = pcVar15 + -uVar13;
      pcVar10 = pcVar7;
      for (uVar14 = uVar13 >> 2; pcVar10 = pcVar10 + 4, uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar10 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar10 = pcVar10 + 1;
      }
      *(undefined ***)pcVar7 = &PTR_LAB_007eb23c;
      pcVar10 = pcVar7;
      if (pcVar9 != (char *)0x0) {
        uVar13 = 0xffffffff;
        do {
          pcVar15 = pcVar9;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar15 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar15;
        } while (cVar2 != '\0');
        uVar13 = ~uVar13;
        pcVar9 = pcVar15 + -uVar13;
        pcVar7 = pcVar7 + 8;
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar7 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
    }
    local_c = 0xffffffff;
    piVar8 = (int *)((int)local_3c + 0x2e);
    if (*(int *)((int)local_3c + 0x32) < *(int *)((int)local_3c + 0x36)) {
      *(char **)(*piVar8 + *(int *)((int)local_3c + 0x32) * 4) = pcVar10;
      *(int *)((int)local_3c + 0x32) = *(int *)((int)local_3c + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar10 = operator_new(0x104);
    local_c = 3;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      piVar11 = (int *)FUN_004d5bf0();
      pcVar7 = (char *)(**(code **)(*piVar11 + 0xc))();
      uVar13 = 0xffffffff;
      *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
      pcVar9 = &DAT_0083bf04;
      do {
        pcVar15 = pcVar9;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar15 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar15;
      } while (cVar2 != '\0');
      uVar13 = ~uVar13;
      pcVar15 = pcVar15 + -uVar13;
      pcVar9 = pcVar10;
      for (uVar14 = uVar13 >> 2; pcVar9 = pcVar9 + 4, uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar9 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar9 = pcVar9 + 1;
      }
      *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
      if (pcVar7 != (char *)0x0) {
        uVar13 = 0xffffffff;
        do {
          pcVar9 = pcVar7;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar9 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar2 != '\0');
        uVar13 = ~uVar13;
        pcVar7 = pcVar9 + -uVar13;
        pcVar9 = pcVar10 + 8;
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
    }
    local_c = 0xffffffff;
    if (*(int *)((int)local_3c + 0x32) < *(int *)((int)local_3c + 0x36)) {
      *(char **)(*piVar8 + *(int *)((int)local_3c + 0x32) * 4) = pcVar10;
      *(int *)((int)local_3c + 0x32) = *(int *)((int)local_3c + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar10 = operator_new(0x108);
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      uVar13 = 0xffffffff;
      iVar5 = *(int *)(iVar4 + 0x12e);
      *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
      pcVar7 = &DAT_0083bf04;
      do {
        pcVar9 = pcVar7;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar9 = pcVar7 + 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar2 != '\0');
      uVar13 = ~uVar13;
      pcVar9 = pcVar9 + -uVar13;
      pcVar7 = pcVar10;
      for (uVar14 = uVar13 >> 2; pcVar7 = pcVar7 + 4, uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar7 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar7 = pcVar7 + 1;
      }
      *(float *)(pcVar10 + 0x104) = (float)iVar5;
      *(undefined ***)pcVar10 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar10 + 8,&PTR_PTR_0083c9e8);
    }
    if (*(int *)((int)local_3c + 0x32) < *(int *)((int)local_3c + 0x36)) {
      *(char **)(*piVar8 + *(int *)((int)local_3c + 0x32) * 4) = pcVar10;
      *(int *)((int)local_3c + 0x32) = *(int *)((int)local_3c + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar10 = operator_new(0x108);
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      iVar5 = *(int *)(iVar4 + 0x132);
      uVar13 = 0xffffffff;
      *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
      pcVar7 = &DAT_0083bf04;
      do {
        pcVar9 = pcVar7;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar9 = pcVar7 + 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar2 != '\0');
      uVar13 = ~uVar13;
      pcVar9 = pcVar9 + -uVar13;
      pcVar7 = pcVar10;
      for (uVar14 = uVar13 >> 2; pcVar7 = pcVar7 + 4, uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar7 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar7 = pcVar7 + 1;
      }
      *(float *)(pcVar10 + 0x104) = (float)iVar5;
      *(undefined ***)pcVar10 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar10 + 8,&PTR_PTR_0083c9e8);
    }
    if (*(int *)((int)local_3c + 0x32) < *(int *)((int)local_3c + 0x36)) {
      *(char **)(*piVar8 + *(int *)((int)local_3c + 0x32) * 4) = pcVar10;
      *(int *)((int)local_3c + 0x32) = *(int *)((int)local_3c + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar10 = operator_new(0x108);
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      uVar13 = 0xffffffff;
      uVar1 = *(undefined4 *)(iVar4 + 0x146);
      *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
      pcVar7 = &DAT_0083bf04;
      do {
        pcVar9 = pcVar7;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar9 = pcVar7 + 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar2 != '\0');
      uVar13 = ~uVar13;
      pcVar9 = pcVar9 + -uVar13;
      pcVar7 = pcVar10;
      for (uVar14 = uVar13 >> 2; pcVar7 = pcVar7 + 4, uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar7 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar7 = pcVar7 + 1;
      }
      *(undefined4 *)(pcVar10 + 0x104) = uVar1;
      *(undefined ***)pcVar10 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar10 + 8,&PTR_PTR_0083c9e8);
    }
    if (*(int *)((int)local_3c + 0x32) < *(int *)((int)local_3c + 0x36)) {
      *(char **)(*piVar8 + *(int *)((int)local_3c + 0x32) * 4) = pcVar10;
      *(int *)((int)local_3c + 0x32) = *(int *)((int)local_3c + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar12 = operator_new(0x108);
    local_c = 4;
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0x13e);
      FUN_00592190();
      *puVar12 = &PTR_LAB_007eb304;
      puVar12[0x41] = uVar1;
      FUN_007a630a(puVar12 + 2,&PTR_PTR_0083c9e8);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)local_3c + 0x32) < *(int *)((int)local_3c + 0x36)) {
      *(undefined4 **)(*piVar8 + *(int *)((int)local_3c + 0x32) * 4) = puVar12;
      *(int *)((int)local_3c + 0x32) = *(int *)((int)local_3c + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar12 = operator_new(0x108);
    local_c = 5;
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0x13a);
      FUN_00592190();
      *puVar12 = &PTR_LAB_007eb304;
      puVar12[0x41] = uVar1;
      FUN_007a630a(puVar12 + 2,&PTR_PTR_0083c9e8);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)local_3c + 0x32) < *(int *)((int)local_3c + 0x36)) {
      *(undefined4 **)(*piVar8 + *(int *)((int)local_3c + 0x32) * 4) = puVar12;
      *(int *)((int)local_3c + 0x32) = *(int *)((int)local_3c + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar12 = operator_new(0x108);
    local_c = 6;
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0x136);
      FUN_00592190();
      *puVar12 = &PTR_LAB_007eb304;
      puVar12[0x41] = uVar1;
      FUN_007a630a(puVar12 + 2,&PTR_PTR_0083c9e8);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)local_3c + 0x32) < *(int *)((int)local_3c + 0x36)) {
      *(undefined4 **)(*piVar8 + *(int *)((int)local_3c + 0x32) * 4) = puVar12;
      *(int *)((int)local_3c + 0x32) = *(int *)((int)local_3c + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar12 = operator_new(0x108);
    local_c = 7;
    if (puVar12 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(iVar4 + 0x142);
      FUN_00592190();
      *puVar12 = &PTR_LAB_007eb304;
      puVar12[0x41] = uVar1;
      FUN_007a630a(puVar12 + 2,&PTR_PTR_0083c9e8);
    }
    local_c = 0xffffffff;
    FUN_00598b10();
    FUN_00598ca0();
    piVar8 = piVar3;
  } while( true );
}


