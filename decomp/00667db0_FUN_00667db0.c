// FUN_00667db0 @ 667db0 size=5297

int * __fastcall FUN_00667db0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  void *pvVar13;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d3e93;
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
    pvVar3 = operator_new(0x10);
    local_4._0_1_ = 3;
    if (pvVar3 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053ee00(param_1 + 0x2c);
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 4;
    pvVar3 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (pvVar3 == (void *)0x0) {
LAB_00667eaf:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0xe9);
      if (iVar5 == 0) goto LAB_00667eaf;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    if (iVar4 == 0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      puVar2[4] = iVar4;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x84))();
  puVar6 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar12 = *(undefined4 *)(unaff_EBX + 4);
      puVar7[1] = 5;
      puVar7[2] = 0;
      puVar7[3] = uVar12;
      *puVar7 = &PTR_FUN_007e48ac;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 7;
    pvVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if (pvVar3 == (void *)0x0) {
LAB_00667f77:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x4df);
      if (iVar4 == 0) goto LAB_00667f77;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar6[3] = iVar4;
    if (puVar7 == (undefined4 *)0x0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      puVar7[2] = puVar7[2] + 1;
      puVar6[4] = puVar7;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))();
  puVar7 = operator_new(0x14);
  local_c = (void *)0x9;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0x10);
    local_c._0_1_ = 10;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar12 = *(undefined4 *)(unaff_EBP + 8);
      FUN_004252e0(5);
      *puVar8 = &PTR_FUN_007e48ac;
      puVar8[3] = uVar12;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 0xb;
    pvVar3 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0xc);
    if (pvVar3 == (void *)0x0) {
LAB_0066804f:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x4e0);
      if (iVar4 == 0) goto LAB_0066804f;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar7[3] = iVar4;
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
  local_c = (void *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))();
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
      uVar12 = *(undefined4 *)(unaff_ESI + 0xc);
      FUN_004252e0(5);
      *puVar9 = &PTR_FUN_007e48ac;
      puVar9[3] = uVar12;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
LAB_00668127:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x4e1);
      if (iVar4 == 0) goto LAB_00668127;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar8[3] = iVar4;
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
  (**(code **)(*piVar1 + 0x84))();
  puVar9 = operator_new(0x14);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar12 = *(undefined4 *)(unaff_EDI + 0x10);
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_LAB_007e38f8;
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
LAB_006681ff:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x4e2);
      if (iVar4 == 0) goto LAB_006681ff;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar9[3] = iVar4;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar9 = &PTR_FUN_007e3878;
      puVar9[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar9[4] = puVar10;
      *puVar9 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))();
  piVar11 = operator_new(0x14);
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar12 = puVar2[5];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    piVar11[1] = 0;
    piVar11[2] = 0;
    *piVar11 = (int)&PTR_LAB_007e38f8;
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
LAB_006682d7:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x4e3);
      if (iVar4 == 0) goto LAB_006682d7;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    piVar11[3] = iVar4;
    if (puVar10 == (undefined4 *)0x0) {
      *piVar11 = (int)&PTR_FUN_007e3878;
      piVar11[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      piVar11[4] = (int)puVar10;
      *piVar11 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))();
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar12 = puVar6[6];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
LAB_006683af:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x4e4);
      if (iVar4 == 0) goto LAB_006683af;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar2[3] = iVar4;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar2[4] = puVar10;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))();
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar12 = puVar7[7];
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar12;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
LAB_00668487:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x4e5);
      if (iVar4 == 0) goto LAB_00668487;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar6[3] = iVar4;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar6[4] = puVar10;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))(puVar6);
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar12 = puVar8[8];
      FUN_004252e0(5);
      *puVar7 = &PTR_FUN_007e48ac;
      puVar7[3] = uVar12;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
LAB_0066855f:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x4e6);
      if (iVar4 == 0) goto LAB_0066855f;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar6[3] = iVar4;
    if (puVar7 == (undefined4 *)0x0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      puVar7[2] = puVar7[2] + 1;
      puVar6[4] = puVar7;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))(puVar6);
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar12 = puVar9[9];
      FUN_004252e0(5);
      *puVar7 = &PTR_FUN_007e48ac;
      puVar7[3] = uVar12;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
LAB_00668637:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x4e7);
      if (iVar4 == 0) goto LAB_00668637;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar6[3] = iVar4;
    if (puVar7 == (undefined4 *)0x0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      puVar7[2] = puVar7[2] + 1;
      puVar6[4] = puVar7;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar1 + 0x84))(puVar6);
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar8 = puVar6;
    puVar9 = operator_new(0x10);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      iVar4 = piVar11[10];
      FUN_004252e0(5);
      *puVar9 = &PTR_FUN_007e48ac;
      puVar9[3] = iVar4;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
