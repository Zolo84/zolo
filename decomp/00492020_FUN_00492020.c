// FUN_00492020 @ 492020 size=1306

undefined4 __thiscall FUN_00492020(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  bool bVar15;
  float10 fVar16;
  undefined4 uVar17;
  undefined4 local_154;
  undefined4 local_150;
  char local_13a;
  undefined1 *puStack_12c;
  undefined **local_128;
  undefined2 *local_124;
  undefined4 local_120;
  int local_11c;
  undefined1 local_118;
  undefined2 local_114;
  undefined4 uStack_112;
  char acStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bda8b;
  pvStack_c = ExceptionList;
  iVar2 = (&DAT_0089cad8)[*(int *)(*(int *)(param_2 + 4) + 0xe)];
  iVar3 = (&DAT_0089cad8)[*(int *)(*(int *)(param_2 + 4) + 0x12)];
  local_150._0_2_ = (undefined2)iVar2;
  local_150._2_2_ = (undefined2)((uint)iVar2 >> 0x10);
  local_154._0_2_ = 0;
  local_154._2_2_ = 0;
  ExceptionList = &pvStack_c;
  fVar16 = (float10)FUN_00586a70(0);
  local_150 = (undefined2 *)(float)-fVar16;
  local_154._0_2_ = 0x2082;
  local_154._2_2_ = 0x49;
  FUN_0049ebd0();
  iVar13 = *(int *)(param_2 + 4);
  local_13a = *(char *)(iVar13 + 0x16);
  bVar15 = *(char *)(iVar13 + 0x17) == '\0';
  if (bVar15) {
    local_150 = (undefined2 *)(float)-DAT_00dc17b0;
    local_154._0_2_ = (undefined2)*(undefined4 *)(iVar13 + 0x12);
    local_154._2_2_ = (undefined2)((uint)*(undefined4 *)(iVar13 + 0x12) >> 0x10);
    FUN_00488220();
  }
  local_124 = (undefined2 *)0x0;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_128 = &PTR_LAB_007e4a74;
  puVar4 = *(undefined2 **)(iVar2 + 0x360c);
  local_4 = 0;
  for (; puVar4 != (undefined2 *)0x0; puVar4 = *(undefined2 **)(puVar4 + 5)) {
    local_154._0_2_ = *puVar4;
    local_154._2_2_ = (undefined2)*(undefined4 *)(puVar4 + 1);
    local_150._0_2_ = (undefined2)((uint)*(undefined4 *)(puVar4 + 1) >> 0x10);
    piVar6 = (int *)(**(code **)(*(int *)(iVar3 + 0x3608) + 0x28))(&local_114);
    if (*piVar6 == 0) {
      local_154._0_2_ = *puVar4;
      local_154._2_2_ = (undefined2)*(undefined4 *)(puVar4 + 1);
      local_150._0_2_ = (undefined2)((uint)*(undefined4 *)(puVar4 + 1) >> 0x10);
      piVar6 = (int *)(**(code **)(*(int *)(iVar3 + 0x361a) + 0x28))(&puStack_12c);
      if (*piVar6 == 0) {
        local_154._0_2_ = *puVar4;
        local_154._2_2_ = (undefined2)*(undefined4 *)(puVar4 + 1);
        local_150._0_2_ = (undefined2)((uint)*(undefined4 *)(puVar4 + 1) >> 0x10);
        FUN_004739f0();
      }
    }
  }
  if ((local_13a == '\0') || (local_11c < 1)) {
LAB_00492278:
    local_13a = '\0';
  }
  else {
    iVar13 = (*(char *)(DAT_00893530 + 0x14) + 0x4d2 +
             ((int)*(char *)(DAT_00893530 + 0x15) +
             ((int)*(char *)(DAT_00893530 + 0x16) + *(short *)(DAT_00893530 + 0x18) * 0xc) * 0x1e) *
             0x18) % local_11c;
    puVar4 = local_124;
    for (iVar10 = iVar13; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar4 = *(undefined2 **)(puVar4 + 5);
    }
    local_114 = *puVar4;
    uStack_112 = *(undefined4 *)(puVar4 + 1);
    local_150 = &local_114;
    local_154._0_2_ = 0x21d8;
    local_154._2_2_ = 0x49;
    iVar10 = FUN_00428460();
    if (iVar10 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(iVar10 + -8);
    }
    puStack_12c = (undefined1 *)&local_154;
    puVar4 = local_124;
    for (iVar10 = iVar13; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar4 = *(undefined2 **)(puVar4 + 5);
    }
    local_154._0_2_ = *puVar4;
    local_154._2_2_ = (undefined2)*(undefined4 *)(puVar4 + 1);
    local_150._0_2_ = (undefined2)((uint)*(undefined4 *)(puVar4 + 1) >> 0x10);
    piVar7 = (int *)(**(code **)(*(int *)(iVar3 + 0x361a) + 0x28))(&puStack_12c);
    if (*piVar7 != 0) goto LAB_00492278;
    puStack_12c = (undefined1 *)&local_154;
    puVar4 = local_124;
    for (; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar4 = *(undefined2 **)(puVar4 + 5);
    }
    local_154._0_2_ = *puVar4;
    local_154._2_2_ = (undefined2)*(undefined4 *)(puVar4 + 1);
    local_150._0_2_ = (undefined2)((uint)*(undefined4 *)(puVar4 + 1) >> 0x10);
    FUN_004739f0();
    local_150._0_2_ = 0x2253;
    local_150._2_2_ = 0x49;
    pcVar8 = (char *)(**(code **)(*piVar6 + 0xc))();
    uVar11 = 0xffffffff;
    do {
      pcVar14 = pcVar8;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar14 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar14;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    pcVar8 = pcVar14 + -uVar11;
    pcVar14 = acStack_10c;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar14 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar14 = pcVar14 + 1;
    }
  }
  if (*(int *)(*(int *)(param_2 + 4) + 0x12) == *(int *)(DAT_00d0ca90 + 6)) {
    if (bVar15) {
      local_150._0_2_ = 0xd2c4;
    }
    else {
      local_150._0_2_ = 0xd2b8;
    }
    local_150._2_2_ = 0x83;
    param_1 = param_1 + 0xed2;
    local_154._0_2_ = 0x22c7;
    local_154._2_2_ = 0x49;
    uVar9 = FUN_0042b6c9();
    local_150._0_2_ = (undefined2)uVar9;
    local_150._2_2_ = (undefined2)((uint)uVar9 >> 0x10);
    local_154 = (char *)param_1;
    FUN_007a630a();
    uVar9 = *(undefined4 *)(iVar3 + 6);
    local_150 = (undefined2 *)param_1;
    if (local_13a == '\0') {
      local_154._0_2_ = 0x22fd;
      local_154._2_2_ = 0x49;
      uVar17 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))();
      local_154._0_2_ = (undefined2)uVar17;
      local_154._2_2_ = (undefined2)((uint)uVar17 >> 0x10);
      FUN_006ea2c0(0xba,uVar9);
      goto LAB_004924f8;
    }
    local_154._0_2_ = 0x22e9;
    local_154._2_2_ = 0x49;
    local_154 = (char *)(**(code **)(*(int *)(iVar2 + 0xe) + 0xc))();
    pcVar8 = acStack_10c;
    uVar17 = 0xb9;
  }
  else if (*(int *)(*(int *)(param_2 + 4) + 0xe) == *(int *)(DAT_00d0ca90 + 6)) {
    if (bVar15) {
      local_150._0_2_ = 0x2337;
      local_150._2_2_ = 0x49;
      uVar9 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))();
      local_150._0_2_ = (undefined2)uVar9;
      local_150._2_2_ = (undefined2)((uint)uVar9 >> 0x10);
      local_154._0_2_ = 0xd2dc;
      local_154._2_2_ = 0x83;
      uVar9 = FUN_0042b6c9();
      local_154._0_2_ = (undefined2)uVar9;
      local_154._2_2_ = (undefined2)((uint)uVar9 >> 0x10);
      FUN_007a630a(param_1 + 0xed2);
    }
    else {
      local_150._0_2_ = 0xd2b8;
      local_150._2_2_ = 0x83;
      local_154._0_2_ = 0x236c;
      local_154._2_2_ = 0x49;
      uVar9 = FUN_0042b6c9();
      local_150._0_2_ = (undefined2)uVar9;
      local_150._2_2_ = (undefined2)((uint)uVar9 >> 0x10);
      local_154 = (char *)(param_1 + 0xed2);
      FUN_007a630a();
    }
    local_150 = (undefined2 *)(param_1 + 0xed2);
    uVar9 = *(undefined4 *)(iVar3 + 6);
    if (local_13a == '\0') {
      local_154._0_2_ = 0x23aa;
      local_154._2_2_ = 0x49;
      uVar17 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))();
      local_154._0_2_ = (undefined2)uVar17;
      local_154._2_2_ = (undefined2)((uint)uVar17 >> 0x10);
      FUN_006ea2c0(0xe0,uVar9);
      goto LAB_004924f8;
    }
    local_154 = acStack_10c;
    pcVar8 = (char *)(**(code **)(*(int *)(iVar3 + 0xe) + 0xc))();
    uVar17 = 0xdf;
  }
  else {
    if (DAT_00dc17dc < 1) goto LAB_004924f8;
    if (bVar15) {
      param_1 = param_1 + 0xed2;
      piVar6 = (int *)(iVar2 + 0xe);
      local_150._0_2_ = 0x23f5;
      local_150._2_2_ = 0x49;
      uVar9 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))();
      local_150._0_2_ = (undefined2)uVar9;
      local_150._2_2_ = (undefined2)((uint)uVar9 >> 0x10);
      local_154._0_2_ = 0x23fd;
      local_154._2_2_ = 0x49;
      uVar9 = (**(code **)(*piVar6 + 0xc))();
      local_154._0_2_ = (undefined2)uVar9;
      local_154._2_2_ = (undefined2)((uint)uVar9 >> 0x10);
      uVar9 = FUN_0042b6c9(s_SPY_FOUND3_0083d2d0);
      FUN_007a630a(param_1,uVar9);
      uVar9 = *(undefined4 *)(iVar3 + 6);
      local_150 = (undefined2 *)param_1;
      if (local_13a != '\0') {
        local_154._0_2_ = 0x242a;
        local_154._2_2_ = 0x49;
        uVar17 = (**(code **)(*piVar6 + 0xc))();
        local_154._0_2_ = (undefined2)uVar17;
        local_154._2_2_ = (undefined2)((uint)uVar17 >> 0x10);
        pcVar8 = acStack_10c;
        uVar17 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(pcVar8);
        FUN_006ea6f0(0xcb,uVar9,uVar17,pcVar8);
        goto LAB_004924f8;
      }
      local_154._0_2_ = 0x2454;
      local_154._2_2_ = 0x49;
      uVar17 = (**(code **)(*piVar6 + 0xc))();
      local_154._0_2_ = (undefined2)uVar17;
      local_154._2_2_ = (undefined2)((uint)uVar17 >> 0x10);
      pcVar8 = (char *)(**(code **)(*(int *)(iVar3 + 0xe) + 0xc))();
    }
    else {
      if ((local_13a != '\0') && (1 < DAT_00dc17dc)) {
        uVar9 = *(undefined4 *)(iVar3 + 6);
        local_150._0_2_ = 0xd2b8;
        local_150._2_2_ = 0x83;
        local_154._0_2_ = 0x248c;
        local_154._2_2_ = 0x49;
        uVar17 = FUN_0042b6c9();
        local_150._0_2_ = (undefined2)uVar17;
        local_150._2_2_ = (undefined2)((uint)uVar17 >> 0x10);
        local_154._0_2_ = 0x2494;
        local_154._2_2_ = 0x49;
        uVar17 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))();
        local_154._0_2_ = (undefined2)uVar17;
        local_154._2_2_ = (undefined2)((uint)uVar17 >> 0x10);
        pcVar8 = acStack_10c;
        uVar17 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(pcVar8);
        FUN_006ea6f0(0xcb,uVar9,uVar17,pcVar8);
        goto LAB_004924f8;
      }
      if (DAT_00dc17dc != 3) goto LAB_004924f8;
      uVar9 = *(undefined4 *)(iVar3 + 6);
      local_150._0_2_ = 0xd2b8;
      local_150._2_2_ = 0x83;
      local_154._0_2_ = 0x24d6;
      local_154._2_2_ = 0x49;
      uVar17 = FUN_0042b6c9();
      local_150._0_2_ = (undefined2)uVar17;
      local_150._2_2_ = (undefined2)((uint)uVar17 >> 0x10);
      local_154._0_2_ = 0x24de;
      local_154._2_2_ = 0x49;
      uVar17 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))();
      local_154._0_2_ = (undefined2)uVar17;
      local_154._2_2_ = (undefined2)((uint)uVar17 >> 0x10);
      pcVar8 = (char *)(**(code **)(*(int *)(iVar3 + 0xe) + 0xc))();
    }
    uVar17 = 0xcc;
  }
  FUN_006ea4c0(uVar17,uVar9,pcVar8);
LAB_004924f8:
  local_128 = &PTR_LAB_007e4a74;
  puVar4 = local_124;
  while (puVar4 != (undefined2 *)0x0) {
    puVar5 = *(undefined2 **)(puVar4 + 5);
    local_150._0_2_ = SUB42(puVar4,0);
    local_150._2_2_ = (undefined2)((uint)puVar4 >> 0x10);
    local_154._0_2_ = 0x2511;
    local_154._2_2_ = 0x49;
    FUN_00796cd8();
    puVar4 = puVar5;
  }
  ExceptionList = pvStack_c;
  return 3;
}


