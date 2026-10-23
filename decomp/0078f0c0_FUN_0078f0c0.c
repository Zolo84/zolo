// FUN_0078f0c0 @ 78f0c0 size=1080

int * FUN_0078f0c0(void)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e163d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x1e);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar2 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *piVar2 = (int)&PTR_FUN_007e3a28;
    piVar2[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  puVar3 = operator_new(0x14);
  local_4 = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar4 = operator_new(0xe);
    uVar1 = DAT_0087b630;
    local_4._0_1_ = 3;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_004252e0(6);
      *(undefined1 *)(puVar4 + 3) = uVar1;
      *puVar4 = &PTR_FUN_007e76a0;
    }
    *puVar3 = &PTR_LAB_007e38f8;
    puVar3[1] = 0;
    puVar3[2] = 0;
    local_4._0_1_ = 4;
    pvVar5 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (pvVar5 == (void *)0x0) {
LAB_0078f1c2:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x150);
      if (iVar6 == 0) goto LAB_0078f1c2;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      puVar3[4] = puVar4;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x84))(puVar3);
  puVar3 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x6;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar4 = operator_new(0xe);
    uVar1 = DAT_0087b631;
    puStack_8._0_1_ = 7;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_004252e0(6);
      *(undefined1 *)(puVar4 + 3) = uVar1;
      *puVar4 = &PTR_FUN_007e76a0;
    }
    *puVar3 = &PTR_LAB_007e38f8;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puStack_8._0_1_ = 8;
    pvVar5 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
    if (pvVar5 == (void *)0x0) {
LAB_0078f294:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x134);
      if (iVar6 == 0) goto LAB_0078f294;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      puVar3[4] = puVar4;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))(puVar3);
  puVar3 = operator_new(0x14);
  local_c = (void *)0xa;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar4 = operator_new(0xe);
    uVar1 = DAT_0087b632;
    local_c._0_1_ = 0xb;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00444030(6);
      *(undefined1 *)(puVar4 + 3) = uVar1;
      *puVar4 = &PTR_FUN_007e76a0;
    }
    local_c._0_1_ = 10;
    FUN_004252e0(0);
    local_c._0_1_ = 0xc;
    pvVar5 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0xd);
    if (pvVar5 == (void *)0x0) {
LAB_0078f367:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x2bd);
      if (iVar6 == 0) goto LAB_0078f367;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      puVar3[4] = puVar4;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))(puVar3);
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
    goto LAB_0078f460;
  }
  puVar4 = operator_new(0xe);
  uVar1 = DAT_0087b633;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00444030(6);
    *(undefined1 *)(puVar4 + 3) = uVar1;
    *puVar4 = &PTR_FUN_007e76a0;
  }
  FUN_004252e0(0);
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
LAB_0078f436:
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_0053e740(0xc);
    if (iVar6 == 0) goto LAB_0078f436;
    *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
  }
  puVar3[3] = iVar6;
  if (puVar4 == (undefined4 *)0x0) {
    *puVar3 = &PTR_FUN_007e3878;
    puVar3[4] = 0;
  }
  else {
    puVar4[2] = puVar4[2] + 1;
    puVar3[4] = puVar4;
    *puVar3 = &PTR_FUN_007e3878;
  }
LAB_0078f460:
  (**(code **)(*piVar2 + 0x84))(puVar3);
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    pvVar7 = operator_new(0xe);
    if (pvVar7 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_004f6330(DAT_0087b634);
    }
    uVar8 = FUN_004441b0(0x371,uVar8);
  }
  (**(code **)(*piVar2 + 0x84))(uVar8);
  ExceptionList = pvVar5;
  return piVar2;
}


