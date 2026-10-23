// FUN_006bdf00 @ 6bdf00 size=10047

int * __fastcall FUN_006bdf00(int param_1)

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
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  void *pvVar18;
  int unaff_EBX;
  int *unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d7e4d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x1e);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_00444030();
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
      uVar16 = *(undefined4 *)(param_1 + 8);
      puVar3[1] = 5;
      puVar3[2] = 0;
      puVar3[3] = uVar16;
      *puVar3 = &PTR_FUN_007e48ac;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
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
      uVar16 = *(undefined4 *)(unaff_EBX + 0xc);
      puVar6[1] = 5;
      puVar6[2] = 0;
      puVar6[3] = uVar16;
      *puVar6 = &PTR_FUN_007e48ac;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 5;
    pvVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  pvStack_c = (void *)0x7;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      iVar5 = unaff_EBP[4];
      puVar7[1] = 5;
      puVar7[2] = 0;
      puVar7[3] = iVar5;
      *puVar7 = &PTR_FUN_007e48ac;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 8;
    pvVar4 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,9);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  pvStack_c = (void *)0xffffffff;
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
      uVar16 = *(undefined4 *)(unaff_ESI + 0x14);
      FUN_004252e0();
      *puVar8 = &PTR_FUN_007e48ac;
      puVar8[3] = uVar16;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = *(undefined4 *)(unaff_EDI + 0x18);
      FUN_004252e0();
      *puVar9 = &PTR_FUN_007e48ac;
      puVar9[3] = uVar16;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar2[7];
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar16;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar3[0x18];
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar16;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar6[8];
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar16;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar7[9];
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar16;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar8[10];
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar16;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar9[0xb];
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar16;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar2[0xc];
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar16;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar3[0xd];
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar16;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar6[0xe];
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar16;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
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
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar7[0xf];
      FUN_004252e0();
      puVar10[3] = uVar16;
      *puVar10 = &PTR_FUN_007e48ac;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar6[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      puVar6[4] = 0;
      *puVar6 = &PTR_FUN_007e3878;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar6[4] = puVar10;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar8[0x10];
      FUN_004252e0();
      puVar10[3] = uVar16;
      *puVar10 = &PTR_FUN_007e48ac;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar7[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      puVar7[4] = 0;
      *puVar7 = &PTR_FUN_007e3878;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar7[4] = puVar10;
      *puVar7 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar9[0x11];
      FUN_004252e0();
      puVar10[3] = uVar16;
      *puVar10 = &PTR_FUN_007e48ac;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar8[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      puVar8[4] = 0;
      *puVar8 = &PTR_FUN_007e3878;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar8[4] = puVar10;
      *puVar8 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar1 = operator_new(0x14);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    puVar9 = operator_new(0x10);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      uVar16 = puVar2[0x12];
      FUN_004252e0();
      puVar9[3] = uVar16;
      *puVar9 = &PTR_FUN_007e48ac;
    }
    piVar1[1] = 0;
    piVar1[2] = 0;
    *piVar1 = (int)&PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar1[3] = iVar5;
    if (puVar9 == (undefined4 *)0x0) {
      piVar1[4] = 0;
      *piVar1 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar9[2] = puVar9[2] + 1;
      piVar1[4] = (int)puVar9;
      *piVar1 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar11 = operator_new(0x14);
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    puVar2 = operator_new(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar16 = puVar3[0x13];
      FUN_004252e0();
      puVar2[3] = uVar16;
      *puVar2 = &PTR_FUN_007e48ac;
    }
    piVar11[1] = 0;
    piVar11[2] = 0;
    *piVar11 = (int)&PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar11[3] = iVar5;
    if (puVar2 == (undefined4 *)0x0) {
      piVar11[4] = 0;
      *piVar11 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar2[2] = puVar2[2] + 1;
      piVar11[4] = (int)puVar2;
      *piVar11 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar12 = operator_new(0x14);
  if (piVar12 == (int *)0x0) {
    piVar12 = (int *)0x0;
  }
  else {
    puVar2 = operator_new(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar16 = puVar6[0x14];
      FUN_004252e0();
      puVar2[3] = uVar16;
      *puVar2 = &PTR_FUN_007e48ac;
    }
    piVar12[1] = 0;
    piVar12[2] = 0;
    *piVar12 = (int)&PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar12[3] = iVar5;
    if (puVar2 == (undefined4 *)0x0) {
      piVar12[4] = 0;
      *piVar12 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar2[2] = puVar2[2] + 1;
      piVar12[4] = (int)puVar2;
      *piVar12 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar16 = puVar7[0x15];
      FUN_004252e0();
      puVar3[3] = uVar16;
      *puVar3 = &PTR_FUN_007e48ac;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    if (puVar3 == (undefined4 *)0x0) {
      puVar2[4] = 0;
      *puVar2 = &PTR_FUN_007e3878;
    }
    else {
      puVar3[2] = puVar3[2] + 1;
      puVar2[4] = puVar3;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar6 = operator_new(0x10);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar16 = puVar8[0x16];
      FUN_004252e0();
      puVar6[3] = uVar16;
      *puVar6 = &PTR_FUN_007e48ac;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar3[3] = iVar5;
    if (puVar6 == (undefined4 *)0x0) {
      puVar3[4] = 0;
      *puVar3 = &PTR_FUN_007e3878;
    }
    else {
      puVar6[2] = puVar6[2] + 1;
      puVar3[4] = puVar6;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      iVar5 = piVar1[0x17];
      FUN_004252e0();
      puVar7[3] = iVar5;
      *puVar7 = &PTR_FUN_007e48ac;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar6[3] = iVar5;
    if (puVar7 == (undefined4 *)0x0) {
      puVar6[4] = 0;
      *puVar6 = &PTR_FUN_007e3878;
    }
    else {
      puVar7[2] = puVar7[2] + 1;
      puVar6[4] = puVar7;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
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
      iVar5 = piVar11[0x21];
      unaff_EBP = piVar1;
      FUN_004252e0();
      puVar8[3] = iVar5;
      *puVar8 = &PTR_FUN_007e3978;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar7[3] = iVar5;
    if (puVar8 == (undefined4 *)0x0) {
      puVar7[4] = 0;
      *puVar7 = &PTR_FUN_007e3878;
    }
    else {
      puVar8[2] = puVar8[2] + 1;
      puVar7[4] = puVar8;
      *puVar7 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
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
      iVar5 = piVar12[1];
      unaff_EBP = piVar11;
      FUN_004252e0();
      puVar9[3] = iVar5;
      *puVar9 = &PTR_FUN_007e3978;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar8[3] = iVar5;
    if (puVar9 == (undefined4 *)0x0) {
      puVar8[4] = 0;
      *puVar8 = &PTR_FUN_007e3878;
    }
    else {
      puVar9[2] = puVar9[2] + 1;
      puVar8[4] = puVar9;
      *puVar8 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  if (*(int *)((int)puVar2 + 0xc6) != 5) {
    puVar9 = operator_new(0x14);
    if (puVar9 != (undefined4 *)0x0) {
      puVar10 = operator_new(0x10);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar16 = *(undefined4 *)((int)puVar2 + 0xc6);
        unaff_EBP = piVar12;
        FUN_004252e0();
        puVar10[3] = uVar16;
        *puVar10 = &PTR_FUN_007e3978;
        piVar12 = unaff_EBP;
      }
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar9[3] = iVar5;
      if (puVar10 == (undefined4 *)0x0) {
        puVar9[4] = 0;
        *puVar9 = &PTR_FUN_007e3878;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        puVar9[4] = puVar10;
        *puVar9 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EBP + 0x84))();
  }
  if (*(int *)((int)puVar2 + 0xca) != 0) {
    puVar9 = operator_new(0x14);
    if (puVar9 != (undefined4 *)0x0) {
      puVar10 = operator_new(0x10);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar16 = *(undefined4 *)((int)puVar2 + 0xca);
        unaff_EBP = piVar12;
        FUN_004252e0();
        puVar10[3] = uVar16;
        *puVar10 = &PTR_FUN_007e3978;
      }
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar9[3] = iVar5;
      if (puVar10 == (undefined4 *)0x0) {
        puVar9[4] = 0;
        *puVar9 = &PTR_FUN_007e3878;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        puVar9[4] = puVar10;
        *puVar9 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EBP + 0x84))();
  }
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
      uVar16 = puVar2[0x19];
      FUN_004252e0();
      puVar10[3] = uVar16;
      *puVar10 = &PTR_FUN_007e48ac;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar9[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      puVar9[4] = 0;
      *puVar9 = &PTR_FUN_007e3878;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar9[4] = puVar10;
      *puVar9 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
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
      uVar16 = puVar3[0x1a];
      FUN_00444030();
      puVar10[3] = uVar16;
      *puVar10 = &PTR_FUN_007e48ac;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      puVar2[4] = 0;
      *puVar2 = &PTR_FUN_007e3878;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar2[4] = puVar10;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar1 = operator_new(0x14);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    puVar3 = operator_new(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar16 = puVar6[0x1b];
      FUN_00444030(5);
      puVar3[3] = uVar16;
      *puVar3 = &PTR_FUN_007e48ac;
    }
    piVar1[1] = 0;
    piVar1[2] = 0;
    *piVar1 = (int)&PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x446), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar1[3] = iVar5;
    if (puVar3 == (undefined4 *)0x0) {
      piVar1[4] = 0;
      *piVar1 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar3[2] = puVar3[2] + 1;
      piVar1[4] = (int)puVar3;
      *piVar1 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar11 = operator_new(0x14);
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    puVar3 = operator_new(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar16 = puVar7[0x1c];
      FUN_00444030(5);
      puVar3[3] = uVar16;
      *puVar3 = &PTR_FUN_007e48ac;
    }
    piVar11[1] = 0;
    piVar11[2] = 0;
    *piVar11 = (int)&PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x448), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar11[3] = iVar5;
    if (puVar3 == (undefined4 *)0x0) {
      piVar11[4] = 0;
      *piVar11 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar3[2] = puVar3[2] + 1;
      piVar11[4] = (int)puVar3;
      *piVar11 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar12 = operator_new(0x14);
  if (piVar12 == (int *)0x0) {
    piVar12 = (int *)0x0;
  }
  else {
    puVar3 = operator_new(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar16 = puVar8[0x1d];
      FUN_00444030(5);
      puVar3[3] = uVar16;
      *puVar3 = &PTR_FUN_007e48ac;
    }
    piVar12[1] = 0;
    piVar12[2] = 0;
    *piVar12 = (int)&PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x449), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar12[3] = iVar5;
    if (puVar3 == (undefined4 *)0x0) {
      piVar12[4] = 0;
      *piVar12 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar3[2] = puVar3[2] + 1;
      piVar12[4] = (int)puVar3;
      *piVar12 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar13 = operator_new(0x14);
  if (piVar13 == (int *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    puVar3 = operator_new(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar16 = puVar9[0x1e];
      FUN_00444030(5);
      puVar3[3] = uVar16;
      *puVar3 = &PTR_FUN_007e48ac;
    }
    piVar13[1] = 0;
    piVar13[2] = 0;
    *piVar13 = (int)&PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x44a), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar13[3] = iVar5;
    if (puVar3 == (undefined4 *)0x0) {
      piVar13[4] = 0;
      *piVar13 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar3[2] = puVar3[2] + 1;
      piVar13[4] = (int)puVar3;
      *piVar13 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar14 = operator_new(0x14);
  if (piVar14 == (int *)0x0) {
    piVar14 = (int *)0x0;
  }
  else {
    puVar3 = operator_new(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar16 = puVar2[0x1f];
      FUN_00444030(5);
      puVar3[3] = uVar16;
      *puVar3 = &PTR_FUN_007e48ac;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(1099), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar14[3] = iVar5;
    if (puVar3 == (undefined4 *)0x0) {
      piVar14[4] = 0;
      *piVar14 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar3[2] = puVar3[2] + 1;
      piVar14[4] = (int)puVar3;
      *piVar14 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar5 = piVar1[0x20];
      FUN_00444030(5);
      puVar3[3] = iVar5;
      *puVar3 = &PTR_FUN_007e48ac;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x44c), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    if (puVar3 == (undefined4 *)0x0) {
      puVar2[4] = 0;
      *puVar2 = &PTR_FUN_007e3878;
    }
    else {
      puVar3[2] = puVar3[2] + 1;
      puVar2[4] = puVar3;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  iVar5 = piVar11[0x22];
  if (iVar5 == 0) {
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) goto LAB_006bff21;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x43c);
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    goto LAB_006bfee9;
  }
  if (iVar5 == 1) {
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x43d);
      }
      FUN_004252e0(0);
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar15 = FUN_0053e740(0x439), iVar15 == 0)) {
        iVar15 = 0;
      }
      else {
        *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 1;
      }
      puVar3[3] = iVar15;
      if (iVar5 == 0) {
        puVar3[4] = 0;
        *puVar3 = &PTR_FUN_007e3878;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar3[4] = iVar5;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar3);
  }
  else {
    if (iVar5 == 2) {
      puVar3 = operator_new(0x14);
      if (puVar3 != (undefined4 *)0x0) {
        pvVar4 = operator_new(0x14);
        if (pvVar4 == (void *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0053e740(0x25f);
        }
        FUN_004252e0(0);
        pvVar4 = operator_new(0x14);
        goto LAB_006bfee9;
      }
LAB_006bff21:
      puVar3 = (undefined4 *)0x0;
    }
    else {
      if (iVar5 == 4) {
        puVar3 = operator_new(0x14);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
          piVar11 = piVar1;
        }
        else {
          pvVar4 = operator_new(0x14);
          if (pvVar4 == (void *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_0053e740(0x25e);
          }
          FUN_004252e0(0);
          pvVar4 = operator_new(0x14);
          if ((pvVar4 == (void *)0x0) || (iVar15 = FUN_0053e740(0x439), iVar15 == 0)) {
            iVar15 = 0;
          }
          else {
            *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 1;
          }
          puVar3[3] = iVar15;
          piVar11 = piVar1;
          if (iVar5 == 0) {
            puVar3[4] = 0;
            *puVar3 = &PTR_FUN_007e3878;
          }
          else {
            *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
            puVar3[4] = iVar5;
            *puVar3 = &PTR_FUN_007e3878;
          }
        }
        (**(code **)(*piVar11 + 0x84))(puVar3);
        goto LAB_006bff3c;
      }
      puVar3 = operator_new(0x14);
      if (puVar3 == (undefined4 *)0x0) goto LAB_006bff21;
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x25d);
      }
      FUN_004252e0(0);
      pvVar4 = operator_new(0x14);
LAB_006bfee9:
      if ((pvVar4 == (void *)0x0) || (iVar15 = FUN_0053e740(0x439), iVar15 == 0)) {
        iVar15 = 0;
      }
      else {
        *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 1;
      }
      puVar3[3] = iVar15;
      if (iVar5 == 0) {
        puVar3[4] = 0;
        *puVar3 = &PTR_FUN_007e3878;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar3[4] = iVar5;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar3);
  }
LAB_006bff3c:
  iVar5 = piVar12[0x23];
  if (iVar5 == 0) {
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) goto LAB_006c023e;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x43c);
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    goto LAB_006c0206;
  }
  if (iVar5 == 1) {
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) {
LAB_006c006b:
      puVar3 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x43d);
      }
      FUN_004252e0(0);
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar15 = FUN_0053e740(0x43a), iVar15 == 0)) {
LAB_006c0043:
        iVar15 = 0;
      }
      else {
        *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 1;
      }
LAB_006c0045:
      puVar3[3] = iVar15;
      if (iVar5 == 0) {
        puVar3[4] = 0;
        *puVar3 = &PTR_FUN_007e3878;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar3[4] = iVar5;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar11 + 0x84))(puVar3);
    goto LAB_006c0254;
  }
  if (iVar5 == 2) {
    puVar3 = operator_new(0x14);
    if (puVar3 != (undefined4 *)0x0) {
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x25f);
      }
      FUN_004252e0(0);
      pvVar4 = operator_new(0x14);
      goto LAB_006c0206;
    }
LAB_006c023e:
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if (iVar5 == 4) {
      puVar3 = operator_new(0x14);
      if (puVar3 != (undefined4 *)0x0) {
        pvVar4 = operator_new(0x14);
        if (pvVar4 == (void *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0053e740(0x25e);
        }
        FUN_004252e0(0);
        pvVar4 = operator_new(0x14);
        if ((pvVar4 == (void *)0x0) || (iVar15 = FUN_0053e740(0x43a), iVar15 == 0))
        goto LAB_006c0043;
        *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 1;
        goto LAB_006c0045;
      }
      goto LAB_006c006b;
    }
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) goto LAB_006c023e;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x25d);
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
LAB_006c0206:
    if ((pvVar4 == (void *)0x0) || (iVar15 = FUN_0053e740(0x43a), iVar15 == 0)) {
      iVar15 = 0;
    }
    else {
      *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 1;
    }
    puVar3[3] = iVar15;
    if (iVar5 == 0) {
      puVar3[4] = 0;
      *puVar3 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar3[4] = iVar5;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar11 + 0x84))(puVar3);
