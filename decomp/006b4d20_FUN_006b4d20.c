// FUN_006b4d20 @ 6b4d20 size=2755

int * __fastcall FUN_006b4d20(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  void *pvVar12;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d6b1c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = operator_new(0x1e);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar2 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *piVar2 = (int)&PTR_FUN_007e3a28;
    piVar2[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x80) + 4))();
  if (0 < iVar3) {
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
    iVar3 = *(int *)(param_1 + 0x84);
    while (iVar3 != 0) {
      puVar5 = operator_new(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        iVar1 = *(int *)(iVar3 + 10);
        uVar11 = *(undefined4 *)(iVar3 + 2);
        FUN_004252e0(4);
        puVar5[3] = uVar11;
        *puVar5 = &PTR_FUN_007e3978;
        iVar3 = iVar1;
      }
      (**(code **)(*piVar4 + 0x84))(puVar5);
    }
    puVar5 = operator_new(0x14);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 5;
      local_4._1_3_ = 0;
      pvVar6 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,6);
      if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(699), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar5[3] = iVar3;
      if (piVar4 == (int *)0x0) {
        *puVar5 = &PTR_FUN_007e3878;
        puVar5[4] = 0;
      }
      else {
        piVar4[2] = piVar4[2] + 1;
        puVar5[4] = piVar4;
        *puVar5 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar2 + 0x84))(puVar5);
  }
  iVar3 = (**(code **)(*(int *)(param_1 + 0x92) + 4))();
  if (0 < iVar3) {
    piVar4 = operator_new(0x1e);
    local_4 = 7;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *piVar4 = (int)&PTR_FUN_007e492c;
      local_4 = CONCAT31(local_4._1_3_,8);
      FUN_00444250();
      *piVar4 = (int)&PTR_FUN_007e3a28;
      piVar4[3] = (int)&PTR_LAB_007e39f8;
    }
    local_4 = 0xffffffff;
    iVar3 = *(int *)(param_1 + 0x96);
    while (iVar3 != 0) {
      puVar5 = operator_new(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        iVar1 = *(int *)(iVar3 + 10);
        uVar11 = *(undefined4 *)(iVar3 + 2);
        FUN_004252e0(4);
        puVar5[3] = uVar11;
        *puVar5 = &PTR_FUN_007e3978;
        iVar3 = iVar1;
      }
      (**(code **)(*piVar4 + 0x84))(puVar5);
    }
    puVar5 = operator_new(0x14);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 10;
      local_4._1_3_ = 0;
      pvVar6 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0xb);
      if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(700), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar5[3] = iVar3;
      if (piVar4 == (int *)0x0) {
        *puVar5 = &PTR_FUN_007e3878;
        puVar5[4] = 0;
      }
      else {
        piVar4[2] = piVar4[2] + 1;
        puVar5[4] = piVar4;
        *puVar5 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar2 + 0x84))(puVar5);
  }
  iVar3 = (**(code **)(*(int *)(param_1 + 0xa4) + 4))();
  if (0 < iVar3) {
    piVar4 = operator_new(0x1e);
    local_4 = 0xc;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *piVar4 = (int)&PTR_FUN_007e492c;
      local_4 = CONCAT31(local_4._1_3_,0xd);
      FUN_00444250();
      *piVar4 = (int)&PTR_FUN_007e3a28;
      piVar4[3] = (int)&PTR_LAB_007e39f8;
    }
    local_4 = 0xffffffff;
    iVar3 = *(int *)(param_1 + 0xa8);
    while (iVar3 != 0) {
      puVar5 = operator_new(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        iVar1 = *(int *)(iVar3 + 10);
        uVar11 = *(undefined4 *)(iVar3 + 2);
        FUN_004252e0(4);
        puVar5[3] = uVar11;
        *puVar5 = &PTR_FUN_007e3978;
        iVar3 = iVar1;
      }
      (**(code **)(*piVar4 + 0x84))(puVar5);
    }
    puVar5 = operator_new(0x14);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0xf;
      local_4._1_3_ = 0;
      pvVar6 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x10);
      if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(0x4ab), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar5[3] = iVar3;
      if (piVar4 == (int *)0x0) {
        *puVar5 = &PTR_FUN_007e3878;
        puVar5[4] = 0;
      }
      else {
        piVar4[2] = piVar4[2] + 1;
        puVar5[4] = piVar4;
        *puVar5 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar2 + 0x84))(puVar5);
  }
  puVar5 = operator_new(0x14);
  local_4 = 0x11;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)(param_1 + 8);
      FUN_004252e0(5);
      *puVar7 = &PTR_FUN_007e48ac;
      puVar7[3] = uVar11;
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 0x12;
    pvVar6 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,0x13);
    if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(0xa7), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    puVar5[3] = iVar3;
    if (puVar7 == (undefined4 *)0x0) {
      *puVar5 = &PTR_FUN_007e3878;
      puVar5[4] = 0;
    }
    else {
      puVar7[2] = puVar7[2] + 1;
      puVar5[4] = puVar7;
      *puVar5 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x84))();
  piVar4 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x14;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)(unaff_EBX + 4);
      FUN_004252e0(5);
      *puVar7 = &PTR_FUN_007e48ac;
      puVar7[3] = uVar11;
    }
    piVar4[1] = 0;
    piVar4[2] = 0;
    *piVar4 = (int)&PTR_LAB_007e38f8;
    puStack_8._0_1_ = 0x15;
    pvVar6 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x16);
    if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(0x8b), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    piVar4[3] = iVar3;
    if (puVar7 == (undefined4 *)0x0) {
      *piVar4 = (int)&PTR_FUN_007e3878;
      piVar4[4] = 0;
    }
    else {
      puVar7[2] = puVar7[2] + 1;
      piVar4[4] = (int)puVar7;
      *piVar4 = (int)&PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))();
  puVar7 = operator_new(0x14);
  pvStack_c = (void *)0x17;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0x10);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)(unaff_EBP + 0x14);
      FUN_00444030(5);
      *puVar8 = &PTR_FUN_007e48ac;
      puVar8[3] = uVar11;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 0x18;
    pvVar6 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x19);
    if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(0x2c0), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
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
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))();
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
      uVar11 = *(undefined4 *)(unaff_ESI + 0x10);
      FUN_00444030(5);
      *puVar9 = &PTR_FUN_007e48ac;
      puVar9[3] = uVar11;
    }
    FUN_004252e0(0);
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(0x2c1), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
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
  (**(code **)(*piVar2 + 0x84))();
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
      iVar3 = unaff_EDI[3];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = iVar3;
    }
    FUN_004252e0(0);
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(0x146), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    puVar9[3] = iVar3;
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
  (**(code **)(*piVar2 + 0x84))(puVar9);
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
      uVar11 = puVar5[6];
      FUN_00444030(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar11;
    }
    FUN_004252e0(0);
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(0x332), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    puVar9[3] = iVar3;
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
  (**(code **)(*unaff_EDI + 0x84))(puVar9);
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    uVar11 = 0;
  }
  else {
    pvVar6 = operator_new(0x10);
    if (pvVar6 == (void *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_004440b0(piVar4[7]);
    }
    uVar11 = FUN_004441b0(0x335,uVar11);
  }
  (**(code **)(*unaff_EDI + 0x84))(uVar11);
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    uVar11 = 0;
  }
  else {
    pvVar6 = operator_new(0x10);
    if (pvVar6 == (void *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_004440b0(puVar7[9]);
    }
    uVar11 = FUN_004441b0(0x333,uVar11);
  }
  (**(code **)(*piVar4 + 0x84))(uVar11);
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    uVar11 = 0;
  }
  else {
    pvVar12 = operator_new(0x10);
    if (pvVar12 == (void *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_004440b0(puVar8[8]);
    }
    uVar11 = FUN_004441b0(0x334,uVar11);
  }
  (**(code **)(*piVar4 + 0x84))(uVar11);
  ExceptionList = pvVar6;
  return piVar4;
}


