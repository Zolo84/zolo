// FUN_004f81e0 @ 4f81e0 size=4735

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_004f81e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c1033;
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
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar1 = operator_new(0x14);
    local_4 = 2;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        puVar2[1] = 4;
        puVar2[2] = 0;
        puVar2[3] = uVar5;
        *puVar2 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 3;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,4);
      if (pvVar3 == (void *)0x0) {
LAB_004f82ee:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xbf);
        if (iVar4 == 0) goto LAB_004f82ee;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0xc) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 5;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0xc);
        puVar2[1] = 5;
        puVar2[2] = 0;
        puVar2[3] = uVar5;
        *puVar2 = &PTR_FUN_007e48ac;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 6;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,7);
      if (pvVar3 == (void *)0x0) {
LAB_004f83cc:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xc0);
        if (iVar4 == 0) goto LAB_004f83cc;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0x14) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 8;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x14);
        puVar2[1] = 5;
        puVar2[2] = 0;
        puVar2[3] = uVar5;
        *puVar2 = &PTR_FUN_007e48ac;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 9;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,10);
      if (pvVar3 == (void *)0x0) {
LAB_004f84a6:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x1b3);
        if (iVar4 == 0) goto LAB_004f84a6;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(int *)(param_1 + 0x34) != 0x3f800000) {
    puVar1 = operator_new(0x14);
    local_4 = 0xb;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0xc;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x34);
        FUN_004252e0(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0xd;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0xe);
      if (pvVar3 == (void *)0x0) {
LAB_004f8592:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x354);
        if (iVar4 == 0) goto LAB_004f8592;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(int *)(param_1 + 0x38) != 0x3f800000) {
    puVar1 = operator_new(0x14);
    local_4 = 0xf;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x10;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x38);
        FUN_004252e0(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x11;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x12);
      if (pvVar3 == (void *)0x0) {
LAB_004f867d:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x355);
        if (iVar4 == 0) goto LAB_004f867d;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0x18) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 0x13;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x14;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x18);
        FUN_004252e0(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x15;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x16);
      if (pvVar3 == (void *)0x0) {
LAB_004f876f:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xc1);
        if (iVar4 == 0) goto LAB_004f876f;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0x1c) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 0x17;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x18;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        FUN_004252e0(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x19;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x1a);
      if (pvVar3 == (void *)0x0) {
LAB_004f8861:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xc6);
        if (iVar4 == 0) goto LAB_004f8861;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0x20) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 0x1b;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x1c;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x20);
        FUN_004252e0(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x1d;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x1e);
      if (pvVar3 == (void *)0x0) {
LAB_004f8953:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(199);
        if (iVar4 == 0) goto LAB_004f8953;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0x74) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 0x1f;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x20;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x74);
        FUN_004252e0(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x21;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x22);
      if (pvVar3 == (void *)0x0) {
LAB_004f8a45:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xd2);
        if (iVar4 == 0) goto LAB_004f8a45;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0x78) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 0x23;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x24;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x78);
        FUN_004252e0(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x25;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x26);
      if (pvVar3 == (void *)0x0) {
LAB_004f8b37:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xd3);
        if (iVar4 == 0) goto LAB_004f8b37;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0xa4) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 0x27;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x28;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0xa4);
        FUN_004252e0(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x29;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x2a);
      if (pvVar3 == (void *)0x0) {
LAB_004f8c2f:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xd5);
        if (iVar4 == 0) goto LAB_004f8c2f;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0x30) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 0x2b;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x2c;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x30);
        FUN_004252e0(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x2d;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x2e);
      if (pvVar3 == (void *)0x0) {
LAB_004f8d21:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xcc);
        if (iVar4 == 0) goto LAB_004f8d21;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0x2c) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 0x2f;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x30;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x2c);
        FUN_00444030(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x31;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x32);
      if (pvVar3 == (void *)0x0) {
LAB_004f8e13:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xd0);
        if (iVar4 == 0) goto LAB_004f8e13;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0xa8) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 0x33;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x34;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0xa8);
        FUN_00444030(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x35;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x36);
      if (pvVar3 == (void *)0x0) {
LAB_004f8f0b:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xd6);
        if (iVar4 == 0) goto LAB_004f8f0b;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0x54) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 0x37;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x38;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x54);
        FUN_00444030(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      local_4._0_1_ = 0x37;
      FUN_004252e0(0);
      local_4._0_1_ = 0x39;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x3a);
      if (pvVar3 == (void *)0x0) {
LAB_004f8ffe:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xcd);
        if (iVar4 == 0) goto LAB_004f8ffe;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0x58) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 0x3b;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x3c;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x58);
        FUN_00444030(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      local_4._0_1_ = 0x3b;
      FUN_004252e0(0);
      local_4._0_1_ = 0x3d;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x3e);
      if (pvVar3 == (void *)0x0) {
LAB_004f90f1:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xce);
        if (iVar4 == 0) goto LAB_004f90f1;
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
    (**(code **)(*local_1c + 0x84))(puVar1);
  }
  if (*(float *)(param_1 + 0xac) == _DAT_007e3380) goto LAB_004f922d;
  puVar1 = operator_new(0x14);
  local_4 = 0x3f;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = operator_new(0x10);
    local_4._0_1_ = 0x40;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0xac);
      FUN_00444030(5);
      *puVar2 = &PTR_FUN_007e48ac;
      puVar2[3] = uVar5;
    }
    local_4._0_1_ = 0x3f;
    FUN_004252e0(0);
    local_4._0_1_ = 0x41;
    pvVar3 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,0x42);
    if (pvVar3 == (void *)0x0) {
LAB_004f91ea:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0xd7);
      if (iVar4 == 0) goto LAB_004f91ea;
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
  (**(code **)(*local_1c + 0x84))(puVar1);
