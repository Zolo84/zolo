// FUN_00585100 @ 585100 size=1292

int * __fastcall FUN_00585100(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  int *unaff_EBX;
  int unaff_EBP;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c90e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar3 = operator_new(0x1e);
  local_4 = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar3 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  puVar4 = operator_new(0x14);
  local_4 = 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar5 = FUN_00427f80();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar6 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x523), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar4[3] = iVar7;
    if (iVar5 == 0) {
      *puVar4 = &PTR_FUN_007e3878;
      puVar4[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar4[4] = iVar5;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x84))(puVar4);
  iVar5 = -1;
  piVar3 = unaff_EBX + 6;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    iVar7 = *piVar3;
    piVar3 = (int *)((int)piVar3 + 1);
  } while ((char)iVar7 != '\0');
  if (iVar5 != -2) {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x5;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      pvVar6 = operator_new(0x10);
      puStack_8._0_1_ = 6;
      if (pvVar6 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053ee00(unaff_EBX + 6);
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 7;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
      if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0xe9), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar4[3] = iVar7;
      if (iVar5 == 0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar4[4] = iVar5;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar4);
  }
  puVar4 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x9;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0xe);
    puStack_8._0_1_ = 10;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)((int)unaff_EBX + 10);
      FUN_004252e0(6);
      *(undefined1 *)(puVar8 + 3) = uVar1;
      *puVar8 = &PTR_FUN_007e76a0;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 0xb;
    pvVar6 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xc);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x25f), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar4[3] = iVar5;
    if (puVar8 == (undefined4 *)0x0) {
      *puVar4 = &PTR_FUN_007e3878;
      puVar4[4] = 0;
    }
    else {
      puVar8[2] = puVar8[2] + 1;
      puVar4[4] = puVar8;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*param_1 + 0x84))(puVar4);
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    puVar4 = operator_new(0x14);
    local_c = (void *)0xd;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      pvVar6 = operator_new(0x10);
      local_c._0_1_ = 0xe;
      if (pvVar6 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        uVar9 = FUN_004af700(*(undefined4 *)(unaff_EBP + 0xc));
        iVar5 = FUN_0053ee00(uVar9);
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      local_c._0_1_ = 0xf;
      pvVar6 = operator_new(0x14);
      local_c = (void *)CONCAT31(local_c._1_3_,0x10);
      if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x260), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar4[3] = iVar7;
      param_1 = unaff_EBX;
      if (iVar5 == 0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar4[4] = iVar5;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    local_c = (void *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar4);
  }
  piVar10 = operator_new(0x1e);
  local_c = (void *)0x11;
  piVar3 = (int *)0x0;
  if (piVar10 != (int *)0x0) {
    FUN_004c0c30(2);
    local_c = (void *)CONCAT31(local_c._1_3_,0x12);
    FUN_00444250();
    *piVar10 = (int)&PTR_FUN_007e3a28;
    piVar10[3] = (int)&PTR_LAB_007e39f8;
    piVar3 = piVar10;
  }
  local_c = (void *)0xffffffff;
  puVar4 = *(undefined4 **)(*(int *)(unaff_EBP + 0x10) + 4);
  while (puVar4 != (undefined4 *)0x0) {
    puVar8 = operator_new(0x1a);
    local_c = (void *)0x13;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)puVar4[2];
      uVar9 = *puVar4;
      FUN_0053e740(0x523);
      *(undefined2 *)(puVar8 + 5) = 3;
      *(undefined4 *)((int)puVar8 + 0x16) = uVar9;
      *puVar8 = &PTR_FUN_007e3ba4;
      puVar4 = puVar2;
    }
    local_c = (void *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar8);
  }
  puVar4 = operator_new(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 0x15;
    local_c._1_3_ = 0;
    pvVar6 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0x16);
    if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x195), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar4[3] = iVar5;
    puVar8 = puVar4;
    if (piVar3 == (int *)0x0) {
      *puVar4 = &PTR_FUN_007e3878;
      puVar4[4] = 0;
    }
    else {
      piVar3[2] = piVar3[2] + 1;
      puVar4[4] = piVar3;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*unaff_EBX + 0x84))(puVar8);
  ExceptionList = puVar4;
  return unaff_EBX;
}


