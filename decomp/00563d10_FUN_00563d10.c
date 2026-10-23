// FUN_00563d10 @ 563d10 size=1341

int * __fastcall FUN_00563d10(int param_1)

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
  int *local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c695d;
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
  puVar1 = operator_new(0x14);
  local_4 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar2 = FUN_00427f80();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar3 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x523), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
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
  (**(code **)(*local_20 + 0x84))(puVar1);
  puVar1 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
    unaff_EBX = local_20;
  }
  else {
    iVar2 = FUN_00427f80();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 6;
    local_20 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    if ((local_20 == (int *)0x0) || (iVar4 = FUN_0053e740(0x22a), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
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
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*unaff_EBX + 0x84))(puVar1);
  if (*(int *)(param_1 + 10) != 0) {
    puVar1 = operator_new(0x14);
    local_c = (void *)0x8;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      iVar2 = FUN_00427f80();
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_c._0_1_ = 9;
      pvVar3 = operator_new(0x14);
      local_c = (void *)CONCAT31(local_c._1_3_,10);
      if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x2be), iVar4 == 0)) {
        iVar4 = 0;
      }
      else {
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar1[3] = iVar4;
      unaff_EBX = unaff_EBP;
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
    local_c = (void *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar1);
  }
  iVar2 = 0;
  if (0 < *(int *)(*(int *)((int)local_20 + 6) + 0x13a)) {
    puVar1 = (undefined4 *)((int)local_20 + 0x12);
    do {
      puVar5 = operator_new(0x14);
      local_c = (void *)0xb;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar6 = operator_new(0x10);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          uVar7 = *puVar1;
          puVar6[1] = 5;
          puVar6[2] = 0;
          puVar6[3] = uVar7;
          *puVar6 = &PTR_FUN_007e48ac;
        }
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = &PTR_LAB_007e38f8;
        local_c._0_1_ = 0xc;
        pvVar3 = operator_new(0x14);
        local_c = (void *)CONCAT31(local_c._1_3_,0xd);
        if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x296), iVar4 == 0)) {
          iVar4 = 0;
        }
        else {
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        }
        puVar5[3] = iVar4;
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
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)(*(int *)((int)local_20 + 6) + 0x13a));
  }
  if (*(char *)((int)local_20 + 0x2e) != '\0') {
    puVar1 = operator_new(0x14);
    local_c = (void *)0xe;
    if (puVar1 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      pvVar3 = operator_new(0x10);
      local_c._0_1_ = 0xf;
      if (pvVar3 == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        uVar7 = FUN_005341fe(0x340);
        iVar2 = FUN_0053ee00(uVar7);
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_c._0_1_ = 0x10;
      pvVar3 = operator_new(0x14);
      local_c = (void *)CONCAT31(local_c._1_3_,0x11);
      if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x1b1), iVar4 == 0)) {
        iVar4 = 0;
      }
      else {
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar1[3] = iVar4;
      iVar4 = 0;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        iVar4 = iVar2;
      }
      puVar1[4] = iVar4;
      *puVar1 = &PTR_FUN_007e3878;
      puVar5 = puVar1;
    }
    local_c = (void *)0xffffffff;
    (**(code **)(*unaff_EBP + 0x84))(puVar5);
    ExceptionList = puVar1;
    return unaff_EBP;
  }
  puVar1 = operator_new(0x14);
  local_c = (void *)0x12;
  if (puVar1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    pvVar3 = operator_new(0x10);
    local_c._0_1_ = 0x13;
    if (pvVar3 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      uVar7 = FUN_005341fe(0x7b);
      iVar2 = FUN_0053ee00(uVar7);
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 0x14;
    pvVar3 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0x15);
    if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x1b1), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar1[3] = iVar4;
    iVar4 = 0;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      iVar4 = iVar2;
    }
    puVar1[4] = iVar4;
    *puVar1 = &PTR_FUN_007e3878;
    puVar5 = puVar1;
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*unaff_EBP + 0x84))(puVar5);
  ExceptionList = puVar1;
  return unaff_EBP;
}


