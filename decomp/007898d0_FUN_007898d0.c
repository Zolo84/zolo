// FUN_007898d0 @ 7898d0 size=939

int * __fastcall FUN_007898d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e1431;
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
    pvVar3 = operator_new(0x10);
    local_4._0_1_ = 3;
    if (pvVar3 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar4 = FUN_004af700(*param_1);
      iVar5 = FUN_0053ee00(uVar4);
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 4;
    pvVar3 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (pvVar3 == (void *)0x0) {
LAB_007899d5:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0xec);
      if (iVar6 == 0) goto LAB_007899d5;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar2[3] = iVar6;
    if (iVar5 == 0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar2[4] = iVar5;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar2);
  local_1c = operator_new(0x14);
  puStack_8 = (undefined1 *)0x6;
  if (local_1c == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar3 = operator_new(0x10);
    puStack_8._0_1_ = 7;
    if (pvVar3 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar4 = FUN_004af700(*(undefined4 *)(unaff_EBX + 4));
      iVar5 = FUN_0053ee00(uVar4);
    }
    local_1c[1] = 0;
    local_1c[2] = 0;
    *local_1c = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 8;
    pvVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
    if (pvVar3 == (void *)0x0) {
LAB_00789aa6:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0xec);
      if (iVar6 == 0) goto LAB_00789aa6;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    local_1c[3] = iVar6;
    puVar2 = local_1c;
    if (iVar5 == 0) {
      *local_1c = &PTR_FUN_007e3878;
      local_1c[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      local_1c[4] = iVar5;
      *local_1c = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar2);
  puVar2 = operator_new(0x14);
  local_c = (void *)0xa;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_1c = *(undefined4 **)(unaff_EBP + 0xc);
    iVar5 = FUN_0054f410();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 0xb;
    pvVar3 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0xc);
    if (pvVar3 == (void *)0x0) {
LAB_00789b61:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0xfd);
      if (iVar6 == 0) goto LAB_00789b61;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar2[3] = iVar6;
    if (iVar5 == 0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar2[4] = iVar5;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar2);
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
    goto LAB_00789c53;
  }
  puVar7 = operator_new(0x10);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    uVar4 = *(undefined4 *)(unaff_ESI + 8);
    puVar7[1] = 4;
    puVar7[2] = 0;
    puVar7[3] = uVar4;
    *puVar7 = &PTR_FUN_007e3978;
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_LAB_007e38f8;
  pvVar3 = operator_new(0x14);
  if (pvVar3 == (void *)0x0) {
LAB_00789c29:
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0053e740(0x1f1);
    if (iVar5 == 0) goto LAB_00789c29;
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  }
  puVar2[3] = iVar5;
  if (puVar7 == (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_007e3878;
    puVar2[4] = 0;
  }
  else {
    puVar7[2] = puVar7[2] + 1;
    puVar2[4] = puVar7;
    *puVar2 = &PTR_FUN_007e3878;
  }
LAB_00789c53:
  (**(code **)(*piVar1 + 0x84))(puVar2);
  ExceptionList = local_1c;
  return piVar1;
}


