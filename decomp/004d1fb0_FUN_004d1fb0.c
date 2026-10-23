// FUN_004d1fb0 @ 4d1fb0 size=1785

int * FUN_004d1fb0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int *unaff_EBX;
  int *unaff_EBP;
  int *piVar12;
  int *unaff_ESI;
  undefined2 uVar13;
  undefined2 uVar14;
  int iStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bf665;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00419460();
  piVar1 = operator_new(0x1e);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_00444030();
    *piVar1 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *piVar1 = (int)&PTR_FUN_007e3a28;
    piVar1[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  piVar2 = operator_new(0x14);
  local_4 = 2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar3 = FUN_00427f80();
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar2[3] = iVar5;
    if (iVar3 == 0) {
      *piVar2 = (int)&PTR_FUN_007e3878;
      piVar2[4] = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      piVar2[4] = iVar3;
      *piVar2 = (int)&PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x84))();
  piVar6 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  piVar12 = piVar1;
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    puStack_8._0_1_ = 6;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)(*(int *)(iStack_24 + 4) + 0x18);
      FUN_004252e0();
      puVar7[3] = uVar11;
      *puVar7 = &PTR_FUN_007e3978;
      piVar12 = unaff_EBX;
    }
    piVar6[1] = 0;
    piVar6[2] = 0;
    *piVar6 = (int)&PTR_LAB_007e38f8;
    puStack_8._0_1_ = 7;
    pvVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    piVar6[3] = iVar3;
    if (puVar7 == (undefined4 *)0x0) {
      *piVar6 = (int)&PTR_FUN_007e3878;
      piVar6[4] = 0;
    }
    else {
      puVar7[2] = puVar7[2] + 1;
      piVar6[4] = (int)puVar7;
      *piVar6 = (int)&PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar12 + 0x84))();
  puVar7 = operator_new(0x14);
  local_c = (void *)0x9;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0x10);
    local_c._0_1_ = 10;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)((int)piVar1 + 0xbe);
      FUN_004252e0();
      puVar8[3] = uVar11;
      *puVar8 = &PTR_FUN_007e3978;
      piVar12 = unaff_EBP;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 0xb;
    pvVar4 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0xc);
    if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    puVar7[3] = iVar3;
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
  uVar13 = SUB42(puVar7,0);
  uVar14 = (undefined2)((uint)puVar7 >> 0x10);
  local_c = (void *)0xffffffff;
  (**(code **)(*piVar12 + 0x84))();
  puVar7 = operator_new(0x14);
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = operator_new(0x10);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)((int)unaff_EBX + 10);
      FUN_004252e0();
      puVar8[3] = uVar11;
      *puVar8 = &PTR_FUN_007e3978;
      piVar12 = unaff_ESI;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    puVar7[3] = iVar3;
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
  (**(code **)(*piVar12 + 0x84))();
  puVar7 = operator_new(0x14);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    iVar3 = FUN_0054f410();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x156), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar7[3] = iVar5;
    if (iVar3 == 0) {
      *puVar7 = &PTR_FUN_007e3878;
      puVar7[4] = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      puVar7[4] = iVar3;
      *puVar7 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar12 + 0x84))(puVar7);
  puVar7 = operator_new(0x14);
  if (puVar7 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    iVar3 = FUN_0054f410();
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x157), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar7[3] = iVar5;
    puVar8 = puVar7;
    if (iVar3 == 0) {
      *puVar7 = &PTR_FUN_007e3878;
      puVar7[4] = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      puVar7[4] = iVar3;
      *puVar7 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))(puVar8);
  puVar8 = operator_new(0x14);
  if (puVar8 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar9 = operator_new(0x10);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      piVar2 = piVar6;
      FUN_00444030(4);
      puVar9[3] = puVar7;
      *puVar9 = &PTR_FUN_007e3978;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(0x1ab), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    puVar8[3] = iVar3;
    puVar10 = puVar8;
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
  (**(code **)(*piVar2 + 0x84))(puVar10);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      FUN_00444030(4);
      puVar10[3] = puVar7;
      *puVar10 = &PTR_FUN_007e3978;
    }
    uVar11 = FUN_004441b0(0x1ac,puVar10);
  }
  piVar1 = (int *)CONCAT22(uVar14,uVar13);
  (**(code **)(*piVar1 + 0x84))(uVar11);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar7 = operator_new(0x1a);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      FUN_0053e740(0x523);
      FUN_00446d10(&stack0xffffffb8);
      *puVar7 = &PTR_FUN_007e3ba4;
    }
    uVar11 = FUN_004441b0(0x10a,puVar7);
  }
  (**(code **)(*piVar1 + 0x84))(uVar11);
  ExceptionList = puVar8;
  return piVar1;
}