LAB_006c0254:
  piVar1 = operator_new(0x1e);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004c0c30(2);
    FUN_00444250();
    *piVar1 = (int)&PTR_FUN_007e3a28;
    piVar1[3] = (int)&PTR_LAB_007e39f8;
  }
  iVar5 = *(int *)((int)piVar13 + 0xa6);
  while (iVar5 != 0) {
    puVar3 = (undefined4 *)FUN_00499780(&stack0xffffff54,0);
    puVar3 = *(undefined4 **)*puVar3;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
      uVar16 = 0;
    }
    else {
      pvVar4 = operator_new(0x10);
      if (pvVar4 == (void *)0x0) {
        uVar16 = 0;
      }
      else {
        uVar16 = FUN_00516850(puVar3[1]);
      }
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
        uVar16 = FUN_0053e630(0,uVar16);
      }
      else {
        uVar17 = FUN_004af700(*puVar3);
        uVar17 = FUN_0053e770(uVar17);
        uVar16 = FUN_0053e630(uVar17,uVar16);
      }
    }
    (**(code **)(*piVar1 + 0x84))(uVar16);
  }
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_004441b0(0x43b,piVar1);
  }
  (**(code **)(*piVar12 + 0x84))(uVar16);
  pvVar18 = operator_new(0x1e);
  if (pvVar18 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_00538860();
  }
  iVar5 = piVar14[0x2e];
  while (iVar5 != 0) {
    puVar3 = (undefined4 *)FUN_00499780(&stack0xffffff58,0);
    puVar3 = *(undefined4 **)*puVar3;
    pvVar18 = operator_new(0x14);
    if (pvVar18 == (void *)0x0) {
      uVar16 = 0;
    }
    else {
      pvVar18 = operator_new(0x10);
      if (pvVar18 == (void *)0x0) {
        uVar16 = 0;
      }
      else {
        uVar16 = FUN_00516850(puVar3[1]);
      }
      pvVar18 = operator_new(0x14);
      if (pvVar18 == (void *)0x0) {
        uVar16 = FUN_0053e630(0,uVar16);
      }
      else {
        uVar17 = FUN_004af700(*puVar3);
        uVar17 = FUN_0053e770(uVar17);
        uVar16 = FUN_0053e630(uVar17,uVar16);
      }
    }
    (**(code **)(*piVar1 + 0x84))(uVar16);
  }
  pvVar18 = operator_new(0x14);
  if (pvVar18 == (void *)0x0) {
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_004441b0(0x461,piVar1);
  }
  (**(code **)(*piVar13 + 0x84))(uVar16);
  pvVar18 = operator_new(0x1e);
  if (pvVar18 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_00538860();
  }
  iVar5 = puVar2[0x25];
  while (iVar5 != 0) {
    puVar2 = (undefined4 *)FUN_006ca390(&stack0xffffff50,0);
    puVar2 = *(undefined4 **)*puVar2;
    wsprintfA(&stack0xffffff58,&DAT_008390a0,*puVar2);
    pvVar18 = operator_new(0x14);
    if (pvVar18 == (void *)0x0) {
      uVar16 = 0;
    }
    else {
      pvVar18 = operator_new(0x10);
      if (pvVar18 == (void *)0x0) {
        uVar16 = 0;
      }
      else {
        uVar16 = FUN_004440b0(puVar2[1]);
      }
      pvVar18 = operator_new(0x14);
      if (pvVar18 == (void *)0x0) {
        uVar16 = FUN_0053e630(0,uVar16);
      }
      else {
        uVar17 = FUN_0053e770(&stack0xffffff58);
        uVar16 = FUN_0053e630(uVar17,uVar16);
      }
    }
    (**(code **)(*piVar1 + 0x84))(uVar16);
    piVar13 = piVar14;
  }
  pvVar18 = operator_new(0x14);
  if (pvVar18 == (void *)0x0) {
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_004441b0(0x434,piVar1);
  }
  (**(code **)(*piVar13 + 0x84))(uVar16);
  ExceptionList = pvVar4;
  return piVar13;
}


