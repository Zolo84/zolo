// FUN_006bbda0 @ 6bbda0 size=4798

int * __fastcall FUN_006bbda0(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d77d5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = operator_new(0x1e);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_00444030();
    *piVar2 = (int)&PTR_FUN_007e492c;
    FUN_00444250();
    *piVar2 = (int)&PTR_FUN_007e3a28;
    piVar2[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  piVar3 = operator_new(0x14);
  local_4 = 1;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0xe);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(param_1 + 4);
      FUN_004252e0();
      *(undefined1 *)(puVar4 + 3) = uVar1;
      *puVar4 = &PTR_FUN_007e76a0;
    }
    piVar3[1] = 0;
    piVar3[2] = 0;
    *piVar3 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar5 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar3[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar3 = (int)&PTR_FUN_007e3878;
      piVar3[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar3[4] = (int)puVar4;
      *piVar3 = (int)&PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x84))();
  piVar7 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x4;
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar15 = *(undefined4 *)(unaff_EBX + 6);
      FUN_004252e0();
      *puVar4 = &PTR_FUN_007e48ac;
      puVar4[3] = uVar15;
    }
    piVar7[1] = 0;
    piVar7[2] = 0;
    *piVar7 = (int)&PTR_LAB_007e38f8;
    puStack_8._0_1_ = 5;
    pvVar5 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar7[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar7 = (int)&PTR_FUN_007e3878;
      piVar7[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar7[4] = (int)puVar4;
      *piVar7 = (int)&PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))();
  piVar8 = operator_new(0x14);
  pvStack_c = (void *)0x7;
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar15 = *(undefined4 *)((int)unaff_EBP + 10);
      FUN_004252e0();
      *puVar4 = &PTR_FUN_007e48ac;
      puVar4[3] = uVar15;
    }
    piVar8[1] = 0;
    piVar8[2] = 0;
    *piVar8 = (int)&PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 8;
    pvVar5 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,9);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar8[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar8 = (int)&PTR_FUN_007e3878;
      piVar8[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar8[4] = (int)puVar4;
      *piVar8 = (int)&PTR_FUN_007e3878;
    }
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))();
  piVar9 = operator_new(0x14);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar15 = *(undefined4 *)((int)unaff_ESI + 0x12);
      FUN_004252e0();
      puVar4[3] = uVar15;
      *puVar4 = &PTR_FUN_007e3978;
      piVar2 = unaff_EBP;
    }
    piVar9[1] = 0;
    piVar9[2] = 0;
    *piVar9 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar9[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar9 = (int)&PTR_FUN_007e3878;
      piVar9[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar9[4] = (int)puVar4;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  piVar10 = operator_new(0x14);
  if (piVar10 == (int *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar15 = *(undefined4 *)((int)unaff_EDI + 0xe);
      FUN_004252e0();
      puVar4[3] = uVar15;
      *puVar4 = &PTR_FUN_007e3978;
      piVar2 = unaff_ESI;
    }
    piVar10[1] = 0;
    piVar10[2] = 0;
    *piVar10 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar10[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar10 = (int)&PTR_FUN_007e3878;
      piVar10[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar10[4] = (int)puVar4;
      *piVar10 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  puVar4 = operator_new(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar11 = operator_new(0x10);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      uVar15 = *(undefined4 *)((int)piVar3 + 0x16);
      FUN_004252e0();
      puVar11[3] = uVar15;
      *puVar11 = &PTR_FUN_007e3978;
      piVar2 = unaff_EDI;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar4[3] = iVar6;
    if (puVar11 == (undefined4 *)0x0) {
      *puVar4 = &PTR_FUN_007e3878;
      puVar4[4] = 0;
    }
    else {
      puVar11[2] = puVar11[2] + 1;
      puVar4[4] = puVar11;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  puVar11 = operator_new(0x14);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar12 = operator_new(0x10);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar15 = *(undefined4 *)((int)piVar7 + 0x1a);
      piVar2 = piVar3;
      FUN_004252e0();
      puVar12[3] = uVar15;
      *puVar12 = &PTR_FUN_007e3978;
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar11[3] = iVar6;
    if (puVar12 == (undefined4 *)0x0) {
      *puVar11 = &PTR_FUN_007e3878;
      puVar11[4] = 0;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      puVar11[4] = puVar12;
      *puVar11 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  puVar12 = operator_new(0x14);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar13 = operator_new(0x10);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      uVar15 = *(undefined4 *)((int)piVar8 + 0x1e);
      piVar2 = piVar7;
      FUN_004252e0();
      puVar13[3] = uVar15;
      *puVar13 = &PTR_FUN_007e3978;
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar12[3] = iVar6;
    if (puVar13 == (undefined4 *)0x0) {
      *puVar12 = &PTR_FUN_007e3878;
      puVar12[4] = 0;
    }
    else {
      puVar13[2] = puVar13[2] + 1;
      puVar12[4] = puVar13;
      *puVar12 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  piVar3 = operator_new(0x14);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar13 = operator_new(0x10);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      uVar15 = *(undefined4 *)((int)piVar9 + 0x22);
      piVar2 = piVar8;
      FUN_004252e0();
      puVar13[3] = uVar15;
      *puVar13 = &PTR_FUN_007e3978;
    }
    piVar3[1] = 0;
    piVar3[2] = 0;
    *piVar3 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar3[3] = iVar6;
    if (puVar13 == (undefined4 *)0x0) {
      *piVar3 = (int)&PTR_FUN_007e3878;
      piVar3[4] = 0;
    }
    else {
      puVar13[2] = puVar13[2] + 1;
      piVar3[4] = (int)puVar13;
      *piVar3 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  piVar7 = operator_new(0x14);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar13 = operator_new(0x10);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      uVar15 = *(undefined4 *)((int)piVar10 + 0x26);
      piVar2 = piVar9;
      FUN_004252e0(4);
      puVar13[3] = uVar15;
      *puVar13 = &PTR_FUN_007e3978;
    }
    piVar7[1] = 0;
    piVar7[2] = 0;
    *piVar7 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x431), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar7[3] = iVar6;
    if (puVar13 == (undefined4 *)0x0) {
      *piVar7 = (int)&PTR_FUN_007e3878;
      piVar7[4] = 0;
    }
    else {
      puVar13[2] = puVar13[2] + 1;
      piVar7[4] = (int)puVar13;
      *piVar7 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  piVar8 = operator_new(0x14);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar13 = operator_new(0x10);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      uVar15 = *(undefined4 *)((int)puVar4 + 0x2a);
      piVar2 = piVar10;
      FUN_00444030(4);
      puVar13[3] = uVar15;
      *puVar13 = &PTR_FUN_007e3978;
    }
    piVar8[1] = 0;
    piVar8[2] = 0;
    *piVar8 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x432), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar8[3] = iVar6;
    if (puVar13 == (undefined4 *)0x0) {
      *piVar8 = (int)&PTR_FUN_007e3878;
      piVar8[4] = 0;
    }
    else {
      puVar13[2] = puVar13[2] + 1;
      piVar8[4] = (int)puVar13;
      *piVar8 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  piVar9 = operator_new(0x14);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar15 = puVar11[0x19];
      FUN_00444030(5);
      *puVar4 = &PTR_FUN_007e48ac;
      puVar4[3] = uVar15;
    }
    piVar9[1] = 0;
    piVar9[2] = 0;
    *piVar9 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x468), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar9[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar9 = (int)&PTR_FUN_007e3878;
      piVar9[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar9[4] = (int)puVar4;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  puVar4 = operator_new(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar11 = operator_new(0x10);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      uVar15 = puVar12[0x1a];
      FUN_00444030(5);
      *puVar11 = &PTR_FUN_007e48ac;
      puVar11[3] = uVar15;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x465), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar4[3] = iVar6;
    if (puVar11 == (undefined4 *)0x0) {
      *puVar4 = &PTR_FUN_007e3878;
      puVar4[4] = 0;
    }
    else {
      puVar11[2] = puVar11[2] + 1;
      puVar4[4] = puVar11;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  puVar11 = operator_new(0x14);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar12 = operator_new(0x10);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      iVar6 = piVar3[0x1b];
      FUN_00444030(5);
      *puVar12 = &PTR_FUN_007e48ac;
      puVar12[3] = iVar6;
    }
    FUN_004252e0(0);
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x466), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar11[3] = iVar6;
    if (puVar12 == (undefined4 *)0x0) {
      *puVar11 = &PTR_FUN_007e3878;
      puVar11[4] = 0;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      puVar11[4] = puVar12;
      *puVar11 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  puVar12 = operator_new(0x14);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar13 = operator_new(0x10);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      iVar6 = piVar7[0x1c];
      piVar2 = piVar3;
      FUN_00444030(4);
      puVar13[3] = iVar6;
      *puVar13 = &PTR_FUN_007e3978;
    }
    FUN_004252e0(0);
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x467), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar12[3] = iVar6;
    if (puVar13 == (undefined4 *)0x0) {
      *puVar12 = &PTR_FUN_007e3878;
      puVar12[4] = 0;
    }
    else {
      puVar13[2] = puVar13[2] + 1;
      puVar12[4] = puVar13;
      *puVar12 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))(puVar12);
  piVar2 = operator_new(0x1e);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004c0c30(2);
    FUN_00444250();
    *piVar2 = (int)&PTR_FUN_007e3a28;
    piVar2[3] = (int)&PTR_LAB_007e39f8;
  }
  piVar3 = (int *)piVar8[0x11];
  while (piVar3 != (int *)0x0) {
    piVar10 = (int *)piVar3[2];
    puVar12 = (undefined4 *)*piVar3;
    piVar3 = piVar10;
    puVar13 = operator_new(0x14);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0x10);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        uVar15 = puVar12[1];
        piVar10 = piVar3;
        FUN_00444030(4);
        puVar14[3] = uVar15;
        *puVar14 = &PTR_FUN_007e3978;
      }
      pvVar5 = operator_new(0x14);
      if (pvVar5 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        uVar15 = FUN_004af700(*puVar12);
        iVar6 = FUN_0053e770(uVar15);
      }
      FUN_004252e0(0xd);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar13[3] = iVar6;
      if (puVar14 == (undefined4 *)0x0) {
        *puVar13 = &PTR_FUN_007e3878;
        puVar13[4] = 0;
      }
      else {
        puVar14[2] = puVar14[2] + 1;
        puVar13[4] = puVar14;
        *puVar13 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar2 + 0x84))(puVar13);
    piVar3 = piVar10;
  }
  puVar12 = operator_new(0x14);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    FUN_004252e0(0);
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x433), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar12[3] = iVar6;
    if (piVar2 == (int *)0x0) {
      *puVar12 = &PTR_FUN_007e3878;
      puVar12[4] = 0;
    }
    else {
      piVar2[2] = piVar2[2] + 1;
      puVar12[4] = piVar2;
      *puVar12 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar7 + 0x84))(puVar12);
  piVar2 = operator_new(0x1e);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004c0c30(2);
    FUN_00444250();
    *piVar2 = (int)&PTR_FUN_007e3a28;
    piVar2[3] = (int)&PTR_LAB_007e39f8;
  }
  piVar3 = *(int **)((int)piVar9 + 0x56);
  while (piVar3 != (int *)0x0) {
    piVar7 = (int *)piVar3[2];
    puVar12 = (undefined4 *)*piVar3;
    wsprintfA(&stack0xffffff98,&DAT_008390a0,*puVar12);
    puVar13 = operator_new(0x14);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0x10);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        uVar15 = puVar12[1];
        FUN_00444030(4);
        puVar14[3] = uVar15;
        *puVar14 = &PTR_FUN_007e3978;
      }
      pvVar5 = operator_new(0x14);
      if (pvVar5 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0053e770(&stack0xffffff98);
      }
      FUN_004252e0(0xd);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar13[3] = iVar6;
      if (puVar14 == (undefined4 *)0x0) {
        *puVar13 = &PTR_FUN_007e3878;
        puVar13[4] = 0;
      }
      else {
        puVar14[2] = puVar14[2] + 1;
        puVar13[4] = puVar14;
        *puVar13 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar2 + 0x84))(puVar13);
    piVar3 = piVar7;
  }
  puVar12 = operator_new(0x14);
  if (puVar12 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    puVar14 = puVar12;
    FUN_004252e0(0);
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x434), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar12[3] = iVar6;
    puVar13 = puVar12;
    if (piVar2 == (int *)0x0) {
      *puVar12 = &PTR_FUN_007e3878;
      puVar12[4] = 0;
      puVar12 = puVar14;
    }
    else {
      piVar2[2] = piVar2[2] + 1;
      puVar12[4] = piVar2;
      *puVar12 = &PTR_FUN_007e3878;
      puVar12 = puVar14;
    }
  }
  (**(code **)(*piVar8 + 0x84))(puVar13);
  piVar2 = operator_new(0x1e);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004c0c30(2);
    FUN_00444250();
    *piVar2 = (int)&PTR_FUN_007e3a28;
    piVar2[3] = (int)&PTR_LAB_007e39f8;
  }
  piVar3 = (int *)puVar4[0x1e];
  while (piVar3 != (int *)0x0) {
    piVar7 = (int *)piVar3[2];
    puVar4 = (undefined4 *)*piVar3;
    wsprintfA(&stack0xffffffa8,&DAT_008390a0,*puVar4);
    puVar13 = operator_new(0x14);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0x10);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        uVar15 = puVar4[1];
        FUN_00444030(5);
        *puVar14 = &PTR_FUN_007e48ac;
        puVar14[3] = uVar15;
      }
      pvVar5 = operator_new(0x14);
      if (pvVar5 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0053e770(&stack0xffffffa8);
      }
      FUN_004252e0(0xd);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar13[3] = iVar6;
      if (puVar14 == (undefined4 *)0x0) {
        *puVar13 = &PTR_FUN_007e3878;
        puVar13[4] = 0;
      }
      else {
        puVar14[2] = puVar14[2] + 1;
        puVar13[4] = puVar14;
        *puVar13 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar2 + 0x84))(puVar13);
    piVar3 = piVar7;
  }
  puVar4 = operator_new(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_004252e0(0);
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x469), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar4[3] = iVar6;
    if (piVar2 == (int *)0x0) {
      *puVar4 = &PTR_FUN_007e3878;
      puVar4[4] = 0;
    }
    else {
      piVar2[2] = piVar2[2] + 1;
      puVar4[4] = piVar2;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar9 + 0x84))(puVar4);
  pvVar5 = operator_new(0x1e);
  if (pvVar5 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00538860();
  }
  iVar6 = *(int *)((int)puVar11 + 0x32);
  while (iVar6 != 0) {
    puVar4 = (undefined4 *)FUN_00526af0(&stack0xffffffa0,0);
    uVar15 = *(undefined4 *)*puVar4;
    pvVar5 = operator_new(0x10);
    if (pvVar5 == (void *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = FUN_00516850(uVar15);
    }
    (**(code **)(*piVar2 + 0x84))(uVar15);
  }
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = FUN_004441b0(0x4ab,piVar2);
  }
  (**(code **)(*piVar9 + 0x84))(uVar15);
  ExceptionList = puVar12;
  return piVar9;
}


