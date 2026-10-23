// FUN_0055cb20 @ 55cb20 size=1841

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_0055cb20(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int *local_28;
  int *local_20 [2];
  undefined4 *local_18;
  undefined4 *local_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c5ea4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_28 = operator_new(0x1e);
  local_4 = 0;
  local_20[0] = local_28;
  if (local_28 == (int *)0x0) {
    local_28 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_28 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *local_28 = (int)&PTR_FUN_007e3a28;
    local_28[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  uVar6 = FUN_00564810();
  FUN_0053ea00(uVar6);
  if (_DAT_007e3380 < *(float *)(param_1 + 0x280)) {
    puVar7 = operator_new(0x14);
    local_4 = 2;
    local_18 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      local_4._0_1_ = 3;
      local_14 = puVar8;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        local_20[0] = *(int **)(param_1 + 0x280);
        FUN_004252e0(5);
        *puVar8 = &PTR_FUN_007e48ac;
        puVar8[3] = local_20[0];
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 4;
      local_14 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,5);
      if (local_14 == (undefined4 *)0x0) {
LAB_0055cc5c:
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_0053e740(0x17d);
        if (iVar9 == 0) goto LAB_0055cc5c;
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
      }
      puVar7[3] = iVar9;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar7 = &PTR_FUN_007e3878;
        puVar7[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar7[4] = puVar8;
        *puVar7 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_28 + 0x84))(puVar7);
  }
  uVar6 = FUN_00525da0(&local_14);
  cVar5 = FUN_0042ddd0(uVar6);
  if (cVar5 == '\0') {
    puVar7 = operator_new(0x14);
    local_4 = 6;
    local_14 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      iVar9 = FUN_0054f410();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 7;
      local_18 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,8);
      if (local_18 == (undefined4 *)0x0) {
LAB_0055cd29:
        iVar10 = 0;
      }
      else {
        iVar10 = FUN_0053e740(0x35);
        if (iVar10 == 0) goto LAB_0055cd29;
        *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
      }
      puVar7[3] = iVar10;
      if (iVar9 == 0) {
        *puVar7 = &PTR_FUN_007e3878;
        puVar7[4] = 0;
      }
      else {
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
        puVar7[4] = iVar9;
        *puVar7 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_28 + 0x84))(puVar7);
  }
  if (*(char *)(param_1 + 0x27e) != '\0') {
    puVar7 = operator_new(0x14);
    local_4 = 9;
    local_14 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      local_4._0_1_ = 10;
      local_18 = puVar8;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)(param_1 + 0x27e);
        FUN_004252e0(6);
        *(undefined1 *)(puVar8 + 3) = uVar1;
        *puVar8 = &PTR_FUN_007e76a0;
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0xb;
      local_18 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0xc);
      if (local_18 == (undefined4 *)0x0) {
LAB_0055ce0d:
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_0053e740(0x6b);
        if (iVar9 == 0) goto LAB_0055ce0d;
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
      }
      puVar7[3] = iVar9;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar7 = &PTR_FUN_007e3878;
        puVar7[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar7[4] = puVar8;
        *puVar7 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_28 + 0x84))(puVar7);
  }
  if (0 < *(int *)(param_1 + 0x27a)) {
    puVar7 = operator_new(0x14);
    local_4 = 0xd;
    local_14 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      local_4._0_1_ = 0xe;
      local_18 = puVar8;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x27a);
        FUN_004252e0(4);
        puVar8[3] = uVar6;
        *puVar8 = &PTR_FUN_007e3978;
      }
      *puVar7 = &PTR_LAB_007e38f8;
      puVar7[1] = 0;
      puVar7[2] = 0;
      local_4._0_1_ = 0xf;
      local_18 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x10);
      if (local_18 == (undefined4 *)0x0) {
LAB_0055ceed:
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_0053e740(0x6d);
        if (iVar9 == 0) goto LAB_0055ceed;
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
      }
      puVar7[3] = iVar9;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar7 = &PTR_FUN_007e3878;
        puVar7[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar7[4] = puVar8;
        *puVar7 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_28 + 0x84))(puVar7);
  }
  if (0 < *(int *)(param_1 + 0x276)) {
    puVar7 = operator_new(0x14);
    local_4 = 0x11;
    local_14 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      local_4._0_1_ = 0x12;
      local_18 = puVar8;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x276);
        FUN_00444030(4);
        puVar8[3] = uVar6;
        *puVar8 = &PTR_FUN_007e3978;
      }
      *puVar7 = &PTR_LAB_007e38f8;
      puVar7[1] = 0;
      puVar7[2] = 0;
      local_4._0_1_ = 0x13;
      local_18 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x14);
      if (local_18 == (undefined4 *)0x0) {
LAB_0055cfd3:
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_0053e740(0x6c);
        if (iVar9 == 0) goto LAB_0055cfd3;
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
      }
      puVar7[3] = iVar9;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar7 = &PTR_FUN_007e3878;
        puVar7[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar7[4] = puVar8;
        *puVar7 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_28 + 0x84))(puVar7);
  }
  if (DAT_00dc1730 < 1) goto LAB_0055d199;
  cVar5 = (**(code **)(*(int *)(param_1 + 0x210) + 8))();
  if (cVar5 != '\0') goto LAB_0055d199;
  cVar5 = FUN_0042dd70(DAT_00893530 + 0x14);
  if ((cVar5 != '\0') ||
     ((int)*(char *)(param_1 + 0x20a) +
      ((int)*(char *)(param_1 + 0x20b) +
      ((int)*(char *)(param_1 + 0x20c) + *(short *)(param_1 + 0x20e) * 0xc) * 0x1e) * 0x18 < 1))
  goto LAB_0055d199;
  puVar7 = operator_new(0x14);
  local_4 = 0x15;
  local_14 = puVar7;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0x10);
    local_4._0_1_ = 0x16;
    local_18 = puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      pcVar11 = (char *)FUN_0042e060(local_20,(char *)(param_1 + 0x20a));
      sVar4 = *(short *)(pcVar11 + 4);
      cVar5 = pcVar11[2];
      cVar2 = pcVar11[1];
      cVar3 = *pcVar11;
      FUN_004252e0(4);
      puVar8[3] = (int)cVar3 + ((int)cVar2 + ((int)cVar5 + sVar4 * 0xc) * 0x1e) * 0x18;
      *puVar8 = &PTR_FUN_007e3978;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 0x17;
    local_18 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,0x18);
    if (local_18 == (undefined4 *)0x0) {
LAB_0055d152:
      iVar9 = 0;
    }
    else {
      iVar9 = FUN_0053e740(0xfc);
      if (iVar9 == 0) goto LAB_0055d152;
      *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
    }
    puVar7[3] = iVar9;
    if (puVar8 == (undefined4 *)0x0) {
      *puVar7 = &PTR_FUN_007e3878;
      puVar7[4] = 0;
    }
    else {
      puVar8[2] = puVar8[2] + 1;
      puVar7[4] = puVar8;
      *puVar7 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_28 + 0x84))(puVar7);
LAB_0055d199:
  if (*(char *)(param_1 + 0x235) == '\0') {
    local_14 = operator_new(0x14);
    local_4 = 0x19;
    if (local_14 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar7 = operator_new(0xe);
      local_4._0_1_ = 0x1a;
      local_18 = puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)(param_1 + 0x235);
        FUN_00444030(6);
        *(undefined1 *)(puVar7 + 3) = uVar1;
        *puVar7 = &PTR_FUN_007e76a0;
      }
      local_4 = CONCAT31(local_4._1_3_,0x19);
      uVar6 = FUN_004441b0(0x33c,puVar7);
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_28 + 0x84))(uVar6);
    ExceptionList = pvStack_10;
    return local_28;
  }
  ExceptionList = pvStack_c;
  return local_28;
}