LAB_0066870f:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x4e8);
      if (iVar4 == 0) goto LAB_0066870f;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar6[3] = iVar4;
    puVar7 = puVar6;
    if (puVar9 == (undefined4 *)0x0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
      puVar6 = puVar8;
    }
    else {
      puVar9[2] = puVar9[2] + 1;
      puVar6[4] = puVar9;
      *puVar6 = &PTR_FUN_007e3878;
      puVar6 = puVar8;
    }
  }
  (**(code **)(*piVar1 + 0x84))(puVar7);
  if (*(char *)(puVar2 + 0x1f) != '\0') {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_004252e0(6);
        *(undefined1 *)(puVar8 + 3) = 1;
        *puVar8 = &PTR_FUN_007e76a0;
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      pvVar3 = operator_new(0x14);
      if (pvVar3 == (void *)0x0) {
LAB_006687e8:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x4ea);
        if (iVar4 == 0) goto LAB_006687e8;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar7[3] = iVar4;
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
    (**(code **)(*piVar1 + 0x84))(puVar7);
  }
  if (*(char *)((int)puVar2 + 0x7d) != '\0') {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_004252e0(6);
        *(undefined1 *)(puVar8 + 3) = 1;
        *puVar8 = &PTR_FUN_007e76a0;
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      pvVar3 = operator_new(0x14);
      if (pvVar3 == (void *)0x0) {
LAB_006688be:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x36);
        if (iVar4 == 0) goto LAB_006688be;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar7[3] = iVar4;
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
    (**(code **)(*piVar1 + 0x84))(puVar7);
  }
  if (*(char *)((int)puVar2 + 0x7e) != '\0') {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_004252e0(6);
        *(undefined1 *)(puVar8 + 3) = 1;
        *puVar8 = &PTR_FUN_007e76a0;
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      pvVar3 = operator_new(0x14);
      if (pvVar3 == (void *)0x0) {
LAB_00668997:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x4e9);
        if (iVar4 == 0) goto LAB_00668997;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar7[3] = iVar4;
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
    (**(code **)(*piVar1 + 0x84))(puVar7);
  }
  if (*(char *)((int)puVar2 + 0x7f) != '\0') {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_004252e0(6);
        *(undefined1 *)(puVar8 + 3) = 1;
        *puVar8 = &PTR_FUN_007e76a0;
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      pvVar3 = operator_new(0x14);
      if (pvVar3 == (void *)0x0) {
LAB_00668a6d:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x3c);
        if (iVar4 == 0) goto LAB_00668a6d;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar7[3] = iVar4;
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
    (**(code **)(*piVar1 + 0x84))(puVar7);
  }
  if (*(char *)(puVar2 + 0x20) != '\0') {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_00444030(6);
        *(undefined1 *)(puVar8 + 3) = 1;
        *puVar8 = &PTR_FUN_007e76a0;
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      pvVar3 = operator_new(0x14);
      if (pvVar3 == (void *)0x0) {
LAB_00668b46:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x40);
        if (iVar4 == 0) goto LAB_00668b46;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar7[3] = iVar4;
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
    (**(code **)(*piVar1 + 0x84))(puVar7);
  }
  if (*(char *)((int)puVar2 + 0x81) != '\0') {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_00444030(6);
        *(undefined1 *)(puVar8 + 3) = 1;
        *puVar8 = &PTR_FUN_007e76a0;
      }
      FUN_004252e0(0);
      pvVar3 = operator_new(0x14);
      if (pvVar3 == (void *)0x0) {
LAB_00668c20:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x3d);
        if (iVar4 == 0) goto LAB_00668c20;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar7[3] = iVar4;
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
    (**(code **)(*piVar1 + 0x84))(puVar7);
  }
  if (*(char *)((int)puVar2 + 0x82) != '\0') {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_00444030(6);
        *(undefined1 *)(puVar8 + 3) = 1;
        *puVar8 = &PTR_FUN_007e76a0;
      }
      FUN_004252e0(0);
      pvVar3 = operator_new(0x14);
      if (pvVar3 == (void *)0x0) {
LAB_00668cfa:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x43);
        if (iVar4 == 0) goto LAB_00668cfa;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar7[3] = iVar4;
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
    (**(code **)(*piVar1 + 0x84))(puVar7);
  }
  if (*(char *)((int)puVar2 + 0x83) != '\0') {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
      piVar1 = piVar11;
    }
    else {
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_00444030(6);
        *(undefined1 *)(puVar8 + 3) = 1;
        *puVar8 = &PTR_FUN_007e76a0;
      }
      FUN_004252e0(0);
      pvVar3 = operator_new(0x14);
      if (pvVar3 == (void *)0x0) {
LAB_00668dd4:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x3e);
        if (iVar4 == 0) goto LAB_00668dd4;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar7[3] = iVar4;
      piVar1 = piVar11;
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
    (**(code **)(*piVar1 + 0x84))(puVar7);
    piVar11 = piVar1;
  }
  if (*(char *)(puVar2 + 0x21) != '\0') {
    puVar7 = operator_new(0x14);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
      piVar1 = piVar11;
    }
    else {
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        FUN_00444030(6);
        *(undefined1 *)(puVar8 + 3) = 1;
        *puVar8 = &PTR_FUN_007e76a0;
      }
      FUN_004252e0(0);
      pvVar3 = operator_new(0x14);
      if (pvVar3 == (void *)0x0) {
LAB_00668eb4:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x44);
        if (iVar4 == 0) goto LAB_00668eb4;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar7[3] = iVar4;
      piVar1 = piVar11;
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
    (**(code **)(*piVar1 + 0x84))(puVar7);
    piVar11 = piVar1;
  }
  if (*(char *)((int)puVar2 + 0x86) == '\0') goto LAB_00668fd7;
  puVar7 = operator_new(0x14);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
    piVar1 = piVar11;
  }
  else {
    puVar8 = operator_new(0xe);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      FUN_00444030(6);
      *(undefined1 *)(puVar8 + 3) = 1;
      *puVar8 = &PTR_FUN_007e76a0;
    }
    FUN_004252e0(0);
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
LAB_00668f94:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x3f);
      if (iVar4 == 0) goto LAB_00668f94;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar7[3] = iVar4;
    piVar1 = piVar11;
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
  (**(code **)(*piVar1 + 0x84))(puVar7);
  piVar11 = piVar1;
