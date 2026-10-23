// FUN_006baa30 @ 6baa30 size=3400

int * __fastcall FUN_006baa30(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  void *pvVar12;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d74cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x1e);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar1 = (int)&PTR_FUN_007e492c;
    FUN_00444250();
    *piVar1 = (int)&PTR_FUN_007e3a28;
    piVar1[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  puVar2 = operator_new(0x14);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)(param_1 + 0x10);
      FUN_004252e0(5);
      *puVar3 = &PTR_FUN_007e48ac;
      puVar3[3] = uVar11;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (pvVar4 == (void *)0x0) {
LAB_006bab2f:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x24c);
      if (iVar5 == 0) goto LAB_006bab2f;
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
  (**(code **)(*piVar1 + 0x84))();
  puVar3 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x4;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar6 = operator_new(0x10);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)(unaff_EBX + 4);
      FUN_004252e0(5);
      *puVar6 = &PTR_FUN_007e48ac;
      puVar6[3] = uVar11;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 5;
    pvVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    if (pvVar4 == (void *)0x0) {
LAB_006babfc:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x56);
      if (iVar5 == 0) goto LAB_006babfc;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar3[3] = iVar5;
    if (puVar6 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar6[2] = puVar6[2] + 1;
      puVar3[4] = puVar6;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))();
  puVar6 = operator_new(0x14);
  local_c = (void *)0x7;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)(unaff_EBP + 8);
      FUN_004252e0(5);
      *puVar7 = &PTR_FUN_007e48ac;
      puVar7[3] = uVar11;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 8;
    pvVar4 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,9);
    if (pvVar4 == (void *)0x0) {
LAB_006bacc9:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x57);
      if (iVar5 == 0) goto LAB_006bacc9;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar6[3] = iVar5;
    if (puVar7 == (undefined4 *)0x0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      puVar7[2] = puVar7[2] + 1;
      puVar6[4] = puVar7;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))();
  puVar7 = operator_new(0x14);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0x10);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)(unaff_ESI + 0xc);
      FUN_004252e0(5);
      *puVar8 = &PTR_FUN_007e48ac;
      puVar8[3] = uVar11;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006bad96:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x58);
      if (iVar5 == 0) goto LAB_006bad96;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar7[3] = iVar5;
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
  (**(code **)(*piVar1 + 0x84))();
  puVar8 = operator_new(0x14);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar9 = operator_new(0x10);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)(unaff_EDI + 0x14);
      FUN_004252e0(5);
      *puVar9 = &PTR_FUN_007e48ac;
      puVar9[3] = uVar11;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006bae63:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x59);
      if (iVar5 == 0) goto LAB_006bae63;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar8[3] = iVar5;
    if (puVar9 == (undefined4 *)0x0) {
      *puVar8 = &PTR_FUN_007e3878;
      puVar8[4] = 0;
    }
    else {
      puVar9[2] = puVar9[2] + 1;
      puVar8[4] = puVar9;
      *puVar8 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))();
  puVar9 = operator_new(0x14);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar11 = puVar2[6];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar11;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006baf30:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x5a);
      if (iVar5 == 0) goto LAB_006baf30;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar9[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar9 = &PTR_FUN_007e3878;
      puVar9[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar9[4] = puVar10;
      *puVar9 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))();
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar11 = puVar3[7];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar11;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006baffd:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x5b);
      if (iVar5 == 0) goto LAB_006baffd;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar2[4] = puVar10;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))();
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar11 = puVar6[8];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar11;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006bb0ca:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x5c);
      if (iVar5 == 0) goto LAB_006bb0ca;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar3[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar3[4] = puVar10;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))();
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
      uVar11 = puVar7[9];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar11;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006bb197:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x5d);
      if (iVar5 == 0) goto LAB_006bb197;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar6[3] = iVar5;
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
  (**(code **)(*piVar1 + 0x84))();
  puVar7 = operator_new(0x14);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar11 = puVar8[10];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar11;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006bb264:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x5e);
      if (iVar5 == 0) goto LAB_006bb264;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar7[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar7 = &PTR_FUN_007e3878;
      puVar7[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar7[4] = puVar10;
      *puVar7 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))();
  puVar8 = operator_new(0x14);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar11 = puVar9[0xb];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar11;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006bb32d:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x5f);
      if (iVar5 == 0) goto LAB_006bb32d;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar8[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar8 = &PTR_FUN_007e3878;
      puVar8[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar8[4] = puVar10;
      *puVar8 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))();
  puVar9 = operator_new(0x14);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar11 = puVar2[0xc];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar11;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006bb3f6:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x60);
      if (iVar5 == 0) goto LAB_006bb3f6;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar9[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar9 = &PTR_FUN_007e3878;
      puVar9[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar9[4] = puVar10;
      *puVar9 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))();
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar11 = puVar3[0xd];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar11;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006bb4bf:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x61);
      if (iVar5 == 0) goto LAB_006bb4bf;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar2[4] = puVar10;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))();
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
    goto LAB_006bb5b2;
  }
  puVar10 = operator_new(0x10);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    uVar11 = puVar6[0xe];
    FUN_00444030(5);
    *puVar10 = &PTR_FUN_007e48ac;
    puVar10[3] = uVar11;
  }
  FUN_004252e0(0);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
LAB_006bb588:
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0053e740(0x62);
    if (iVar5 == 0) goto LAB_006bb588;
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  }
  puVar3[3] = iVar5;
  if (puVar10 == (undefined4 *)0x0) {
    *puVar3 = &PTR_FUN_007e3878;
    puVar3[4] = 0;
  }
  else {
    puVar10[2] = puVar10[2] + 1;
    puVar3[4] = puVar10;
    *puVar3 = &PTR_FUN_007e3878;
  }
LAB_006bb5b2:
  (**(code **)(*piVar1 + 0x84))(puVar3);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar11 = 0;
  }
  else {
    pvVar4 = operator_new(0x10);
    if (pvVar4 == (void *)0x0) {
      uVar11 = FUN_004441b0(99,0);
    }
    else {
      uVar11 = FUN_004440b0(puVar7[0xf]);
      uVar11 = FUN_004441b0(99,uVar11);
    }
  }
  (**(code **)(*piVar1 + 0x84))(uVar11);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar11 = 0;
  }
  else {
    pvVar4 = operator_new(0x10);
    if (pvVar4 == (void *)0x0) {
      uVar11 = FUN_004441b0(100,0);
    }
    else {
      uVar11 = FUN_004440b0(puVar8[0x10]);
      uVar11 = FUN_004441b0(100,uVar11);
    }
  }
  (**(code **)(*piVar1 + 0x84))(uVar11);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar11 = 0;
  }
  else {
    pvVar4 = operator_new(0x10);
    if (pvVar4 == (void *)0x0) {
      uVar11 = FUN_004441b0(0x65,0);
    }
    else {
      uVar11 = FUN_004440b0(puVar9[0x11]);
      uVar11 = FUN_004441b0(0x65,uVar11);
    }
  }
  (**(code **)(*piVar1 + 0x84))(uVar11);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar11 = 0;
  }
  else {
    pvVar12 = operator_new(0x10);
    if (pvVar12 == (void *)0x0) {
      uVar11 = FUN_004441b0(0x93,0);
    }
    else {
      uVar11 = FUN_004440b0(puVar2[0x12]);
      uVar11 = FUN_004441b0(0x93,uVar11);
    }
  }
  (**(code **)(*piVar1 + 0x84))(uVar11);
  ExceptionList = pvVar4;
  return piVar1;
}


