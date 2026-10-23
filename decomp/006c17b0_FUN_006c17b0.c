// FUN_006c17b0 @ 6c17b0 size=7720

int * __fastcall FUN_006c17b0(int *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d833f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = operator_new(0x1e);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_00444030();
    *piVar2 = (int)&PTR_FUN_007e492c;
    FUN_00444250();
    *piVar2 = (int)&PTR_FUN_007e3a28;
    piVar2[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  piVar3 = operator_new(0x14);
  local_4 = 1;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar6 = param_1[1];
      FUN_004252e0();
      *puVar4 = &PTR_FUN_007e48ac;
      puVar4[3] = iVar6;
    }
    piVar3[1] = 0;
    piVar3[2] = 0;
    *piVar3 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar5 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar3[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar3 = (int)&PTR_FUN_007e3878;
      piVar3[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar3[4] = (int)puVar4;
      *piVar3 = (int)&PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x84))();
  piVar7 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x4;
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar6 = unaff_EBX[2];
      FUN_004252e0();
      puVar4[3] = iVar6;
      *puVar4 = &PTR_FUN_007e3978;
      piVar2 = param_1;
    }
    piVar7[1] = 0;
    piVar7[2] = 0;
    *piVar7 = (int)&PTR_LAB_007e38f8;
    puStack_8._0_1_ = 5;
    pvVar5 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar7[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar7 = (int)&PTR_FUN_007e3878;
      piVar7[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar7[4] = (int)puVar4;
      *piVar7 = (int)&PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))();
  piVar8 = operator_new(0x14);
  pvStack_c = (void *)0x7;
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar17 = *(undefined4 *)(unaff_EBP + 0xc);
      FUN_004252e0();
      puVar4[3] = uVar17;
      *puVar4 = &PTR_FUN_007e3978;
      piVar2 = unaff_EBX;
    }
    piVar8[1] = 0;
    piVar8[2] = 0;
    *piVar8 = (int)&PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 8;
    pvVar5 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,9);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar8[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar8 = (int)&PTR_FUN_007e3878;
      piVar8[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar8[4] = (int)puVar4;
      *piVar8 = (int)&PTR_FUN_007e3878;
    }
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))();
  piVar9 = operator_new(0x14);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      switch(unaff_ESI[4]) {
      case 0:
        iVar6 = FUN_0053e740();
        break;
      default:
        iVar6 = FUN_0053e740();
        break;
      case 2:
        iVar6 = FUN_0053e740();
        break;
      case 3:
        iVar6 = FUN_0053e740();
      }
    }
    piVar9[1] = 0;
    piVar9[2] = 0;
    *piVar9 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar10 = FUN_0053e740(), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    piVar9[3] = iVar10;
    if (iVar6 == 0) {
      *piVar9 = (int)&PTR_FUN_007e3878;
      piVar9[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      piVar9[4] = iVar6;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  piVar11 = operator_new(0x14);
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar6 = unaff_EDI[5];
      FUN_004252e0();
      puVar4[3] = iVar6;
      *puVar4 = &PTR_FUN_007e3978;
      piVar2 = unaff_ESI;
    }
    piVar11[1] = 0;
    piVar11[2] = 0;
    *piVar11 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar11[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar11 = (int)&PTR_FUN_007e3878;
      piVar11[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar11[4] = (int)puVar4;
      *piVar11 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  piVar2 = operator_new(0x1e);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_00444030();
    *piVar2 = (int)&PTR_FUN_007e492c;
    FUN_00444250();
    *piVar2 = (int)&PTR_FUN_007e3a28;
    piVar2[3] = (int)&PTR_LAB_007e39f8;
  }
  puVar4 = (undefined4 *)piVar3[7];
  while (puVar4 != (undefined4 *)0x0) {
    puVar12 = operator_new(0x10);
    if (puVar12 != (undefined4 *)0x0) {
      puVar15 = (undefined4 *)puVar4[2];
      uVar17 = *puVar4;
      FUN_004252e0();
      puVar12[3] = uVar17;
      *puVar12 = &PTR_FUN_007e3978;
      puVar4 = puVar15;
    }
    (**(code **)(*piVar2 + 0x84))();
  }
  piVar13 = operator_new(0x14);
  if (piVar13 == (int *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13[1] = 0;
    piVar13[2] = 0;
    *piVar13 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar13[3] = iVar6;
    if (piVar2 == (int *)0x0) {
      *piVar13 = (int)&PTR_FUN_007e3878;
      piVar13[4] = 0;
    }
    else {
      piVar2[2] = piVar2[2] + 1;
      piVar13[4] = (int)piVar2;
      *piVar13 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EDI + 0x84))();
  piVar2 = operator_new(0x14);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      switch(*(undefined4 *)((int)piVar7 + 0x2a)) {
      case 0:
        iVar6 = FUN_0053e740();
        break;
      default:
        iVar6 = FUN_0053e740();
        break;
      case 2:
        iVar6 = FUN_0053e740();
        break;
      case 3:
        iVar6 = FUN_0053e740();
      }
    }
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar10 = FUN_0053e740(), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    piVar2[3] = iVar10;
    if (iVar6 == 0) {
      *piVar2 = (int)&PTR_FUN_007e3878;
      piVar2[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      piVar2[4] = iVar6;
      *piVar2 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  piVar14 = operator_new(0x14);
  if (piVar14 == (int *)0x0) {
    piVar14 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar17 = *(undefined4 *)((int)piVar8 + 0x2e);
      piVar3 = piVar7;
      FUN_004252e0();
      puVar4[3] = uVar17;
      *puVar4 = &PTR_FUN_007e3978;
    }
    piVar14[1] = 0;
    piVar14[2] = 0;
    *piVar14 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar14[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar14 = (int)&PTR_FUN_007e3878;
      piVar14[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar14[4] = (int)puVar4;
      *piVar14 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  piVar3 = operator_new(0x1e);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00444030();
    *piVar3 = (int)&PTR_FUN_007e492c;
    FUN_00444250();
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  puVar4 = *(undefined4 **)((int)piVar9 + 0x36);
  while (puVar4 != (undefined4 *)0x0) {
    puVar12 = operator_new(0x10);
    if (puVar12 != (undefined4 *)0x0) {
      puVar15 = (undefined4 *)puVar4[2];
      uVar17 = *puVar4;
      FUN_004252e0();
      puVar12[3] = uVar17;
      *puVar12 = &PTR_FUN_007e3978;
      puVar4 = puVar15;
    }
    (**(code **)(*piVar3 + 0x84))();
  }
  piVar7 = operator_new(0x14);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7[1] = 0;
    piVar7[2] = 0;
    *piVar7 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar7[3] = iVar6;
    if (piVar3 == (int *)0x0) {
      *piVar7 = (int)&PTR_FUN_007e3878;
      piVar7[4] = 0;
    }
    else {
      piVar3[2] = piVar3[2] + 1;
      piVar7[4] = (int)piVar3;
      *piVar7 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar8 + 0x84))();
  piVar3 = operator_new(0x14);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      switch(piVar11[0x11]) {
      case 0:
        iVar6 = FUN_0053e740();
        break;
      default:
        iVar6 = FUN_0053e740();
        break;
      case 2:
        iVar6 = FUN_0053e740();
        break;
      case 3:
        iVar6 = FUN_0053e740();
      }
    }
    piVar3[1] = 0;
    piVar3[2] = 0;
    *piVar3 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar10 = FUN_0053e740(), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    piVar3[3] = iVar10;
    if (iVar6 == 0) {
      *piVar3 = (int)&PTR_FUN_007e3878;
      piVar3[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      piVar3[4] = iVar6;
      *piVar3 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar9 + 0x84))();
  piVar8 = operator_new(0x14);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar6 = piVar13[0x12];
      piVar9 = piVar11;
      FUN_004252e0();
      puVar4[3] = iVar6;
      *puVar4 = &PTR_FUN_007e3978;
    }
    piVar8[1] = 0;
    piVar8[2] = 0;
    *piVar8 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar8[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar8 = (int)&PTR_FUN_007e3878;
      piVar8[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar8[4] = (int)puVar4;
      *piVar8 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar9 + 0x84))();
  piVar9 = operator_new(0x1e);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    FUN_00444030();
    *piVar9 = (int)&PTR_FUN_007e492c;
    FUN_00444250();
    *piVar9 = (int)&PTR_FUN_007e3a28;
    piVar9[3] = (int)&PTR_LAB_007e39f8;
  }
  puVar4 = (undefined4 *)piVar2[0x14];
  while (puVar4 != (undefined4 *)0x0) {
    puVar12 = operator_new(0x10);
    if (puVar12 != (undefined4 *)0x0) {
      puVar15 = (undefined4 *)puVar4[2];
      uVar17 = *puVar4;
      FUN_004252e0();
      puVar12[3] = uVar17;
      *puVar12 = &PTR_FUN_007e3978;
      puVar4 = puVar15;
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  piVar11 = operator_new(0x14);
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11[1] = 0;
    piVar11[2] = 0;
    *piVar11 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar11[3] = iVar6;
    if (piVar9 == (int *)0x0) {
      *piVar11 = (int)&PTR_FUN_007e3878;
      piVar11[4] = 0;
    }
    else {
      piVar9[2] = piVar9[2] + 1;
      piVar11[4] = (int)piVar9;
      *piVar11 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar13 + 0x84))();
  piVar9 = operator_new(0x14);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      switch(*(undefined4 *)((int)piVar14 + 0x5e)) {
      case 0:
        iVar6 = FUN_0053e740();
        break;
      default:
        iVar6 = FUN_0053e740();
        break;
      case 2:
        iVar6 = FUN_0053e740();
        break;
      case 3:
        iVar6 = FUN_0053e740();
      }
    }
    piVar9[1] = 0;
    piVar9[2] = 0;
    *piVar9 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar10 = FUN_0053e740(), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    piVar9[3] = iVar10;
    if (iVar6 == 0) {
      *piVar9 = (int)&PTR_FUN_007e3878;
      piVar9[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      piVar9[4] = iVar6;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  piVar13 = operator_new(0x14);
  if (piVar13 == (int *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar17 = *(undefined4 *)((int)piVar7 + 0x62);
      piVar2 = piVar14;
      FUN_004252e0();
      puVar4[3] = uVar17;
      *puVar4 = &PTR_FUN_007e3978;
    }
    piVar13[1] = 0;
    piVar13[2] = 0;
    *piVar13 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar13[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar13 = (int)&PTR_FUN_007e3878;
      piVar13[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar13[4] = (int)puVar4;
      *piVar13 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  piVar2 = operator_new(0x1e);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004c0c30();
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    *(undefined1 *)(piVar2 + 7) = 0;
    piVar2[3] = (int)&PTR_LAB_007e3ac0;
    *piVar2 = (int)&PTR_FUN_007e3a28;
    piVar2[3] = (int)&PTR_LAB_007e39f8;
  }
  puVar4 = *(undefined4 **)((int)piVar3 + 0x6a);
  while (puVar4 != (undefined4 *)0x0) {
    puVar12 = operator_new(0x10);
    if (puVar12 != (undefined4 *)0x0) {
      puVar15 = (undefined4 *)puVar4[2];
      uVar17 = *puVar4;
      FUN_004252e0();
      puVar12[3] = uVar17;
      *puVar12 = &PTR_FUN_007e3978;
      puVar4 = puVar15;
    }
    (**(code **)(*piVar2 + 0x84))();
  }
  piVar14 = operator_new(0x14);
  if (piVar14 == (int *)0x0) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14[1] = 0;
    piVar14[2] = 0;
    *piVar14 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar14[3] = iVar6;
    if (piVar2 == (int *)0x0) {
      *piVar14 = (int)&PTR_FUN_007e3878;
      piVar14[4] = 0;
    }
    else {
      piVar2[2] = piVar2[2] + 1;
      piVar14[4] = (int)piVar2;
      *piVar14 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar7 + 0x84))();
  piVar2 = operator_new(0x14);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      switch(piVar8[0x1e]) {
      case 0:
        iVar6 = FUN_0053e740();
        break;
      default:
        iVar6 = FUN_0053e740();
        break;
      case 2:
        iVar6 = FUN_0053e740();
        break;
      case 3:
        iVar6 = FUN_0053e740();
      }
    }
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar10 = FUN_0053e740(), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    piVar2[3] = iVar10;
    if (iVar6 == 0) {
      *piVar2 = (int)&PTR_FUN_007e3878;
      piVar2[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      piVar2[4] = iVar6;
      *piVar2 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  piVar7 = operator_new(0x14);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar6 = piVar11[0x1f];
      piVar3 = piVar8;
      FUN_00444030();
      puVar4[3] = iVar6;
      *puVar4 = &PTR_FUN_007e3978;
    }
    piVar7[1] = 0;
    piVar7[2] = 0;
    *piVar7 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar7[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar7 = (int)&PTR_FUN_007e3878;
      piVar7[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar7[4] = (int)puVar4;
      *piVar7 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))();
  piVar3 = operator_new(0x1e);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_004c0c30();
    FUN_00444250();
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  puVar4 = (undefined4 *)piVar9[0x21];
  while (puVar4 != (undefined4 *)0x0) {
    puVar12 = operator_new(0x10);
    if (puVar12 != (undefined4 *)0x0) {
      puVar15 = (undefined4 *)puVar4[2];
      uVar17 = *puVar4;
      FUN_00444030();
      puVar12[3] = uVar17;
      *puVar12 = &PTR_FUN_007e3978;
      puVar4 = puVar15;
    }
    (**(code **)(*piVar3 + 0x84))();
  }
  piVar8 = operator_new(0x14);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8[1] = 0;
    piVar8[2] = 0;
    *piVar8 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar8[3] = iVar6;
    if (piVar3 == (int *)0x0) {
      *piVar8 = (int)&PTR_FUN_007e3878;
      piVar8[4] = 0;
    }
    else {
      piVar3[2] = piVar3[2] + 1;
      piVar8[4] = (int)piVar3;
      *piVar8 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar11 + 0x84))();
  piVar3 = operator_new(0x14);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      switch(*(undefined4 *)((int)piVar13 + 0xaa)) {
      case 0:
        iVar6 = FUN_0053e740();
        break;
      default:
        iVar6 = FUN_0053e740();
        break;
      case 2:
        iVar6 = FUN_0053e740();
        break;
      case 3:
        iVar6 = FUN_0053e740();
      }
    }
    piVar3[1] = 0;
    piVar3[2] = 0;
    *piVar3 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar10 = FUN_0053e740(), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    piVar3[3] = iVar10;
    if (iVar6 == 0) {
      *piVar3 = (int)&PTR_FUN_007e3878;
      piVar3[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      piVar3[4] = iVar6;
      *piVar3 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar9 + 0x84))();
  piVar11 = operator_new(0x14);
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar6 = piVar14[0x30];
      piVar9 = piVar13;
      FUN_00444030();
      puVar4[3] = iVar6;
      *puVar4 = &PTR_FUN_007e3978;
    }
    piVar11[1] = 0;
    piVar11[2] = 0;
    *piVar11 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar11[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *piVar11 = (int)&PTR_FUN_007e3878;
      piVar11[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      piVar11[4] = (int)puVar4;
      *piVar11 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar9 + 0x84))();
  piVar9 = operator_new(0x1e);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    FUN_004c0c30();
    FUN_00444250();
    *piVar9 = (int)&PTR_FUN_007e3a28;
    piVar9[3] = (int)&PTR_LAB_007e39f8;
  }
  puVar4 = *(undefined4 **)((int)piVar2 + 0xb2);
  while (puVar4 != (undefined4 *)0x0) {
    puVar12 = operator_new(0x1a);
    if (puVar12 != (undefined4 *)0x0) {
      puVar15 = (undefined4 *)puVar4[2];
      uVar17 = *puVar4;
      FUN_0053e740();
      *(undefined2 *)(puVar12 + 5) = 3;
      *(undefined4 *)((int)puVar12 + 0x16) = uVar17;
      *puVar12 = &PTR_FUN_007e3ba4;
      puVar4 = puVar15;
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  piVar13 = operator_new(0x14);
  if (piVar13 == (int *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13[1] = 0;
    piVar13[2] = 0;
    *piVar13 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar13[3] = iVar6;
    if (piVar9 == (int *)0x0) {
      *piVar13 = (int)&PTR_FUN_007e3878;
      piVar13[4] = 0;
    }
    else {
      piVar9[2] = piVar9[2] + 1;
      piVar13[4] = (int)piVar9;
      *piVar13 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar14 + 0x84))();
  piVar9 = operator_new(0x1e);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    FUN_004c0c30();
    FUN_00444250();
    *piVar9 = (int)&PTR_FUN_007e3a28;
    piVar9[3] = (int)&PTR_LAB_007e39f8;
  }
  puVar4 = (undefined4 *)piVar7[0x32];
  while (puVar4 != (undefined4 *)0x0) {
    puVar12 = operator_new(0x10);
    if (puVar12 != (undefined4 *)0x0) {
      puVar15 = (undefined4 *)puVar4[2];
      uVar17 = *puVar4;
      FUN_00444030();
      puVar12[3] = uVar17;
      *puVar12 = &PTR_FUN_007e3978;
      puVar4 = puVar15;
    }
    (**(code **)(*piVar9 + 0x84))();
  }
  piVar14 = operator_new(0x14);
  if (piVar14 == (int *)0x0) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14[1] = 0;
    piVar14[2] = 0;
    *piVar14 = (int)&PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar14[3] = iVar6;
    if (piVar9 == (int *)0x0) {
      *piVar14 = (int)&PTR_FUN_007e3878;
      piVar14[4] = 0;
    }
    else {
      piVar9[2] = piVar9[2] + 1;
      piVar14[4] = (int)piVar9;
      *piVar14 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))();
  puVar4 = operator_new(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      switch(*(undefined4 *)((int)piVar8 + 0x92)) {
      case 0:
        iVar6 = FUN_0053e740(0x111);
        break;
      default:
        iVar6 = FUN_0053e740(0x112);
        break;
      case 2:
        iVar6 = FUN_0053e740(0x138);
        break;
      case 3:
        iVar6 = FUN_0053e740(0x455);
      }
    }
    FUN_004252e0(0);
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar10 = FUN_0053e740(0x41c), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    puVar4[3] = iVar10;
    if (iVar6 == 0) {
      *puVar4 = &PTR_FUN_007e3878;
      puVar4[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      puVar4[4] = iVar6;
      *puVar4 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar7 + 0x84))();
  piVar2 = operator_new(0x14);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar12 = operator_new(0x10);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar17 = *(undefined4 *)((int)piVar3 + 0x96);
      piVar7 = piVar8;
      FUN_00444030(4);
      puVar12[3] = uVar17;
      *puVar12 = &PTR_FUN_007e3978;
    }
    FUN_004252e0(0);
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x41e), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    piVar2[3] = iVar6;
    if (puVar12 == (undefined4 *)0x0) {
      *piVar2 = (int)&PTR_FUN_007e3878;
      piVar2[4] = 0;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      piVar2[4] = (int)puVar12;
      *piVar2 = (int)&PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar7 + 0x84))();
  if (0 < *(int *)((int)piVar11 + 0x9a)) {
    puVar12 = operator_new(0x14);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar15 = operator_new(0x10);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        uVar17 = *(undefined4 *)((int)piVar11 + 0x9a);
        piVar7 = piVar3;
        FUN_00444030(4);
        puVar15[3] = uVar17;
        *puVar15 = &PTR_FUN_007e3978;
      }
      FUN_004252e0(0);
      pvVar5 = operator_new(0x14);
      if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x41f), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar12[3] = iVar6;
      if (puVar15 == (undefined4 *)0x0) {
        *puVar12 = &PTR_FUN_007e3878;
        puVar12[4] = 0;
      }
      else {
        puVar15[2] = puVar15[2] + 1;
        puVar12[4] = puVar15;
        *puVar12 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar7 + 0x84))(puVar12);
  }
  puVar12 = operator_new(0x14);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      switch(*(undefined4 *)((int)piVar11 + 0x9e)) {
      case 0:
        iVar6 = FUN_0053e740(0x111);
        break;
      default:
        iVar6 = FUN_0053e740(0x112);
        break;
      case 2:
        iVar6 = FUN_0053e740(0x138);
        break;
      case 3:
        iVar6 = FUN_0053e740(0x455);
      }
    }
    FUN_004252e0(0);
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar10 = FUN_0053e740(0x41d), iVar10 == 0)) {
      iVar10 = 0;
    }
    else {
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
    }
    puVar12[3] = iVar10;
    if (iVar6 == 0) {
      *puVar12 = &PTR_FUN_007e3878;
      puVar12[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      puVar12[4] = iVar6;
      *puVar12 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar7 + 0x84))();
  puVar15 = operator_new(0x14);
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    puVar16 = operator_new(0x10);
    if (puVar16 == (undefined4 *)0x0) {
      puVar16 = (undefined4 *)0x0;
    }
    else {
      uVar17 = *(undefined4 *)((int)piVar13 + 0xa2);
      piVar7 = piVar11;
      FUN_00444030(4);
      puVar16[3] = uVar17;
      *puVar16 = &PTR_FUN_007e3978;
    }
    FUN_004252e0(0);
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x420), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar15[3] = iVar6;
    if (puVar16 == (undefined4 *)0x0) {
      *puVar15 = &PTR_FUN_007e3878;
      puVar15[4] = 0;
    }
    else {
      puVar16[2] = puVar16[2] + 1;
      puVar15[4] = puVar16;
      *puVar15 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar7 + 0x84))(puVar15);
  if (0 < *(int *)((int)piVar14 + 0xa6)) {
    puVar15 = operator_new(0x14);
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      puVar16 = operator_new(0x10);
      if (puVar16 == (undefined4 *)0x0) {
        puVar16 = (undefined4 *)0x0;
      }
      else {
        uVar17 = *(undefined4 *)((int)piVar14 + 0xa6);
        piVar7 = piVar13;
        FUN_00444030(4);
        puVar16[3] = uVar17;
        *puVar16 = &PTR_FUN_007e3978;
        piVar13 = piVar7;
      }
      FUN_004252e0(0);
      pvVar5 = operator_new(0x14);
      if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x421), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar15[3] = iVar6;
      if (puVar16 == (undefined4 *)0x0) {
        *puVar15 = &PTR_FUN_007e3878;
        puVar15[4] = 0;
      }
      else {
        puVar16[2] = puVar16[2] + 1;
        puVar15[4] = puVar16;
        *puVar15 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar7 + 0x84))(puVar15);
  }
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
    uVar17 = 0;
  }
  else {
    puVar15 = operator_new(0xe);
    if (puVar15 == (undefined4 *)0x0) {
      uVar17 = FUN_004441b0(0x452,0);
    }
    else {
      uVar1 = *(undefined1 *)((int)piVar14 + 0xd6);
      FUN_00444030(6);
      *(undefined1 *)(puVar15 + 3) = uVar1;
      *puVar15 = &PTR_FUN_007e76a0;
      uVar17 = FUN_004441b0(0x452,puVar15);
    }
  }
  (**(code **)(*piVar13 + 0x84))(uVar17);
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
    uVar17 = 0;
  }
  else {
    puVar15 = operator_new(0x10);
    if (puVar15 == (undefined4 *)0x0) {
      uVar17 = FUN_004441b0(0x453,0);
    }
    else {
      uVar17 = puVar4[0x36];
      piVar13 = piVar14;
      FUN_00444030(4);
      puVar15[3] = uVar17;
      *puVar15 = &PTR_FUN_007e3978;
      uVar17 = FUN_004441b0(0x453,puVar15);
    }
  }
  (**(code **)(*piVar13 + 0x84))(uVar17);
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
    uVar17 = 0;
  }
  else {
    pvVar5 = operator_new(0x10);
    if (pvVar5 == (void *)0x0) {
      uVar17 = FUN_004441b0(0x454,0);
    }
    else {
      uVar17 = FUN_00516850(piVar2[0x37]);
      uVar17 = FUN_004441b0(0x454,uVar17);
    }
  }
  (**(code **)(*piVar13 + 0x84))(uVar17);
  pvVar5 = operator_new(0x1e);
  if (pvVar5 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00538860();
  }
  iVar6 = puVar12[0x39];
  while (iVar6 != 0) {
    pvVar5 = operator_new(0x10);
    if (pvVar5 == (void *)0x0) {
      uVar17 = 0;
    }
    else {
      puVar4 = (undefined4 *)FUN_00526af0(&stack0xffffff78,0);
      uVar17 = FUN_00516850(*(undefined4 *)*puVar4);
    }
    (**(code **)(*piVar3 + 0x84))(uVar17);
  }
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
    uVar17 = 0;
  }
  else {
    uVar17 = FUN_004441b0(0x45f,piVar3);
  }
  (**(code **)(*piVar2 + 0x84))(uVar17);
  ExceptionList = pvVar5;
  return piVar2;
}


