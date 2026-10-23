// FUN_005955b0 @ 5955b0 size=7687

void __fastcall FUN_005955b0(undefined4 param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  float10 fVar16;
  float *local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar12 = DAT_00bda0f8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_007ca514;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar3 = FUN_004136a0();
  puVar4 = operator_new(0x50);
  local_c = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00598ae0();
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00433f00();
    *(undefined4 *)((int)puVar4 + 0x3e) = uVar3;
    *(undefined4 *)((int)puVar4 + 0x42) = param_1;
    *(undefined2 *)((int)puVar4 + 0x4a) = 0;
    puVar4[0x13] = 0;
    *puVar4 = &PTR_FUN_007eb380;
    puVar4[2] = &PTR_LAB_007eb37c;
  }
  local_c = 0xffffffff;
  pcVar5 = operator_new(0x104);
  local_c = 2;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)FUN_0042b6c9();
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar14 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar14 = pcVar14 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb23c;
    if (pcVar6 != (char *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = pcVar5 + 8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  local_1c = 6;
  local_20 = (float *)(iVar12 + 0x3a18);
  do {
    pcVar5 = operator_new(0x108);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
      uVar9 = 0xffffffff;
      fVar1 = *local_20;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
      pcVar6 = &DAT_0083bf04;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar14 + -uVar9;
      pcVar6 = pcVar5;
      for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar6 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar6 = pcVar6 + 1;
      }
      *(float *)(pcVar5 + 0x104) = fVar1;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
      FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)fVar1);
    }
    if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
      *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
      *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    local_20 = local_20 + 1;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  FUN_00598ca0();
  puVar4 = operator_new(0x50);
  local_c = 3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00598ae0();
    local_c = CONCAT31(local_c._1_3_,4);
    FUN_00433f00();
    *(undefined4 *)((int)puVar4 + 0x3e) = uVar3;
    *(undefined4 *)((int)puVar4 + 0x42) = param_1;
    *(undefined2 *)((int)puVar4 + 0x4a) = 0;
    puVar4[0x13] = 0;
    *puVar4 = &PTR_FUN_007eb380;
    puVar4[2] = &PTR_LAB_007eb37c;
  }
  local_c = 0xffffffff;
  pcVar5 = operator_new(0x104);
  local_c = 5;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)FUN_0042b6c9();
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar14 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar14 = pcVar14 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb23c;
    if (pcVar6 != (char *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = pcVar5 + 8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  local_1c = 6;
  local_20 = (float *)(iVar12 + 0x3a30);
  do {
    pcVar5 = operator_new(0x108);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
      uVar9 = 0xffffffff;
      fVar1 = *local_20;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
      pcVar6 = &DAT_0083bf04;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar14 + -uVar9;
      pcVar6 = pcVar5;
      for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar6 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar6 = pcVar6 + 1;
      }
      *(float *)(pcVar5 + 0x104) = fVar1;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
      FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)fVar1);
    }
    if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
      *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
      *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    local_20 = local_20 + 1;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  FUN_00598ca0();
  puVar7 = operator_new(0x50);
  local_c = 6;
  puVar4 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    FUN_00598ae0();
    local_c = CONCAT31(local_c._1_3_,7);
    FUN_00433f00();
    *(undefined4 *)((int)puVar7 + 0x42) = param_1;
    *(undefined4 *)((int)puVar7 + 0x3e) = uVar3;
    *(undefined2 *)((int)puVar7 + 0x4a) = 0;
    puVar7[0x13] = 0;
    *puVar7 = &PTR_FUN_007eb380;
    puVar7[2] = &PTR_LAB_007eb37c;
    puVar4 = puVar7;
  }
  local_c = 0xffffffff;
  pcVar5 = operator_new(0x104);
  local_c = 8;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)FUN_0042b6c9();
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar14 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar14 = pcVar14 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb23c;
    if (pcVar6 != (char *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = pcVar5 + 8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  local_1c = 6;
  local_20 = (float *)(iVar12 + 0x3b50);
  do {
    pcVar5 = operator_new(0x108);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
      uVar9 = 0xffffffff;
      fVar1 = *local_20;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
      pcVar6 = &DAT_0083bf04;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar14 + -uVar9;
      pcVar6 = pcVar5;
      for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar6 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar6 = pcVar6 + 1;
      }
      *(float *)(pcVar5 + 0x104) = fVar1;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
      FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)fVar1);
    }
    if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
      *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
      *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    local_20 = local_20 + 1;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  FUN_00598ca0();
  puVar4 = operator_new(0x50);
  local_c = 9;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00598ae0();
    local_c = CONCAT31(local_c._1_3_,10);
    FUN_00433f00();
    *(undefined4 *)((int)puVar4 + 0x3e) = uVar3;
    *(undefined4 *)((int)puVar4 + 0x42) = param_1;
    *(undefined2 *)((int)puVar4 + 0x4a) = 0;
    puVar4[0x13] = 0;
    *puVar4 = &PTR_FUN_007eb380;
    puVar4[2] = &PTR_LAB_007eb37c;
  }
  local_c = 0xffffffff;
  pcVar5 = operator_new(0x104);
  local_c = 0xb;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)FUN_0042b6c9();
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar14 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar14 = pcVar14 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb23c;
    if (pcVar6 != (char *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = pcVar5 + 8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  local_1c = 6;
  local_20 = (float *)(iVar12 + 0x3a60);
  do {
    pcVar5 = operator_new(0x108);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
      uVar9 = 0xffffffff;
      fVar1 = *local_20;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
      pcVar6 = &DAT_0083bf04;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar14 + -uVar9;
      pcVar6 = pcVar5;
      for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar6 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar6 = pcVar6 + 1;
      }
      *(float *)(pcVar5 + 0x104) = -fVar1;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
      FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)-fVar1);
    }
    if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
      *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
      *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    local_20 = local_20 + 1;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  FUN_00598ca0();
  puVar4 = operator_new(0x50);
  local_c = 0xc;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00598ae0();
    local_c = CONCAT31(local_c._1_3_,0xd);
    FUN_00433f00();
    *(undefined4 *)((int)puVar4 + 0x3e) = uVar3;
    *(undefined4 *)((int)puVar4 + 0x42) = param_1;
    *(undefined2 *)((int)puVar4 + 0x4a) = 0;
    puVar4[0x13] = 0;
    *puVar4 = &PTR_FUN_007eb380;
    puVar4[2] = &PTR_LAB_007eb37c;
  }
  local_c = 0xffffffff;
  pcVar5 = operator_new(0x104);
  local_c = 0xe;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)FUN_0042b6c9();
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar14 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar14 = pcVar14 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb23c;
    if (pcVar6 != (char *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = pcVar5 + 8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  local_1c = 6;
  local_20 = (float *)(iVar12 + 0x3a78);
  do {
    pcVar5 = operator_new(0x108);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
      uVar9 = 0xffffffff;
      fVar1 = *local_20;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
      pcVar6 = &DAT_0083bf04;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar14 + -uVar9;
      pcVar6 = pcVar5;
      for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar6 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar6 = pcVar6 + 1;
      }
      *(float *)(pcVar5 + 0x104) = fVar1;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
      FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)fVar1);
    }
    if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
      *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
      *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    local_20 = local_20 + 1;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  FUN_00598ca0();
  puVar4 = operator_new(0x50);
  local_c = 0xf;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00598ae0();
    local_c = CONCAT31(local_c._1_3_,0x10);
    FUN_00433f00();
    *(undefined4 *)((int)puVar4 + 0x3e) = uVar3;
    *(undefined4 *)((int)puVar4 + 0x42) = param_1;
    *(undefined2 *)((int)puVar4 + 0x4a) = 0;
    puVar4[0x13] = 0;
    *puVar4 = &PTR_FUN_007eb380;
    puVar4[2] = &PTR_LAB_007eb37c;
  }
  local_c = 0xffffffff;
  pcVar5 = operator_new(0x104);
  local_c = 0x11;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)FUN_0042b6c9();
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar14 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar14 = pcVar14 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb23c;
    if (pcVar6 != (char *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = pcVar5 + 8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  local_1c = 6;
  local_20 = (float *)(iVar12 + 0x3a90);
  do {
    pcVar5 = operator_new(0x108);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
      uVar9 = 0xffffffff;
      fVar1 = *local_20;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
      pcVar6 = &DAT_0083bf04;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar14 + -uVar9;
      pcVar6 = pcVar5;
      for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar6 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar6 = pcVar6 + 1;
      }
      *(float *)(pcVar5 + 0x104) = fVar1;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
      FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)fVar1);
    }
    if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
      *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
      *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    local_20 = local_20 + 1;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  FUN_00598ca0();
  puVar4 = operator_new(0x50);
  local_c = 0x12;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00598ae0();
    local_c = CONCAT31(local_c._1_3_,0x13);
    FUN_00433f00();
    *(undefined4 *)((int)puVar4 + 0x3e) = uVar3;
    *(undefined4 *)((int)puVar4 + 0x42) = param_1;
    *(undefined2 *)((int)puVar4 + 0x4a) = 0;
    puVar4[0x13] = 0;
    *puVar4 = &PTR_FUN_007eb380;
    puVar4[2] = &PTR_LAB_007eb37c;
  }
  local_c = 0xffffffff;
  pcVar5 = operator_new(0x104);
  local_c = 0x14;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)FUN_0042b6c9();
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar14 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar14 = pcVar14 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb23c;
    if (pcVar6 != (char *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = pcVar5 + 8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  pcVar5 = operator_new(0x108);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar6 = &DAT_0083bf04;
    do {
      pcVar14 = pcVar6;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar14 = pcVar14 + -uVar9;
    pcVar6 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar6 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
    pcVar5[0x104] = '\0';
    pcVar5[0x105] = '\0';
    pcVar5[0x106] = '\0';
    pcVar5[0x107] = '\0';
    FUN_007a630a(pcVar5 + 8,&DAT_00858140,0);
  }
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  pcVar5 = operator_new(0x108);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    uVar9 = 0xffffffff;
    fVar1 = *(float *)(iVar12 + 0x398c);
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar6 = &DAT_0083bf04;
    do {
      pcVar14 = pcVar6;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar14 = pcVar14 + -uVar9;
    pcVar6 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar6 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(float *)(pcVar5 + 0x104) = -fVar1;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
    FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)-fVar1);
  }
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  pcVar5 = operator_new(0x108);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    uVar9 = 0xffffffff;
    fVar1 = *(float *)(iVar12 + 0x3994);
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar6 = &DAT_0083bf04;
    do {
      pcVar14 = pcVar6;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar14 = pcVar14 + -uVar9;
    pcVar6 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar6 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(float *)(pcVar5 + 0x104) = -fVar1;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
    FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)-fVar1);
  }
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  pcVar5 = operator_new(0x108);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    uVar9 = 0xffffffff;
    fVar1 = *(float *)(iVar12 + 0x3990);
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar6 = &DAT_0083bf04;
    do {
      pcVar14 = pcVar6;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar14 = pcVar14 + -uVar9;
    pcVar6 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar6 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(float *)(pcVar5 + 0x104) = -fVar1;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
    FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)-fVar1);
  }
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  pcVar5 = operator_new(0x108);
  local_c = 0x15;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    fVar1 = *(float *)(iVar12 + 0x3950);
    fVar16 = (float10)FUN_0049c570();
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar6 = &DAT_0083bf04;
    do {
      pcVar14 = pcVar6;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar2 != '\0');
    fVar16 = (float10)-fVar1 - fVar16;
    uVar9 = ~uVar9;
    pcVar14 = pcVar14 + -uVar9;
    pcVar6 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar6 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(float *)(pcVar5 + 0x104) = (float)fVar16;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
    FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)fVar16);
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  pcVar5 = operator_new(0x108);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar6 = &DAT_0083bf04;
    do {
      pcVar14 = pcVar6;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar14 = pcVar14 + -uVar9;
    pcVar6 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar6 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
    pcVar5[0x104] = '\0';
    pcVar5[0x105] = '\0';
    pcVar5[0x106] = '\0';
    pcVar5[0x107] = '\0';
    FUN_007a630a(pcVar5 + 8,&DAT_00858140,0);
  }
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  FUN_00598ca0();
  puVar7 = operator_new(0x50);
  local_c = 0x16;
  puVar4 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    FUN_00598ae0();
    local_c = CONCAT31(local_c._1_3_,0x17);
    FUN_00433f00();
    *(undefined4 *)((int)puVar7 + 0x42) = param_1;
    *(undefined4 *)((int)puVar7 + 0x3e) = uVar3;
    *(undefined2 *)((int)puVar7 + 0x4a) = 0;
    puVar7[0x13] = 0;
    *puVar7 = &PTR_FUN_007eb380;
    puVar7[2] = &PTR_LAB_007eb37c;
    puVar4 = puVar7;
  }
  local_c = 0xffffffff;
  pcVar5 = operator_new(0x104);
  local_c = 0x18;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)FUN_0042b6c9();
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar14 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar14 = pcVar14 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb23c;
    if (pcVar6 != (char *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = pcVar5 + 8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  local_1c = 6;
  local_20 = (float *)(iVar12 + 0x3aa8);
  do {
    pcVar5 = operator_new(0x108);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
      uVar9 = 0xffffffff;
      fVar1 = *local_20;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
      pcVar6 = &DAT_0083bf04;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar14 + -uVar9;
      pcVar6 = pcVar5;
      for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar6 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar6 = pcVar6 + 1;
      }
      *(float *)(pcVar5 + 0x104) = fVar1;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
      FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)fVar1);
    }
    if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
      *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
      *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    local_20 = local_20 + 1;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  FUN_00598ca0();
  puVar4 = operator_new(0x50);
  local_c = 0x19;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00598ae0();
    local_c = CONCAT31(local_c._1_3_,0x1a);
    FUN_00433f00();
    *(undefined4 *)((int)puVar4 + 0x3e) = uVar3;
    *(undefined4 *)((int)puVar4 + 0x42) = param_1;
    *(undefined2 *)((int)puVar4 + 0x4a) = 0;
    puVar4[0x13] = 0;
    *puVar4 = &PTR_FUN_007eb380;
    puVar4[2] = &PTR_LAB_007eb37c;
  }
  local_c = 0xffffffff;
  pcVar5 = operator_new(0x104);
  local_c = 0x1b;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)FUN_0042b6c9();
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar14 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar14 = pcVar14 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb23c;
    if (pcVar6 != (char *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = pcVar5 + 8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  local_1c = 6;
  local_20 = (float *)(iVar12 + 0x3ac0);
  do {
    pcVar5 = operator_new(0x108);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
      uVar9 = 0xffffffff;
      fVar1 = *local_20;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
      pcVar6 = &DAT_0083bf04;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar14 = pcVar14 + -uVar9;
      pcVar6 = pcVar5;
      for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar6 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar6 = pcVar6 + 1;
      }
      *(float *)(pcVar5 + 0x104) = fVar1;
      *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
      FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)fVar1);
    }
    if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
      *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
      *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    local_20 = local_20 + 1;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  FUN_00598ca0();
  puVar4 = operator_new(0x50);
  local_c = 0x1c;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00598ae0();
    local_c = CONCAT31(local_c._1_3_,0x1d);
    FUN_00433f00();
    *(undefined4 *)((int)puVar4 + 0x3e) = uVar3;
    *(undefined4 *)((int)puVar4 + 0x42) = param_1;
    *(undefined2 *)((int)puVar4 + 0x4a) = 0;
    puVar4[0x13] = 0;
    *puVar4 = &PTR_FUN_007eb380;
    puVar4[2] = &PTR_LAB_007eb37c;
  }
  local_c = 0xffffffff;
  pcVar5 = operator_new(0x104);
  local_c = 0x1e;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)FUN_0042b6c9();
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar14 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar14 = pcVar14 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb23c;
    if (pcVar6 != (char *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = pcVar5 + 8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  local_20 = (float *)0x0;
  do {
    if (local_20 == (float *)0x0) {
      pcVar5 = operator_new(0x108);
      if (pcVar5 == (char *)0x0) {
LAB_00596cad:
        pcVar5 = (char *)0x0;
      }
      else {
        uVar9 = 0xffffffff;
        fVar1 = *(float *)(iVar12 + 0x39a4);
        *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
        pcVar6 = &DAT_0083bf04;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        pcVar14 = pcVar14 + -uVar9;
        pcVar6 = pcVar5;
        for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar6 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar6 = pcVar6 + 1;
        }
        *(float *)(pcVar5 + 0x104) = -fVar1;
        *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
        FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)-fVar1);
      }
LAB_00596caf:
      iVar15 = *(int *)((int)puVar4 + 0x32);
      if (iVar15 < *(int *)((int)puVar4 + 0x36)) {
LAB_00596d4c:
        *(char **)(*(int *)((int)puVar4 + 0x2e) + iVar15 * 4) = pcVar5;
        *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
    }
    else {
      if (local_20 == (float *)0x5) {
        pcVar5 = operator_new(0x108);
        if (pcVar5 == (char *)0x0) goto LAB_00596cad;
        uVar9 = 0xffffffff;
        fVar1 = *(float *)(iVar12 + 0x39a0);
        *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
        pcVar6 = &DAT_0083bf04;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        pcVar14 = pcVar14 + -uVar9;
        pcVar6 = pcVar5;
        for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar6 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar6 = pcVar6 + 1;
        }
        *(float *)(pcVar5 + 0x104) = -fVar1;
        *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
        FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)-fVar1);
        goto LAB_00596caf;
      }
      pcVar5 = operator_new(0x108);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x0;
      }
      else {
        uVar9 = 0xffffffff;
        *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
        pcVar6 = &DAT_0083bf04;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        pcVar14 = pcVar14 + -uVar9;
        pcVar6 = pcVar5;
        for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar6 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar6 = pcVar6 + 1;
        }
        *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
        pcVar5[0x104] = '\0';
        pcVar5[0x105] = '\0';
        pcVar5[0x106] = '\0';
        pcVar5[0x107] = '\0';
        FUN_007a630a(pcVar5 + 8,&DAT_00858140,0);
      }
      iVar15 = *(int *)((int)puVar4 + 0x32);
      if (iVar15 < *(int *)((int)puVar4 + 0x36)) goto LAB_00596d4c;
      FUN_00405ad0();
    }
    local_20 = (float *)((int)local_20 + 1);
  } while ((int)local_20 < 6);
  FUN_00598ca0();
  puVar4 = operator_new(0x50);
  local_c = 0x1f;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00598ae0();
    local_c = CONCAT31(local_c._1_3_,0x20);
    FUN_00433f00();
    *(undefined4 *)((int)puVar4 + 0x3e) = uVar3;
    *(undefined4 *)((int)puVar4 + 0x42) = param_1;
    *(undefined2 *)((int)puVar4 + 0x4a) = 0;
    puVar4[0x13] = 0;
    *puVar4 = &PTR_FUN_007eb380;
    puVar4[2] = &PTR_LAB_007eb37c;
  }
  local_c = 0xffffffff;
  pcVar5 = operator_new(0x104);
  local_c = 0x21;
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)FUN_0042b6c9();
    uVar9 = 0xffffffff;
    *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar14 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar14 = pcVar5;
    for (uVar10 = uVar9 >> 2; pcVar14 = pcVar14 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar5 = &PTR_LAB_007eb23c;
    if (pcVar6 != (char *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar14 + -uVar9;
      pcVar14 = pcVar5 + 8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  local_20 = (float *)0x0;
  do {
    if (local_20 == (float *)0x0) {
      pcVar5 = operator_new(0x108);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x0;
      }
      else {
        uVar9 = 0xffffffff;
        fVar1 = *(float *)(iVar12 + 0x39a8);
        *(undefined ***)pcVar5 = &PTR_LAB_007eb264;
        pcVar6 = &DAT_0083bf04;
        do {
          pcVar14 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar6 + 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        pcVar14 = pcVar14 + -uVar9;
        pcVar6 = pcVar5;
        for (uVar10 = uVar9 >> 2; pcVar6 = pcVar6 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar6 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar6 = pcVar6 + 1;
        }
        *(float *)(pcVar5 + 0x104) = -fVar1;
        *(undefined ***)pcVar5 = &PTR_LAB_007eb354;
        FUN_007a630a(pcVar5 + 8,&DAT_00858140,(double)-fVar1);
      }
      if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
        *(char **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = pcVar5;
        *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
    }
    else if (local_20 == (float *)0x5) {
      puVar7 = operator_new(0x108);
      local_c = 0x22;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        fVar1 = *(float *)(iVar12 + 0x39ac);
        FUN_00592190();
        *puVar7 = &PTR_LAB_007eb354;
        puVar7[0x41] = -fVar1;
        FUN_007a630a(puVar7 + 2,&DAT_00858140,(double)-fVar1);
      }
      iVar15 = *(int *)((int)puVar4 + 0x32);
      local_c = 0xffffffff;
      if (iVar15 < *(int *)((int)puVar4 + 0x36)) {
LAB_00597053:
        local_c = 0xffffffff;
        *(undefined4 **)(*(int *)((int)puVar4 + 0x2e) + iVar15 * 4) = puVar7;
        *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
    }
    else {
      puVar7 = operator_new(0x108);
      local_c = 0x23;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        FUN_00592190();
        *puVar7 = &PTR_LAB_007eb354;
        puVar7[0x41] = 0;
        FUN_007a630a(puVar7 + 2,&DAT_00858140,0);
      }
      iVar15 = *(int *)((int)puVar4 + 0x32);
      local_c = 0xffffffff;
      if (iVar15 < *(int *)((int)puVar4 + 0x36)) goto LAB_00597053;
      FUN_00405ad0();
    }
    local_20 = (float *)((int)local_20 + 1);
  } while ((int)local_20 < 6);
  FUN_00598ca0();
  puVar7 = operator_new(0x50);
  local_c = 0x24;
  puVar4 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    FUN_00598ae0();
    local_c = CONCAT31(local_c._1_3_,0x25);
    FUN_00433f00();
    *(undefined4 *)((int)puVar7 + 0x42) = param_1;
    *(undefined4 *)((int)puVar7 + 0x3e) = uVar3;
    *(undefined2 *)((int)puVar7 + 0x4a) = 0;
    puVar7[0x13] = 0;
    *puVar7 = &PTR_FUN_007eb380;
    puVar7[2] = &PTR_LAB_007eb37c;
    puVar4 = puVar7;
  }
  local_c = 0xffffffff;
  puVar7 = operator_new(0x104);
  local_c = 0x26;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    pcVar5 = (char *)FUN_0042b6c9();
    FUN_00592190();
    *puVar7 = &PTR_LAB_007eb23c;
    if (pcVar5 != (char *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pcVar6 = pcVar5;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar6 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar5 = pcVar6 + -uVar9;
      pcVar6 = (char *)(puVar7 + 2);
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  local_c = 0xffffffff;
  if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
    *(undefined4 **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = puVar7;
    *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  iVar15 = 6;
  pfVar11 = (float *)(iVar12 + 0x3a48);
  do {
    puVar7 = operator_new(0x108);
    local_c = 0x27;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      fVar1 = *pfVar11;
      FUN_00592190();
      *puVar7 = &PTR_LAB_007eb354;
      puVar7[0x41] = -fVar1;
      FUN_007a630a(puVar7 + 2,&DAT_00858140,(double)-fVar1);
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar4 + 0x32) < *(int *)((int)puVar4 + 0x36)) {
      *(undefined4 **)(*(int *)((int)puVar4 + 0x2e) + *(int *)((int)puVar4 + 0x32) * 4) = puVar7;
      *(int *)((int)puVar4 + 0x32) = *(int *)((int)puVar4 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pfVar11 = pfVar11 + 1;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  FUN_00598ca0();
  if ((DAT_00dc1860 != '\0') || (DAT_00dc1885 != '\0')) {
    puVar4 = operator_new(0x50);
    local_c = 0x28;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_00598ae0();
      local_c = CONCAT31(local_c._1_3_,0x29);
      FUN_00433f00();
      *(undefined4 *)((int)puVar4 + 0x3e) = uVar3;
      *(undefined4 *)((int)puVar4 + 0x42) = param_1;
      *(undefined2 *)((int)puVar4 + 0x4a) = 0;
      puVar4[0x13] = 0;
      *puVar4 = &PTR_FUN_007eb380;
      puVar4[2] = &PTR_LAB_007eb37c;
    }
    local_c = 0xffffffff;
    puVar4 = operator_new(0x104);
    local_c = 0x2a;
    if (puVar4 != (undefined4 *)0x0) {
      pcVar5 = (char *)FUN_0042b6c9();
      FUN_00592190();
      *puVar4 = &PTR_LAB_007eb23c;
      if (pcVar5 != (char *)0x0) {
        uVar9 = 0xffffffff;
        do {
          pcVar6 = pcVar5;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar6 = pcVar5 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar6;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9;
        pcVar5 = pcVar6 + -uVar9;
        pcVar6 = (char *)(puVar4 + 2);
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar6 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        }
      }
    }
    local_c = 0xffffffff;
    FUN_00598b10();
    iVar12 = 6;
    do {
      pvVar8 = operator_new(0x108);
      local_c = 0x2b;
      if (pvVar8 != (void *)0x0) {
        FUN_00598b50();
      }
      local_c = 0xffffffff;
      FUN_00598b10();
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    FUN_00598ca0();
  }
  FUN_005917f0();
  ExceptionList = local_14;
  return;
}


