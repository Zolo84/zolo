// FUN_006c60b0 @ 6c60b0 size=5900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_006c60b0(int param_1)

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
  undefined4 uVar12;
  void *pvVar13;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d8868;
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
      uVar12 = *(undefined4 *)(param_1 + 4);
      FUN_004252e0(5);
      *puVar3 = &PTR_FUN_007e48ac;
      puVar3[3] = uVar12;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4db), iVar5 == 0)) {
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
      uVar12 = *(undefined4 *)(unaff_EBX + 8);
      FUN_004252e0(5);
      *puVar6 = &PTR_FUN_007e48ac;
      puVar6[3] = uVar12;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 5;
    pvVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4dc), iVar5 == 0)) {
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
      uVar12 = *(undefined4 *)(unaff_EBP + 0xc);
      FUN_004252e0(5);
      *puVar7 = &PTR_FUN_007e48ac;
      puVar7[3] = uVar12;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 8;
    pvVar4 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,9);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4dd), iVar5 == 0)) {
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
      uVar12 = *(undefined4 *)(unaff_ESI + 0x10);
      FUN_004252e0(5);
      *puVar8 = &PTR_FUN_007e48ac;
      puVar8[3] = uVar12;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4c0), iVar5 == 0)) {
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
      uVar12 = *(undefined4 *)(unaff_EDI + 0x14);
      FUN_004252e0(5);
      *puVar9 = &PTR_FUN_007e48ac;
      puVar9[3] = uVar12;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4c1), iVar5 == 0)) {
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
      uVar12 = puVar2[6];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4c2), iVar5 == 0)) {
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
      uVar12 = puVar3[7];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4c3), iVar5 == 0)) {
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
      uVar12 = puVar6[8];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4c4), iVar5 == 0)) {
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
      uVar12 = puVar7[9];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4c5), iVar5 == 0)) {
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
      uVar12 = puVar8[10];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4c6), iVar5 == 0)) {
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
      uVar12 = puVar9[0xb];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4c7), iVar5 == 0)) {
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
      uVar12 = puVar2[0xc];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4c8), iVar5 == 0)) {
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
      uVar12 = puVar3[0xd];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4c9), iVar5 == 0)) {
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
      uVar12 = puVar6[0xe];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4ca), iVar5 == 0)) {
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
      uVar12 = puVar7[0xf];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4cb), iVar5 == 0)) {
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
      uVar12 = puVar8[0x10];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4cc), iVar5 == 0)) {
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
      uVar12 = puVar9[0x11];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4cd), iVar5 == 0)) {
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
      uVar12 = puVar2[0x12];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4ce), iVar5 == 0)) {
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
      uVar12 = puVar3[0x14];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4cf), iVar5 == 0)) {
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
      uVar12 = puVar6[0x13];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4d0), iVar5 == 0)) {
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
      uVar12 = puVar7[0x15];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4d1), iVar5 == 0)) {
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
      uVar12 = puVar8[0x16];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4d2), iVar5 == 0)) {
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
      uVar12 = puVar9[0x17];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4d3), iVar5 == 0)) {
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
  (**(code **)(*piVar1 + 0x84))(puVar8);
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
      uVar12 = puVar2[0x18];
      FUN_00444030(5);
      *puVar9 = &PTR_FUN_007e48ac;
      puVar9[3] = uVar12;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x4d4), iVar5 == 0)) {
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
  (**(code **)(*piVar1 + 0x84))(puVar8);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    puVar2 = operator_new(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      piVar11 = (int *)FUN_004441b0(0x4d5,0);
    }
    else {
      uVar12 = puVar3[0x19];
      FUN_00444030(5);
      puVar2[3] = uVar12;
      *puVar2 = &PTR_FUN_007e48ac;
      piVar11 = (int *)FUN_004441b0(0x4d5,puVar2);
    }
  }
  (**(code **)(*piVar1 + 0x84))();
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar12 = 0;
  }
  else {
    puVar2 = operator_new(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      uVar12 = FUN_004441b0(0x4d6,0);
    }
    else {
      uVar12 = puVar6[0x1a];
      FUN_00444030(5);
      puVar2[3] = uVar12;
      *puVar2 = &PTR_FUN_007e48ac;
      uVar12 = FUN_004441b0(0x4d6,puVar2);
    }
  }
  (**(code **)(*piVar1 + 0x84))(uVar12);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar12 = 0;
  }
  else {
    pvVar4 = operator_new(0x10);
    if (pvVar4 == (void *)0x0) {
      uVar12 = FUN_004441b0(0x4d7,0);
    }
    else {
      uVar12 = FUN_004440b0(puVar7[0x1b]);
      uVar12 = FUN_004441b0(0x4d7,uVar12);
    }
  }
  (**(code **)(*piVar1 + 0x84))(uVar12);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar12 = 0;
  }
  else {
    pvVar4 = operator_new(0x10);
    if (pvVar4 == (void *)0x0) {
      uVar12 = FUN_004441b0(0x4d8,0);
    }
    else {
      uVar12 = FUN_004440b0(puVar7[0x1c]);
      uVar12 = FUN_004441b0(0x4d8,uVar12);
    }
  }
  (**(code **)(*piVar1 + 0x84))(uVar12);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar12 = 0;
  }
  else {
    pvVar4 = operator_new(0x10);
    if (pvVar4 == (void *)0x0) {
      uVar12 = FUN_004441b0(0x4d9,0);
    }
    else {
      uVar12 = FUN_004440b0(puVar7[0x1d]);
      uVar12 = FUN_004441b0(0x4d9,uVar12);
    }
  }
  (**(code **)(*piVar1 + 0x84))(uVar12);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar12 = 0;
  }
  else {
    pvVar13 = operator_new(0x10);
    if (pvVar13 == (void *)0x0) {
      uVar12 = FUN_004441b0(0x4da,0);
    }
    else {
      uVar12 = FUN_004440b0((float)puVar7[0x1e] * _DAT_007e543c);
      uVar12 = FUN_004441b0(0x4da,uVar12);
    }
  }
  (**(code **)(*piVar1 + 0x84))(uVar12);
  puVar2 = (undefined4 *)puVar7[0x20];
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = pvVar4;
    return piVar1;
  }
  do {
    pvVar13 = operator_new(0x14);
    if (pvVar13 == (void *)0x0) {
      uVar12 = 0;
      piVar1 = piVar11;
    }
    else {
      uVar12 = (*(code *)**(undefined4 **)*puVar2)();
      uVar12 = FUN_004441b0(0x4de,uVar12);
      piVar1 = piVar11;
    }
    piVar11 = piVar1;
    (**(code **)(*piVar1 + 0x84))(uVar12);
    puVar2 = (undefined4 *)puVar2[2];
  } while (puVar2 != (undefined4 *)0x0);
  ExceptionList = pvVar4;
  return piVar1;
}


