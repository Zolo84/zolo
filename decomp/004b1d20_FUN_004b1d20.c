// FUN_004b1d20 @ 4b1d20 size=1079

int * __fastcall FUN_004b1d20(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *unaff_EBX;
  int *unaff_EBP;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007be447;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = operator_new(0x1e);
  local_4 = 0;
  if (local_1c == (int *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_1c = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *local_1c = (int)&PTR_FUN_007e3a28;
    local_1c[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  puVar1 = operator_new(0x14);
  local_4 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar2 = FUN_0054f410();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar3 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (pvVar3 == (void *)0x0) {
LAB_004b1dfa:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0xfd);
      if (iVar4 == 0) goto LAB_004b1dfa;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar1[3] = iVar4;
    if (iVar2 == 0) {
      *puVar1 = &PTR_FUN_007e3878;
      puVar1[4] = 0;
    }
    else {
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      puVar1[4] = iVar2;
      *puVar1 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_1c + 0x84))(puVar1);
  puVar1 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  if (puVar1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    iVar2 = FUN_00427f80();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 6;
    pvVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    if (pvVar3 == (void *)0x0) {
LAB_004b1e9d:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x12d);
      if (iVar4 == 0) goto LAB_004b1e9d;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar1[3] = iVar4;
    puVar5 = puVar1;
    if (iVar2 == 0) {
      *puVar1 = &PTR_FUN_007e3878;
      puVar1[4] = 0;
    }
    else {
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      puVar1[4] = iVar2;
      *puVar1 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*unaff_EBX + 0x84))(puVar5);
  if (param_1[5] != -1) {
    puVar5 = operator_new(0x14);
    local_c = (void *)0x8;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar6 = operator_new(0x10);
      local_c._0_1_ = 9;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        iVar2 = param_1[5];
        FUN_004252e0(4);
        puVar6[3] = iVar2;
        *puVar6 = &PTR_FUN_007e3978;
        param_1 = unaff_EBX;
      }
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_LAB_007e38f8;
      local_c._0_1_ = 10;
      pvVar3 = operator_new(0x14);
      local_c = (void *)CONCAT31(local_c._1_3_,0xb);
      if (pvVar3 == (void *)0x0) {
LAB_004b1f7c:
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_0053e740(0x12e);
        if (iVar2 == 0) goto LAB_004b1f7c;
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      }
      puVar5[3] = iVar2;
      if (puVar6 == (undefined4 *)0x0) {
        *puVar5 = &PTR_FUN_007e3878;
        puVar5[4] = 0;
      }
      else {
        puVar6[2] = puVar6[2] + 1;
        puVar5[4] = puVar6;
        *puVar5 = &PTR_FUN_007e3878;
      }
    }
    local_c = (void *)0xffffffff;
    (**(code **)(*unaff_EBP + 0x84))(puVar5);
  }
  if (param_1[4] == -1) goto LAB_004b20a3;
  puVar5 = operator_new(0x14);
  local_c = (void *)0xc;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar6 = operator_new(0x10);
    local_c._0_1_ = 0xd;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar2 = unaff_EBX[4];
      FUN_00444030(4);
      puVar6[3] = iVar2;
      *puVar6 = &PTR_FUN_007e3978;
    }
    local_c._0_1_ = 0xc;
    FUN_004252e0(0);
    local_c._0_1_ = 0xe;
    pvVar3 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0xf);
    if (pvVar3 == (void *)0x0) {
LAB_004b205d:
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0053e740(0x261);
      if (iVar2 == 0) goto LAB_004b205d;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    puVar5[3] = iVar2;
    if (puVar6 == (undefined4 *)0x0) {
      *puVar5 = &PTR_FUN_007e3878;
      puVar5[4] = 0;
    }
    else {
      puVar6[2] = puVar6[2] + 1;
      puVar5[4] = puVar6;
      *puVar5 = &PTR_FUN_007e3878;
    }
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*unaff_EBP + 0x84))(puVar5);
  param_1 = unaff_EBX;
LAB_004b20a3:
  if (param_1[3] != -1) {
    pvVar3 = operator_new(0x14);
    local_c = (void *)0x10;
    if (pvVar3 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar1 = operator_new(0x10);
      local_c._0_1_ = 0x11;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        iVar2 = unaff_EBX[3];
        FUN_00444030(4);
        puVar1[3] = iVar2;
        *puVar1 = &PTR_FUN_007e3978;
      }
      local_c = (void *)CONCAT31(local_c._1_3_,0x10);
      uVar7 = FUN_004441b0(0x85,puVar1);
    }
    local_c = (void *)0xffffffff;
    (**(code **)(*unaff_EBP + 0x84))(uVar7);
    ExceptionList = pvVar3;
    return unaff_EBP;
  }
  ExceptionList = puVar1;
  return unaff_EBP;
}


