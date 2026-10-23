// FUN_006c9300 @ 6c9300 size=3483

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_006c9300(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  int *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d8c1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = operator_new(0x1e);
  if (local_18 == (int *)0x0) {
    local_18 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    local_18[4] = 0;
    local_18[5] = 0;
    local_18[6] = 0;
    *(undefined1 *)(local_18 + 7) = 0;
    local_18[3] = (int)&PTR_LAB_007e3ac0;
    *local_18 = (int)&PTR_FUN_007e3a28;
    local_18[3] = (int)&PTR_LAB_007e39f8;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 8)) {
    puVar1 = operator_new(0x14);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = __ftol();
        puVar2[1] = 4;
        puVar2[2] = 0;
        puVar2[3] = uVar3;
        *puVar2 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 1;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (pvVar4 == (void *)0x0) {
LAB_006c9408:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x433);
        if (iVar5 == 0) goto LAB_006c9408;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar1[3] = iVar5;
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
    (**(code **)(*local_18 + 0x84))(puVar1);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0xc)) {
    puVar1 = operator_new(0x14);
    local_4 = 3;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = __ftol();
        puVar2[1] = 4;
        puVar2[2] = 0;
        puVar2[3] = uVar3;
        *puVar2 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 4;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,5);
      if (pvVar4 == (void *)0x0) {
LAB_006c94f2:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x52b);
        if (iVar5 == 0) goto LAB_006c94f2;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar1[3] = iVar5;
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
    (**(code **)(*local_18 + 0x84))(puVar1);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x10)) {
    puVar1 = operator_new(0x14);
    local_4 = 6;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = __ftol();
        puVar2[1] = 4;
        puVar2[2] = 0;
        puVar2[3] = uVar3;
        *puVar2 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 7;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,8);
      if (pvVar4 == (void *)0x0) {
LAB_006c95dc:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x503);
        if (iVar5 == 0) goto LAB_006c95dc;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar1[3] = iVar5;
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
    (**(code **)(*local_18 + 0x84))(puVar1);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x14)) {
    puVar1 = operator_new(0x14);
    local_4 = 9;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = __ftol();
        FUN_004252e0(4);
        puVar2[3] = uVar3;
        *puVar2 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 10;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0xb);
      if (pvVar4 == (void *)0x0) {
LAB_006c96c7:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x4f4);
        if (iVar5 == 0) goto LAB_006c96c7;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar1[3] = iVar5;
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
    (**(code **)(*local_18 + 0x84))(puVar1);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x18)) {
    puVar1 = operator_new(0x14);
    local_4 = 0xc;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = __ftol();
        FUN_004252e0(4);
        puVar2[3] = uVar3;
        *puVar2 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0xd;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0xe);
      if (pvVar4 == (void *)0x0) {
LAB_006c97b2:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x4f5);
        if (iVar5 == 0) goto LAB_006c97b2;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar1[3] = iVar5;
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
    (**(code **)(*local_18 + 0x84))(puVar1);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x1c)) {
    puVar1 = operator_new(0x14);
    local_4 = 0xf;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = __ftol();
        FUN_004252e0(4);
        puVar2[3] = uVar3;
        *puVar2 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x10;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x11);
      if (pvVar4 == (void *)0x0) {
LAB_006c989d:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x4f6);
        if (iVar5 == 0) goto LAB_006c989d;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar1[3] = iVar5;
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
    (**(code **)(*local_18 + 0x84))(puVar1);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x20)) {
    puVar1 = operator_new(0x14);
    local_4 = 0x12;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = __ftol();
        FUN_004252e0(4);
        puVar2[3] = uVar3;
        *puVar2 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x13;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x14);
      if (pvVar4 == (void *)0x0) {
LAB_006c9988:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x4f7);
        if (iVar5 == 0) goto LAB_006c9988;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar1[3] = iVar5;
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
    (**(code **)(*local_18 + 0x84))(puVar1);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x24)) {
    puVar1 = operator_new(0x14);
    local_4 = 0x15;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = __ftol();
        FUN_004252e0(4);
        puVar2[3] = uVar3;
        *puVar2 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x16;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x17);
      if (pvVar4 == (void *)0x0) {
LAB_006c9a73:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x4f8);
        if (iVar5 == 0) goto LAB_006c9a73;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar1[3] = iVar5;
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
    (**(code **)(*local_18 + 0x84))(puVar1);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x28)) {
    puVar1 = operator_new(0x14);
    local_4 = 0x18;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = __ftol();
        FUN_004252e0(4);
        puVar2[3] = uVar3;
        *puVar2 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x19;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x1a);
      if (pvVar4 == (void *)0x0) {
LAB_006c9b5e:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x4f9);
        if (iVar5 == 0) goto LAB_006c9b5e;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar1[3] = iVar5;
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
    (**(code **)(*local_18 + 0x84))(puVar1);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x2c)) {
    puVar1 = operator_new(0x14);
    local_4 = 0x1b;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = __ftol();
        FUN_004252e0(4);
        puVar2[3] = uVar3;
        *puVar2 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x1c;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x1d);
      if (pvVar4 == (void *)0x0) {
LAB_006c9c49:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x4fa);
        if (iVar5 == 0) goto LAB_006c9c49;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar1[3] = iVar5;
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
    (**(code **)(*local_18 + 0x84))(puVar1);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x30)) {
    puVar1 = operator_new(0x14);
    local_4 = 0x1e;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = __ftol();
        FUN_00444030(4);
        puVar2[3] = uVar3;
        *puVar2 = &PTR_FUN_007e3978;
      }
      FUN_004252e0(0);
      local_4._0_1_ = 0x1f;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x20);
      if (pvVar4 == (void *)0x0) {
LAB_006c9d2f:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x4fb);
        if (iVar5 == 0) goto LAB_006c9d2f;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar1[3] = iVar5;
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
    (**(code **)(*local_18 + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0x34) <= _DAT_007e3380) goto LAB_006c9e5a;
  puVar1 = operator_new(0x14);
  local_4 = 0x21;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = operator_new(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar3 = __ftol();
      FUN_00444030(4);
      puVar2[3] = uVar3;
      *puVar2 = &PTR_FUN_007e3978;
    }
    FUN_004252e0(0);
    local_4._0_1_ = 0x22;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,0x23);
    if (pvVar4 == (void *)0x0) {
LAB_006c9e15:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x4fc);
      if (iVar5 == 0) goto LAB_006c9e15;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar1[3] = iVar5;
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
  (**(code **)(*local_18 + 0x84))(puVar1);
