// FUN_0078d0d0 @ 78d0d0 size=846

int * __fastcall FUN_0078d0d0(int *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *unaff_EBX;
  int *unaff_EBP;
  undefined4 local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e1518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20 = operator_new(0x1e);
  local_4 = 0;
  if (local_20 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_20 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    local_20[3] = (int)&PTR_LAB_007e39f8;
    *local_20 = (int)&PTR_FUN_007e3a28;
  }
  local_4 = 0xffffffff;
  puVar5 = operator_new(0x14);
  local_4 = 2;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    pvVar6 = operator_new(0x14);
    local_4._0_1_ = 3;
    if (pvVar6 == (void *)0x0) {
      iVar8 = 0;
    }
    else {
      uVar7 = FUN_004af700(*param_1);
      iVar8 = FUN_0053e770(uVar7);
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 4;
    pvVar6 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (pvVar6 == (void *)0x0) {
LAB_0078d1dc:
      iVar9 = 0;
    }
    else {
      iVar9 = FUN_0053e740(0x10a);
      if (iVar9 == 0) goto LAB_0078d1dc;
      *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
    }
    puVar5[3] = iVar9;
    if (iVar8 == 0) {
      *puVar5 = &PTR_FUN_007e3878;
      puVar5[4] = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      puVar5[4] = iVar8;
      *puVar5 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_20 + 0x84))(puVar5);
  puVar5 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x6;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
    unaff_EBX = local_20;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
      local_20 = param_1;
    }
    else {
      iVar8 = param_1[1];
      FUN_004252e0(4);
      puVar10[3] = iVar8;
      *puVar10 = &PTR_FUN_007e3978;
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 7;
    pvVar6 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if (pvVar6 == (void *)0x0) {
LAB_0078d2ab:
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_0053e740(0x523);
      if (iVar8 == 0) goto LAB_0078d2ab;
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar5[3] = iVar8;
    param_1 = local_20;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar5 = &PTR_FUN_007e3878;
      puVar5[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar5[4] = puVar10;
      *puVar5 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*unaff_EBX + 0x84))(puVar5);
  puVar5 = operator_new(0x14);
  local_c = (void *)0x9;
  if (puVar5 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
    goto LAB_0078d3f2;
  }
  puVar11 = operator_new(0x10);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    iVar8 = param_1[2];
    sVar4 = *(short *)(DAT_00893530 + 0x18);
    iVar9 = param_1[3];
    cVar1 = *(char *)(DAT_00893530 + 0x16);
    local_20._2_1_ = (char)((uint)iVar8 >> 0x10);
    cVar2 = *(char *)(DAT_00893530 + 0x15);
    cVar3 = *(char *)(DAT_00893530 + 0x14);
    puVar11[1] = 4;
    puVar11[2] = 0;
    local_20._1_1_ = (char)((uint)iVar8 >> 8);
    *puVar11 = &PTR_FUN_007e3978;
    local_20._0_1_ = (char)iVar8;
    puVar11[3] = (((((((int)(short)iVar9 - (int)sVar4) * 0xc - (int)cVar1) + (int)local_20._2_1_) *
                    0x1e - (int)cVar2) + (int)local_20._1_1_) * 0x18 - (int)cVar3) +
                 (int)(char)local_20;
  }
  FUN_004252e0(0);
  local_c._0_1_ = 10;
  pvVar6 = operator_new(0x14);
  local_c = (void *)CONCAT31(local_c._1_3_,0xb);
  if (pvVar6 == (void *)0x0) {
LAB_0078d3c8:
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_0053e740(0xfc);
    if (iVar8 == 0) goto LAB_0078d3c8;
    *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
  }
  puVar5[3] = iVar8;
  puVar10 = puVar5;
  if (puVar11 == (undefined4 *)0x0) {
    *puVar5 = &PTR_FUN_007e3878;
    puVar5[4] = 0;
  }
  else {
    puVar11[2] = puVar11[2] + 1;
    puVar5[4] = puVar11;
    *puVar5 = &PTR_FUN_007e3878;
  }
LAB_0078d3f2:
  local_c = (void *)0xffffffff;
  (**(code **)(*unaff_EBP + 0x84))(puVar10);
  ExceptionList = puVar5;
  return unaff_EBP;
}


