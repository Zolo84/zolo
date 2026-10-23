// FUN_006b65d0 @ 6b65d0 size=2634

int * __fastcall FUN_006b65d0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *unaff_EBX;
  int *unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  float fVar15;
  CHAR local_14 [4];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d6cf6;
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
  piVar4 = operator_new(0x1e);
  local_4 = 2;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar4 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_00444250();
    *piVar4 = (int)&PTR_FUN_007e3a28;
    piVar4[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  piVar2 = *(int **)((int)param_1 + 0x32);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    puVar9 = (undefined4 *)*piVar2;
    wsprintfA(local_14,&DAT_008390a0,*puVar9);
    puVar5 = operator_new(0x14);
    local_4 = 4;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar6 = operator_new(0x10);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar10 = puVar9[1];
        FUN_004252e0(4);
        puVar6[3] = uVar10;
        *puVar6 = &PTR_FUN_007e3978;
      }
      pvVar7 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,5);
      if (pvVar7 == (void *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_0053e770(local_14);
      }
      puVar5[1] = 0xd;
      puVar5[2] = 0;
      *puVar5 = &PTR_LAB_007e38f8;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar5[3] = iVar8;
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
    local_4 = 0xffffffff;
    (**(code **)(*piVar4 + 0x84))(puVar5);
    piVar2 = piVar1;
  }
  puVar9 = operator_new(0x14);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 7;
    local_4._1_3_ = 0;
    pvVar7 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,8);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x6d), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar9[3] = iVar8;
    if (piVar4 == (int *)0x0) {
      *puVar9 = &PTR_FUN_007e3878;
      puVar9[4] = 0;
    }
    else {
      piVar4[2] = piVar4[2] + 1;
      puVar9[4] = piVar4;
      *puVar9 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x84))();
  piVar3 = operator_new(0x1e);
  puStack_8 = (undefined1 *)0x9;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar3 = (int)&PTR_FUN_007e492c;
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,10);
    FUN_00444250();
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  puVar5 = *(undefined4 **)((int)unaff_EBX + 0x56);
  while (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)puVar5[2];
    uVar10 = *puVar5;
    puVar5 = operator_new(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      FUN_004252e0(4);
      puVar5[3] = uVar10;
      *puVar5 = &PTR_FUN_007e3978;
    }
    (**(code **)(*piVar3 + 0x84))(puVar5);
    puVar5 = puVar6;
  }
  puVar5 = operator_new(0x14);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 0xc;
    puStack_8._1_3_ = 0;
    pvVar7 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xd);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0xf3), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar5[3] = iVar8;
    if (piVar3 == (int *)0x0) {
      *puVar5 = &PTR_FUN_007e3878;
      puVar5[4] = 0;
    }
    else {
      piVar3[2] = piVar3[2] + 1;
      puVar5[4] = piVar3;
      *puVar5 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*param_1 + 0x84))();
  piVar3 = operator_new(0x1e);
  local_c = (void *)0xe;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar3 = (int)&PTR_FUN_007e492c;
    local_c = (void *)CONCAT31(local_c._1_3_,0xf);
    FUN_00444250();
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  local_c = (void *)0xffffffff;
  puVar6 = (undefined4 *)unaff_EBP[0x11];
  while (puVar6 != (undefined4 *)0x0) {
    puVar11 = (undefined4 *)puVar6[2];
    uVar10 = *puVar6;
    puVar6 = operator_new(0x10);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      FUN_004252e0(4);
      puVar6[3] = uVar10;
      *puVar6 = &PTR_FUN_007e3978;
    }
    (**(code **)(*piVar3 + 0x84))(puVar6);
    puVar6 = puVar11;
  }
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 0x11;
    local_c._1_3_ = 0;
    pvVar7 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0x12);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x48c), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar6[3] = iVar8;
    if (piVar3 == (int *)0x0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      piVar3[2] = piVar3[2] + 1;
      puVar6[4] = piVar3;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*unaff_EBX + 0x84))();
  piVar3 = operator_new(0x1e);
  uStack_10 = 0x13;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar3 = (int)&PTR_FUN_007e492c;
    uStack_10 = CONCAT31(uStack_10._1_3_,0x14);
    FUN_00444250();
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  uStack_10 = 0xffffffff;
  puVar11 = *(undefined4 **)(unaff_ESI + 0x20);
  while (puVar11 != (undefined4 *)0x0) {
    pvVar7 = operator_new(0x10);
    uStack_10 = 0x15;
    if (pvVar7 == (void *)0x0) {
      uVar10 = 0;
    }
    else {
      puVar12 = (undefined4 *)puVar11[2];
      uVar10 = FUN_004cc5f6(*puVar11);
      uVar10 = FUN_0053ee00(uVar10);
      puVar11 = puVar12;
    }
    uStack_10 = 0xffffffff;
    (**(code **)(*piVar3 + 0x84))(uVar10);
  }
  puVar11 = operator_new(0x14);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_LAB_007e38f8;
    uStack_10._0_1_ = 0x17;
    uStack_10._1_3_ = 0;
    pvVar7 = operator_new(0x14);
    uStack_10 = CONCAT31(uStack_10._1_3_,0x18);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x4ab), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar11[3] = iVar8;
    if (piVar3 == (int *)0x0) {
      *puVar11 = &PTR_FUN_007e3878;
      puVar11[4] = 0;
    }
    else {
      piVar3[2] = piVar3[2] + 1;
      puVar11[4] = piVar3;
      *puVar11 = &PTR_FUN_007e3878;
    }
  }
  uStack_10 = 0xffffffff;
  (**(code **)(*unaff_EBP + 0x84))();
  puVar12 = operator_new(0x14);
  local_14[0] = '\x19';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar13 = operator_new(0x10);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      uVar10 = *(undefined4 *)(unaff_EDI + 4);
      FUN_004252e0(5);
      *puVar13 = &PTR_FUN_007e48ac;
      puVar13[3] = uVar10;
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_LAB_007e38f8;
    local_14[0] = '\x1a';
    pvVar7 = operator_new(0x14);
    local_14[0] = 0x1b;
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x75), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar12[3] = iVar8;
    if (puVar13 == (undefined4 *)0x0) {
      *puVar12 = &PTR_FUN_007e3878;
      puVar12[4] = 0;
    }
    else {
      puVar13[2] = puVar13[2] + 1;
      puVar12[4] = puVar13;
      *puVar12 = &PTR_FUN_007e3878;
    }
  }
  local_14[0] = -1;
  local_14[1] = -1;
  local_14[2] = -1;
  local_14[3] = -1;
  (**(code **)(*unaff_EBP + 0x84))();
  puVar13 = operator_new(0x14);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    puVar14 = operator_new(0x10);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      uVar10 = puVar9[2];
      FUN_004252e0(5);
      *puVar14 = &PTR_FUN_007e48ac;
      puVar14[3] = uVar10;
    }
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = &PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x76), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar13[3] = iVar8;
    if (puVar14 == (undefined4 *)0x0) {
      *puVar13 = &PTR_FUN_007e3878;
      puVar13[4] = 0;
    }
    else {
      puVar14[2] = puVar14[2] + 1;
      puVar13[4] = puVar14;
      *puVar13 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))(puVar13);
  puVar9 = operator_new(0x14);
  if (puVar9 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar13 = operator_new(0x10);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      uVar10 = puVar5[3];
      FUN_00444030(5);
      *puVar13 = &PTR_FUN_007e48ac;
      puVar13[3] = uVar10;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_LAB_007e38f8;
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x77), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar9[3] = iVar8;
    puVar5 = puVar9;
    if (puVar13 == (undefined4 *)0x0) {
      *puVar9 = &PTR_FUN_007e3878;
      puVar9[4] = 0;
    }
    else {
      puVar13[2] = puVar13[2] + 1;
      puVar9[4] = puVar13;
      *puVar9 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))(puVar5);
  puVar5 = operator_new(0x14);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar13 = operator_new(0x10);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      uVar10 = puVar6[4];
      FUN_00444030(5);
      *puVar13 = &PTR_FUN_007e48ac;
      puVar13[3] = uVar10;
    }
    FUN_004252e0(0);
    pvVar7 = operator_new(0x14);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x78), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    puVar5[3] = iVar8;
    if (puVar13 == (undefined4 *)0x0) {
      *puVar5 = &PTR_FUN_007e3878;
      puVar5[4] = 0;
    }
    else {
      puVar13[2] = puVar13[2] + 1;
      puVar5[4] = puVar13;
      *puVar5 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))(puVar5);
  pvVar7 = operator_new(0x14);
  if (pvVar7 == (void *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar5 = operator_new(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      uVar10 = FUN_004441b0(0x79,0);
    }
    else {
      fVar15 = (float)(int)puVar11[5];
      FUN_00444030(5);
      puVar5[3] = fVar15;
      *puVar5 = &PTR_FUN_007e48ac;
      uVar10 = FUN_004441b0(0x79,puVar5);
    }
  }
  (**(code **)(*unaff_EBP + 0x84))(uVar10);
  if (puVar12[6] != 0) {
    pvVar7 = operator_new(0x14);
    if (pvVar7 == (void *)0x0) {
      uVar10 = 0;
    }
    else {
      pvVar7 = operator_new(0x10);
      if (pvVar7 == (void *)0x0) {
        uVar10 = FUN_004441b0(0x7a,0);
      }
      else {
        uVar10 = FUN_004440b0((float)(int)puVar12[6]);
        uVar10 = FUN_004441b0(0x7a,uVar10);
      }
    }
    (**(code **)(*unaff_EBP + 0x84))(uVar10);
  }
  ExceptionList = puVar9;
  return unaff_EBP;
}


