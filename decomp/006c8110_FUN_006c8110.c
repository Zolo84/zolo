// FUN_006c8110 @ 6c8110 size=1795

int * __fastcall FUN_006c8110(int param_1)

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
  undefined4 uVar10;
  void *pvVar11;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d89b3;
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
      uVar10 = *(undefined4 *)(param_1 + 4);
      FUN_004252e0(5);
      *puVar3 = &PTR_FUN_007e48ac;
      puVar3[3] = uVar10;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (pvVar4 == (void *)0x0) {
LAB_006c820f:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x4b4);
      if (iVar5 == 0) goto LAB_006c820f;
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
      uVar10 = *(undefined4 *)(unaff_EBX + 8);
      FUN_004252e0(5);
      *puVar6 = &PTR_FUN_007e48ac;
      puVar6[3] = uVar10;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 5;
    pvVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    if (pvVar4 == (void *)0x0) {
LAB_006c82df:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x4b5);
      if (iVar5 == 0) goto LAB_006c82df;
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
      uVar10 = *(undefined4 *)(unaff_EBP + 0xc);
      FUN_004252e0(5);
      *puVar7 = &PTR_FUN_007e48ac;
      puVar7[3] = uVar10;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 8;
    pvVar4 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,9);
    if (pvVar4 == (void *)0x0) {
LAB_006c83af:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x4b6);
      if (iVar5 == 0) goto LAB_006c83af;
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
      uVar10 = *(undefined4 *)(unaff_ESI + 0x14);
      FUN_004252e0(5);
      *puVar8 = &PTR_FUN_007e48ac;
      puVar8[3] = uVar10;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006c847f:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x4b8);
      if (iVar5 == 0) goto LAB_006c847f;
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
      uVar10 = *(undefined4 *)(unaff_EDI + 0x18);
      FUN_00444030(5);
      *puVar9 = &PTR_FUN_007e48ac;
      puVar9[3] = uVar10;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006c854f:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x4b9);
      if (iVar5 == 0) goto LAB_006c854f;
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
      uVar10 = puVar2[8];
      FUN_00444030(5);
      *puVar9 = &PTR_FUN_007e48ac;
      puVar9[3] = uVar10;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006c861b:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x4ba);
      if (iVar5 == 0) goto LAB_006c861b;
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
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
    goto LAB_006c8711;
  }
  puVar8 = operator_new(0x10);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    uVar10 = puVar3[9];
    FUN_00444030(5);
    *puVar8 = &PTR_FUN_007e48ac;
    puVar8[3] = uVar10;
  }
  FUN_004252e0(0);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
LAB_006c86e7:
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0053e740(0x4bc);
    if (iVar5 == 0) goto LAB_006c86e7;
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  }
  puVar2[3] = iVar5;
  if (puVar8 == (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_007e3878;
    puVar2[4] = 0;
  }
  else {
    puVar8[2] = puVar8[2] + 1;
    puVar2[4] = puVar8;
    *puVar2 = &PTR_FUN_007e3878;
  }
LAB_006c8711:
  (**(code **)(*piVar1 + 0x84))(puVar2);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar10 = 0;
  }
  else {
    pvVar4 = operator_new(0x10);
    if (pvVar4 == (void *)0x0) {
      uVar10 = FUN_004441b0(0x4bd,0);
    }
    else {
      uVar10 = FUN_004440b0(puVar6[10]);
      uVar10 = FUN_004441b0(0x4bd,uVar10);
    }
  }
  (**(code **)(*piVar1 + 0x84))(uVar10);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar10 = 0;
  }
  else {
    pvVar11 = operator_new(0x10);
    if (pvVar11 == (void *)0x0) {
      uVar10 = FUN_004441b0(0x4be,0);
    }
    else {
      uVar10 = FUN_004440b0(puVar7[0xb]);
      uVar10 = FUN_004441b0(0x4be,uVar10);
    }
  }
  (**(code **)(*piVar1 + 0x84))(uVar10);
  ExceptionList = pvVar4;
  return piVar1;
}


