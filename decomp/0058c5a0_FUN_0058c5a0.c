// FUN_0058c5a0 @ 58c5a0 size=1216

int * FUN_0058c5a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int unaff_ESI;
  int unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9a02;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x1e);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar1 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *piVar1 = (int)&PTR_FUN_007e3a28;
    piVar1[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  puVar2 = operator_new(0x14);
  local_4 = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    iVar3 = FUN_00427f80();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (pvVar4 == (void *)0x0) {
LAB_0058c678:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x523);
      if (iVar5 == 0) goto LAB_0058c678;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    if (iVar3 == 0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      puVar2[4] = iVar3;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x84))();
  puVar6 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    iVar3 = FUN_0054f410();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 6;
    pvVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    if (pvVar4 == (void *)0x0) {
LAB_0058c71f:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0xfd);
      if (iVar5 == 0) goto LAB_0058c71f;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar6[3] = iVar5;
    if (iVar3 == 0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      puVar6[4] = iVar3;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))();
  puVar7 = operator_new(0x14);
  pvStack_c = (void *)0x8;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    iVar3 = FUN_0054f410();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 9;
    pvVar4 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,10);
    if (pvVar4 == (void *)0x0) {
LAB_0058c7c6:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x157);
      if (iVar5 == 0) goto LAB_0058c7c6;
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
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar7);
  puVar7 = operator_new(0x14);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    iVar3 = (*(code *)**(undefined4 **)(unaff_ESI + 0x1d3c0))();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_0058c873:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x1a5);
      if (iVar5 == 0) goto LAB_0058c873;
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
  (**(code **)(*piVar1 + 0x84))(puVar7);
  puVar7 = operator_new(0x14);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    iVar3 = (*(code *)**(undefined4 **)(unaff_EDI + 0x18))();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_0058c919:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x1a4);
      if (iVar5 == 0) goto LAB_0058c919;
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
  (**(code **)(*piVar1 + 0x84))(puVar7);
  puVar7 = operator_new(0x14);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
    goto LAB_0058c9ef;
  }
  iVar3 = (*(code *)**(undefined4 **)(puVar2[4] + 0x12))();
  FUN_004252e0(0);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
LAB_0058c9bf:
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0053e740(0x1a2);
    if (iVar5 == 0) goto LAB_0058c9bf;
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
LAB_0058c9ef:
  (**(code **)(*piVar1 + 0x84))(puVar7);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (*(code *)**(undefined4 **)(puVar6[5] + 0x12))();
    uVar8 = FUN_004441b0(0x1a3,uVar8);
  }
  (**(code **)(*piVar1 + 0x84))(uVar8);
  ExceptionList = pvVar4;
  return piVar1;
}


