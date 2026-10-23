// FUN_0055e6f0 @ 55e6f0 size=1154

int * __fastcall FUN_0055e6f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int unaff_EBX;
  int *local_1c;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c619c;
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
    iVar2 = FUN_00427f80();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar3 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (pvVar3 == (void *)0x0) {
LAB_0055e7d1:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x523);
      if (iVar4 == 0) goto LAB_0055e7d1;
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
  if (*(int *)(unaff_EBX + 0x22) != 3) {
    puVar1 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x5;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar5 = operator_new(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *(undefined4 *)(unaff_EBX + 0x22);
        FUN_004252e0(4);
        puVar5[3] = uVar6;
        *puVar5 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 6;
      pvVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
      if (pvVar3 == (void *)0x0) {
LAB_0055e8a7:
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_0053e740(0x12e);
        if (iVar2 == 0) goto LAB_0055e8a7;
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      }
      puVar1[3] = iVar2;
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
    (**(code **)(*param_1 + 0x84))(puVar1);
  }
  if (*(int *)(unaff_EBX + 0x32) != 0) {
    puVar1 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x8;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar5 = operator_new(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *(undefined4 *)(unaff_EBX + 0x32);
        FUN_004252e0(4);
        puVar5[3] = uVar6;
        *puVar5 = &PTR_FUN_007e3978;
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 9;
      pvVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,10);
      if (pvVar3 == (void *)0x0) {
LAB_0055e981:
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_0053e740(0x85);
        if (iVar2 == 0) goto LAB_0055e981;
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      }
      puVar1[3] = iVar2;
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
    (**(code **)(*param_1 + 0x84))(puVar1);
  }
  if (*(float *)(unaff_EBX + 0x36) <= (float)(int)(&DAT_0084a0ec)[*(int *)(unaff_EBX + 0x32)])
  goto LAB_0055eabe;
  puVar1 = operator_new(0x14);
  puStack_8 = (undefined1 *)0xb;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar5 = operator_new(0x10);
    puStack_8._0_1_ = 0xc;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      uVar6 = *(undefined4 *)(unaff_EBX + 0x36);
      FUN_00444030(5);
      *puVar5 = &PTR_FUN_007e48ac;
      puVar5[3] = uVar6;
    }
    FUN_004252e0(0);
    puStack_8._0_1_ = 0xd;
    pvVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xe);
    if (pvVar3 == (void *)0x0) {
LAB_0055ea77:
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0053e740(0x87);
      if (iVar2 == 0) goto LAB_0055ea77;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    puVar1[3] = iVar2;
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
  (**(code **)(*param_1 + 0x84))(puVar1);
LAB_0055eabe:
  if (*(int *)(unaff_EBX + 0x1e) != 0) {
    pvVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xf;
    if (pvVar3 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar1 = operator_new(0x10);
      puStack_8._0_1_ = 0x10;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *(undefined4 *)(unaff_EBX + 0x1e);
        FUN_00444030(4);
        puVar1[3] = uVar6;
        *puVar1 = &PTR_FUN_007e3978;
      }
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xf);
      uVar6 = FUN_004441b0(0x261,puVar1);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(uVar6);
    ExceptionList = pvVar3;
    return param_1;
  }
  ExceptionList = local_10;
  return param_1;
}


