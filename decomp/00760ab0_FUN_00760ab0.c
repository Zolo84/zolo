// FUN_00760ab0 @ 760ab0 size=1476

int * __fastcall FUN_00760ab0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e079c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)FUN_004429f0();
  piVar2 = operator_new(0x14);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar3 = operator_new(0x10);
    local_4._0_1_ = 1;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar5 = *(int *)((int)param_1 + 0xe);
      FUN_004252e0(4);
      *puVar3 = &PTR_FUN_007e3978;
      puVar3[3] = iVar5 + 1;
    }
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (pvVar4 == (void *)0x0) {
LAB_00760b71:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x40b);
      if (iVar5 == 0) goto LAB_00760b71;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar2[3] = iVar5;
    if (puVar3 == (undefined4 *)0x0) {
      *piVar2 = (int)&PTR_FUN_007e3878;
      piVar2[4] = 0;
    }
    else {
      puVar3[2] = puVar3[2] + 1;
      piVar2[4] = (int)puVar3;
      *piVar2 = (int)&PTR_FUN_007e3878;
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
    puStack_8._0_1_ = 5;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar5 = *(int *)((int)unaff_EBX + 0x12);
      FUN_004252e0(4);
      *puVar6 = &PTR_FUN_007e3978;
      puVar6[3] = iVar5 + 1;
      piVar1 = param_1;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 6;
    pvVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    if (pvVar4 == (void *)0x0) {
LAB_00760c47:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x40c);
      if (iVar5 == 0) goto LAB_00760c47;
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
  pvStack_c = (void *)0x8;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    pvStack_c._0_1_ = 9;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      iVar5 = *(int *)((int)unaff_EBP + 0x16);
      FUN_004252e0(4);
      *puVar7 = &PTR_FUN_007e3978;
      puVar7[3] = iVar5 + 1;
      piVar1 = unaff_EBX;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 10;
    pvVar4 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0xb);
    if (pvVar4 == (void *)0x0) {
LAB_00760d1d:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x40d);
      if (iVar5 == 0) goto LAB_00760d1d;
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
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar6);
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      iVar5 = *(int *)((int)unaff_ESI + 0x1a);
      FUN_00444030(4);
      *puVar7 = &PTR_FUN_007e3978;
      puVar7[3] = iVar5 + 1;
      piVar1 = unaff_EBP;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_00760df3:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x40e);
      if (iVar5 == 0) goto LAB_00760df3;
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
  (**(code **)(*piVar1 + 0x84))(puVar6);
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      iVar5 = *(int *)((int)unaff_EDI + 0x1e);
      FUN_00444030(4);
      *puVar7 = &PTR_FUN_007e3978;
      puVar7[3] = iVar5 + 1;
      piVar1 = unaff_ESI;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_00760eca:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x40f);
      if (iVar5 == 0) goto LAB_00760eca;
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
  (**(code **)(*piVar1 + 0x84))(puVar6);
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
    goto LAB_00760fcb;
  }
  puVar7 = operator_new(0x10);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    iVar5 = *(int *)((int)piVar2 + 0x22);
    FUN_00444030(4);
    *puVar7 = &PTR_FUN_007e3978;
    puVar7[3] = iVar5 + 1;
    piVar1 = unaff_EDI;
  }
  FUN_004252e0(0);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
LAB_00760fa1:
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0053e740(0x410);
    if (iVar5 == 0) goto LAB_00760fa1;
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
LAB_00760fcb:
  (**(code **)(*piVar1 + 0x84))(puVar6);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar6 = operator_new(0x10);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar5 = *(int *)((int)puVar3 + 0x26);
      FUN_00444030(4);
      *puVar6 = &PTR_FUN_007e3978;
      puVar6[3] = iVar5 + 1;
    }
    uVar8 = FUN_004441b0(0x411,puVar6);
  }
  (**(code **)(*piVar2 + 0x84))(uVar8);
  ExceptionList = pvVar4;
  return piVar2;
}


