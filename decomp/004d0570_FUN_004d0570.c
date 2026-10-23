// FUN_004d0570 @ 4d0570 size=906

int * __fastcall FUN_004d0570(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *unaff_EBX;
  int *unaff_EBP;
  int unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bf3b9;
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
    pvVar3 = operator_new(0x14);
    local_4._0_1_ = 3;
    if (pvVar3 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar4 = FUN_004f5640(*(undefined4 *)(param_1 + 0x10));
      iVar5 = FUN_0053e740(uVar4);
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 4;
    pvVar3 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (pvVar3 == (void *)0x0) {
LAB_004d067e:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x141);
      if (iVar6 == 0) goto LAB_004d067e;
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
  puVar2 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x6;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      iVar5 = unaff_EBX[1];
      puVar7[1] = 4;
      puVar7[2] = 0;
      puVar7[3] = iVar5;
      *puVar7 = &PTR_FUN_007e3978;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 7;
    pvVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if (pvVar3 == (void *)0x0) {
LAB_004d0746:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0xf4);
      if (iVar5 == 0) goto LAB_004d0746;
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
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar2);
  puVar2 = operator_new(0x14);
  local_c = (void *)0x9;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
    goto LAB_004d0849;
  }
  puVar7 = operator_new(0x10);
  local_c._0_1_ = 10;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    iVar5 = unaff_EBP[2];
    FUN_004252e0(5);
    *puVar7 = &PTR_FUN_007e48ac;
    puVar7[3] = iVar5;
  }
  local_c._0_1_ = 9;
  FUN_004252e0(0);
  local_c._0_1_ = 0xb;
  pvVar3 = operator_new(0x14);
  local_c = (void *)CONCAT31(local_c._1_3_,0xc);
  if (pvVar3 == (void *)0x0) {
LAB_004d081f:
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0053e740(0x23c);
    if (iVar5 == 0) goto LAB_004d081f;
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
LAB_004d0849:
  local_c = (void *)0xffffffff;
  (**(code **)(*unaff_EBX + 0x84))(puVar2);
  pvVar3 = operator_new(0x14);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar2 = operator_new(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar4 = *(undefined4 *)(unaff_ESI + 0xc);
      FUN_00444030(5);
      *puVar2 = &PTR_FUN_007e48ac;
      puVar2[3] = uVar4;
    }
    uVar4 = FUN_004441b0(0x23d,puVar2);
  }
  (**(code **)(*unaff_EBP + 0x84))(uVar4);
  ExceptionList = pvVar3;
  return unaff_EBP;
}


