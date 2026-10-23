// FUN_0055aad0 @ 55aad0 size=4702

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0055aad0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int unaff_EBX;
  int *unaff_EBP;
  int unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c5d0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x1e);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar1 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *piVar1 = (int)&PTR_FUN_007e3a28;
    piVar1[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  puVar2 = operator_new(0x14);
  local_4 = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    iVar3 = FUN_00427f80();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x523), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    if (iVar3 == 0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      puVar2[4] = iVar3;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar2);
  puVar2 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  if (puVar2 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    pvVar4 = operator_new(0x10);
    puStack_8._0_1_ = 6;
    if (pvVar4 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0053ee00(*(undefined4 *)(unaff_EBX + 4));
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 7;
    pvVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0xe9), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    puVar6 = puVar2;
    if (iVar3 == 0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      puVar2[4] = iVar3;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar6);
  puVar6 = operator_new(0x14);
  local_c = (void *)0x9;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    pvVar4 = operator_new(0x14);
    local_c._0_1_ = 10;
    if (pvVar4 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      uVar7 = FUN_004fe7e0(unaff_EBP[0x4c]);
      iVar3 = FUN_0053e740(uVar7);
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 0xb;
    pvVar4 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0xc);
    if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x141), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar6[3] = iVar5;
    if (iVar3 == 0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      puVar6[4] = iVar3;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar6);
  if (*(int *)(unaff_ESI + 0x138) != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar7 = *(undefined4 *)(unaff_ESI + 0x138);
        FUN_004252e0(4);
        puVar8[3] = uVar7;
        *puVar8 = &PTR_FUN_007e3978;
        piVar1 = unaff_EBP;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(0x341), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar6[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar6[4] = puVar8;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (_DAT_007e682c <= *(float *)(unaff_ESI + 0x100)) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar7 = __ftol();
        FUN_004252e0(4);
        puVar8[3] = uVar7;
        *puVar8 = &PTR_FUN_007e3978;
        piVar1 = unaff_EBP;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(0x87), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar6[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar6[4] = puVar8;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(int *)(unaff_ESI + 0x88) != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        uVar7 = FUN_004fed70(*(undefined4 *)(unaff_ESI + 0x88));
        iVar3 = FUN_0053e740(uVar7);
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x517), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar6[3] = iVar5;
      if (iVar3 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        puVar6[4] = iVar3;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(int *)(unaff_ESI + 0x8c) != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        uVar7 = FUN_004fed70(*(undefined4 *)(unaff_ESI + 0x8c));
        iVar3 = FUN_0053e740(uVar7);
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x518), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar6[3] = iVar5;
      if (iVar3 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        puVar6[4] = iVar3;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(int *)(unaff_ESI + 0x90) != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        uVar7 = FUN_004fed70(*(undefined4 *)(unaff_ESI + 0x90));
        iVar3 = FUN_0053e740(uVar7);
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x519), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar6[3] = iVar5;
      if (iVar3 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        puVar6[4] = iVar3;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(int *)(unaff_ESI + 0x94) != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        uVar7 = FUN_004fed70(*(undefined4 *)(unaff_ESI + 0x94));
        iVar3 = FUN_0053e740(uVar7);
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x51a), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar6[3] = iVar5;
      if (iVar3 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        puVar6[4] = iVar3;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(int *)(unaff_ESI + 0x98) != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        uVar7 = FUN_004fed70(*(undefined4 *)(unaff_ESI + 0x98));
        iVar3 = FUN_0053e740(uVar7);
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x51b), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar6[3] = iVar5;
      if (iVar3 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        puVar6[4] = iVar3;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  iVar3 = FUN_004fd5a0();
  if (iVar3 != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar3 = FUN_00427f80();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x32), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar6[3] = iVar5;
      if (iVar3 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        puVar6[4] = iVar3;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  iVar3 = FUN_004fd580();
  if (iVar3 != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar7 = *(undefined4 *)(unaff_ESI + 0x54);
        FUN_004252e0(4);
        puVar8[3] = uVar7;
        *puVar8 = &PTR_FUN_007e3978;
        piVar1 = unaff_EBP;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(0x33), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar6[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar6[4] = puVar8;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(int *)(unaff_ESI + 0x58) != 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x10);
      if (pvVar4 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        uVar7 = FUN_004af700(*(undefined4 *)(unaff_ESI + 0x58));
        iVar3 = FUN_0053ee00(uVar7);
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0xec), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar6[3] = iVar5;
      if (iVar3 == 0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        puVar6[4] = iVar3;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(float *)(unaff_ESI + 0x2e0) != _DAT_007e3380) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_004252e0(4);
        uVar7 = __ftol();
        puVar8[3] = uVar7;
        *puVar8 = &PTR_FUN_007e3978;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(0xdb), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar6[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar6[4] = puVar8;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(float *)(unaff_ESI + 0x114) != _DAT_007e3380) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar7 = __ftol();
        FUN_004252e0(4);
        puVar8[3] = uVar7;
        *puVar8 = &PTR_FUN_007e3978;
        piVar1 = unaff_EBP;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(0xcc), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar6[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar6[4] = puVar8;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(float *)(unaff_ESI + 0x2e4) != _DAT_007e3380) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_004252e0(4);
        uVar7 = __ftol();
        puVar8[3] = uVar7;
        *puVar8 = &PTR_FUN_007e3978;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(0xdc), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar6[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar6[4] = puVar8;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(float *)(unaff_ESI + 0x118) != _DAT_007e3380) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar7 = __ftol();
        FUN_004252e0(4);
        puVar8[3] = uVar7;
        *puVar8 = &PTR_FUN_007e3978;
        piVar1 = unaff_EBP;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(0xd0), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar6[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar6[4] = puVar8;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(float *)(unaff_ESI + 0x2e8) != _DAT_007e3380) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_004252e0(4);
        uVar7 = __ftol();
        puVar8[3] = uVar7;
        *puVar8 = &PTR_FUN_007e3978;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(0xdd), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar6[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar6[4] = puVar8;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(float *)(unaff_ESI + 0x2f0) != _DAT_007e3380) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8[1] = 4;
        puVar8[2] = 0;
        uVar7 = __ftol();
        puVar8[3] = uVar7;
        *puVar8 = &PTR_FUN_007e3978;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(0xdf), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar6[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar6[4] = puVar8;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
  }
  if (*(float *)(unaff_ESI + 0x2ec) != _DAT_007e3380) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8[1] = 4;
        puVar8[2] = 0;
        uVar7 = __ftol();
        puVar8[3] = uVar7;
        *puVar8 = &PTR_FUN_007e3978;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if ((pvVar4 == (void *)0x0) || (iVar3 = FUN_0053e740(0xde), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar6[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar6[4] = puVar8;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar1 + 0x84))(puVar6);
    ExceptionList = puVar2;
    return piVar1;
  }
  ExceptionList = puVar2;
  return piVar1;
}