LAB_00668fd7:
  if (*(char *)((int)puVar2 + 0x87) != '\0') {
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
      uVar12 = 0;
      piVar1 = piVar11;
    }
    else {
      pvVar3 = operator_new(0xe);
      if (pvVar3 == (void *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_004f6330(1);
      }
      uVar12 = FUN_004441b0(0x41,uVar12);
      piVar1 = piVar11;
    }
    (**(code **)(*piVar1 + 0x84))(uVar12);
    piVar11 = piVar1;
  }
  if (*(char *)(puVar2 + 0x22) != '\0') {
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
      uVar12 = 0;
      piVar1 = piVar11;
    }
    else {
      pvVar3 = operator_new(0xe);
      if (pvVar3 == (void *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_004f6330(1);
      }
      uVar12 = FUN_004441b0(0x42,uVar12);
      piVar1 = piVar11;
    }
    (**(code **)(*piVar1 + 0x84))(uVar12);
    piVar11 = piVar1;
  }
  if (*(char *)((int)puVar2 + 0x89) != '\0') {
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
      uVar12 = 0;
      piVar1 = piVar11;
    }
    else {
      pvVar3 = operator_new(0xe);
      if (pvVar3 == (void *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_004f6330(1);
      }
      uVar12 = FUN_004441b0(0x50,uVar12);
      piVar1 = piVar11;
    }
    (**(code **)(*piVar1 + 0x84))(uVar12);
    piVar11 = piVar1;
  }
  if (*(char *)((int)puVar2 + 0x8a) != '\0') {
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
      uVar12 = 0;
      piVar1 = piVar11;
    }
    else {
      pvVar3 = operator_new(0xe);
      if (pvVar3 == (void *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_004f6330(1);
      }
      uVar12 = FUN_004441b0(0x46,uVar12);
      piVar1 = piVar11;
    }
    (**(code **)(*piVar1 + 0x84))(uVar12);
    piVar11 = piVar1;
  }
  if (*(char *)((int)puVar2 + 0x8b) != '\0') {
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
      uVar12 = 0;
    }
    else {
      pvVar13 = operator_new(0xe);
      if (pvVar13 == (void *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_004f6330(1);
      }
      uVar12 = FUN_004441b0(0x45,uVar12);
    }
    (**(code **)(*piVar11 + 0x84))(uVar12);
    ExceptionList = pvVar3;
    return piVar11;
  }
  ExceptionList = puVar6;
  return piVar1;
}


