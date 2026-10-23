// FUN_006b1020 @ 6b1020 size=10515

int * __fastcall FUN_006b1020(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  int unaff_EBX;
  int *unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d6908;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar4 = operator_new(0x1e);
  local_4 = 0;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_00444030();
    *piVar4 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *piVar4 = (int)&PTR_FUN_007e3a28;
    piVar4[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  piVar5 = operator_new(0x14);
  local_4 = 2;
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar6 = operator_new(0xe);
    local_4._0_1_ = 3;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(param_1 + 0xca);
      FUN_004252e0();
      *(undefined1 *)(puVar6 + 3) = uVar1;
      *puVar6 = &PTR_FUN_007e76a0;
    }
    piVar5[1] = 0;
    piVar5[2] = 0;
    *piVar5 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 4;
    pvVar7 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,5);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    piVar5[3] = iVar8;
    if (puVar6 == (undefined4 *)0x0) {
      *piVar5 = (int)&PTR_FUN_007e3878;
      piVar5[4] = 0;
    }
    else {
      puVar6[2] = puVar6[2] + 1;
      piVar5[4] = (int)puVar6;
      *piVar5 = (int)&PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar4 + 0x84))();
  piVar9 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x6;
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    iVar8 = (*(code *)**(undefined4 **)(unaff_EBX + 0x70))();
    piVar9[1] = 0;
    piVar9[2] = 0;
    *piVar9 = (int)&PTR_LAB_007e38f8;
    puStack_8._0_1_ = 7;
    pvVar7 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if ((pvVar7 == (void *)0x0) || (iVar10 = FUN_0053e740(), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    piVar9[3] = iVar10;
    if (iVar8 == 0) {
      *piVar9 = (int)&PTR_FUN_007e3878;
      piVar9[4] = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      piVar9[4] = iVar8;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar4 + 0x84))();
  puVar6 = operator_new(0x14);
  pvStack_c = (void *)0x9;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar11 = operator_new(0x10);
    pvStack_c._0_1_ = 10;
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      iVar8 = unaff_EBP[0x38];
      FUN_004252e0();
      *puVar11 = &PTR_FUN_007e48ac;
      puVar11[3] = iVar8;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 0xb;
    pvVar7 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0xc);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar6[3] = iVar8;
    if (puVar11 == (undefined4 *)0x0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      puVar11[2] = puVar11[2] + 1;
      puVar6[4] = puVar11;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar4 + 0x84))();
  piVar4 = operator_new(0x1e);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_00444030();
    *piVar4 = (int)&PTR_FUN_007e492c;
    FUN_00444250();
    piVar4[3] = (int)&PTR_LAB_007e39f8;
    *piVar4 = (int)&PTR_FUN_007e3a28;
  }
  piVar13 = *(int **)(unaff_ESI + 0xba0);
  while (piVar13 != (int *)0x0) {
    piVar17 = (int *)piVar13[2];
    iVar8 = *piVar13;
    puVar11 = operator_new(0x14);
    if (puVar11 != (undefined4 *)0x0) {
      puVar12 = operator_new(0x10);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        uVar18 = *(undefined4 *)(iVar8 + 4);
        FUN_004252e0();
        *puVar12 = &PTR_FUN_007e48ac;
        puVar12[3] = uVar18;
      }
      pvVar7 = operator_new(0x14);
      if (pvVar7 == (void *)0x0) {
        iVar8 = 0;
      }
      else {
        FUN_004af700();
        iVar8 = FUN_0053e770();
      }
      puVar11[1] = 0xd;
      puVar11[2] = 0;
      *puVar11 = &PTR_LAB_007e38f8;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar11[3] = iVar8;
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
    (**(code **)(*piVar4 + 0x84))();
    piVar13 = piVar17;
  }
  piVar13 = operator_new(0x14);
  if (piVar13 == (int *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13[1] = 0;
    piVar13[2] = 0;
    *piVar13 = (int)&PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    piVar13[3] = iVar8;
    if (piVar4 == (int *)0x0) {
      *piVar13 = (int)&PTR_FUN_007e3878;
      piVar13[4] = 0;
    }
    else {
      piVar4[2] = piVar4[2] + 1;
      piVar13[4] = (int)piVar4;
      *piVar13 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar4 = operator_new(0x14);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar11 = operator_new(0x10);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      uVar18 = *(undefined4 *)(unaff_EDI + 0xe4);
      FUN_004252e0();
      *puVar11 = &PTR_FUN_007e48ac;
      puVar11[3] = uVar18;
    }
    piVar4[1] = 0;
    piVar4[2] = 0;
    *piVar4 = (int)&PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    piVar4[3] = iVar8;
    if (puVar11 == (undefined4 *)0x0) {
      *piVar4 = (int)&PTR_FUN_007e3878;
      piVar4[4] = 0;
    }
    else {
      puVar11[2] = puVar11[2] + 1;
      piVar4[4] = (int)puVar11;
      *piVar4 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
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
      iVar8 = piVar5[0x3a];
      FUN_004252e0();
      *puVar12 = &PTR_FUN_007e48ac;
      puVar12[3] = iVar8;
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar11[3] = iVar8;
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
  (**(code **)(*unaff_EBP + 0x84))();
  puVar12 = operator_new(0x14);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar14 = operator_new(0xe);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      iVar8 = piVar9[0x3b];
      unaff_EBP = piVar5;
      FUN_004252e0();
      *(char *)(puVar14 + 3) = (char)iVar8;
      *puVar14 = &PTR_FUN_007e76a0;
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar12[3] = iVar8;
    if (puVar14 == (undefined4 *)0x0) {
      puVar12[4] = 0;
      *puVar12 = &PTR_FUN_007e3878;
    }
    else {
      puVar14[2] = puVar14[2] + 1;
      puVar12[4] = puVar14;
      *puVar12 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  puVar14 = operator_new(0x14);
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar15 = operator_new(0xe);
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)((int)puVar6 + 0xed);
      unaff_EBP = piVar9;
      FUN_004252e0();
      *(undefined1 *)(puVar15 + 3) = uVar1;
      *puVar15 = &PTR_FUN_007e76a0;
    }
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = &PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar14[3] = iVar8;
    if (puVar15 == (undefined4 *)0x0) {
      puVar14[4] = 0;
      *puVar14 = &PTR_FUN_007e3878;
    }
    else {
      puVar15[2] = puVar15[2] + 1;
      puVar14[4] = puVar15;
      *puVar14 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar15 = operator_new(0x10);
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      iVar8 = piVar13[0x37];
      FUN_004252e0();
      puVar15[3] = iVar8;
      *puVar15 = &PTR_FUN_007e48ac;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar6[3] = iVar8;
    if (puVar15 == (undefined4 *)0x0) {
      puVar6[4] = 0;
      *puVar6 = &PTR_FUN_007e3878;
    }
    else {
      puVar15[2] = puVar15[2] + 1;
      puVar6[4] = puVar15;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar5 = operator_new(0x14);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar15 = operator_new(0x10);
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      iVar8 = piVar4[0x33];
      unaff_EBP = piVar13;
      FUN_004252e0();
      puVar15[3] = iVar8;
      *puVar15 = &PTR_FUN_007e3978;
    }
    piVar5[1] = 0;
    piVar5[2] = 0;
    *piVar5 = (int)&PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    piVar5[3] = iVar8;
    if (puVar15 == (undefined4 *)0x0) {
      piVar5[4] = 0;
      *piVar5 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar15[2] = puVar15[2] + 1;
      piVar5[4] = (int)puVar15;
      *piVar5 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  puVar15 = operator_new(0x14);
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    puVar16 = operator_new(0xe);
    if (puVar16 == (undefined4 *)0x0) {
      puVar16 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)((int)puVar11 + 0xb6);
      unaff_EBP = piVar4;
      FUN_004252e0(6);
      *(undefined1 *)(puVar16 + 3) = uVar1;
      *puVar16 = &PTR_FUN_007e76a0;
    }
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = &PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x2a1), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar15[3] = iVar8;
    if (puVar16 == (undefined4 *)0x0) {
      puVar15[4] = 0;
      *puVar15 = &PTR_FUN_007e3878;
    }
    else {
      puVar16[2] = puVar16[2] + 1;
      puVar15[4] = puVar16;
      *puVar15 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  puVar11 = operator_new(0x14);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar16 = operator_new(0x10);
    if (puVar16 == (undefined4 *)0x0) {
      puVar16 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar12[0x1d];
      FUN_004252e0(5);
      puVar16[3] = uVar18;
      *puVar16 = &PTR_FUN_007e48ac;
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x152), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar11[3] = iVar8;
    if (puVar16 == (undefined4 *)0x0) {
      puVar11[4] = 0;
      *puVar11 = &PTR_FUN_007e3878;
    }
    else {
      puVar16[2] = puVar16[2] + 1;
      puVar11[4] = puVar16;
      *puVar11 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar4 = operator_new(0x14);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar12 = operator_new(0x10);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar14[0x1e];
      FUN_004252e0(5);
      puVar12[3] = uVar18;
      *puVar12 = &PTR_FUN_007e48ac;
    }
    piVar4[1] = 0;
    piVar4[2] = 0;
    *piVar4 = (int)&PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x153), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    piVar4[3] = iVar8;
    if (puVar12 == (undefined4 *)0x0) {
      piVar4[4] = 0;
      *piVar4 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      piVar4[4] = (int)puVar12;
      *piVar4 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar9 = operator_new(0x14);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    puVar12 = operator_new(0x10);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar6[0x1f];
      FUN_004252e0(5);
      puVar12[3] = uVar18;
      *puVar12 = &PTR_FUN_007e48ac;
    }
    piVar9[1] = 0;
    piVar9[2] = 0;
    *piVar9 = (int)&PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x23), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    piVar9[3] = iVar8;
    if (puVar12 == (undefined4 *)0x0) {
      piVar9[4] = 0;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      piVar9[4] = (int)puVar12;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar13 = operator_new(0x14);
  if (piVar13 == (int *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    iVar8 = (**(code **)piVar5[0x2bd])();
    piVar13[1] = 0;
    piVar13[2] = 0;
    *piVar13 = (int)&PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar10 = FUN_0053e740(0x501), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    piVar13[3] = iVar10;
    if (iVar8 == 0) {
      piVar13[4] = 0;
      *piVar13 = (int)&PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      piVar13[4] = iVar8;
      *piVar13 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar12 = operator_new(0x10);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar15[0x34];
      unaff_EBP = piVar5;
      FUN_004252e0(4);
      puVar12[3] = uVar18;
      *puVar12 = &PTR_FUN_007e3978;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x462), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar6[3] = iVar8;
    if (puVar12 == (undefined4 *)0x0) {
      puVar6[4] = 0;
      *puVar6 = &PTR_FUN_007e3878;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      puVar6[4] = puVar12;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  puVar12 = operator_new(0x14);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar14 = operator_new(0x10);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar11[0x35];
      FUN_004252e0(5);
      puVar14[3] = uVar18;
      *puVar14 = &PTR_FUN_007e48ac;
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x463), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar12[3] = iVar8;
    if (puVar14 == (undefined4 *)0x0) {
      puVar12[4] = 0;
      *puVar12 = &PTR_FUN_007e3878;
    }
    else {
      puVar14[2] = puVar14[2] + 1;
      puVar12[4] = puVar14;
      *puVar12 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  puVar11 = operator_new(0x14);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar14 = operator_new(0x10);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      iVar8 = piVar4[0x36];
      FUN_004252e0(5);
      puVar14[3] = iVar8;
      *puVar14 = &PTR_FUN_007e48ac;
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x464), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar11[3] = iVar8;
    if (puVar14 == (undefined4 *)0x0) {
      puVar11[4] = 0;
      *puVar11 = &PTR_FUN_007e3878;
    }
    else {
      puVar14[2] = puVar14[2] + 1;
      puVar11[4] = puVar14;
      *puVar11 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar5 = piVar9;
  iVar8 = (**(code **)(piVar9[0x2ca] + 4))();
  if (0 < iVar8) {
    piVar17 = operator_new(0x1e);
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *piVar17 = (int)&PTR_FUN_007e492c;
      FUN_00444250();
      *piVar17 = (int)&PTR_FUN_007e3a28;
      piVar17[3] = (int)&PTR_LAB_007e39f8;
    }
    piVar3 = (int *)piVar5[0x2cb];
    piVar9 = piVar5;
    unaff_EBP = piVar4;
    while (piVar3 != (int *)0x0) {
      piVar4 = (int *)piVar3[2];
      puVar14 = (undefined4 *)*piVar3;
      puVar15 = operator_new(0x14);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        puVar16 = operator_new(0x10);
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = (undefined4 *)0x0;
        }
        else {
          uVar18 = puVar14[1];
          FUN_004252e0(4);
          puVar16[3] = uVar18;
          *puVar16 = &PTR_FUN_007e3978;
        }
        pvVar7 = operator_new(0x14);
        if (pvVar7 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar18 = FUN_004af700(*puVar14);
          iVar8 = FUN_0053e770(uVar18);
        }
        puVar15[1] = 0xd;
        puVar15[2] = 0;
        *puVar15 = &PTR_LAB_007e38f8;
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
        }
        puVar15[3] = iVar8;
        if (puVar16 == (undefined4 *)0x0) {
          puVar15[4] = 0;
          *puVar15 = &PTR_FUN_007e3878;
        }
        else {
          puVar16[2] = puVar16[2] + 1;
          puVar15[4] = puVar16;
          *puVar15 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar17 + 0x84))(puVar15);
      piVar3 = piVar4;
    }
    puVar14 = operator_new(0x14);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_LAB_007e38f8;
      pvVar7 = operator_new(0x14);
      if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x24e), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar14[3] = iVar8;
      if (piVar17 == (int *)0x0) {
        puVar14[4] = 0;
        *puVar14 = &PTR_FUN_007e3878;
      }
      else {
        piVar17[2] = piVar17[2] + 1;
        puVar14[4] = piVar17;
        *puVar14 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EBP + 0x84))(puVar14);
    piVar5 = piVar9;
    piVar4 = unaff_EBP;
  }
  iVar8 = (**(code **)(*(int *)((int)piVar9 + 0xb3a) + 4))();
  if (0 < iVar8) {
    piVar17 = operator_new(0x1e);
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *piVar17 = (int)&PTR_FUN_007e492c;
      FUN_00444250();
      *piVar17 = (int)&PTR_FUN_007e3a28;
      piVar17[3] = (int)&PTR_LAB_007e39f8;
    }
    piVar3 = *(int **)((int)piVar5 + 0xb3e);
    piVar9 = piVar5;
    unaff_EBP = piVar4;
    while (piVar3 != (int *)0x0) {
      piVar4 = (int *)piVar3[2];
      puVar14 = (undefined4 *)*piVar3;
      puVar15 = operator_new(0x14);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        puVar16 = operator_new(0x10);
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = (undefined4 *)0x0;
        }
        else {
          uVar18 = puVar14[1];
          FUN_004252e0(4);
          puVar16[3] = uVar18;
          *puVar16 = &PTR_FUN_007e3978;
        }
        pvVar7 = operator_new(0x14);
        if (pvVar7 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar18 = FUN_004af700(*puVar14);
          iVar8 = FUN_0053e770(uVar18);
        }
        puVar15[1] = 0xd;
        puVar15[2] = 0;
        *puVar15 = &PTR_LAB_007e38f8;
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
        }
        puVar15[3] = iVar8;
        if (puVar16 == (undefined4 *)0x0) {
          puVar15[4] = 0;
          *puVar15 = &PTR_FUN_007e3878;
        }
        else {
          puVar16[2] = puVar16[2] + 1;
          puVar15[4] = puVar16;
          *puVar15 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar17 + 0x84))(puVar15);
      piVar3 = piVar4;
    }
    puVar14 = operator_new(0x14);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_LAB_007e38f8;
      pvVar7 = operator_new(0x14);
      if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x404), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar14[3] = iVar8;
      if (piVar17 == (int *)0x0) {
        puVar14[4] = 0;
        *puVar14 = &PTR_FUN_007e3878;
      }
      else {
        piVar17[2] = piVar17[2] + 1;
        puVar14[4] = piVar17;
        *puVar14 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EBP + 0x84))(puVar14);
    piVar5 = piVar9;
    piVar4 = unaff_EBP;
  }
  iVar8 = (**(code **)(*(int *)((int)piVar9 + 0xb5e) + 4))();
  if (0 < iVar8) {
    piVar17 = operator_new(0x1e);
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *piVar17 = (int)&PTR_FUN_007e492c;
      FUN_00444250();
      *piVar17 = (int)&PTR_FUN_007e3a28;
      piVar17[3] = (int)&PTR_LAB_007e39f8;
    }
    piVar3 = *(int **)((int)piVar5 + 0xb62);
    piVar9 = piVar5;
    unaff_EBP = piVar4;
    while (piVar3 != (int *)0x0) {
      piVar4 = (int *)piVar3[2];
      puVar14 = (undefined4 *)*piVar3;
      puVar15 = operator_new(0x14);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        puVar16 = operator_new(0x10);
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = (undefined4 *)0x0;
        }
        else {
          uVar18 = puVar14[1];
          FUN_004252e0(4);
          puVar16[3] = uVar18;
          *puVar16 = &PTR_FUN_007e3978;
        }
        pvVar7 = operator_new(0x14);
        if (pvVar7 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar18 = FUN_004af700(*puVar14);
          iVar8 = FUN_0053e770(uVar18);
        }
        puVar15[1] = 0xd;
        puVar15[2] = 0;
        *puVar15 = &PTR_LAB_007e38f8;
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
        }
        puVar15[3] = iVar8;
        if (puVar16 == (undefined4 *)0x0) {
          puVar15[4] = 0;
          *puVar15 = &PTR_FUN_007e3878;
        }
        else {
          puVar16[2] = puVar16[2] + 1;
          puVar15[4] = puVar16;
          *puVar15 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar17 + 0x84))(puVar15);
      piVar3 = piVar4;
    }
    puVar14 = operator_new(0x14);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_LAB_007e38f8;
      pvVar7 = operator_new(0x14);
      if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x66), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar14[3] = iVar8;
      if (piVar17 == (int *)0x0) {
        puVar14[4] = 0;
        *puVar14 = &PTR_FUN_007e3878;
      }
      else {
        piVar17[2] = piVar17[2] + 1;
        puVar14[4] = piVar17;
        *puVar14 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EBP + 0x84))(puVar14);
    piVar5 = piVar9;
    piVar4 = unaff_EBP;
  }
  iVar8 = (**(code **)(piVar9[0x2d3] + 4))();
  if (0 < iVar8) {
    piVar17 = operator_new(0x1e);
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      FUN_004c0c30(2);
      piVar17[4] = 0;
      piVar17[5] = 0;
      piVar17[6] = 0;
      *(undefined1 *)(piVar17 + 7) = 0;
      piVar17[3] = (int)&PTR_LAB_007e3ac0;
      *piVar17 = (int)&PTR_FUN_007e3a28;
      piVar17[3] = (int)&PTR_LAB_007e39f8;
    }
    piVar3 = (int *)piVar9[0x2d4];
    piVar9 = piVar5;
    unaff_EBP = piVar4;
    while (piVar3 != (int *)0x0) {
      piVar4 = (int *)piVar3[2];
      puVar14 = (undefined4 *)*piVar3;
      puVar15 = operator_new(0x14);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        puVar16 = operator_new(0x10);
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = (undefined4 *)0x0;
        }
        else {
          uVar18 = puVar14[1];
          FUN_004252e0(4);
          puVar16[3] = uVar18;
          *puVar16 = &PTR_FUN_007e3978;
        }
        pvVar7 = operator_new(0x14);
        if (pvVar7 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          uVar18 = FUN_004af700(*puVar14);
          iVar8 = FUN_0053e770(uVar18);
        }
        puVar15[1] = 0xd;
        puVar15[2] = 0;
        *puVar15 = &PTR_LAB_007e38f8;
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
        }
        puVar15[3] = iVar8;
        if (puVar16 == (undefined4 *)0x0) {
          puVar15[4] = 0;
          *puVar15 = &PTR_FUN_007e3878;
        }
        else {
          puVar16[2] = puVar16[2] + 1;
          puVar15[4] = puVar16;
          *puVar15 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar17 + 0x84))(puVar15);
      piVar3 = piVar4;
    }
    puVar14 = operator_new(0x14);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_LAB_007e38f8;
      pvVar7 = operator_new(0x14);
      if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x67), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar14[3] = iVar8;
      if (piVar17 == (int *)0x0) {
        puVar14[4] = 0;
        *puVar14 = &PTR_FUN_007e3878;
      }
      else {
        piVar17[2] = piVar17[2] + 1;
        puVar14[4] = piVar17;
        *puVar14 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EBP + 0x84))(puVar14);
    piVar5 = piVar9;
    piVar4 = unaff_EBP;
  }
  iVar8 = (**(code **)(piVar9[0x2dc] + 4))();
  if (0 < iVar8) {
    piVar17 = operator_new(0x1e);
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      FUN_004c0c30(2);
      piVar17[4] = 0;
      piVar17[5] = 0;
      piVar17[6] = 0;
      *(undefined1 *)(piVar17 + 7) = 0;
      piVar17[3] = (int)&PTR_LAB_007e3ac0;
      *piVar17 = (int)&PTR_FUN_007e3a28;
      piVar17[3] = (int)&PTR_LAB_007e39f8;
    }
    puVar14 = (undefined4 *)piVar5[0x2dd];
    piVar9 = piVar5;
    unaff_EBP = piVar4;
    while (puVar14 != (undefined4 *)0x0) {
      puVar15 = operator_new(0x1a);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        puVar16 = (undefined4 *)puVar14[2];
        uVar18 = *puVar14;
        FUN_0053e740(0x523);
        *(undefined2 *)(puVar15 + 5) = 3;
        *(undefined4 *)((int)puVar15 + 0x16) = uVar18;
        *puVar15 = &PTR_FUN_007e3ba4;
        puVar14 = puVar16;
      }
      (**(code **)(*piVar17 + 0x84))(puVar15);
    }
    puVar14 = operator_new(0x14);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_LAB_007e38f8;
      pvVar7 = operator_new(0x14);
      if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x68), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar14[3] = iVar8;
      if (piVar17 == (int *)0x0) {
        puVar14[4] = 0;
        *puVar14 = &PTR_FUN_007e3878;
      }
      else {
        piVar17[2] = piVar17[2] + 1;
        puVar14[4] = piVar17;
        *puVar14 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EBP + 0x84))(puVar14);
    piVar5 = piVar9;
    piVar4 = unaff_EBP;
  }
  if (*(int *)((int)piVar9 + 0xb82) != 0) {
    puVar14 = operator_new(0x14);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
      piVar9 = piVar5;
    }
    else {
      puVar15 = operator_new(0x10);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        uVar18 = *(undefined4 *)((int)piVar5 + 0xb82);
        unaff_EBP = piVar4;
        FUN_00444030(4);
        puVar15[3] = uVar18;
        *puVar15 = &PTR_FUN_007e3978;
        piVar4 = unaff_EBP;
      }
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_LAB_007e38f8;
      pvVar7 = operator_new(0x14);
      if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x69), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar14[3] = iVar8;
      piVar9 = piVar5;
      if (puVar15 == (undefined4 *)0x0) {
        puVar14[4] = 0;
        *puVar14 = &PTR_FUN_007e3878;
      }
      else {
        puVar15[2] = puVar15[2] + 1;
        puVar14[4] = puVar15;
        *puVar14 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EBP + 0x84))(puVar14);
    piVar5 = piVar9;
  }
  iVar8 = (**(code **)(piVar9[10] + 4))();
  if (0 < iVar8) {
    piVar17 = operator_new(0x1e);
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      FUN_004c0c30(2);
      FUN_00444250();
      *piVar17 = (int)&PTR_FUN_007e3a28;
      piVar17[3] = (int)&PTR_LAB_007e39f8;
    }
    puVar14 = (undefined4 *)piVar5[0xb];
    piVar9 = piVar5;
    unaff_EBP = piVar4;
    while (puVar14 != (undefined4 *)0x0) {
      puVar15 = operator_new(0x1a);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        puVar16 = (undefined4 *)puVar14[2];
        uVar18 = *puVar14;
        FUN_0053e740(0x523);
        *(undefined2 *)(puVar15 + 5) = 3;
        *(undefined4 *)((int)puVar15 + 0x16) = uVar18;
        *puVar15 = &PTR_FUN_007e3ba4;
        puVar14 = puVar16;
      }
      (**(code **)(*piVar17 + 0x84))(puVar15);
    }
    puVar14 = operator_new(0x14);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_LAB_007e38f8;
      pvVar7 = operator_new(0x14);
      if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x207), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar14[3] = iVar8;
      if (piVar17 == (int *)0x0) {
        puVar14[4] = 0;
        *puVar14 = &PTR_FUN_007e3878;
      }
      else {
        piVar17[2] = piVar17[2] + 1;
        puVar14[4] = piVar17;
        *puVar14 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EBP + 0x84))(puVar14);
    piVar5 = piVar9;
    piVar4 = unaff_EBP;
  }
  iVar8 = (**(code **)(*(int *)((int)piVar9 + 0x3a) + 4))();
  if (0 < iVar8) {
    piVar17 = operator_new(0x1e);
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      FUN_004c0c30(2);
      FUN_00444250();
      *piVar17 = (int)&PTR_FUN_007e3a28;
      piVar17[3] = (int)&PTR_LAB_007e39f8;
    }
    puVar14 = *(undefined4 **)((int)piVar5 + 0x3e);
    piVar9 = piVar5;
    unaff_EBP = piVar4;
    while (puVar14 != (undefined4 *)0x0) {
      puVar15 = operator_new(0x1a);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        puVar16 = (undefined4 *)puVar14[2];
        uVar18 = *puVar14;
        FUN_0053e740(0x523);
        *(undefined2 *)(puVar15 + 5) = 3;
        *(undefined4 *)((int)puVar15 + 0x16) = uVar18;
        *puVar15 = &PTR_FUN_007e3ba4;
        puVar14 = puVar16;
      }
      (**(code **)(*piVar17 + 0x84))(puVar15);
    }
    puVar14 = operator_new(0x14);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_LAB_007e38f8;
      pvVar7 = operator_new(0x14);
      if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x54b), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar14[3] = iVar8;
      if (piVar17 == (int *)0x0) {
        puVar14[4] = 0;
        *puVar14 = &PTR_FUN_007e3878;
      }
      else {
        piVar17[2] = piVar17[2] + 1;
        puVar14[4] = piVar17;
        *puVar14 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EBP + 0x84))(puVar14);
    piVar5 = piVar9;
    piVar4 = unaff_EBP;
  }
  iVar8 = (**(code **)(*(int *)((int)piVar9 + 0xb16) + 4))();
  if (0 < iVar8) {
    piVar9 = operator_new(0x1e);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      FUN_004c0c30(2);
      FUN_00444250();
      *piVar9 = (int)&PTR_FUN_007e3a28;
      piVar9[3] = (int)&PTR_LAB_007e39f8;
    }
    piVar17 = *(int **)((int)piVar5 + 0xb1a);
    unaff_EBP = piVar4;
    while (piVar17 != (int *)0x0) {
      piVar4 = (int *)piVar17[2];
      puVar14 = (undefined4 *)*piVar17;
      wsprintfA(&stack0xffffff9c,&DAT_008390a0,*puVar14);
      puVar15 = operator_new(0x14);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        puVar16 = operator_new(0x10);
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = (undefined4 *)0x0;
        }
        else {
          uVar18 = puVar14[1];
          FUN_00444030(4);
          puVar16[3] = uVar18;
          *puVar16 = &PTR_FUN_007e3978;
        }
        pvVar7 = operator_new(0x14);
        if (pvVar7 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_0053e770(&stack0xffffff9c);
        }
        puVar15[1] = 0xd;
        puVar15[2] = 0;
        *puVar15 = &PTR_LAB_007e38f8;
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
        }
        puVar15[3] = iVar8;
        if (puVar16 == (undefined4 *)0x0) {
          puVar15[4] = 0;
          *puVar15 = &PTR_FUN_007e3878;
        }
        else {
          puVar16[2] = puVar16[2] + 1;
          puVar15[4] = puVar16;
          *puVar15 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar9 + 0x84))(puVar15);
      piVar17 = piVar4;
    }
    puVar14 = operator_new(0x14);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_LAB_007e38f8;
      pvVar7 = operator_new(0x14);
      if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x6d), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar14[3] = iVar8;
      if (piVar9 == (int *)0x0) {
        puVar14[4] = 0;
        *puVar14 = &PTR_FUN_007e3878;
      }
      else {
        piVar9[2] = piVar9[2] + 1;
        puVar14[4] = piVar9;
        *puVar14 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EBP + 0x84))(puVar14);
  }
  puVar14 = operator_new(0x14);
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar15 = operator_new(0x10);
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      uVar18 = *(undefined4 *)((int)piVar5 + 0xb86);
      FUN_00444030(5);
      puVar15[3] = uVar18;
      *puVar15 = &PTR_FUN_007e48ac;
    }
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = &PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x46a), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar14[3] = iVar8;
    if (puVar15 == (undefined4 *)0x0) {
      puVar14[4] = 0;
      *puVar14 = &PTR_FUN_007e3878;
    }
    else {
      puVar15[2] = puVar15[2] + 1;
      puVar14[4] = puVar15;
      *puVar14 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  piVar4 = operator_new(0x1e);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_004c0c30(2);
    FUN_00444250();
    *piVar4 = (int)&PTR_FUN_007e3a28;
    piVar4[3] = (int)&PTR_LAB_007e39f8;
  }
  piVar9 = *(int **)((int)piVar13 + 0xb8e);
  while (piVar9 != (int *)0x0) {
    piVar17 = (int *)piVar9[2];
    puVar15 = (undefined4 *)*piVar9;
    puVar16 = operator_new(0x14);
    if (puVar16 == (undefined4 *)0x0) {
      puVar16 = (undefined4 *)0x0;
    }
    else {
      puVar19 = operator_new(0x10);
      if (puVar19 == (undefined4 *)0x0) {
        puVar19 = (undefined4 *)0x0;
      }
      else {
        uVar18 = puVar15[1];
        FUN_00444030(5);
        puVar19[3] = uVar18;
        *puVar19 = &PTR_FUN_007e48ac;
      }
      pvVar7 = operator_new(0x14);
      if (pvVar7 == (void *)0x0) {
        iVar8 = 0;
      }
      else {
        uVar18 = FUN_004af700(*puVar15);
        iVar8 = FUN_0053e770(uVar18);
      }
      puVar16[1] = 0xd;
      puVar16[2] = 0;
      *puVar16 = &PTR_LAB_007e38f8;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar16[3] = iVar8;
      if (puVar19 == (undefined4 *)0x0) {
        puVar16[4] = 0;
        *puVar16 = &PTR_FUN_007e3878;
      }
      else {
        puVar19[2] = puVar19[2] + 1;
        puVar16[4] = puVar19;
        *puVar16 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar4 + 0x84))(puVar16);
    piVar9 = piVar17;
  }
  puVar15 = operator_new(0x14);
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    FUN_004252e0(0);
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x46c), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar15[3] = iVar8;
    if (piVar4 == (int *)0x0) {
      puVar15[4] = 0;
      *puVar15 = &PTR_FUN_007e3878;
    }
    else {
      piVar4[2] = piVar4[2] + 1;
      puVar15[4] = piVar4;
      *puVar15 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar5 + 0x84))();
  iVar8 = (**(code **)(puVar6[0x2e] + 4))();
  if (0 < iVar8) {
    piVar4 = operator_new(0x1e);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_004c0c30(2);
      FUN_00444250();
      *piVar4 = (int)&PTR_FUN_007e3a28;
      piVar4[3] = (int)&PTR_LAB_007e39f8;
    }
    puVar16 = (undefined4 *)puVar6[0x2f];
    while (puVar16 != (undefined4 *)0x0) {
      puVar19 = operator_new(0x1a);
      if (puVar19 == (undefined4 *)0x0) {
        puVar19 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)puVar16[2];
        uVar18 = *puVar16;
        FUN_0053e740(0x523);
        *(undefined2 *)(puVar19 + 5) = 3;
        *(undefined4 *)((int)puVar19 + 0x16) = uVar18;
        *puVar19 = &PTR_FUN_007e3ba4;
        puVar16 = puVar2;
      }
      (**(code **)(*piVar4 + 0x84))(puVar19);
    }
    puVar16 = operator_new(0x14);
    if (puVar16 == (undefined4 *)0x0) {
      puVar16 = (undefined4 *)0x0;
    }
    else {
      FUN_004252e0(0);
      pvVar7 = operator_new(0x14);
      if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x46b), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar16[3] = iVar8;
      if (piVar4 == (int *)0x0) {
        puVar16[4] = 0;
        *puVar16 = &PTR_FUN_007e3878;
      }
      else {
        piVar4[2] = piVar4[2] + 1;
        puVar16[4] = piVar4;
        *puVar16 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar13 + 0x84))(puVar16);
  }
  puVar16 = operator_new(0x14);
  if (puVar16 == (undefined4 *)0x0) {
    puVar16 = (undefined4 *)0x0;
  }
  else {
    iVar8 = (**(code **)puVar6[0x56])();
    FUN_004252e0(0);
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar10 = FUN_0053e740(0x15b), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    puVar16[3] = iVar10;
    if (iVar8 == 0) {
      puVar16[4] = 0;
      *puVar16 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      puVar16[4] = iVar8;
      *puVar16 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar13 + 0x84))();
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    iVar8 = (**(code **)puVar12[0x6f])();
    FUN_004252e0(0);
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar10 = FUN_0053e740(0x147), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    puVar6[3] = iVar10;
    if (iVar8 == 0) {
      puVar6[4] = 0;
      *puVar6 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      puVar6[4] = iVar8;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar13 + 0x84))();
  puVar12 = operator_new(0x14);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    iVar8 = (**(code **)puVar11[0x80])();
    FUN_004252e0(0);
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar10 = FUN_0053e740(0x14b), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    puVar12[3] = iVar10;
    if (iVar8 == 0) {
      puVar12[4] = 0;
      *puVar12 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      puVar12[4] = iVar8;
      *puVar12 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar13 + 0x84))();
  pvVar7 = operator_new(0x14);
  if (pvVar7 == (void *)0x0) {
    iVar8 = 0;
  }
  else {
    uVar18 = (*(code *)**(undefined4 **)((int)puVar14 + 0xee))();
    iVar8 = FUN_004441b0(0x6b,uVar18);
  }
  (**(code **)(*piVar13 + 0x84))();
  pvVar7 = operator_new(0x14);
  if (pvVar7 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar18 = (**(code **)puVar15[0x93])();
    piVar4 = (int *)FUN_004441b0(0x4bc,uVar18);
  }
  (**(code **)(*piVar13 + 0x84))();
  pvVar7 = operator_new(0x14);
  if (pvVar7 == (void *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar18 = (**(code **)puVar16[0xb8])();
    iVar10 = FUN_004441b0(0x487,uVar18);
  }
  (**(code **)(*piVar13 + 0x84))();
  pvVar7 = operator_new(0x14);
  if (pvVar7 == (void *)0x0) {
    uVar18 = 0;
  }
  else {
    uVar18 = (*(code *)**(undefined4 **)((int)puVar6 + 0x366))();
    uVar18 = FUN_004441b0(0x1e8,uVar18);
  }
  (**(code **)(*piVar13 + 0x84))(uVar18);
  pvVar7 = operator_new(0x14);
  if (pvVar7 == (void *)0x0) {
    uVar18 = 0;
  }
  else {
    uVar18 = (**(code **)puVar12[0x23f])();
    uVar18 = FUN_004441b0(0x48d,uVar18);
  }
  (**(code **)(*piVar13 + 0x84))(uVar18);
  pvVar7 = operator_new(0x14);
  if (pvVar7 == (void *)0x0) {
    uVar18 = 0;
  }
  else {
    uVar18 = (*(code *)**(undefined4 **)(iVar8 + 0x9ca))();
    uVar18 = FUN_004441b0(0x1f2,uVar18);
  }
  (**(code **)(*piVar13 + 0x84))(uVar18);
  pvVar7 = operator_new(0x14);
  if (pvVar7 == (void *)0x0) {
    uVar18 = 0;
  }
  else {
    uVar18 = (**(code **)(*piVar4 + 8))();
    uVar18 = FUN_004441b0(0x2bd,uVar18);
  }
  (**(code **)(*piVar13 + 0x84))(uVar18);
  pvVar7 = operator_new(0x14);
  if (pvVar7 == (void *)0x0) {
    uVar18 = 0;
  }
  else {
    uVar18 = (*(code *)**(undefined4 **)(iVar10 + 0xabc))();
    uVar18 = FUN_004441b0(0x4b3,uVar18);
  }
  (**(code **)(*piVar13 + 0x84))(uVar18);
  ExceptionList = pvVar7;
  return piVar13;
}


