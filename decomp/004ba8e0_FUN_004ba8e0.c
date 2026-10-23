// FUN_004ba8e0 @ 4ba8e0 size=3497

int * __fastcall FUN_004ba8e0(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  void *pvVar14;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 uVar15;
  int *piVar16;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007beb66;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
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
  piVar4 = operator_new(0x14);
  local_4 = 2;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar5 = operator_new(0x1a);
    local_4._0_1_ = 3;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      FUN_0053e740(0x523);
      *(undefined2 *)(puVar5 + 5) = *(undefined2 *)(param_1 + 0xc);
      *(undefined4 *)((int)puVar5 + 0x16) = *(undefined4 *)(param_1 + 0xe);
      *puVar5 = &PTR_FUN_007e3ba4;
    }
    piVar4[1] = 0;
    piVar4[2] = 0;
    *piVar4 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 4;
    pvVar6 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,5);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x523), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    piVar4[3] = iVar7;
    if (puVar5 == (undefined4 *)0x0) {
      *piVar4 = (int)&PTR_FUN_007e3878;
      piVar4[4] = 0;
    }
    else {
      puVar5[2] = puVar5[2] + 1;
      piVar4[4] = (int)puVar5;
      *piVar4 = (int)&PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x84))();
  uVar15 = 0;
  switch(unaff_EBX[0x1d]) {
  case 1:
    uVar15 = 0x145;
    break;
  case 2:
    uVar15 = 0x146;
    break;
  case 3:
    uVar15 = 0x144;
    break;
  case 4:
    uVar15 = 0x95;
    break;
  case 5:
    uVar15 = 0x98;
    break;
  case 6:
    uVar15 = 0x94;
    break;
  case 7:
    uVar15 = 0x4e;
    break;
  case 8:
    uVar15 = 0x4f;
    break;
  default:
    FUN_00402500(0,s_Unsupported_Combat_Type___d_0083f1d4,unaff_EBX[0x1d]);
  }
  piVar8 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x6;
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    pvVar6 = operator_new(0x14);
    puStack_8._0_1_ = 7;
    if (pvVar6 == (void *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0053e740(uVar15);
    }
    piVar8[1] = 0;
    piVar8[2] = 0;
    *piVar8 = (int)&PTR_LAB_007e38f8;
    puStack_8._0_1_ = 8;
    pvVar6 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
    if ((pvVar6 == (void *)0x0) || (iVar9 = FUN_0053e740(0x141), iVar9 == 0)) {
      iVar9 = 0;
    }
    else {
      *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
    }
    piVar8[3] = iVar9;
    if (iVar7 == 0) {
      *piVar8 = (int)&PTR_FUN_007e3878;
      piVar8[4] = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      piVar8[4] = iVar7;
      *piVar8 = (int)&PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar3 + 0x84))();
  puVar5 = operator_new(0x14);
  pvStack_c = (void *)0xa;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    pvStack_c._0_1_ = 0xb;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar15 = *(undefined4 *)(*(int *)(unaff_EBP + 0x78) + 0x12);
      FUN_004252e0(4);
      puVar10[3] = uVar15;
      *puVar10 = &PTR_FUN_007e3978;
      piVar3 = unaff_EBX;
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 0xc;
    pvVar6 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0xd);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x1f1), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar5[3] = iVar7;
    if (puVar10 == (undefined4 *)0x0) {
      *puVar5 = &PTR_FUN_007e3878;
      puVar5[4] = 0;
    }
    else {
      puVar10[2] = puVar10[2] + 1;
      puVar5[4] = puVar10;
      *puVar5 = &PTR_FUN_007e3878;
    }
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar3 + 0x84))();
  piVar11 = operator_new(0x14);
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    iVar7 = FUN_0054f410();
    piVar11[1] = 0;
    piVar11[2] = 0;
    *piVar11 = (int)&PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar9 = FUN_0053e740(0xfd), iVar9 == 0)) {
      iVar9 = 0;
    }
    else {
      *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
    }
    piVar11[3] = iVar9;
    if (iVar7 == 0) {
      *piVar11 = (int)&PTR_FUN_007e3878;
      piVar11[4] = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      piVar11[4] = iVar7;
      *piVar11 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  piVar3 = operator_new(0x1e);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_004c0c30(2);
    FUN_00444250();
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  iVar7 = (**(code **)(*(int *)unaff_EDI[0x20] + 0xc))();
  piVar16 = *(int **)(iVar7 + 4);
  while (piVar16 != (int *)0x0) {
    puVar10 = operator_new(0x1a);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      piVar2 = (int *)piVar16[2];
      iVar7 = *piVar16;
      FUN_0053e740(0x523);
      *(undefined2 *)(puVar10 + 5) = *(undefined2 *)(iVar7 + 0x18);
      *(undefined4 *)((int)puVar10 + 0x16) = *(undefined4 *)(iVar7 + 0x1a);
      *puVar10 = &PTR_FUN_007e3ba4;
      piVar16 = piVar2;
    }
    (**(code **)(*piVar3 + 0x84))(puVar10);
  }
  puVar10 = operator_new(0x14);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x1a2), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar10[3] = iVar7;
    if (piVar3 == (int *)0x0) {
      *puVar10 = &PTR_FUN_007e3878;
      puVar10[4] = 0;
    }
    else {
      piVar3[2] = piVar3[2] + 1;
      puVar10[4] = piVar3;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_ESI + 0x84))(puVar10);
  piVar3 = operator_new(0x1e);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_004c0c30(2);
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    *(undefined1 *)(piVar3 + 7) = 0;
    piVar3[3] = (int)&PTR_LAB_007e3ac0;
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  iVar7 = (**(code **)(*(int *)piVar4[0x21] + 0xc))();
  piVar16 = *(int **)(iVar7 + 4);
  while (piVar16 != (int *)0x0) {
    puVar10 = operator_new(0x1a);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      piVar2 = (int *)piVar16[2];
      iVar7 = *piVar16;
      FUN_0053e740(0x523);
      *(undefined2 *)(puVar10 + 5) = *(undefined2 *)(iVar7 + 0x18);
      *(undefined4 *)((int)puVar10 + 0x16) = *(undefined4 *)(iVar7 + 0x1a);
      *puVar10 = &PTR_FUN_007e3ba4;
      piVar16 = piVar2;
    }
    (**(code **)(*piVar3 + 0x84))(puVar10);
  }
  puVar10 = operator_new(0x14);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x1a3), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar10[3] = iVar7;
    if (piVar3 == (int *)0x0) {
      *puVar10 = &PTR_FUN_007e3878;
      puVar10[4] = 0;
    }
    else {
      piVar3[2] = piVar3[2] + 1;
      puVar10[4] = piVar3;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EDI + 0x84))(puVar10);
  if (piVar8[0x1d] == 2) {
    puVar10 = operator_new(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
      piVar3 = piVar4;
    }
    else {
      puVar12 = operator_new(0x10);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        iVar7 = piVar8[0x2d];
        FUN_004252e0(5);
        *puVar12 = &PTR_FUN_007e48ac;
        puVar12[3] = iVar7;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(400), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      piVar3 = piVar4;
      if (puVar12 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar12[2] = puVar12[2] + 1;
        puVar10[4] = puVar12;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    piVar4 = piVar3;
    (**(code **)(*piVar3 + 0x84))(puVar10);
    puVar10 = operator_new(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar12 = operator_new(0x10);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        piVar4 = *(int **)(puVar5[0x20] + 100);
        FUN_004252e0(5);
        *puVar12 = &PTR_FUN_007e48ac;
        puVar12[3] = piVar4;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x1c3), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (puVar12 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar12[2] = puVar12[2] + 1;
        puVar10[4] = puVar12;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))(puVar10);
    puVar10 = operator_new(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar12 = operator_new(0x10);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        piVar8 = *(int **)(piVar11[0x21] + 100);
        FUN_004252e0(5);
        *puVar12 = &PTR_FUN_007e48ac;
        puVar12[3] = piVar8;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x1c4), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (puVar12 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar12[2] = puVar12[2] + 1;
        puVar10[4] = puVar12;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))(puVar10);
  }
  if (*(int *)((int)piVar8 + 0x5e) != 0) {
    puVar10 = operator_new(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      iVar7 = FUN_004c13e0();
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar9 = FUN_0053e740(0x1f7), iVar9 == 0)) {
        iVar9 = 0;
      }
      else {
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
      }
      puVar10[3] = iVar9;
      if (iVar7 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        puVar10[4] = iVar7;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar4 + 0x84))(puVar10);
  }
  iVar7 = *(int *)((int)piVar8 + 0x16);
  while (iVar7 != 0) {
    puVar10 = operator_new(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      iVar7 = *(int *)(iVar7 + 10);
      iVar9 = FUN_00427f80();
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar13 = FUN_0053e740(0x32), iVar13 == 0)) {
        iVar13 = 0;
      }
      else {
        *(int *)(iVar13 + 8) = *(int *)(iVar13 + 8) + 1;
      }
      puVar10[3] = iVar13;
      if (iVar9 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
        puVar10[4] = iVar9;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar4 + 0x84))(puVar10);
  }
  puVar10 = operator_new(0x14);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar12 = operator_new(0xe);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(piVar8[0x20] + 0x4f);
      FUN_004252e0(6);
      *(undefined1 *)(puVar12 + 3) = uVar1;
      *puVar12 = &PTR_FUN_007e76a0;
    }
    *puVar10 = &PTR_LAB_007e38f8;
    puVar10[1] = 0;
    puVar10[2] = 0;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x370), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar10[3] = iVar7;
    if (puVar12 == (undefined4 *)0x0) {
      *puVar10 = &PTR_FUN_007e3878;
      puVar10[4] = 0;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      puVar10[4] = puVar12;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar4 + 0x84))(puVar10);
  puVar10 = operator_new(0x14);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar12 = operator_new(0xe);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(puVar5[0x21] + 0x4f);
      FUN_00444030(6);
      *(undefined1 *)(puVar12 + 3) = uVar1;
      *puVar12 = &PTR_FUN_007e76a0;
    }
    FUN_004252e0(0);
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x370), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar10[3] = iVar7;
    if (puVar12 == (undefined4 *)0x0) {
      *puVar10 = &PTR_FUN_007e3878;
      puVar10[4] = 0;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      puVar10[4] = puVar12;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar8 + 0x84))(puVar10);
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    uVar15 = 0;
  }
  else {
    puVar5 = operator_new(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      iVar7 = piVar11[0x19];
      FUN_00444030(4);
      puVar5[3] = iVar7;
      *puVar5 = &PTR_FUN_007e3978;
    }
    uVar15 = FUN_004441b0(0x30,puVar5);
  }
  (**(code **)(*piVar8 + 0x84))(uVar15);
  if (DAT_00dc191a == '\0') {
    ExceptionList = pvVar6;
    return piVar8;
  }
  iVar7 = 0;
  do {
    iVar9 = FUN_004bc220(iVar7);
    if (iVar9 != 0) {
      pvVar14 = operator_new(0x14);
      if (pvVar14 == (void *)0x0) {
        uVar15 = 0;
      }
      else {
        uVar15 = FUN_00505ba0(iVar7,iVar9);
        uVar15 = FUN_004441b0(uVar15,iVar9);
      }
      (**(code **)(*piVar11 + 0x84))(uVar15);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x25);
  ExceptionList = pvVar6;
  return piVar11;
}


