// FUN_00443590 @ 443590 size=2346

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_00443590(int param_1)

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
  puStack_8 = &LAB_007bb3e1;
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
  if (*(float *)(param_1 + 8) != _DAT_007e3380) {
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
        uVar5 = *(undefined4 *)(param_1 + 8);
        puVar2[1] = 5;
        puVar2[2] = 0;
        puVar2[3] = uVar5;
        *puVar2 = &PTR_FUN_007e48ac;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 3;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,4);
      if (pvVar3 == (void *)0x0) {
LAB_004436a3:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x235);
        if (iVar4 == 0) goto LAB_004436a3;
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
  if (*(float *)(param_1 + 4) != _DAT_007e3380) {
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
        uVar5 = *(undefined4 *)(param_1 + 4);
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
LAB_0044377d:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x382);
        if (iVar4 == 0) goto LAB_0044377d;
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
  if (*(float *)(param_1 + 0x10) != _DAT_007e3380) {
    puVar1 = operator_new(0x14);
    local_4 = 8;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 9;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        FUN_004252e0(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 10;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0xb);
      if (pvVar3 == (void *)0x0) {
LAB_0044386b:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x232);
        if (iVar4 == 0) goto LAB_0044386b;
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
    local_4 = 0xc;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0xd;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x14);
        FUN_004252e0(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0xe;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0xf);
      if (pvVar3 == (void *)0x0) {
LAB_0044395d:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x234);
        if (iVar4 == 0) goto LAB_0044395d;
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
    local_4 = 0x10;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x11;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0xc);
        FUN_004252e0(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x12;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x13);
      if (pvVar3 == (void *)0x0) {
LAB_00443a4f:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x233);
        if (iVar4 == 0) goto LAB_00443a4f;
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
    local_4 = 0x14;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x15;
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
      local_4._0_1_ = 0x16;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x17);
      if (pvVar3 == (void *)0x0) {
LAB_00443b41:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0xf6);
        if (iVar4 == 0) goto LAB_00443b41;
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
    local_4 = 0x18;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0x19;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        FUN_00444030(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar5;
      }
      local_4._0_1_ = 0x18;
      FUN_004252e0(0);
      local_4._0_1_ = 0x1a;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x1b);
      if (pvVar3 == (void *)0x0) {
LAB_00443c34:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x174);
        if (iVar4 == 0) goto LAB_00443c34;
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
  if (*(float *)(param_1 + 0x20) == _DAT_007e3380) goto LAB_00443d6a;
  puVar1 = operator_new(0x14);
  local_4 = 0x1c;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = operator_new(0x10);
    local_4._0_1_ = 0x1d;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x20);
      FUN_00444030(5);
      *puVar2 = &PTR_FUN_007e48ac;
      puVar2[3] = uVar5;
    }
    local_4._0_1_ = 0x1c;
    FUN_004252e0(0);
    local_4._0_1_ = 0x1e;
    pvVar3 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,0x1f);
    if (pvVar3 == (void *)0x0) {
LAB_00443d27:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0xa9);
      if (iVar4 == 0) goto LAB_00443d27;
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
LAB_00443d6a:
  if (*(float *)(param_1 + 0x24) != _DAT_007e3380) {
    pvVar3 = operator_new(0x14);
    local_4 = 0x20;
    if (pvVar3 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar1 = operator_new(0x10);
      local_4._0_1_ = 0x21;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x24);
        FUN_00444030(5);
        *puVar1 = &PTR_FUN_007e48ac;
        puVar1[3] = uVar5;
      }
      local_4 = CONCAT31(local_4._1_3_,0x20);
      uVar5 = FUN_004441b0(0xe2,puVar1);
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(uVar5);
  }
  if (*(float *)(param_1 + 0x28) != _DAT_007e3380) {
    pvVar3 = operator_new(0x14);
    local_4 = 0x22;
    if (pvVar3 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      pvVar6 = operator_new(0x10);
      local_4._0_1_ = 0x23;
      if (pvVar6 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004440b0(*(undefined4 *)(param_1 + 0x28));
      }
      local_4 = CONCAT31(local_4._1_3_,0x22);
      uVar5 = FUN_004441b0(0x1b3,uVar5);
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(uVar5);
    ExceptionList = pvVar3;
    return local_1c;
  }
  ExceptionList = local_c;
  return local_1c;
}


