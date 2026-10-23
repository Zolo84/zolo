// FUN_00564810 @ 564810 size=4729

int * FUN_00564810(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  undefined4 *local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c6cde;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar5 = operator_new(0x1e);
  local_4 = 0;
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar5 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *piVar5 = (int)&PTR_FUN_007e3a28;
    piVar5[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  puVar6 = operator_new(0x14);
  local_4 = 2;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    iVar7 = FUN_00427f80();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar8 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((pvVar8 == (void *)0x0) || (iVar9 = FUN_0053e740(0x523), iVar9 == 0)) {
      iVar9 = 0;
    }
    else {
      *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
    }
    puVar6[3] = iVar9;
    if (iVar7 == 0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      puVar6[4] = iVar7;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar5 + 0x84))(puVar6);
  puVar6 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    pvVar8 = operator_new(0x10);
    puStack_8._0_1_ = 6;
    if (pvVar8 == (void *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0053ee00(*(undefined4 *)((int)unaff_EBX + -0x1a));
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 7;
    pvVar8 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if ((pvVar8 == (void *)0x0) || (iVar9 = FUN_0053e740(0xe9), iVar9 == 0)) {
      iVar9 = 0;
    }
    else {
      *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
    }
    puVar6[3] = iVar9;
    if (iVar7 == 0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      puVar6[4] = iVar7;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar5 + 0x84))(puVar6);
  local_1c = operator_new(0x14);
  pvStack_c = (void *)0x9;
  if (local_1c == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    pvStack_c._0_1_ = 10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)((int)unaff_EBP + -0x12);
      FUN_004252e0(4);
      puVar10[3] = uVar11;
      *puVar10 = &PTR_FUN_007e3978;
      piVar5 = unaff_EBX;
    }
    local_1c[1] = 0;
    local_1c[2] = 0;
    *local_1c = &PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 0xb;
    pvVar8 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0xc);
    if ((pvVar8 == (void *)0x0) || (iVar7 = FUN_0053e740(0xf4), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    local_1c[3] = iVar7;
    puVar6 = local_1c;
    if (puVar10 == (undefined4 *)0x0) {
      *local_1c = &PTR_FUN_007e3878;
      local_1c[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      local_1c[4] = puVar10;
      *local_1c = &PTR_FUN_007e3878;
    }
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar5 + 0x84))(puVar6);
  if (*(int *)((int)unaff_ESI + 0x222) != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar10 = operator_new(0x10);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *(undefined4 *)((int)unaff_ESI + 0x222);
        FUN_004252e0(4);
        puVar10[3] = uVar11;
        *puVar10 = &PTR_FUN_007e3978;
        piVar5 = unaff_EBP;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar7 = FUN_0053e740(0x164), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar6[3] = iVar7;
      if (puVar10 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        puVar6[4] = puVar10;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  iVar7 = FUN_0051d610();
  if (iVar7 != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar10 = operator_new(0x10);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar11 = FUN_0051d610();
        FUN_004252e0(4);
        puVar10[3] = uVar11;
        *puVar10 = &PTR_FUN_007e3978;
        piVar5 = unaff_EBP;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar7 = FUN_0053e740(0xf), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar6[3] = iVar7;
      if (puVar10 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        puVar6[4] = puVar10;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  if (unaff_ESI[0x7d] != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar10 = operator_new(0x10);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        iVar7 = unaff_ESI[0x7d];
        FUN_004252e0(4);
        puVar10[3] = iVar7;
        *puVar10 = &PTR_FUN_007e3978;
        piVar5 = unaff_EBP;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar7 = FUN_0053e740(0x48c), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar6[3] = iVar7;
      if (puVar10 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        puVar6[4] = puVar10;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  if ((*(int *)((int)unaff_ESI + 0x246) != 0) || (unaff_ESI[0x98] != 0)) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar7 = (**(code **)(*(int *)((int)unaff_ESI + 0x242) + 4))();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar9 = FUN_0053e740(0x295), iVar9 == 0)) {
        iVar9 = 0;
      }
      else {
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
      }
      puVar6[3] = iVar9;
      if (iVar7 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        puVar6[4] = iVar7;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  cVar4 = FUN_0042ddd0((int)unaff_ESI + 0x236);
  if (cVar4 == '\0') {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar7 = FUN_0054f410();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar9 = FUN_0053e740(0xfd), iVar9 == 0)) {
        iVar9 = 0;
      }
      else {
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
      }
      puVar6[3] = iVar9;
      if (iVar7 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        puVar6[4] = iVar7;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  if ((char)unaff_ESI[0x8f] != '\0') {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar10 = operator_new(0xe);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        iVar7 = unaff_ESI[0x8f];
        FUN_004252e0(6);
        *(char *)(puVar10 + 3) = (char)iVar7;
        *puVar10 = &PTR_FUN_007e76a0;
        piVar5 = unaff_EBP;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar7 = FUN_0053e740(0x223), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar6[3] = iVar7;
      if (puVar10 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        puVar6[4] = puVar10;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  if (*(char *)((int)unaff_ESI + 0x169) != '\0') {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar10 = operator_new(0xe);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)((int)unaff_ESI + 0x169);
        FUN_004252e0(6);
        *(undefined1 *)(puVar10 + 3) = uVar1;
        *puVar10 = &PTR_FUN_007e76a0;
        piVar5 = unaff_EBP;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar7 = FUN_0053e740(0x4a6), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar6[3] = iVar7;
      if (puVar10 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        puVar6[4] = puVar10;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  if (*(char *)((int)unaff_ESI + 0x233) == '\0') {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar10 = operator_new(0xe);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)((int)unaff_ESI + 0x233);
        FUN_004252e0(6);
        *(undefined1 *)(puVar10 + 3) = uVar1;
        *puVar10 = &PTR_FUN_007e76a0;
        piVar5 = unaff_EBP;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar7 = FUN_0053e740(0x4a7), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar6[3] = iVar7;
      if (puVar10 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        puVar6[4] = puVar10;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  if ((char)unaff_ESI[0x8d] == '\0') {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar10 = operator_new(0xe);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        iVar7 = unaff_ESI[0x8d];
        FUN_004252e0(6);
        *(char *)(puVar10 + 3) = (char)iVar7;
        *puVar10 = &PTR_FUN_007e76a0;
        piVar5 = unaff_EBP;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar7 = FUN_0053e740(0x4a8), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar6[3] = iVar7;
      if (puVar10 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        puVar6[4] = puVar10;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)((int)unaff_ESI + 0x162);
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar11;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    local_1c = operator_new(0x14);
    if ((local_1c == (undefined4 *)0x0) || (iVar7 = FUN_0053e740(0x1dd), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar6[3] = iVar7;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar6[4] = puVar10;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar5 + 0x84))(puVar6);
  iVar7 = *(int *)(unaff_EDI + 0x22a);
  iVar9 = FUN_00522770();
  if (iVar9 != iVar7) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pvVar8 = operator_new(0x10);
      if (pvVar8 == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        uVar11 = FUN_004af700(*(undefined4 *)(unaff_EDI + 0x128));
        iVar7 = FUN_0053ee00(uVar11);
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar9 = FUN_0053e740(0x10b), iVar9 == 0)) {
        iVar9 = 0;
      }
      else {
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
      }
      puVar6[3] = iVar9;
      if (iVar7 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        puVar6[4] = iVar7;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  if (*(char *)(unaff_EDI + 0x232) != '\0') {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar10 = operator_new(0xe);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)(unaff_EDI + 0x232);
        FUN_00444030(6);
        *(undefined1 *)(puVar10 + 3) = uVar1;
        *puVar10 = &PTR_FUN_007e76a0;
        piVar5 = unaff_ESI;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar7 = FUN_0053e740(0x90), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar6[3] = iVar7;
      if (puVar10 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        puVar6[4] = puVar10;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  if (*(int *)(unaff_EDI + 0x23e) != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pvVar8 = operator_new(0x10);
      if (pvVar8 == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        uVar11 = FUN_004af700(*(undefined4 *)(unaff_EDI + 0x23e));
        iVar7 = FUN_0053ee00(uVar11);
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar9 = FUN_0053e740(0x48a), iVar9 == 0)) {
        iVar9 = 0;
      }
      else {
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
      }
      puVar6[3] = iVar9;
      if (iVar7 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        puVar6[4] = iVar7;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  if ((*(int *)(unaff_EDI + 300) != 0) && (*(char *)(*(int *)(unaff_EDI + 300) + 0x2d) == '\0')) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar7 = (*(code *)**(undefined4 **)(*(int *)(unaff_EDI + 300) + 8))();
      FUN_004252e0(0);
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar9 = FUN_0053e740(0x12d), iVar9 == 0)) {
        iVar9 = 0;
      }
      else {
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
      }
      puVar6[3] = iVar9;
      if (iVar7 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        puVar6[4] = iVar7;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  cVar4 = (**(code **)(*(int *)(unaff_EDI + 0x210) + 8))();
  if (cVar4 == '\0') {
    piVar5 = operator_new(0x1e);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_004c0c30(2);
      FUN_00444250();
      *piVar5 = (int)&PTR_FUN_007e3a28;
      piVar5[3] = (int)&PTR_LAB_007e39f8;
    }
    puVar6 = *(undefined4 **)(unaff_EDI + 0x214);
    while (puVar6 != (undefined4 *)0x0) {
      puVar10 = operator_new(0x10);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)puVar6[2];
        uVar11 = *puVar6;
        FUN_00444030(4);
        puVar10[3] = uVar11;
        *puVar10 = &PTR_FUN_007e3978;
        puVar6 = puVar2;
      }
      (**(code **)(*piVar5 + 0x84))(puVar10);
    }
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar7 = FUN_0054f410();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar9 = FUN_0053e740(0x24f), iVar9 == 0)) {
        iVar9 = 0;
      }
      else {
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
      }
      puVar6[3] = iVar9;
      if (iVar7 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        puVar6[4] = iVar7;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_ESI + 0x84))(puVar6);
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      FUN_004252e0(0);
      pvVar8 = operator_new(0x14);
      if ((pvVar8 == (void *)0x0) || (iVar7 = FUN_0053e740(0x1a0), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar6[3] = iVar7;
      if (piVar5 == (int *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        piVar5[2] = piVar5[2] + 1;
        puVar6[4] = piVar5;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_ESI + 0x84))(puVar6);
    if (*(char *)(unaff_EDI + 0x15d) != '\0') {
      puVar6 = operator_new(0x14);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar10 = operator_new(0xe);
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          FUN_00444030(6);
          *(undefined1 *)(puVar10 + 3) = 1;
          *puVar10 = &PTR_FUN_007e76a0;
        }
        FUN_004252e0(0);
        pvVar8 = operator_new(0x14);
        if ((pvVar8 == (void *)0x0) || (iVar7 = FUN_0053e740(0x250), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar6[3] = iVar7;
        if (puVar10 == (undefined4 *)0x0) {
          *puVar6 = &PTR_FUN_007e3878;
          puVar6[4] = 0;
        }
        else {
          puVar10[2] = puVar10[2] + 1;
          puVar6[4] = puVar10;
          *puVar6 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*unaff_ESI + 0x84))(puVar6);
    }
  }
  piVar5 = *(int **)(unaff_EDI + 8);
  if (piVar5 != (int *)0x0) {
    do {
      piVar3 = (int *)piVar5[2];
      iVar7 = *piVar5;
      pvVar8 = operator_new(0x14);
      if (pvVar8 == (void *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (*(code *)**(undefined4 **)(iVar7 + 0x12))();
        uVar11 = FUN_004441b0(0xb8,uVar11);
      }
      (**(code **)(*unaff_ESI + 0x84))(uVar11);
      piVar5 = piVar3;
    } while (piVar3 != (int *)0x0);
    ExceptionList = local_1c;
    return unaff_ESI;
  }
  ExceptionList = local_1c;
  return unaff_ESI;
}


