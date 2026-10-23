// FUN_00543bf0 @ 543bf0 size=23400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00543bf0(void)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  void *pvVar21;
  undefined4 uVar22;
  void *pvVar23;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar24;
  int unaff_EDI;
  float10 fVar25;
  undefined1 *puVar26;
  undefined1 uVar27;
  float fVar28;
  int iStack_64;
  int *piStack_5c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c4440;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = operator_new(0x1e);
  local_4 = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00444030();
    *piVar3 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  puVar4 = operator_new(0x14);
  local_4 = 2;
  if (puVar4 != (undefined4 *)0x0) {
    iVar5 = FUN_00427f80();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar6 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar4[3] = iVar7;
    if (iVar5 == 0) {
      puVar4[4] = 0;
      *puVar4 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar4[4] = iVar5;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x84))();
  if (*(char *)(iStack_64 + 0x310) != '\0') {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x5;
    if (puVar4 != (undefined4 *)0x0) {
      pvVar6 = operator_new(0x10);
      puStack_8._0_1_ = 6;
      if (pvVar6 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053ee00();
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 7;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
      if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar4[3] = iVar7;
      if (iVar5 == 0) {
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_007e3878;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar4[4] = iVar5;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))();
  }
  if (*(char *)(iStack_64 + 0x410) != '\0') {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x9;
    if (puVar4 != (undefined4 *)0x0) {
      pvVar6 = operator_new(0x10);
      puStack_8._0_1_ = 10;
      if (pvVar6 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053ee00();
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xb;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xc);
      if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar4[3] = iVar7;
      if (iVar5 == 0) {
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_007e3878;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar4[4] = iVar5;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))();
  }
  puVar4 = operator_new(0x14);
  puStack_8 = (undefined1 *)0xd;
  if (puVar4 != (undefined4 *)0x0) {
    iVar5 = (**(code **)**(undefined4 **)(iStack_64 + 0x116))();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 0xe;
    pvVar6 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xf);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar4[3] = iVar7;
    if (iVar5 == 0) {
      puVar4[4] = 0;
      *puVar4 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar4[4] = iVar5;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar3 + 0x84))();
  puVar4 = operator_new(0x14);
  pvStack_c = (void *)0x10;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0x10);
    pvStack_c._0_1_ = 0x11;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar18 = *(undefined4 *)(unaff_EBX + 0x117d4);
      FUN_004252e0();
      *puVar8 = &PTR_FUN_007e49c4;
      puVar8[3] = uVar18;
      *puVar8 = &PTR_FUN_007e3978;
      piVar3 = piStack_5c;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 0x12;
    pvVar6 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x13);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar4[3] = iVar5;
    if (puVar8 == (undefined4 *)0x0) {
      puVar4[4] = 0;
      *puVar4 = &PTR_FUN_007e3878;
    }
    else {
      puVar8[2] = puVar8[2] + 1;
      puVar4[4] = puVar8;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar3 + 0x84))();
  if (*(int *)(unaff_EBP + 0x11850) != 0) {
    puVar8 = operator_new(0x14);
    if (puVar8 != (undefined4 *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        FUN_004af700();
        iVar5 = FUN_0053ee00();
      }
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar8[3] = iVar7;
      if (iVar5 == 0) {
        puVar8[4] = 0;
        *puVar8 = &PTR_FUN_007e3878;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar8[4] = iVar5;
        *puVar8 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))();
  }
  if (*(int *)(unaff_EBP + 0x11854) != 4) {
    puVar8 = operator_new(0x14);
    if (puVar8 != (undefined4 *)0x0) {
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        FUN_00763d90();
        iVar5 = FUN_0053e740();
      }
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar8[3] = iVar7;
      if (iVar5 == 0) {
        puVar8[4] = 0;
        *puVar8 = &PTR_FUN_007e3878;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar8[4] = iVar5;
        *puVar8 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))();
  }
  piVar9 = operator_new(0x14);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    iVar5 = (**(code **)**(undefined4 **)(unaff_EBP + 0x23a))();
    piVar9[1] = 0;
    piVar9[2] = 0;
    *piVar9 = (int)&PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    piVar9[3] = iVar7;
    if (iVar5 == 0) {
      piVar9[4] = 0;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      piVar9[4] = iVar5;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
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
      uVar18 = *(undefined4 *)(unaff_ESI + 0x3342);
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e49c4;
      puVar10[3] = uVar18;
      *puVar10 = &PTR_FUN_007e48ac;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
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
  (**(code **)(*piVar3 + 0x84))();
  puVar10 = operator_new(0x14);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar11 = operator_new(0x10);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      uVar18 = *(undefined4 *)(unaff_EDI + 0x22a);
      FUN_004252e0();
      *puVar11 = &PTR_FUN_007e49c4;
      puVar11[3] = uVar18;
      *puVar11 = &PTR_FUN_007e48ac;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar10[3] = iVar5;
    if (puVar11 == (undefined4 *)0x0) {
      puVar10[4] = 0;
      *puVar10 = &PTR_FUN_007e3878;
    }
    else {
      puVar11[2] = puVar11[2] + 1;
      puVar10[4] = puVar11;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar11 = operator_new(0x14);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    iVar5 = FUN_0054f410();
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar11[3] = iVar7;
    if (iVar5 == 0) {
      puVar11[4] = 0;
      *puVar11 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar11[4] = iVar5;
      *puVar11 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar12 = operator_new(0x14);
  if (puVar12 != (undefined4 *)0x0) {
    iVar5 = FUN_0054f410();
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar12[3] = iVar7;
    if (iVar5 == 0) {
      puVar12[4] = 0;
      *puVar12 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar12[4] = iVar5;
      *puVar12 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar12 = operator_new(0x14);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    iVar5 = (*(code *)**(undefined4 **)((int)puVar4 + 0x4656))();
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar12[3] = iVar7;
    if (iVar5 == 0) {
      puVar12[4] = 0;
      *puVar12 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar12[4] = iVar5;
      *puVar12 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar4 = operator_new(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar5 = (*(code *)**(undefined4 **)((int)piVar9 + 0x4652))();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar4[3] = iVar7;
    if (iVar5 == 0) {
      puVar4[4] = 0;
      *puVar4 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar4[4] = iVar5;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar13 = operator_new(0x14);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    iVar5 = (*(code *)**(undefined4 **)((int)puVar8 + 0x465a))();
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar13[3] = iVar7;
    if (iVar5 == 0) {
      puVar13[4] = 0;
      *puVar13 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar13[4] = iVar5;
      *puVar13 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar8 = operator_new(0x14);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar14 = operator_new(0x10);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar10[0xe08];
      FUN_004252e0();
      *puVar14 = &PTR_FUN_007e49c4;
      puVar14[3] = uVar18;
      *puVar14 = &PTR_FUN_007e48ac;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar8[3] = iVar5;
    if (puVar14 == (undefined4 *)0x0) {
      puVar8[4] = 0;
      *puVar8 = &PTR_FUN_007e3878;
    }
    else {
      puVar14[2] = puVar14[2] + 1;
      puVar8[4] = puVar14;
      *puVar8 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar10 = operator_new(0x14);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar14 = operator_new(0x10);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar11[0xe44];
      piVar3 = piVar9;
      FUN_004252e0();
      *puVar14 = &PTR_FUN_007e49c4;
      puVar14[3] = uVar18;
      *puVar14 = &PTR_FUN_007e3978;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar10[3] = iVar5;
    if (puVar14 == (undefined4 *)0x0) {
      puVar10[4] = 0;
      *puVar10 = &PTR_FUN_007e3878;
    }
    else {
      puVar14[2] = puVar14[2] + 1;
      puVar10[4] = puVar14;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar11 = operator_new(0x14);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    iVar5 = FUN_0054f410();
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar11[3] = iVar7;
    if (iVar5 == 0) {
      puVar11[4] = 0;
      *puVar11 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar11[4] = iVar5;
      *puVar11 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  piVar9 = operator_new(0x14);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    puVar14 = operator_new(0x10);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar12[0x38bd];
      FUN_004252e0();
      *puVar14 = &PTR_FUN_007e49c4;
      puVar14[3] = uVar18;
      *puVar14 = &PTR_FUN_007e48ac;
    }
    piVar9[1] = 0;
    piVar9[2] = 0;
    *piVar9 = (int)&PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar9[3] = iVar5;
    if (puVar14 == (undefined4 *)0x0) {
      piVar9[4] = 0;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar14[2] = puVar14[2] + 1;
      piVar9[4] = (int)puVar14;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
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
      uVar18 = puVar4[0x38be];
      FUN_004252e0();
      *puVar14 = &PTR_FUN_007e49c4;
      puVar14[3] = uVar18;
      *puVar14 = &PTR_FUN_007e48ac;
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar12[3] = iVar5;
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
  (**(code **)(*piVar3 + 0x84))();
  puVar4 = operator_new(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar14 = operator_new(0x10);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar13[0x38c0];
      FUN_004252e0();
      *puVar14 = &PTR_FUN_007e49c4;
      puVar14[3] = uVar18;
      *puVar14 = &PTR_FUN_007e48ac;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar4[3] = iVar5;
    if (puVar14 == (undefined4 *)0x0) {
      puVar4[4] = 0;
      *puVar4 = &PTR_FUN_007e3878;
    }
    else {
      puVar14[2] = puVar14[2] + 1;
      puVar4[4] = puVar14;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
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
      uVar18 = puVar8[0x38bf];
      FUN_004252e0();
      *puVar14 = &PTR_FUN_007e49c4;
      puVar14[3] = uVar18;
      *puVar14 = &PTR_FUN_007e48ac;
    }
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar13[3] = iVar5;
    if (puVar14 == (undefined4 *)0x0) {
      puVar13[4] = 0;
      *puVar13 = &PTR_FUN_007e3878;
    }
    else {
      puVar14[2] = puVar14[2] + 1;
      puVar13[4] = puVar14;
      *puVar13 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  piVar15 = operator_new(0x14);
  if (piVar15 == (int *)0x0) {
    piVar15 = (int *)0x0;
  }
  else {
    puVar8 = operator_new(0x10);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar10[0xdf6];
      FUN_004252e0();
      *puVar8 = &PTR_FUN_007e49c4;
      puVar8[3] = uVar18;
      *puVar8 = &PTR_FUN_007e48ac;
    }
    piVar15[1] = 0;
    piVar15[2] = 0;
    *piVar15 = (int)&PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar15[3] = iVar5;
    if (puVar8 == (undefined4 *)0x0) {
      piVar15[4] = 0;
      *piVar15 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar8[2] = puVar8[2] + 1;
      piVar15[4] = (int)puVar8;
      *piVar15 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
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
      uVar18 = puVar11[0xdf7];
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e49c4;
      puVar10[3] = uVar18;
      *puVar10 = &PTR_FUN_007e48ac;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
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
  (**(code **)(*piVar3 + 0x84))();
  if (((((float)piVar9[0xdf8] == (float)piVar9[0xdfa]) &&
       ((float)piVar9[0xdf8] == (float)piVar9[0xdfb])) &&
      ((float)piVar9[0xdf8] == (float)piVar9[0xdfc])) &&
     ((float)piVar9[0xdf8] == (float)piVar9[0xdfd])) {
    piVar16 = operator_new(0x14);
    if (piVar16 == (int *)0x0) {
      piVar16 = (int *)0x0;
    }
    else {
      puVar10 = operator_new(0x10);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        iVar5 = piVar9[0xdf8];
        FUN_004252e0();
        *puVar10 = &PTR_FUN_007e49c4;
        puVar10[3] = iVar5;
        *puVar10 = &PTR_FUN_007e48ac;
      }
      piVar16[1] = 0;
      piVar16[2] = 0;
      *piVar16 = (int)&PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      piVar16[3] = iVar5;
      if (puVar10 == (undefined4 *)0x0) {
        piVar16[4] = 0;
        *piVar16 = (int)&PTR_FUN_007e3878;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        piVar16[4] = (int)puVar10;
        *piVar16 = (int)&PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))();
  }
  else {
    piVar16 = operator_new(0x14);
    if (piVar16 == (int *)0x0) {
      piVar16 = (int *)0x0;
    }
    else {
      puVar10 = operator_new(0x10);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        iVar5 = piVar9[0xdf8];
        FUN_004252e0();
        *puVar10 = &PTR_FUN_007e49c4;
        puVar10[3] = iVar5;
        *puVar10 = &PTR_FUN_007e48ac;
      }
      piVar16[1] = 0;
      piVar16[2] = 0;
      *piVar16 = (int)&PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      piVar16[3] = iVar5;
      if (puVar10 == (undefined4 *)0x0) {
        piVar16[4] = 0;
        *piVar16 = (int)&PTR_FUN_007e3878;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        piVar16[4] = (int)puVar10;
        *piVar16 = (int)&PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))();
    puVar10 = operator_new(0x14);
    if (puVar10 != (undefined4 *)0x0) {
      puVar11 = operator_new(0x10);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar18 = puVar12[0xdfa];
        FUN_004252e0();
        *puVar11 = &PTR_FUN_007e49c4;
        puVar11[3] = uVar18;
        *puVar11 = &PTR_FUN_007e48ac;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar10[3] = iVar5;
      if (puVar11 == (undefined4 *)0x0) {
        puVar10[4] = 0;
        *puVar10 = &PTR_FUN_007e3878;
      }
      else {
        puVar11[2] = puVar11[2] + 1;
        puVar10[4] = puVar11;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))();
    puVar10 = operator_new(0x14);
    if (puVar10 != (undefined4 *)0x0) {
      puVar11 = operator_new(0x10);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar18 = puVar4[0xdfb];
        FUN_004252e0();
        *puVar11 = &PTR_FUN_007e49c4;
        puVar11[3] = uVar18;
        *puVar11 = &PTR_FUN_007e48ac;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar10[3] = iVar5;
      if (puVar11 == (undefined4 *)0x0) {
        puVar10[4] = 0;
        *puVar10 = &PTR_FUN_007e3878;
      }
      else {
        puVar11[2] = puVar11[2] + 1;
        puVar10[4] = puVar11;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))();
    puVar10 = operator_new(0x14);
    if (puVar10 != (undefined4 *)0x0) {
      puVar11 = operator_new(0x10);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar18 = puVar13[0xdfc];
        FUN_004252e0();
        *puVar11 = &PTR_FUN_007e49c4;
        puVar11[3] = uVar18;
        *puVar11 = &PTR_FUN_007e48ac;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar10[3] = iVar5;
      if (puVar11 == (undefined4 *)0x0) {
        puVar10[4] = 0;
        *puVar10 = &PTR_FUN_007e3878;
      }
      else {
        puVar11[2] = puVar11[2] + 1;
        puVar10[4] = puVar11;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))();
    puVar10 = operator_new(0x14);
    if (puVar10 != (undefined4 *)0x0) {
      puVar11 = operator_new(0x10);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        iVar5 = piVar15[0xdfd];
        FUN_004252e0();
        *puVar11 = &PTR_FUN_007e49c4;
        puVar11[3] = iVar5;
        *puVar11 = &PTR_FUN_007e48ac;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar10[3] = iVar5;
      if (puVar11 == (undefined4 *)0x0) {
        puVar10[4] = 0;
        *puVar10 = &PTR_FUN_007e3878;
      }
      else {
        puVar11[2] = puVar11[2] + 1;
        puVar10[4] = puVar11;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))();
  }
  puVar10 = operator_new(0x14);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar11 = operator_new(0x10);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar12[0xdfe];
      FUN_004252e0();
      *puVar11 = &PTR_FUN_007e49c4;
      puVar11[3] = uVar18;
      *puVar11 = &PTR_FUN_007e48ac;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar10[3] = iVar5;
    if (puVar11 == (undefined4 *)0x0) {
      puVar10[4] = 0;
      *puVar10 = &PTR_FUN_007e3878;
    }
    else {
      puVar11[2] = puVar11[2] + 1;
      puVar10[4] = puVar11;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar11 = operator_new(0x14);
  if (puVar11 != (undefined4 *)0x0) {
    puVar12 = operator_new(0x10);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar4[0xdf9];
      FUN_004252e0();
      *puVar12 = &PTR_FUN_007e49c4;
      puVar12[3] = uVar18;
      *puVar12 = &PTR_FUN_007e48ac;
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar11[3] = iVar5;
    if (puVar12 == (undefined4 *)0x0) {
      puVar11[4] = 0;
      *puVar11 = &PTR_FUN_007e3878;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      puVar11[4] = puVar12;
      *puVar11 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  piVar17 = operator_new(0x14);
  if (piVar17 == (int *)0x0) {
    piVar17 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar13[0xe01];
      piVar3 = piVar9;
      FUN_004252e0();
      *puVar4 = &PTR_FUN_007e49c4;
      puVar4[3] = uVar18;
      *puVar4 = &PTR_FUN_007e3978;
    }
    piVar17[1] = 0;
    piVar17[2] = 0;
    *piVar17 = (int)&PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar17[3] = iVar5;
    if (puVar4 == (undefined4 *)0x0) {
      piVar17[4] = 0;
      *piVar17 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar17[4] = (int)puVar4;
      *piVar17 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
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
      iVar5 = piVar15[0xe00];
      FUN_004252e0();
      *puVar11 = &PTR_FUN_007e49c4;
      puVar11[3] = iVar5;
      *puVar11 = &PTR_FUN_007e48ac;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar4[3] = iVar5;
    if (puVar11 == (undefined4 *)0x0) {
      puVar4[4] = 0;
      *puVar4 = &PTR_FUN_007e3878;
    }
    else {
      puVar11[2] = puVar11[2] + 1;
      puVar4[4] = puVar11;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
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
      uVar18 = puVar8[0xe06];
      FUN_004252e0();
      *puVar12 = &PTR_FUN_007e49c4;
      puVar12[3] = uVar18;
      *puVar12 = &PTR_FUN_007e48ac;
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar11[3] = iVar5;
    if (puVar12 == (undefined4 *)0x0) {
      puVar11[4] = 0;
      *puVar11 = &PTR_FUN_007e3878;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      puVar11[4] = puVar12;
      *puVar11 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar8 = operator_new(0x14);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar12 = operator_new(0x10);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      iVar5 = piVar16[0xe07];
      FUN_004252e0();
      *puVar12 = &PTR_FUN_007e49c4;
      puVar12[3] = iVar5;
      *puVar12 = &PTR_FUN_007e48ac;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar8[3] = iVar5;
    if (puVar12 == (undefined4 *)0x0) {
      puVar8[4] = 0;
      *puVar8 = &PTR_FUN_007e3878;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      puVar8[4] = puVar12;
      *puVar8 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  if (_DAT_00d7d470 != (float)puVar10[0xe02]) {
    puVar12 = operator_new(0x14);
    if (puVar12 != (undefined4 *)0x0) {
      puVar13 = operator_new(0x10);
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        uVar18 = puVar10[0xe02];
        FUN_004252e0();
        *puVar13 = &PTR_FUN_007e49c4;
        puVar13[3] = uVar18;
        *puVar13 = &PTR_FUN_007e48ac;
      }
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar12[3] = iVar5;
      if (puVar13 == (undefined4 *)0x0) {
        puVar12[4] = 0;
        *puVar12 = &PTR_FUN_007e3878;
      }
      else {
        puVar13[2] = puVar13[2] + 1;
        puVar12[4] = puVar13;
        *puVar12 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))();
  }
  if (_DAT_00d7d474 != (float)puVar10[0xe03]) {
    puVar12 = operator_new(0x14);
    if (puVar12 != (undefined4 *)0x0) {
      puVar13 = operator_new(0x10);
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        uVar18 = puVar10[0xe03];
        FUN_004252e0();
        *puVar13 = &PTR_FUN_007e49c4;
        puVar13[3] = uVar18;
        *puVar13 = &PTR_FUN_007e48ac;
      }
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar12[3] = iVar5;
      if (puVar13 == (undefined4 *)0x0) {
        puVar12[4] = 0;
        *puVar12 = &PTR_FUN_007e3878;
      }
      else {
        puVar13[2] = puVar13[2] + 1;
        puVar12[4] = puVar13;
        *puVar12 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))();
  }
  if (_DAT_00d7d478 != (float)puVar10[0xe04]) {
    puVar12 = operator_new(0x14);
    if (puVar12 != (undefined4 *)0x0) {
      puVar13 = operator_new(0x10);
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        uVar18 = puVar10[0xe04];
        FUN_004252e0();
        *puVar13 = &PTR_FUN_007e49c4;
        puVar13[3] = uVar18;
        *puVar13 = &PTR_FUN_007e48ac;
      }
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar12[3] = iVar5;
      if (puVar13 == (undefined4 *)0x0) {
        puVar12[4] = 0;
        *puVar12 = &PTR_FUN_007e3878;
      }
      else {
        puVar13[2] = puVar13[2] + 1;
        puVar12[4] = puVar13;
        *puVar12 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))();
  }
  if (_DAT_00d7d47c != (float)puVar10[0xe05]) {
    puVar12 = operator_new(0x14);
    if (puVar12 != (undefined4 *)0x0) {
      puVar13 = operator_new(0x10);
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        uVar18 = puVar10[0xe05];
        FUN_004252e0();
        *puVar13 = &PTR_FUN_007e49c4;
        puVar13[3] = uVar18;
        *puVar13 = &PTR_FUN_007e48ac;
      }
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar12[3] = iVar5;
      if (puVar13 == (undefined4 *)0x0) {
        puVar12[4] = 0;
        *puVar12 = &PTR_FUN_007e3878;
      }
      else {
        puVar13[2] = puVar13[2] + 1;
        puVar12[4] = puVar13;
        *puVar12 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))();
  }
  puVar12 = operator_new(0x14);
  if (puVar12 != (undefined4 *)0x0) {
    puVar13 = operator_new(0x10);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar10[0x1192];
      piVar3 = piVar15;
      FUN_004252e0();
      *puVar13 = &PTR_FUN_007e49c4;
      puVar13[3] = uVar18;
      *puVar13 = &PTR_FUN_007e3978;
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar12[3] = iVar5;
    if (puVar13 == (undefined4 *)0x0) {
      puVar12[4] = 0;
      *puVar12 = &PTR_FUN_007e3878;
    }
    else {
      puVar13[2] = puVar13[2] + 1;
      puVar12[4] = puVar13;
      *puVar12 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar10 = operator_new(0x14);
  if (puVar10 != (undefined4 *)0x0) {
    iVar5 = FUN_0054f410();
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar10[3] = iVar7;
    if (iVar5 == 0) {
      puVar10[4] = 0;
      *puVar10 = &PTR_FUN_007e3878;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar10[4] = iVar5;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  piVar9 = operator_new(0x14);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      iVar5 = piVar17[0x38c1];
      piVar3 = piVar16;
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e49c4;
      puVar10[3] = iVar5;
      *puVar10 = &PTR_FUN_007e3978;
    }
    piVar9[1] = 0;
    piVar9[2] = 0;
    *piVar9 = (int)&PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar9[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      piVar9[4] = 0;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      piVar9[4] = (int)puVar10;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar10 = operator_new(0x14);
  if (puVar10 != (undefined4 *)0x0) {
    puVar12 = operator_new(0x10);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar4[0xdf3];
      FUN_004252e0();
      *puVar12 = &PTR_FUN_007e49c4;
      puVar12[3] = uVar18;
      *puVar12 = &PTR_FUN_007e48ac;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar10[3] = iVar5;
    if (puVar12 == (undefined4 *)0x0) {
      puVar10[4] = 0;
      *puVar10 = &PTR_FUN_007e3878;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      puVar10[4] = puVar12;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar4 = operator_new(0x14);
  if (puVar4 != (undefined4 *)0x0) {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar18 = puVar11[0xdf4];
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e49c4;
      puVar10[3] = uVar18;
      *puVar10 = &PTR_FUN_007e48ac;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar4[3] = iVar5;
    if (puVar10 == (undefined4 *)0x0) {
      puVar4[4] = 0;
      *puVar4 = &PTR_FUN_007e3878;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar4[4] = puVar10;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  puVar4 = operator_new(0x14);
  if (puVar4 != (undefined4 *)0x0) {
    puVar10 = operator_new(0x10);
    if (puVar10 != (undefined4 *)0x0) {
      uVar18 = puVar8[0xdee];
      FUN_004252e0();
      *puVar10 = &PTR_FUN_007e49c4;
      puVar10[3] = uVar18;
      *puVar10 = &PTR_FUN_007e48ac;
    }
    FUN_004252e0();
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      FUN_0053e740();
    }
    uVar18 = FUN_0054f120();
    puVar4[3] = uVar18;
    uVar18 = FUN_0054f110();
    puVar4[4] = uVar18;
    *puVar4 = &PTR_FUN_007e3878;
  }
  (**(code **)(*piVar17 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    iVar5 = FUN_004441b0();
  }
  (**(code **)(*piVar17 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    iVar7 = FUN_004441b0();
  }
  (**(code **)(*piVar17 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar17 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar17 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar17 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  iVar24 = 0;
  do {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004c17d0();
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
    iVar24 = iVar24 + 1;
  } while (iVar24 < 7);
  iVar24 = iVar5;
  FUN_00490f60();
  cVar2 = FUN_0054ef60();
  if (cVar2 != '\0') {
    pvVar6 = operator_new(0x14);
    iVar5 = iVar24;
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_00490f60();
        FUN_004965b0();
        FUN_004af700();
        FUN_0053ee00();
      }
      FUN_004441b0();
      iVar5 = iVar24;
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  if (*(char *)(iVar5 + 0xe316) != '\0') {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0xe);
      if (pvVar6 != (void *)0x0) {
        FUN_004f6330();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  iVar5 = 0;
  do {
    cVar2 = FUN_0054ed70();
    if (cVar2 != '\0') {
      pvVar6 = operator_new(0x14);
      if (pvVar6 != (void *)0x0) {
        pvVar6 = operator_new(0x10);
        if (pvVar6 != (void *)0x0) {
          FUN_004af700();
          FUN_0053ee00();
        }
        FUN_004441b0();
      }
      (**(code **)(*piVar9 + 0x84))();
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x158);
  FUN_004986b0();
  cVar2 = FUN_004986e0();
  while (cVar2 != '\0') {
    FUN_004986c0();
    iVar5 = FUN_004986d0();
    cVar2 = FUN_0054edd0();
    if (cVar2 == '\0') {
      pvVar6 = operator_new(0x14);
      if (pvVar6 != (void *)0x0) {
        (*(code *)**(undefined4 **)(iVar5 + 8))();
        FUN_004441b0();
      }
      (**(code **)(*piVar9 + 0x84))();
    }
    cVar2 = FUN_004986e0();
  }
  FUN_0054ed20();
  FUN_0054eed0();
  cVar2 = FUN_0054ef00();
  while (cVar2 != '\0') {
    FUN_0054eee0();
    iVar5 = FUN_0054eef0();
    iVar24 = FUN_00458280();
    iVar19 = FUN_0054ecd0();
    if (iVar19 == iVar24) {
      pvVar6 = operator_new(0x14);
      if (pvVar6 != (void *)0x0) {
        (*(code *)**(undefined4 **)(iVar5 + 0x12))();
        FUN_004441b0();
      }
      (**(code **)(*piVar9 + 0x84))();
    }
    cVar2 = FUN_0054ef00();
  }
  iVar5 = 0;
  do {
    cVar2 = FUN_00549790();
    if (cVar2 != '\0') {
      pvVar6 = operator_new(0x14);
      if (pvVar6 != (void *)0x0) {
        FUN_00427f80();
        FUN_00763be0();
        FUN_004441b0();
      }
      (**(code **)(*piVar9 + 0x84))();
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  FUN_0054ef10();
  cVar2 = FUN_0054ef40();
  while (cVar2 != '\0') {
    FUN_0054ef20();
    iVar5 = FUN_0054ef30();
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      (*(code *)**(undefined4 **)(iVar5 + 0x12))();
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
    cVar2 = FUN_0054ef40();
  }
  pvVar6 = operator_new(0x1e);
  if (pvVar6 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00538860();
  }
  iVar5 = 0;
  if (0 < DAT_00877554) {
    do {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_00516850();
      }
      (**(code **)(*piVar3 + 0x84))();
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_00877554);
  }
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (*(code *)**(undefined4 **)(iVar7 + 0x3824))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    iVar5 = FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  if (*(float *)(iVar7 + 0x3a06) != _DAT_007e3380) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        __ftol();
        FUN_00516850();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  if (*(float *)(iVar7 + 0x3a0a) != _DAT_007e3380) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        __ftol();
        FUN_00516850();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0x10);
    if (pvVar6 != (void *)0x0) {
      FUN_004440b0();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  if (*(char *)(iVar7 + 0xe309) != '\0') {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0xe);
      if (pvVar6 != (void *)0x0) {
        FUN_004f6330();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  if (*(char *)(iVar7 + 0xe308) != '\0') {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0xe);
      if (pvVar6 != (void *)0x0) {
        FUN_004f6330();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  if (*(char *)(iVar7 + 0xe30a) != '\0') {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0xe);
      if (pvVar6 != (void *)0x0) {
        FUN_004f6330();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  if (1 < *(int *)(iVar7 + 0xe30c)) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_00516850();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  if (*(int *)(iVar7 + 0xe310) != 0x3f800000) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0xe);
    if (pvVar6 != (void *)0x0) {
      FUN_004f6330();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    pvVar6 = operator_new(0xe);
    if (pvVar6 != (void *)0x0) {
      FUN_004f6330();
    }
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  piVar3 = (int *)(iVar5 + -10);
  FUN_0054edc0();
  fVar25 = (float10)FUN_0054ecc0();
  if (fVar25 != (float10)_DAT_007e3380) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_0054edc0();
        FUN_0054ecc0();
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  if (*(int *)(iVar5 + 0x3966) != 0) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_00516850();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  fVar25 = (float10)FUN_0054ed30();
  if (fVar25 != (float10)*(float *)(iVar5 + 0xe83e)) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  fVar25 = (float10)FUN_0054ed30();
  if (fVar25 != (float10)*(float *)(iVar5 + 0xe842)) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  fVar25 = (float10)FUN_0054ed30();
  if (fVar25 != (float10)*(float *)(iVar5 + 0xe846)) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  fVar25 = (float10)FUN_0054ed30();
  if (fVar25 != (float10)*(float *)(iVar5 + 0xe84a)) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  fVar28 = (float)*(int *)(iVar5 + 0x37d4);
  fVar25 = (float10)FUN_0054ed30();
  if (fVar25 != (float10)fVar28) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  fVar25 = (float10)FUN_0054ed30();
  if (fVar25 != (float10)*(float *)(iVar5 + 0xe84e)) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  fVar25 = (float10)FUN_0054ed30();
  if (fVar25 != (float10)*(float *)(iVar5 + 0xe852)) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  fVar25 = (float10)FUN_0054ed30();
  if (fVar25 != (float10)*(float *)(iVar5 + 0xe856)) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  fVar25 = (float10)FUN_0054ed30();
  if (fVar25 != (float10)*(float *)(iVar5 + 0xe85a)) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  fVar25 = (float10)FUN_0054ed30();
  if (fVar25 != (float10)*(float *)(iVar5 + 0x232)) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  fVar25 = (float10)FUN_0054ed30();
  if (fVar25 != (float10)*(float *)(iVar5 + 0x236)) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0x10);
      if (pvVar6 != (void *)0x0) {
        FUN_004440b0();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  if (*(char *)(iVar5 + 0xe85e) != '\0') {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0xe);
      if (pvVar6 != (void *)0x0) {
        FUN_004f6330();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  if (*(char *)(iVar5 + 0xe85f) != '\0') {
    pvVar6 = operator_new(0x14);
    if (pvVar6 != (void *)0x0) {
      pvVar6 = operator_new(0xe);
      if (pvVar6 != (void *)0x0) {
        FUN_004f6330();
      }
      FUN_004441b0();
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 0x30))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 0x34))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 0x34))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 0x58))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 0x5c))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 0x60))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 100))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 0x68))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    (**(code **)(*piVar3 + 0x6c))();
    iVar5 = FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 0x70))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 0x74))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 0x44))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 0x4c))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 != (void *)0x0) {
    (**(code **)(*piVar3 + 0xa8))();
    FUN_004441b0();
  }
  (**(code **)(*piVar9 + 0x84))();
  iVar7 = 1;
  do {
    if (*(char *)(iVar7 + 0x3796 + iVar5) == '\0') {
      pvVar6 = operator_new(0x14);
      if (pvVar6 != (void *)0x0) {
        pvVar6 = operator_new(0xe);
        if (pvVar6 != (void *)0x0) {
          FUN_004f6330();
        }
        goto LAB_005481f8;
      }
    }
    else {
      pvVar6 = operator_new(0x14);
      if (pvVar6 != (void *)0x0) {
        pvVar6 = operator_new(0xe);
        if (pvVar6 != (void *)0x0) {
          FUN_004f6330();
        }
LAB_005481f8:
        uVar18 = FUN_00514330(iVar7);
        FUN_004441b0(uVar18);
      }
    }
    (**(code **)(*piVar9 + 0x84))();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x22);
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    uVar18 = 0;
  }
  else {
    iVar5 = FUN_00490f60();
    (*(code *)**(undefined4 **)(iVar5 + 8))();
    uVar18 = FUN_004441b0(0x134);
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x1e);
  if (pvVar6 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00538860();
  }
  puVar26 = &stack0xfffffe88;
  FUN_0054ed80(puVar26);
  FUN_00526ac0(puVar26);
  cVar2 = FUN_00526b10();
  while (cVar2 != '\0') {
    pvVar6 = operator_new(0x10);
    if (pvVar6 == (void *)0x0) {
      uVar20 = 0;
    }
    else {
      FUN_00526af0(&stack0xfffffeb8,0);
      uVar20 = FUN_00526b00();
      uVar20 = FUN_00516850(uVar20);
    }
    (**(code **)(*piVar3 + 0x84))(uVar20);
    cVar2 = FUN_00526b10();
  }
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_004441b0(0x126,piVar3);
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar6 = operator_new(0x1e);
  if (pvVar6 == (void *)0x0) {
    piVar15 = (int *)0x0;
  }
  else {
    piVar15 = (int *)FUN_00538860();
  }
  puVar26 = &stack0xfffffeb8;
  FUN_00526a60(puVar26);
  uVar20 = FUN_00526ac0(puVar26);
  FUN_0054ed60(uVar20);
  cVar2 = FUN_00526b10();
  while (cVar2 != '\0') {
    pvVar6 = operator_new(0x10);
    if (pvVar6 == (void *)0x0) {
      uVar20 = 0;
    }
    else {
      FUN_00526af0(&stack0xfffffeb4,0);
      uVar20 = FUN_00526b00();
      uVar20 = FUN_00516850(uVar20);
    }
    (**(code **)(*piVar15 + 0x84))(uVar20);
    cVar2 = FUN_00526b10();
  }
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    uVar20 = 0;
  }
  else {
    uVar20 = FUN_004441b0(0x124,piVar15);
  }
  (**(code **)(*piVar9 + 0x84))(uVar20);
  pvVar6 = operator_new(0x1e);
  if (pvVar6 == (void *)0x0) {
    piVar15 = (int *)0x0;
  }
  else {
    piVar15 = (int *)FUN_00538860();
  }
  puVar26 = &stack0xfffffeb4;
  FUN_0054ed90(puVar26);
  uVar20 = FUN_00526ac0(puVar26);
  FUN_0054ed60(uVar20);
  cVar2 = FUN_00526b10();
  while (cVar2 != '\0') {
    pvVar6 = operator_new(0x10);
    if (pvVar6 == (void *)0x0) {
      uVar20 = 0;
    }
    else {
      FUN_00526af0(&stack0xfffffeb0,0);
      uVar20 = FUN_00526b00();
      uVar20 = FUN_00516850(uVar20);
    }
    (**(code **)(*piVar15 + 0x84))(uVar20);
    cVar2 = FUN_00526b10();
  }
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_004441b0(0x127,piVar15);
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar21 = operator_new(0x1e);
  if (pvVar21 == (void *)0x0) {
    piVar15 = (int *)0x0;
  }
  else {
    piVar15 = (int *)FUN_00538860();
  }
  puVar26 = &stack0xfffffeb0;
  FUN_0054eda0(puVar26);
  uVar20 = FUN_00526ac0(puVar26);
  FUN_0054ed60(uVar20);
  cVar2 = FUN_00526b10();
  while (cVar2 != '\0') {
    pvVar21 = operator_new(0x10);
    if (pvVar21 == (void *)0x0) {
      uVar20 = 0;
    }
    else {
      FUN_00526af0(&stack0xfffffeac,0);
      uVar20 = FUN_00526b00();
      uVar20 = FUN_00516850(uVar20);
    }
    (**(code **)(*piVar15 + 0x84))(uVar20);
    cVar2 = FUN_00526b10();
  }
  pvVar21 = operator_new(0x14);
  if (pvVar21 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_004441b0(0x128,piVar15);
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar21 = operator_new(0x1e);
  if (pvVar21 == (void *)0x0) {
    piVar15 = (int *)0x0;
  }
  else {
    piVar15 = (int *)FUN_00538860();
  }
  FUN_0054ef50(&stack0xfffffe7c);
  cVar2 = FUN_0054ef70();
  while (cVar2 != '\0') {
    pvVar21 = operator_new(0x10);
    if (pvVar21 == (void *)0x0) {
      uVar20 = 0;
    }
    else {
      puVar26 = &stack0xfffffeb0;
      FUN_004b3f60(&stack0xfffffea8,0);
      iVar24 = FUN_0045aac0(puVar26);
      uVar20 = FUN_00516850(*(undefined4 *)(iVar24 + 2));
    }
    (**(code **)(*piVar15 + 0x84))(uVar20);
    cVar2 = FUN_0054ef70();
  }
  pvVar21 = operator_new(0x14);
  if (pvVar21 != (void *)0x0) {
    FUN_004441b0(0x114,piVar15);
  }
  (**(code **)(*piVar9 + 0x84))();
  pvVar21 = operator_new(0x1e);
  if (pvVar21 == (void *)0x0) {
    piVar15 = (int *)0x0;
  }
  else {
    piVar15 = (int *)FUN_00538860();
  }
  uVar20 = FUN_0054ef50(&stack0xfffffea8);
  FUN_0054ef80(uVar20);
  cVar2 = FUN_0054ef70();
  while (cVar2 != '\0') {
    pvVar21 = operator_new(0x10);
    if (pvVar21 == (void *)0x0) {
      uVar20 = 0;
    }
    else {
      puVar26 = &stack0xfffffeac;
      FUN_004b3f60(&stack0xfffffea4,0);
      iVar24 = FUN_0045aac0(puVar26);
      uVar20 = FUN_00516850(*(undefined4 *)(iVar24 + 2));
    }
    (**(code **)(*piVar15 + 0x84))(uVar20);
    cVar2 = FUN_0054ef70();
  }
  pvVar21 = operator_new(0x14);
  if (pvVar21 == (void *)0x0) {
    uVar20 = 0;
  }
  else {
    uVar20 = FUN_004441b0(0x19,piVar15);
  }
  (**(code **)(*piVar9 + 0x84))(uVar20);
  pvVar21 = operator_new(0x1e);
  if (pvVar21 == (void *)0x0) {
    piVar15 = (int *)0x0;
  }
  else {
    piVar15 = (int *)FUN_00538860();
  }
  uVar20 = FUN_0054ef50(&stack0xfffffea4);
  FUN_0054ef80(uVar20);
  cVar2 = FUN_0054ef70();
  while (cVar2 != '\0') {
    pvVar21 = operator_new(0x10);
    if (pvVar21 == (void *)0x0) {
      uVar20 = 0;
    }
    else {
      puVar26 = &stack0xfffffea8;
      FUN_004b3f60(&stack0xfffffea0,0);
      iVar24 = FUN_0045aac0(puVar26);
      uVar20 = FUN_00516850(*(undefined4 *)(iVar24 + 2));
    }
    (**(code **)(*piVar15 + 0x84))(uVar20);
    cVar2 = FUN_0054ef70();
  }
  pvVar21 = operator_new(0x14);
  if (pvVar21 == (void *)0x0) {
    uVar20 = 0;
  }
  else {
    uVar20 = FUN_004441b0(0x34,piVar15);
  }
  (**(code **)(*piVar9 + 0x84))(uVar20);
  pvVar21 = operator_new(0x1e);
  if (pvVar21 == (void *)0x0) {
    piVar15 = (int *)0x0;
  }
  else {
    piVar15 = (int *)FUN_00538860();
  }
  uVar20 = FUN_0054ef50(&stack0xfffffea0);
  FUN_0054ef80(uVar20);
  cVar2 = FUN_0054ef70();
  while (cVar2 != '\0') {
    pvVar21 = operator_new(0x10);
    if (pvVar21 == (void *)0x0) {
      uVar20 = 0;
    }
    else {
      puVar26 = &stack0xfffffea4;
      FUN_004b3f60(&stack0xfffffe9c,0);
      iVar24 = FUN_0045aac0(puVar26);
      uVar20 = FUN_00516850(*(undefined4 *)(iVar24 + 2));
    }
    (**(code **)(*piVar15 + 0x84))(uVar20);
    cVar2 = FUN_0054ef70();
  }
  pvVar21 = operator_new(0x14);
  if (pvVar21 == (void *)0x0) {
    uVar20 = 0;
  }
  else {
    uVar20 = FUN_004441b0(0x3bb,piVar15);
  }
  (**(code **)(*piVar9 + 0x84))(uVar20);
  FUN_0054ef90(&stack0xfffffe88);
  cVar2 = FUN_0054efc0();
  while (cVar2 != '\0') {
    FUN_0054efa0(&stack0xfffffe9c,0);
    iVar24 = FUN_0054efb0();
    pvVar21 = operator_new(0x14);
    if (pvVar21 == (void *)0x0) {
      uVar20 = 0;
    }
    else {
      uVar20 = (*(code *)**(undefined4 **)(iVar24 + 0x12))();
      uVar20 = FUN_004441b0(0x338,uVar20);
    }
    (**(code **)(*piVar9 + 0x84))(uVar20);
    cVar2 = FUN_0054efc0();
  }
  pvVar21 = operator_new(0x14);
  if (pvVar21 == (void *)0x0) {
    uVar20 = 0;
  }
  else {
    uVar20 = (*(code *)**(undefined4 **)(*(int *)(iVar5 + 0x117fc) + 0x12))();
    uVar20 = FUN_004441b0(0x194,uVar20);
  }
  (**(code **)(*piVar9 + 0x84))(uVar20);
  FUN_004986f0(&stack0xfffffe88);
  cVar2 = FUN_00498730();
  while (cVar2 != '\0') {
    FUN_00498700(&stack0xfffffe98,0);
    piVar15 = (int *)FUN_00498710();
    cVar2 = (**(code **)(*piVar15 + 0x30))();
    if ((cVar2 != '\0') && (iVar5 = FUN_0054f0a0(), iVar5 == 0)) {
      pvVar21 = operator_new(0x14);
      if (pvVar21 == (void *)0x0) {
        uVar20 = 0;
      }
      else {
        uVar20 = (*(code *)**(undefined4 **)((int)piVar15 + 0x1e))();
        uVar20 = FUN_004441b0(0xf0,uVar20);
      }
      (**(code **)(*piVar9 + 0x84))(uVar20);
    }
    cVar2 = (**(code **)(*piVar15 + 0x2c))();
    if (cVar2 != '\0') {
      pvVar21 = operator_new(0x14);
      if (pvVar21 == (void *)0x0) {
        uVar20 = 0;
      }
      else {
        uVar20 = (*(code *)**(undefined4 **)((int)piVar15 + 0x1e))();
        uVar20 = FUN_004441b0(0xef,uVar20);
      }
      (**(code **)(*piVar9 + 0x84))(uVar20);
    }
    cVar2 = (**(code **)(*piVar15 + 0x28))();
    if (((cVar2 != '\0') && (cVar2 = FUN_0054eeb0(), cVar2 == '\0')) &&
       (iVar5 = FUN_0054eec0(), iVar5 == 0)) {
      pvVar21 = operator_new(0x14);
      if (pvVar21 == (void *)0x0) {
        uVar20 = 0;
      }
      else {
        uVar20 = (*(code *)**(undefined4 **)((int)piVar15 + 0x1e))();
        uVar20 = FUN_004441b0(0xee,uVar20);
      }
      (**(code **)(*piVar9 + 0x84))(uVar20);
    }
    cVar2 = FUN_00498730();
  }
  FUN_0054ebc0(&stack0xfffffe8c);
  cVar2 = FUN_0054ebf0();
  while (cVar2 != '\0') {
    pvVar21 = operator_new(0x14);
    if (pvVar21 == (void *)0x0) {
      uVar20 = 0;
    }
    else {
      FUN_0054ebd0(&stack0xfffffe94,0);
      iVar5 = FUN_0054ebe0();
      uVar20 = (*(code *)**(undefined4 **)(iVar5 + 0x12))();
      uVar20 = FUN_004441b0(0xc,uVar20);
    }
    (**(code **)(*piVar9 + 0x84))(uVar20);
    cVar2 = FUN_0054ebf0();
  }
  FUN_00499720(&stack0xfffffe70);
  cVar2 = FUN_00499750();
  do {
    if (cVar2 == '\0') {
      FUN_0054efd0(&stack0xfffffe90);
      cVar2 = FUN_0054f000();
      while (cVar2 != '\0') {
        FUN_0054efe0(&stack0xfffffe98,0);
        piVar15 = (int *)FUN_0054eff0();
        uVar20 = 0x224;
        cVar2 = (**(code **)(*piVar15 + 0x10))();
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(*piVar15 + 0x18))();
          if (cVar2 == '\0') {
            cVar2 = (**(code **)(*piVar15 + 0x1c))();
            if (cVar2 != '\0') {
              uVar20 = 0x227;
            }
          }
          else {
            uVar20 = 0x225;
          }
        }
        else {
          uVar20 = 0x226;
        }
        pvVar21 = operator_new(0x14);
        if (pvVar21 == (void *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar22 = (*(code *)**(undefined4 **)((int)piVar15 + 0x12))();
          uVar20 = FUN_004441b0(uVar20,uVar22);
        }
        (**(code **)(*piVar9 + 0x84))(uVar20);
        cVar2 = FUN_0054f000();
      }
      FUN_00462830();
      pvVar21 = operator_new(0x1e);
      if (pvVar21 == (void *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)FUN_00538860();
      }
      iVar5 = 1;
      piVar15 = piVar9;
      do {
        cVar2 = FUN_0042dd70(&stack0xfffffea4);
        if (cVar2 != '\0') {
          pvVar21 = operator_new(0x14);
          if (pvVar21 == (void *)0x0) {
            uVar20 = 0;
          }
          else {
            pvVar21 = operator_new(0x1a);
            if (pvVar21 == (void *)0x0) {
              uVar20 = 0;
              piVar9 = piVar15;
            }
            else {
              uVar20 = FUN_00477fc0(3,iVar5);
              uVar20 = FUN_0054f010(uVar20);
              piVar9 = piVar15;
            }
            uVar22 = FUN_0054f410();
            uVar20 = FUN_0053e630(uVar20,uVar22);
            piVar15 = piVar9;
          }
          (**(code **)(*piVar9 + 0x84))(uVar20);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x158);
      iVar5 = (**(code **)(*piVar9 + 0x88))();
      if (0 < iVar5) {
        pvVar21 = operator_new(0x14);
        if (pvVar21 == (void *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar20 = FUN_004441b0(0x209,piVar9);
        }
        (**(code **)(*piVar3 + 0x84))(uVar20);
      }
      pvVar21 = operator_new(0x1e);
      if (pvVar21 == (void *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)FUN_00538860();
      }
      iVar5 = 1;
      piVar15 = piVar9;
      do {
        cVar2 = FUN_0042dd70(&stack0xfffffea4);
        if (cVar2 != '\0') {
          pvVar21 = operator_new(0x14);
          if (pvVar21 == (void *)0x0) {
            uVar20 = 0;
          }
          else {
            pvVar21 = operator_new(0x1a);
            if (pvVar21 == (void *)0x0) {
              uVar20 = 0;
              piVar9 = piVar15;
            }
            else {
              uVar20 = FUN_00477fc0(3,iVar5);
              uVar20 = FUN_0054f010(uVar20);
              piVar9 = piVar15;
            }
            uVar22 = FUN_0054f410();
            uVar20 = FUN_0053e630(uVar20,uVar22);
            piVar15 = piVar9;
          }
          (**(code **)(*piVar9 + 0x84))(uVar20);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x158);
      iVar5 = (**(code **)(*piVar9 + 0x88))();
      if (0 < iVar5) {
        pvVar21 = operator_new(0x14);
        if (pvVar21 == (void *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar20 = FUN_004441b0(0x561,piVar9);
        }
        (**(code **)(*piVar3 + 0x84))(uVar20);
      }
      pvVar21 = operator_new(0x1e);
      if (pvVar21 == (void *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)FUN_00538860();
      }
      iVar5 = 1;
      piVar15 = piVar9;
      do {
        iVar24 = FUN_00549760();
        if (0 < iVar24) {
          pvVar21 = operator_new(0x14);
          if (pvVar21 == (void *)0x0) {
            uVar20 = 0;
          }
          else {
            pvVar21 = operator_new(0x1a);
            if (pvVar21 == (void *)0x0) {
              uVar20 = 0;
              piVar9 = piVar15;
            }
            else {
              uVar20 = FUN_00477fc0(3,iVar5);
              uVar20 = FUN_0054f010(uVar20);
              piVar9 = piVar15;
            }
            uVar22 = FUN_0054f410();
            uVar20 = FUN_0053e630(uVar20,uVar22);
            piVar15 = piVar9;
          }
          (**(code **)(*piVar9 + 0x84))(uVar20);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x158);
      iVar5 = (**(code **)(*piVar9 + 0x88))();
      if (0 < iVar5) {
        pvVar21 = operator_new(0x14);
        if (pvVar21 == (void *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar20 = FUN_004441b0(0x251,piVar9);
        }
        (**(code **)(*piVar3 + 0x84))(uVar20);
      }
      pvVar21 = (void *)0x0;
      piVar9 = (int *)(iVar7 + 0x810);
      do {
        if ((0 < *piVar9) || (cVar2 = FUN_0042dd70(&stack0xfffffea4), cVar2 != '\0')) {
          pvVar23 = operator_new(0x1e);
          if (pvVar23 == (void *)0x0) {
            piVar15 = (int *)0x0;
          }
          else {
            piVar15 = (int *)FUN_00538860();
          }
          pvVar23 = operator_new(0x14);
          if (pvVar23 == (void *)0x0) {
            uVar20 = 0;
          }
          else {
            pvVar23 = operator_new(0x10);
            if (pvVar23 == (void *)0x0) {
              uVar20 = 0;
            }
            else {
              uVar20 = FUN_004af700(pvVar21);
              uVar20 = FUN_0053ee00(uVar20);
            }
            uVar20 = FUN_004441b0(0xec,uVar20);
          }
          (**(code **)(*piVar15 + 0x84))(uVar20);
          if (_DAT_007e3380 < (float)*piVar9) {
            pvVar23 = operator_new(0x14);
            if (pvVar23 == (void *)0x0) {
              uVar20 = 0;
            }
            else {
              pvVar21 = operator_new(0x10);
              if (pvVar21 == (void *)0x0) {
                uVar20 = 0;
              }
              else {
                uVar20 = FUN_00516850(*piVar9);
              }
              uVar20 = FUN_004441b0(0x52b,uVar20);
            }
            (**(code **)(*piVar15 + 0x84))(uVar20);
          }
          cVar2 = FUN_00549770(uVar18);
          if (cVar2 != '\0') {
            pvVar23 = operator_new(0x14);
            if (pvVar23 == (void *)0x0) {
              uVar20 = 0;
            }
            else {
              uVar20 = FUN_0054f410();
              uVar20 = FUN_004441b0(0xfd,uVar20);
            }
            (**(code **)(*piVar15 + 0x84))(uVar20);
          }
          iVar5 = (**(code **)(*piVar15 + 0x88))();
          if (0 < iVar5) {
            pvVar23 = operator_new(0x14);
            if (pvVar23 == (void *)0x0) {
              uVar20 = 0;
            }
            else {
              uVar20 = FUN_004441b0(0x504,piVar15);
            }
            (**(code **)(*piVar3 + 0x84))(uVar20);
          }
        }
        pvVar21 = (void *)((int)pvVar21 + 1);
        piVar9 = piVar9 + 1;
      } while ((int)pvVar21 < 0x158);
      bVar1 = false;
      uVar18 = 0;
      pvVar21 = operator_new(0x1e);
      iVar5 = 0;
      if (pvVar21 == (void *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)FUN_00538860();
      }
      pvVar21 = operator_new(0x1e);
      if (pvVar21 == (void *)0x0) {
        piVar15 = (int *)0x0;
      }
      else {
        piVar15 = (int *)FUN_00538860();
      }
      pvVar21 = operator_new(0x1e);
      if (pvVar21 == (void *)0x0) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)FUN_00538860();
      }
      do {
        if (*(char *)(iVar5 + 0x3be9 + iVar7) == '\0') {
          pvVar21 = operator_new(0x10);
          if (pvVar21 == (void *)0x0) {
            uVar20 = 0;
          }
          else {
            uVar20 = FUN_00516850(iVar5);
          }
          (**(code **)(*piVar9 + 0x84))(uVar20);
          bVar1 = true;
        }
        if (*(char *)(iVar5 + 0x3bef + iVar7) == '\0') {
          pvVar21 = operator_new(0x10);
          uVar27 = (undefined1)((uint)uVar18 >> 0x18);
          if (pvVar21 == (void *)0x0) {
            uVar18 = 0;
          }
          else {
            uVar18 = FUN_00516850(iVar5);
          }
          (**(code **)(*piVar15 + 0x84))(uVar18);
          uVar18 = CONCAT13(uVar27,0x10000);
        }
        if (*(char *)(iVar5 + 0x3bf5 + iVar7) != '\0') {
          pvVar21 = operator_new(0x10);
          if (pvVar21 == (void *)0x0) {
            uVar20 = 0;
          }
          else {
            uVar20 = FUN_00516850(iVar5);
          }
          (**(code **)(*piVar16 + 0x84))(uVar20);
          uVar18 = CONCAT13(1,(int3)uVar18);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 6);
      if (bVar1) {
        pvVar21 = operator_new(0x14);
        if (pvVar21 == (void *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar20 = FUN_004441b0(0x55f,piVar9);
        }
        (**(code **)(*piVar3 + 0x84))(uVar20);
      }
      if ((char)((uint)uVar18 >> 0x10) != '\0') {
        pvVar21 = operator_new(0x14);
        if (pvVar21 == (void *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar20 = FUN_004441b0(0x55e,piVar15);
        }
        (**(code **)(*piVar3 + 0x84))(uVar20);
      }
      if ((char)((uint)uVar18 >> 0x18) != '\0') {
        pvVar21 = operator_new(0x14);
        if (pvVar21 == (void *)0x0) {
          uVar18 = 0;
        }
        else {
          uVar18 = FUN_004441b0(0x560,piVar16);
        }
        (**(code **)(*piVar3 + 0x84))(uVar18);
      }
      ExceptionList = pvVar6;
      return piVar3;
    }
    FUN_00499740();
    cVar2 = FUN_0054ed40();
    if (cVar2 == '\0') {
      cVar2 = FUN_0048e0c0();
      if (cVar2 != '\0') {
        pvVar21 = operator_new(0x14);
        if (pvVar21 == (void *)0x0) goto LAB_00548e0b;
        iVar5 = FUN_00499740();
        uVar20 = (*(code *)**(undefined4 **)(iVar5 + 0x12))();
        uVar20 = FUN_004441b0(0xba,uVar20);
        goto LAB_00548e0d;
      }
      cVar2 = FUN_0054ed50();
      if (cVar2 != '\0') {
        pvVar21 = operator_new(0x14);
        if (pvVar21 == (void *)0x0) goto LAB_00548e0b;
        iVar5 = FUN_00499740();
        uVar20 = (*(code *)**(undefined4 **)(iVar5 + 0x12))();
        uVar20 = FUN_004441b0(0xbb,uVar20);
        goto LAB_00548e0d;
      }
    }
    else {
      pvVar21 = operator_new(0x14);
      if (pvVar21 == (void *)0x0) {
LAB_00548e0b:
        uVar20 = 0;
      }
      else {
        iVar5 = FUN_00499740();
        uVar20 = (*(code *)**(undefined4 **)(iVar5 + 0x12))();
        uVar20 = FUN_004441b0(0xb9,uVar20);
      }
LAB_00548e0d:
      (**(code **)(*piVar9 + 0x84))(uVar20);
    }
    FUN_00499730(&stack0xfffffe94,0);
    cVar2 = FUN_00499750();
  } while( true );
}


