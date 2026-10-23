// FUN_005600b0 @ 5600b0 size=6685

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_005600b0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int *unaff_EBX;
  byte *pbVar9;
  int *piVar10;
  char *pcVar11;
  bool bVar12;
  int *local_20;
  int local_1c;
  undefined4 *local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c6702;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_20 = operator_new(0x1e);
  local_4 = 0;
  if (local_20 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_20 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    local_20[3] = (int)&PTR_LAB_007e39f8;
    *local_20 = (int)&PTR_FUN_007e3a28;
  }
  local_4 = 0xffffffff;
  puVar2 = operator_new(0x14);
  local_4 = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0x10);
    local_4._0_1_ = 3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar5 = param_1[0x6a];
      FUN_004252e0(4);
      puVar3[3] = iVar5;
      *puVar3 = &PTR_FUN_007e3978;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 4;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,5);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x523), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    if (puVar3 == (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      puVar3[2] = puVar3[2] + 1;
      puVar2[4] = puVar3;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_20 + 0x84))(puVar2);
  piVar10 = local_20;
  if (0 < *(short *)((int)param_1 + 0x3b6)) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x6;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar5 = FUN_0054f410();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 7;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
      if ((pvVar4 == (void *)0x0) || (iVar6 = FUN_0053e740(0x2b1), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar2[3] = iVar6;
      if (iVar5 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar10 = unaff_EBX;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar2[4] = iVar5;
        *puVar2 = &PTR_FUN_007e3878;
        piVar10 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar10 + 0x84))(puVar2);
  }
  if (0 < (short)param_1[0xec]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x9;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar5 = FUN_0054f410();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 10;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xb);
      if ((pvVar4 == (void *)0x0) || (iVar6 = FUN_0053e740(0xc), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar2[3] = iVar6;
      if (iVar5 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar10 = unaff_EBX;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar2[4] = iVar5;
        *puVar2 = &PTR_FUN_007e3878;
        piVar10 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar10 + 0x84))(puVar2);
  }
  if (0 < (short)param_1[0xef]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xc;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar5 = FUN_0054f410();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xd;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xe);
      if ((pvVar4 == (void *)0x0) || (iVar6 = FUN_0053e740(0x10b), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar2[3] = iVar6;
      if (iVar5 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar10 = unaff_EBX;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar2[4] = iVar5;
        *puVar2 = &PTR_FUN_007e3878;
        piVar10 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar10 + 0x84))(puVar2);
  }
  if (0 < param_1[0x62]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xf;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x10;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = local_20[0x62];
        FUN_004252e0(4);
        puVar3[3] = iVar5;
        *puVar3 = &PTR_FUN_007e3978;
        param_1 = local_20;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x11;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x12);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x229), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar10 = unaff_EBX;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
        piVar10 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar10 + 0x84))(puVar2);
  }
  if (param_1[0x77] != param_1[0x79]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x13;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x14;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = local_20[0x77];
        FUN_004252e0(4);
        puVar3[3] = iVar5;
        *puVar3 = &PTR_FUN_007e3978;
        param_1 = local_20;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x15;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x16);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x1b3), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
    piVar10 = unaff_EBX;
  }
  if (param_1[0x78] != param_1[0x79]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x17;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x18;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = local_20[0x78];
        FUN_004252e0(4);
        puVar3[3] = iVar5;
        *puVar3 = &PTR_FUN_007e3978;
        param_1 = local_20;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x19;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1a);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x1e), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
    piVar10 = unaff_EBX;
  }
  if ((float)param_1[0x86] != (float)param_1[0x7a]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x1b;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x1c;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = param_1[0x7a];
        FUN_004252e0(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = iVar5;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x1d;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1e);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x235), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar10 = unaff_EBX;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
        piVar10 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar10 + 0x84))(puVar2);
  }
  if ((float)param_1[0x86] != (float)param_1[0x7e]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x1f;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x20;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = param_1[0x7e];
        FUN_004252e0(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = iVar5;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x21;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x22);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x1f), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar10 = unaff_EBX;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
        piVar10 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar10 + 0x84))(puVar2);
  }
  if ((float)param_1[0x87] != (float)param_1[0x7c]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x23;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x24;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = param_1[0x7c];
        FUN_004252e0(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = iVar5;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x25;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x26);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x233), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar10 = unaff_EBX;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
        piVar10 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar10 + 0x84))(puVar2);
  }
  if ((float)param_1[0x87] != (float)param_1[0x80]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x27;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x28;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = param_1[0x80];
        FUN_004252e0(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = iVar5;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x29;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x2a);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x21), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
    piVar10 = unaff_EBX;
  }
  if ((float)param_1[0x88] != (float)param_1[0x7d]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x2b;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x2c;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = param_1[0x7d];
        FUN_004252e0(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = iVar5;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x2d;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x2e);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x234), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar10 = unaff_EBX;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
        piVar10 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar10 + 0x84))(puVar2);
  }
  if ((float)param_1[0x88] != (float)param_1[0x81]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x2f;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x30;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = param_1[0x81];
        FUN_004252e0(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = iVar5;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x31;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x32);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x20), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
    piVar10 = unaff_EBX;
  }
  if ((float)param_1[0x89] != (float)param_1[0x7b]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x33;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x34;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = param_1[0x7b];
        FUN_004252e0(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = iVar5;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x35;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x36);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x232), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar10 = unaff_EBX;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
        piVar10 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar10 + 0x84))(puVar2);
  }
  if ((float)param_1[0x89] != (float)param_1[0x7f]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x37;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x38;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = param_1[0x7f];
        FUN_004252e0(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = iVar5;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x39;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x3a);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x22), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
    piVar10 = unaff_EBX;
  }
  if (_DAT_007e3380 < *(float *)((int)param_1 + 0x25e)) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x3b;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x3c;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar7 = *(undefined4 *)((int)param_1 + 0x25e);
        FUN_004252e0(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = uVar7;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x3d;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x3e);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x12), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
    piVar10 = unaff_EBX;
  }
  if (_DAT_007e3380 < *(float *)((int)param_1 + 0x266)) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x3f;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x40;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar7 = *(undefined4 *)((int)param_1 + 0x266);
        FUN_004252e0(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = uVar7;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x41;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x42);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x15), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
    piVar10 = unaff_EBX;
  }
  if (_DAT_007e3380 < *(float *)((int)param_1 + 0x262)) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x43;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x44;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar7 = *(undefined4 *)((int)param_1 + 0x262);
        FUN_00444030(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = uVar7;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x45;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x46);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x14), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
    piVar10 = unaff_EBX;
  }
  if (_DAT_007e3380 < *(float *)((int)param_1 + 0x26a)) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x47;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x48;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar7 = *(undefined4 *)((int)param_1 + 0x26a);
        FUN_00444030(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = uVar7;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x49;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x4a);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x11), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
    piVar10 = unaff_EBX;
  }
  if (_DAT_007e3380 < *(float *)((int)param_1 + 0x25a)) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x4b;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x4c;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar7 = *(undefined4 *)((int)param_1 + 0x25a);
        FUN_00444030(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = uVar7;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x4d;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x4e);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x16), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
    piVar10 = unaff_EBX;
  }
  if (_DAT_007e3380 < (float)param_1[0x82]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x4f;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      puStack_8._0_1_ = 0x50;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = param_1[0x82];
        FUN_00444030(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = iVar5;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x51;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x52);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0xf5), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar10 = unaff_EBX;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
        piVar10 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar10 + 0x84))(puVar2);
  }
  if (*(int *)((int)param_1 + 0x396) != 0) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x53;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x14);
      puStack_8._0_1_ = 0x54;
      if (pvVar4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        uVar7 = FUN_0075ee50(*(undefined4 *)((int)param_1 + 0x396));
        iVar5 = FUN_0053e740(uVar7);
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x55;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x56);
      if ((pvVar4 == (void *)0x0) || (iVar6 = FUN_0053e740(0x18a), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar2[3] = iVar6;
      if (iVar5 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar10 = unaff_EBX;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar2[4] = iVar5;
        *puVar2 = &PTR_FUN_007e3878;
        piVar10 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar10 + 0x84))(puVar2);
  }
  if (*(int *)((int)param_1 + 0x23e) < 7) {
    pcVar11 = &DAT_0088ebf8;
    switch(*(int *)((int)param_1 + 0x23e)) {
    case 0:
      pcVar11 = s_clear_008479f0;
      break;
    case 1:
      pcVar11 = s_forest_008479e8;
      break;
    case 2:
      pcVar11 = s_mountain_008479dc;
      break;
    case 3:
      pcVar11 = s_desert_008479bc;
      break;
    case 4:
      pcVar11 = s_marsh_008479c4;
      break;
    case 5:
      pcVar11 = s_hills_00848a8c;
      break;
    case 6:
      pcVar11 = s_jungle_00848a7c;
    }
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x57;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x10);
      puStack_8._0_1_ = 0x58;
      if (pvVar4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053ee00(pcVar11);
      }
      puStack_8._0_1_ = 0x57;
      FUN_004252e0(0);
      puStack_8._0_1_ = 0x59;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x5a);
      if ((pvVar4 == (void *)0x0) || (iVar6 = FUN_0053e740(0x189), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar2[3] = iVar6;
      if (iVar5 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar2[4] = iVar5;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
    param_1 = local_20;
  }
  if ((*(int *)((int)param_1 + 0x23e) != 8) && (*(int *)((int)param_1 + 0x23e) != 9)) {
    local_1c = 1;
    do {
      if (local_1c == 1) {
        iVar5 = local_20[0x6d];
        if ((*(float *)(iVar5 + 0x10) == (float)local_20[0x8c]) &&
           (*(float *)(iVar5 + 0x14) == *(float *)(iVar5 + 0x10))) goto LAB_005618ba;
        local_14 = operator_new(0x14);
        puStack_8 = (undefined1 *)0x5b;
        if (local_14 == (undefined4 *)0x0) goto LAB_005618a3;
        iVar5 = (**(code **)(*(int *)local_20[0x6d] + 0x10))();
        local_14[1] = 0;
        local_14[2] = 0;
        *local_14 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x5c;
        pvVar4 = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x5d);
        if (pvVar4 == (void *)0x0) {
LAB_00561873:
          iVar6 = 0;
        }
        else {
          uVar7 = 0xe2;
LAB_00561863:
          iVar6 = FUN_0053e740(uVar7);
          if (iVar6 == 0) goto LAB_00561873;
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        local_14[3] = iVar6;
        if (iVar5 == 0) {
          local_14[4] = 0;
          *local_14 = &PTR_FUN_007e3878;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          local_14[4] = iVar5;
          *local_14 = &PTR_FUN_007e3878;
        }
LAB_005618a5:
        puStack_8 = (undefined1 *)0xffffffff;
        (**(code **)(*unaff_EBX + 0x84))(local_14);
      }
      else if (local_1c == 5) {
        iVar5 = local_20[0x71];
        if ((*(float *)(iVar5 + 0x10) != (float)local_20[0x8d]) ||
           (*(float *)(iVar5 + 0x14) != *(float *)(iVar5 + 0x10))) {
          local_14 = operator_new(0x14);
          puStack_8 = (undefined1 *)0x5e;
          if (local_14 != (undefined4 *)0x0) {
            iVar5 = (**(code **)(*(int *)local_20[0x71] + 0x10))();
            local_14[1] = 0;
            local_14[2] = 0;
            *local_14 = &PTR_LAB_007e38f8;
            puStack_8._0_1_ = 0x5f;
            pvVar4 = operator_new(0x14);
            puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x60);
            if (pvVar4 != (void *)0x0) {
              uVar7 = 0x14d;
              goto LAB_00561863;
            }
            goto LAB_00561873;
          }
LAB_005618a3:
          local_14 = (undefined4 *)0x0;
          goto LAB_005618a5;
        }
      }
      else if ((*(int *)(local_20[local_1c + 0x6c] + 0x18) != 0) &&
              (_DAT_007e3380 < *(float *)(local_20[local_1c + 0x6c] + 0x10))) {
        puVar2 = operator_new(0x14);
        puStack_8 = (undefined1 *)0x61;
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          iVar5 = (**(code **)(*(int *)local_20[local_1c + 0x6c] + 0x10))();
          uVar7 = FUN_004d1560(local_1c);
          puVar2[1] = 0;
          puVar2[2] = 0;
          *puVar2 = &PTR_LAB_007e38f8;
          puStack_8._0_1_ = 0x62;
          pvVar4 = operator_new(0x14);
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,99);
          if ((pvVar4 == (void *)0x0) || (iVar6 = FUN_0053e740(uVar7), iVar6 == 0)) {
            iVar6 = 0;
          }
          else {
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          }
          puVar2[3] = iVar6;
          if (iVar5 == 0) {
            *puVar2 = &PTR_FUN_007e3878;
            puVar2[4] = 0;
          }
          else {
            *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
            puVar2[4] = iVar5;
            *puVar2 = &PTR_FUN_007e3878;
          }
        }
        puStack_8 = (undefined1 *)0xffffffff;
        (**(code **)(*unaff_EBX + 0x84))(puVar2);
      }
LAB_005618ba:
      local_1c = local_1c + 1;
    } while (local_1c < 0xb);
  }
  for (piVar10 = *(int **)((int)local_20 + 0x1e); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[2]
      ) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x64;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar5 = (*(code *)**(undefined4 **)(*piVar10 + 0x12))();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x65;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x66);
      if ((pvVar4 == (void *)0x0) || (iVar6 = FUN_0053e740(0x1f2), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar2[3] = iVar6;
      if (iVar5 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar2[4] = iVar5;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
  }
  pbVar8 = *(byte **)((int)local_20 + 0x38e);
  if (pbVar8 != (byte *)0x0) {
    pbVar9 = &DAT_0088ebf8;
    do {
      bVar1 = *pbVar8;
      bVar12 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_005619cb:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_005619d0;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar12 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_005619cb;
      pbVar8 = pbVar8 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_005619d0:
    if (iVar5 != 0) {
      puVar2 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x67;
      if (puVar2 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        pvVar4 = operator_new(0x10);
        puStack_8._0_1_ = 0x68;
        if (pvVar4 == (void *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0053ee00(*(undefined4 *)((int)local_20 + 0x38e));
        }
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x69;
        pvVar4 = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x6a);
        if ((pvVar4 == (void *)0x0) || (iVar6 = FUN_0053e740(0xe9), iVar6 == 0)) {
          iVar6 = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar2[3] = iVar6;
        puVar3 = puVar2;
        if (iVar5 == 0) {
          *puVar2 = &PTR_FUN_007e3878;
          puVar2[4] = 0;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          puVar2[4] = iVar5;
          *puVar2 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*unaff_EBX + 0x84))(puVar3);
      ExceptionList = puVar2;
      return unaff_EBX;
    }
  }
  ExceptionList = local_10;
  return unaff_EBX;
}


