// FUN_0075b370 @ 75b370 size=1779

int * FUN_0075b370(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int unaff_EBX;
  int *piVar10;
  int *unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e02e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x1e);
  piVar10 = (int *)0x0;
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
    if (pvVar4 == (void *)0x0) {
LAB_0075b44d:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x523);
      if (iVar5 == 0) goto LAB_0075b44d;
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
  (**(code **)(*piVar1 + 0x84))();
  puVar6 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    pvVar4 = operator_new(0x10);
    puStack_8._0_1_ = 6;
    if (pvVar4 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      uVar7 = (**(code **)(*(int *)(unaff_EBX + -0x12) + 0xc))();
      iVar3 = FUN_0053ee00(uVar7);
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 7;
    pvVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if (pvVar4 == (void *)0x0) {
LAB_0075b51c:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0xe9);
      if (iVar5 == 0) goto LAB_0075b51c;
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
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))();
  if ((int)unaff_EBP + 0x75 != 0) {
    puVar8 = operator_new(0x14);
    pvStack_c = (void *)0x9;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x10);
      pvStack_c._0_1_ = 10;
      if (pvVar4 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0053ee00((int)unaff_EBP + 0x75);
      }
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_LAB_007e38f8;
      pvStack_c._0_1_ = 0xb;
      pvVar4 = operator_new(0x14);
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0xc);
      if (pvVar4 == (void *)0x0) {
LAB_0075b5eb:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x199);
        if (iVar5 == 0) goto LAB_0075b5eb;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar8[3] = iVar5;
      if (iVar3 == 0) {
        *puVar8 = &PTR_FUN_007e3878;
        puVar8[4] = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        puVar8[4] = iVar3;
        *puVar8 = &PTR_FUN_007e3878;
      }
    }
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*piVar1 + 0x84))(puVar8);
  }
  puVar8 = operator_new(0x14);
  pvStack_c = (void *)0xd;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar9 = operator_new(0x10);
    pvStack_c._0_1_ = 0xe;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      iVar3 = unaff_EBP[1];
      FUN_004252e0(5);
      *puVar9 = &PTR_FUN_007e48ac;
      puVar9[3] = iVar3;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 0xf;
    pvVar4 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x10);
    if (pvVar4 == (void *)0x0) {
LAB_0075b6c4:
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0053e740(0x85);
      if (iVar3 == 0) goto LAB_0075b6c4;
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    puVar8[3] = iVar3;
    if (puVar9 == (undefined4 *)0x0) {
      *puVar8 = &PTR_FUN_007e3878;
      puVar8[4] = 0;
    }
    else {
      puVar9[2] = puVar9[2] + 1;
      puVar8[4] = puVar9;
      *puVar8 = &PTR_FUN_007e3878;
    }
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar8);
  puVar8 = operator_new(0x14);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    pvVar4 = operator_new(0x1e);
    if (pvVar4 != (void *)0x0) {
      piVar10 = (int *)FUN_00538860();
    }
    iVar3 = 0;
    do {
      if (*(char *)((int)unaff_ESI + iVar3 + 8) != '\0') {
        pvVar4 = operator_new(0x14);
        if (pvVar4 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_0075cba0(iVar3);
          uVar7 = FUN_0053e740(uVar7);
        }
        (**(code **)(*piVar10 + 0x84))(uVar7);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x6d);
    *puVar8 = &PTR_LAB_007e38f8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_0075b7d8:
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0053e740(0x142);
      if (iVar3 == 0) goto LAB_0075b7d8;
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    puVar8[3] = iVar3;
    if (piVar10 == (int *)0x0) {
      *puVar8 = &PTR_FUN_007e3878;
      puVar8[4] = 0;
    }
    else {
      piVar10[2] = piVar10[2] + 1;
      puVar8[4] = piVar10;
      *puVar8 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))(puVar8);
  puVar8 = operator_new(0x14);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar9 = operator_new(0x10);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      uVar7 = *(undefined4 *)(unaff_EDI + 0xc2);
      FUN_004252e0(4);
      puVar9[3] = uVar7;
      *puVar9 = &PTR_FUN_007e3978;
    }
    FUN_004252e0(0);
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_0075b8b1:
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0053e740(0x221);
      if (iVar3 == 0) goto LAB_0075b8b1;
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    puVar8[3] = iVar3;
    if (puVar9 == (undefined4 *)0x0) {
      *puVar8 = &PTR_FUN_007e3878;
      puVar8[4] = 0;
    }
    else {
      puVar9[2] = puVar9[2] + 1;
      puVar8[4] = puVar9;
      *puVar8 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_ESI + 0x84))(puVar8);
  puVar8 = operator_new(0x14);
  if (puVar8 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
    goto LAB_0075b9b4;
  }
  puVar9 = operator_new(0x10);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    uVar7 = *(undefined4 *)((int)puVar2 + 0xbe);
    FUN_00444030(4);
    puVar9[3] = uVar7;
    *puVar9 = &PTR_FUN_007e3978;
  }
  FUN_004252e0(0);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
LAB_0075b98a:
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0053e740(0x222);
    if (iVar3 == 0) goto LAB_0075b98a;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  }
  puVar8[3] = iVar3;
  puVar2 = puVar8;
  if (puVar9 == (undefined4 *)0x0) {
    *puVar8 = &PTR_FUN_007e3878;
    puVar8[4] = 0;
  }
  else {
    puVar9[2] = puVar9[2] + 1;
    puVar8[4] = puVar9;
    *puVar8 = &PTR_FUN_007e3878;
  }
LAB_0075b9b4:
  (**(code **)(*unaff_ESI + 0x84))(puVar2);
  if (*(int *)((int)puVar6 + 0xba) != 0) {
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      pvVar4 = operator_new(0x10);
      if (pvVar4 == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_004af700(*(undefined4 *)((int)puVar6 + 0xba));
        uVar7 = FUN_0053ee00(uVar7);
      }
      uVar7 = FUN_004441b0(0x1a8,uVar7);
    }
    (**(code **)(*unaff_ESI + 0x84))(uVar7);
  }
  ExceptionList = puVar8;
  return unaff_ESI;
}