LAB_006c9e5a:
  if (_DAT_007e3380 < *(float *)(param_1 + 0x3c)) {
    pvVar4 = operator_new(0x14);
    local_4 = 0x24;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar1 = operator_new(0x10);
      if (puVar1 == (undefined4 *)0x0) {
        uVar3 = FUN_004441b0(0x4ff,0);
      }
      else {
        uVar3 = __ftol();
        FUN_00444030(4);
        puVar1[3] = uVar3;
        *puVar1 = &PTR_FUN_007e3978;
        uVar3 = FUN_004441b0(0x4ff,puVar1);
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_18 + 0x84))(uVar3);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x38)) {
    pvVar4 = operator_new(0x14);
    local_4 = 0x25;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar1 = operator_new(0x10);
      if (puVar1 == (undefined4 *)0x0) {
        uVar3 = FUN_004441b0(0x4fd,0);
      }
      else {
        uVar3 = __ftol();
        FUN_00444030(4);
        puVar1[3] = uVar3;
        *puVar1 = &PTR_FUN_007e3978;
        uVar3 = FUN_004441b0(0x4fd,puVar1);
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_18 + 0x84))(uVar3);
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    pvVar4 = operator_new(0x14);
    local_4 = 0x26;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      pvVar4 = operator_new(0xe);
      local_4._0_1_ = 0x27;
      if (pvVar4 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004f6330(*(undefined1 *)(param_1 + 0x40));
      }
      local_4 = CONCAT31(local_4._1_3_,0x26);
      uVar3 = FUN_004441b0(0x506,uVar3);
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_18 + 0x84))(uVar3);
  }
  pvVar4 = operator_new(0x14);
  local_4 = 0x28;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    pvVar6 = operator_new(0x14);
    local_4._0_1_ = 0x29;
    if (pvVar6 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004af700(*(undefined4 *)(param_1 + 4));
      uVar3 = FUN_0053e770(uVar3);
    }
    local_4 = CONCAT31(local_4._1_3_,0x28);
    uVar3 = FUN_004441b0(0xec,uVar3);
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_18 + 0x84))(uVar3);
  ExceptionList = pvVar4;
  return local_18;
}


