// FUN_0055d860 @ 55d860 size=3359

int * __fastcall FUN_0055d860(int *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  int *piVar10;
  int *local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c60e0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
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
    if (pvVar4 == (void *)0x0) {
LAB_0055d93f:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x523);
      if (iVar5 == 0) goto LAB_0055d93f;
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
  (**(code **)(*local_20 + 0x84))(puVar2);
  puVar2 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar4 = operator_new(0x10);
    puStack_8._0_1_ = 6;
    if (pvVar4 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      uVar6 = (**(code **)(param_1[-2] + 0xc))();
      iVar3 = FUN_0053ee00(uVar6);
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 7;
    pvVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if (pvVar4 == (void *)0x0) {
LAB_0055da11:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0xe9);
      if (iVar5 == 0) goto LAB_0055da11;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    local_20 = unaff_EBX;
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
  (**(code **)(*local_20 + 0x84))(puVar2);
  if ((*(int *)((int)param_1 + 0x12) != *(int *)((int)param_1 + 0xe)) ||
     (*(int *)((int)param_1 + 0x56) != 0)) {
    puVar2 = operator_new(0x14);
    pvStack_c = (void *)0x9;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar7 = operator_new(0x1a);
      pvStack_c._0_1_ = 10;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *(undefined4 *)((int)unaff_EBX + 0x12);
        FUN_0053e740(0x523);
        *(undefined2 *)(puVar7 + 5) = 3;
        *(undefined4 *)((int)puVar7 + 0x16) = uVar6;
        *puVar7 = &PTR_FUN_007e3ba4;
        param_1 = unaff_EBX;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      pvStack_c._0_1_ = 0xb;
      pvVar4 = operator_new(0x14);
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0xc);
      if (pvVar4 == (void *)0x0) {
LAB_0055db09:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0053e740(0x10a);
        if (iVar3 == 0) goto LAB_0055db09;
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar2[3] = iVar3;
      if (puVar7 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar7[2] = puVar7[2] + 1;
        puVar2[4] = puVar7;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*unaff_EBP + 0x84))(puVar2);
    local_20 = unaff_EBP;
  }
  if (*(int *)((int)param_1 + 0x26) != 0) {
    puVar2 = operator_new(0x14);
    pvStack_c = (void *)0xd;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x10);
      pvStack_c._0_1_ = 0xe;
      if (pvVar4 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0053ee00(*(undefined4 *)((int)param_1 + 0x26));
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      pvStack_c._0_1_ = 0xf;
      pvVar4 = operator_new(0x14);
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x10);
      if (pvVar4 == (void *)0x0) {
LAB_0055dbda:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x199);
        if (iVar5 == 0) goto LAB_0055dbda;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (iVar3 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        local_20 = unaff_EBP;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        puVar2[4] = iVar3;
        *puVar2 = &PTR_FUN_007e3878;
        local_20 = unaff_EBP;
      }
    }
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*local_20 + 0x84))(puVar2);
  }
  iVar3 = *(int *)((int)param_1 + 0x1e);
  if (iVar3 == 0) {
    pvVar4 = operator_new(0x14);
    pvStack_c = (void *)0x11;
    if (pvVar4 == (void *)0x0) goto LAB_0055dcd2;
    iVar3 = FUN_0053e740(0x15a);
  }
  else if (iVar3 == 1) {
    pvVar4 = operator_new(0x14);
    pvStack_c = (void *)0x12;
    if (pvVar4 == (void *)0x0) goto LAB_0055dcd2;
    iVar3 = FUN_0053e740(0x15b);
  }
  else if (iVar3 == 2) {
    pvVar4 = operator_new(0x14);
    pvStack_c = (void *)0x13;
    if (pvVar4 == (void *)0x0) goto LAB_0055dcd2;
    iVar3 = FUN_0053e740(0x15c);
  }
  else {
    pvVar4 = operator_new(0x14);
    pvStack_c = (void *)0x14;
    if (pvVar4 == (void *)0x0) {
LAB_0055dcd2:
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0053e740(0x15a);
    }
  }
  pvStack_c = (void *)0xffffffff;
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 0x16;
    pvStack_c._1_3_ = 0;
    pvVar4 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x17);
    if (pvVar4 == (void *)0x0) {
LAB_0055dd37:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x19f);
      if (iVar5 == 0) goto LAB_0055dd37;
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
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*unaff_EBP + 0x84))(puVar2);
  if (*(short *)((int)param_1 + 0x22) != 0) {
    puVar2 = operator_new(0x14);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
      piVar10 = unaff_EBP;
    }
    else {
      puVar7 = operator_new(0x10);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(ushort *)((int)param_1 + 0x22);
        puVar7[1] = 4;
        puVar7[2] = 0;
        puVar7[3] = (uint)uVar1;
        *puVar7 = &PTR_FUN_007e3978;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
LAB_0055de0c:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0053e740(0xf4);
        if (iVar3 == 0) goto LAB_0055de0c;
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar2[3] = iVar3;
      piVar10 = unaff_ESI;
      if (puVar7 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar7[2] = puVar7[2] + 1;
        puVar2[4] = puVar7;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar10 + 0x84))(puVar2);
  }
  if (*(int *)((int)param_1 + 0x1a) != 3) {
    puVar2 = operator_new(0x14);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar7 = operator_new(0x10);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *(undefined4 *)((int)unaff_EBP + 0x1a);
        FUN_004252e0(4);
        puVar7[3] = uVar6;
        *puVar7 = &PTR_FUN_007e3978;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
LAB_0055deee:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0053e740(0x12e);
        if (iVar3 == 0) goto LAB_0055deee;
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar2[3] = iVar3;
      if (puVar7 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar7[2] = puVar7[2] + 1;
        puVar2[4] = puVar7;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_ESI + 0x84))(puVar2);
  }
  iVar3 = 4;
  puVar2 = (undefined4 *)((int)unaff_EBP + 0x46);
  do {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *puVar2;
        FUN_004252e0(4);
        puVar8[3] = uVar6;
        *puVar8 = &PTR_FUN_007e3978;
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
LAB_0055dfd2:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x1ac);
        if (iVar5 == 0) goto LAB_0055dfd2;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar7[3] = iVar5;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar7 = &PTR_FUN_007e3878;
        puVar7[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar7[4] = puVar8;
        *puVar7 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_ESI + 0x84))(puVar7);
    puVar2 = puVar2 + -1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0x10);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar6 = *(undefined4 *)((int)unaff_EBP + 0x36);
      FUN_004252e0(4);
      puVar8[3] = uVar6;
      *puVar8 = &PTR_FUN_007e3978;
    }
    *puVar2 = &PTR_LAB_007e38f8;
    puVar2[1] = 0;
    puVar2[2] = 0;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_0055e0c2:
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0053e740(0x86);
      if (iVar3 == 0) goto LAB_0055e0c2;
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    puVar2[3] = iVar3;
    puVar7 = puVar2;
    if (puVar8 == (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      puVar8[2] = puVar8[2] + 1;
      puVar2[4] = puVar8;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_ESI + 0x84))(puVar7);
  if ((int)*(short *)(DAT_00893530 + 0x18) < *(int *)((int)unaff_EBP + 0x4a)) {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *(undefined4 *)((int)unaff_EBP + 0x4a);
        puVar8[1] = 4;
        puVar8[2] = 0;
        puVar8[3] = uVar6;
        *puVar8 = &PTR_FUN_007e3978;
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
LAB_0055e1a3:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0053e740(0x221);
        if (iVar3 == 0) goto LAB_0055e1a3;
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar7[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar7 = &PTR_FUN_007e3878;
        puVar7[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar7[4] = puVar8;
        *puVar7 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EDI + 0x84))(puVar7);
  }
  if ((DAT_00dc195d != '\0') && (*(int *)((int)unaff_EBP + 0x52) != 3000)) {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *(undefined4 *)((int)unaff_EBP + 0x52);
        puVar8[1] = 4;
        puVar8[2] = 0;
        puVar8[3] = uVar6;
        *puVar8 = &PTR_FUN_007e3978;
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
LAB_0055e283:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0053e740(0x58a);
        if (iVar3 == 0) goto LAB_0055e283;
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar7[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar7 = &PTR_FUN_007e3878;
        puVar7[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar7[4] = puVar8;
        *puVar7 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EDI + 0x84))(puVar7);
  }
  if (*(int *)((int)unaff_EBP + 0x2a) != 0) {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *(undefined4 *)((int)unaff_EBP + 0x2a);
        puVar8[1] = 4;
        puVar8[2] = 0;
        puVar8[3] = uVar6;
        *puVar8 = &PTR_FUN_007e3978;
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
LAB_0055e352:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0053e740(0x85);
        if (iVar3 == 0) goto LAB_0055e352;
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar7[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar7 = &PTR_FUN_007e3878;
        puVar7[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar7[4] = puVar8;
        *puVar7 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EDI + 0x84))(puVar7);
  }
  if (*(float *)((int)unaff_EBP + 0x2e) <=
      (float)(int)(&DAT_0084a0ec)[*(int *)((int)unaff_EBP + 0x2a)]) goto LAB_0055e46f;
  puVar7 = operator_new(0x14);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0x10);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar6 = *(undefined4 *)((int)unaff_EBP + 0x2e);
      puVar8[1] = 5;
      puVar8[2] = 0;
      puVar8[3] = uVar6;
      *puVar8 = &PTR_FUN_007e48ac;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_0055e430:
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0053e740(0x87);
      if (iVar3 == 0) goto LAB_0055e430;
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    puVar7[3] = iVar3;
    if (puVar8 == (undefined4 *)0x0) {
      *puVar7 = &PTR_FUN_007e3878;
      puVar7[4] = 0;
    }
    else {
      puVar8[2] = puVar8[2] + 1;
      puVar7[4] = puVar8;
      *puVar7 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EDI + 0x84))(puVar7);
LAB_0055e46f:
  iVar3 = 0;
  do {
    if ((*(uint *)((int)unaff_ESI + 0x16) & 1 << ((byte)iVar3 & 0x1f)) != 0) {
      puVar7 = operator_new(0x14);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        pvVar4 = operator_new(0x14);
        if (pvVar4 == (void *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar6 = FUN_0050ae60(iVar3);
          iVar5 = FUN_0053e740(uVar6);
        }
        FUN_004252e0(0);
        pvVar4 = operator_new(0x14);
        if (pvVar4 == (void *)0x0) {
LAB_0055e519:
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_0053e740(0x261);
          if (iVar9 == 0) goto LAB_0055e519;
          *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
        }
        puVar7[3] = iVar9;
        if (iVar5 == 0) {
          puVar7[4] = 0;
          *puVar7 = &PTR_FUN_007e3878;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          puVar7[4] = iVar5;
          *puVar7 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*unaff_EDI + 0x84))(puVar7);
    }
    iVar3 = iVar3 + 1;
    if (0x1e < iVar3) {
      ExceptionList = puVar2;
      return unaff_EDI;
    }
  } while( true );
}


