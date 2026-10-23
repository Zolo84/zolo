// FUN_00606c20 @ 606c20 size=877

undefined4 * __fastcall FUN_00606c20(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  undefined4 *local_1c;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007cfcfe;
  local_1c = (undefined4 *)0x0;
  local_14 = 0;
  iVar8 = *(int *)(param_1 + 0x32) * 0xa8;
  puVar1 = (undefined4 *)(&DAT_00d685be)[*(int *)(param_1 + 0x32) * 0x2a];
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  pvStack_c = ExceptionList;
  puVar3 = local_1c;
  iVar15 = local_14;
  ExceptionList = &pvStack_c;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    iVar5 = FUN_004e9370(*puVar1);
    puVar7 = puVar2;
    local_1c = puVar3;
    local_14 = iVar15;
    if (((DAT_00d0ca90 == *(int *)(iVar5 + 0x3d8)) &&
        (cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8b2) + 0x24))(*puVar1), cVar4 == '\0')) &&
       (cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8c4) + 0x24))(*puVar1), cVar4 == '\0')) {
      uVar9 = *puVar1;
      pvVar6 = operator_new(0xe);
      local_4._0_1_ = 1;
      if (pvVar6 == (void *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)FUN_0049a7a0(uVar9,puVar2,0);
      }
      local_14 = iVar15 + 1;
      local_4 = (uint)local_4._1_3_ << 8;
      local_1c = puVar7;
      if (iVar15 != 0) {
        puVar2[2] = puVar7;
        local_1c = puVar3;
      }
    }
    puVar2 = puVar7;
    puVar3 = local_1c;
    iVar15 = local_14;
  }
  for (puVar1 = *(undefined4 **)(&DAT_00d685d0 + iVar8); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    iVar5 = FUN_004e9370(*puVar1);
    puVar7 = puVar2;
    local_1c = puVar3;
    local_14 = iVar15;
    if (((DAT_00d0ca90 == *(int *)(iVar5 + 0x3d8)) &&
        (cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8b2) + 0x24))(*puVar1), cVar4 == '\0')) &&
       (cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8c4) + 0x24))(*puVar1), cVar4 == '\0')) {
      uVar9 = *puVar1;
      pvVar6 = operator_new(0xe);
      local_4._0_1_ = 2;
      if (pvVar6 == (void *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)FUN_0049a7a0(uVar9,puVar2,0);
      }
      local_14 = iVar15 + 1;
      local_4 = (uint)local_4._1_3_ << 8;
      local_1c = puVar7;
      if (iVar15 != 0) {
        puVar2[2] = puVar7;
        local_1c = puVar3;
      }
    }
    puVar2 = puVar7;
    puVar3 = local_1c;
    iVar15 = local_14;
  }
  for (puVar1 = *(undefined4 **)(&DAT_00d685e2 + iVar8); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    iVar8 = FUN_004e9370(*puVar1);
    puVar7 = puVar2;
    local_1c = puVar3;
    local_14 = iVar15;
    if (((DAT_00d0ca90 == *(int *)(iVar8 + 0x3d8)) &&
        (cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8b2) + 0x24))(*puVar1), cVar4 == '\0')) &&
       (cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8c4) + 0x24))(*puVar1), cVar4 == '\0')) {
      uVar9 = *puVar1;
      puVar7 = operator_new(0xe);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = uVar9;
        puVar7[1] = puVar2;
        puVar7[2] = 0;
        *(undefined1 *)(puVar7 + 3) = 0;
      }
      local_14 = iVar15 + 1;
      local_1c = puVar7;
      if (iVar15 != 0) {
        puVar2[2] = puVar7;
        local_1c = puVar3;
      }
    }
    puVar2 = puVar7;
    puVar3 = local_1c;
    iVar15 = local_14;
  }
  DAT_00ce8698._0_1_ = 0;
  uVar9 = FUN_004af740(*(undefined4 *)(param_1 + 0x32));
  uVar10 = FUN_0042b6c9(s_LIBVAS_TITLE_0085e840);
  FUN_007a630a(&DAT_00ce8698,uVar10,uVar9);
  puVar1 = puVar3;
joined_r0x00606ebf:
  if (puVar1 == (undefined4 *)0x0) {
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar3[2];
      FUN_00796cd8(puVar3);
      puVar3 = puVar1;
    }
    ExceptionList = pvStack_c;
    return &DAT_00ce8698;
  }
  puVar2 = (undefined4 *)puVar1[2];
  piVar11 = (int *)FUN_004e9370(*puVar1);
  pcVar12 = (char *)(**(code **)(*piVar11 + 0xc))();
  uVar13 = 0xffffffff;
  do {
    pcVar17 = pcVar12;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar17 = pcVar12 + 1;
    cVar4 = *pcVar12;
    pcVar12 = pcVar17;
  } while (cVar4 != '\0');
  uVar13 = ~uVar13;
  iVar8 = -1;
  pcVar12 = (char *)&DAT_00ce8698;
  do {
    pcVar16 = pcVar12;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar16 = pcVar12 + 1;
    cVar4 = *pcVar12;
    pcVar12 = pcVar16;
  } while (cVar4 != '\0');
  pcVar12 = pcVar17 + -uVar13;
  pcVar17 = pcVar16 + -1;
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar17 = pcVar17 + 4;
  }
  iVar15 = iVar15 + -1;
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar17 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar17 = pcVar17 + 1;
  }
  puVar1 = puVar2;
  if (iVar15 != 1) goto LAB_00606f1f;
  pcVar12 = (char *)FUN_0042b6c9(s_INVAND_0083bf40);
  goto LAB_00606f29;
LAB_00606f1f:
  if (1 < iVar15) {
    pcVar12 = &DAT_0083bf48;
LAB_00606f29:
    uVar13 = 0xffffffff;
    do {
      pcVar17 = pcVar12;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar17 = pcVar12 + 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar17;
    } while (cVar4 != '\0');
    uVar13 = ~uVar13;
    iVar8 = -1;
    pcVar12 = (char *)&DAT_00ce8698;
    do {
      pcVar16 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar16 = pcVar12 + 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar16;
    } while (cVar4 != '\0');
    pcVar12 = pcVar17 + -uVar13;
    pcVar17 = pcVar16 + -1;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar17 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar17 = pcVar17 + 1;
    }
  }
  goto joined_r0x00606ebf;
}