LAB_004f922d:
  if (*(float *)(param_1 + 0x98) != _DAT_007e3380) {
    pvVar3 = operator_new(0x14);
    local_4 = 0x43;
    if (pvVar3 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      pvVar3 = operator_new(0x10);
      local_4._0_1_ = 0x44;
      if (pvVar3 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004440b0(*(undefined4 *)(param_1 + 0x98));
      }
      local_4 = CONCAT31(local_4._1_3_,0x43);
      uVar5 = FUN_004441b0(0xe0,uVar5);
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(uVar5);
  }
  if (*(float *)(param_1 + 0x9c) != _DAT_007e3380) {
    pvVar3 = operator_new(0x14);
    local_4 = 0x45;
    if (pvVar3 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      pvVar3 = operator_new(0x10);
      local_4._0_1_ = 0x46;
      if (pvVar3 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004440b0(*(undefined4 *)(param_1 + 0x9c));
      }
      local_4 = CONCAT31(local_4._1_3_,0x45);
      uVar5 = FUN_004441b0(0xd8,uVar5);
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(uVar5);
  }
  if (*(float *)(param_1 + 0x24) != _DAT_007e3380) {
    pvVar3 = operator_new(0x14);
    local_4 = 0x47;
    if (pvVar3 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      pvVar3 = operator_new(0x10);
      local_4._0_1_ = 0x48;
      if (pvVar3 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004440b0(*(undefined4 *)(param_1 + 0x24));
      }
      local_4 = CONCAT31(local_4._1_3_,0x47);
      uVar5 = FUN_004441b0(0xd1,uVar5);
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(uVar5);
  }
  if (*(float *)(param_1 + 0x28) != _DAT_007e3380) {
    pvVar3 = operator_new(0x14);
    local_4 = 0x49;
    if (pvVar3 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      pvVar6 = operator_new(0x10);
      local_4._0_1_ = 0x4a;
      if (pvVar6 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004440b0(*(undefined4 *)(param_1 + 0x28));
      }
      local_4 = CONCAT31(local_4._1_3_,0x49);
      uVar5 = FUN_004441b0(0x1dd,uVar5);
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(uVar5);
    ExceptionList = pvVar3;
    return local_1c;
  }
  ExceptionList = local_c;
  return local_1c;
}


