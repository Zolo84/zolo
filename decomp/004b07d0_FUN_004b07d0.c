// FUN_004b07d0 @ 4b07d0 size=1299

int * __fastcall FUN_004b07d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *unaff_EBX;
  int *piVar9;
  int *local_24;
  int iStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007be1e5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_24 = operator_new(0x1e);
  local_4 = 0;
  if (local_24 == (int *)0x0) {
    local_24 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_24 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    local_24[3] = (int)&PTR_LAB_007e39f8;
    *local_24 = (int)&PTR_FUN_007e3a28;
  }
  local_4 = 0xffffffff;
  puVar1 = operator_new(0x14);
  local_4 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = operator_new(0x10);
    local_4._0_1_ = 3;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar8 = *param_1;
      FUN_00444030(4);
      puVar2[3] = uVar8;
      *puVar2 = &PTR_FUN_007e3978;
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 4;
    pvVar3 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,5);
    if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x4ec), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar1[3] = iVar4;
    if (puVar2 == (undefined4 *)0x0) {
      *puVar1 = &PTR_FUN_007e3878;
      puVar1[4] = 0;
    }
    else {
      puVar2[2] = puVar2[2] + 1;
      puVar1[4] = puVar2;
      *puVar1 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_24 + 0x84))(puVar1);
  if (*(char *)(param_1 + 1) != '\0') {
    puVar1 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x6;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
      piVar9 = local_24;
    }
    else {
      puVar2 = operator_new(0x10);
      puStack_8._0_1_ = 7;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        FUN_00444030(4);
        puVar2[3] = 1;
        *puVar2 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 8;
      pvVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
      if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x4f2), iVar4 == 0)) {
        iVar4 = 0;
      }
      else {
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar1[3] = iVar4;
      piVar9 = unaff_EBX;
      if (puVar2 == (undefined4 *)0x0) {
        *puVar1 = &PTR_FUN_007e3878;
        puVar1[4] = 0;
      }
      else {
        puVar2[2] = puVar2[2] + 1;
        puVar1[4] = puVar2;
        *puVar1 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar9 + 0x84))(puVar1);
  }
  puVar1 = operator_new(0x14);
  puStack_8 = (undefined1 *)0xa;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar5 = operator_new(0x10);
    puStack_8._0_1_ = 0xb;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      uVar8 = *(undefined4 *)(iStack_20 + 0x2a);
      FUN_00444030(4);
      puVar5[3] = uVar8;
      *puVar5 = &PTR_FUN_007e3978;
    }
    puStack_8._0_1_ = 10;
    FUN_004252e0(0);
    puStack_8._0_1_ = 0xc;
    pvVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xd);
    if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x168), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar1[3] = iVar4;
    puVar2 = puVar1;
    if (puVar5 == (undefined4 *)0x0) {
      *puVar1 = &PTR_FUN_007e3878;
      puVar1[4] = 0;
    }
    else {
      puVar5[2] = puVar5[2] + 1;
      puVar1[4] = puVar5;
      *puVar1 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*unaff_EBX + 0x84))(puVar2);
  iVar4 = *(int *)((int)local_24 + 10);
  while (iVar4 != 0) {
    iVar4 = *(int *)(iVar4 + 10);
    puVar2 = operator_new(0x14);
    local_c = (void *)0xe;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar6 = FUN_00427f80();
      FUN_004252e0(0);
      local_c._0_1_ = 0xf;
      pvVar3 = operator_new(0x14);
      local_c = (void *)CONCAT31(local_c._1_3_,0x10);
      if ((pvVar3 == (void *)0x0) || (iVar7 = FUN_0053e740(0x12d), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar2[3] = iVar7;
      if (iVar6 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar2[4] = iVar6;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    local_c = (void *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
  }
  iVar4 = local_24[7];
  while (iVar4 != 0) {
    iVar4 = *(int *)(iVar4 + 10);
    puVar2 = operator_new(0x14);
    local_c = (void *)0x11;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar6 = FUN_00427f80();
      FUN_004252e0(0);
      local_c._0_1_ = 0x12;
      pvVar3 = operator_new(0x14);
      local_c = (void *)CONCAT31(local_c._1_3_,0x13);
      if ((pvVar3 == (void *)0x0) || (iVar7 = FUN_0053e740(0x4ef), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar2[3] = iVar7;
      if (iVar6 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar2[4] = iVar6;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    local_c = (void *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
  }
  for (iVar4 = *(int *)((int)local_24 + 0x36); iVar4 != 0; iVar4 = *(int *)(iVar4 + 10)) {
    pvVar3 = operator_new(0x14);
    local_c = (void *)0x14;
    if (pvVar3 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      FUN_00446d10(iVar4);
      uVar8 = FUN_00427f80();
      uVar8 = FUN_004441b0(0x32,uVar8);
    }
    local_c = (void *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(uVar8);
  }
  ExceptionList = puVar1;
  return unaff_EBX;
}


