// FUN_004f1310 @ 4f1310 size=4188

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_004f1310(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  void *pvVar14;
  int unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  byte *pbVar15;
  int *unaff_EDI;
  bool bVar16;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c0602;
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
  piVar4 = operator_new(0x14);
  local_4 = 2;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    iVar5 = FUN_00427f80();
    piVar4[1] = 0;
    piVar4[2] = 0;
    *piVar4 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar6 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (pvVar6 == (void *)0x0) {
LAB_004f13ed:
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0053e740(0x523);
      if (iVar7 == 0) goto LAB_004f13ed;
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    piVar4[3] = iVar7;
    if (iVar5 == 0) {
      *piVar4 = (int)&PTR_FUN_007e3878;
      piVar4[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      piVar4[4] = iVar5;
      *piVar4 = (int)&PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x84))();
  pbVar8 = *(byte **)(unaff_EBX + -0xe);
  if (pbVar8 != (byte *)0x0) {
    pbVar15 = &DAT_0088ebf8;
    do {
      bVar1 = *pbVar8;
      bVar16 = bVar1 < *pbVar15;
      if (bVar1 != *pbVar15) {
LAB_004f1462:
        iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        goto LAB_004f1467;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar16 = bVar1 < pbVar15[1];
      if (bVar1 != pbVar15[1]) goto LAB_004f1462;
      pbVar8 = pbVar8 + 2;
      pbVar15 = pbVar15 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_004f1467:
    if (iVar5 != 0) {
      puVar9 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x5;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        pvVar6 = operator_new(0x10);
        puStack_8._0_1_ = 6;
        if (pvVar6 == (void *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0053ee00(*(undefined4 *)(unaff_EBX + -0xe));
        }
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 7;
        pvVar6 = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
        if (pvVar6 == (void *)0x0) {
LAB_004f14f8:
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_0053e740(0xe9);
          if (iVar7 == 0) goto LAB_004f14f8;
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar9[3] = iVar7;
        if (iVar5 == 0) {
          *puVar9 = &PTR_FUN_007e3878;
          puVar9[4] = 0;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          puVar9[4] = iVar5;
          *puVar9 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*piVar3 + 0x84))(puVar9);
    }
  }
  if (*(float *)(unaff_EBX + 0x2c) != _DAT_007e3380) {
    puVar9 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x9;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar10 = operator_new(0x10);
      puStack_8._0_1_ = 10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar13 = *(undefined4 *)(unaff_EBX + 0x2c);
        FUN_004252e0(5);
        *puVar10 = &PTR_FUN_007e48ac;
        puVar10[3] = uVar13;
      }
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xb;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xc);
      if (pvVar6 == (void *)0x0) {
LAB_004f15e8:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x296);
        if (iVar5 == 0) goto LAB_004f15e8;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar9[3] = iVar5;
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
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar9);
  }
  if (*(int *)(unaff_EBX + 4) != 0) {
    puVar9 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xd;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar10 = operator_new(0x10);
      puStack_8._0_1_ = 0xe;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar13 = *(undefined4 *)(unaff_EBX + 4);
        FUN_004252e0(4);
        puVar10[3] = uVar13;
        *puVar10 = &PTR_FUN_007e3978;
        piVar3 = param_1;
      }
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xf;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x10);
      if (pvVar6 == (void *)0x0) {
LAB_004f16cb:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0xf4);
        if (iVar5 == 0) goto LAB_004f16cb;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar9[3] = iVar5;
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
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar9);
  }
  puVar9 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x11;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar10 = operator_new(0x10);
    puStack_8._0_1_ = 0x12;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar13 = *(undefined4 *)(unaff_EBX + 0x16);
      FUN_004252e0(5);
      *puVar10 = &PTR_FUN_007e48ac;
      puVar10[3] = uVar13;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 0x13;
    pvVar6 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x14);
    if (pvVar6 == (void *)0x0) {
LAB_004f17a3:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0xc0);
      if (iVar5 == 0) goto LAB_004f17a3;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar9[3] = iVar5;
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
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar3 + 0x84))();
  puVar10 = operator_new(0x14);
  local_c = (void *)0x15;
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    iVar5 = FUN_0054f410();
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 0x16;
    pvVar6 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0x17);
    if (pvVar6 == (void *)0x0) {
LAB_004f1847:
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0053e740(0xfd);
      if (iVar7 == 0) goto LAB_004f1847;
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar10[3] = iVar7;
    if (iVar5 == 0) {
      *puVar10 = &PTR_FUN_007e3878;
      puVar10[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar10[4] = iVar5;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*piVar3 + 0x84))(puVar10);
  if ((float)unaff_ESI[0xe] != _DAT_007e3380) {
    puVar10 = operator_new(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar11 = operator_new(0x10);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        iVar5 = unaff_ESI[0xe];
        FUN_004252e0(5);
        *puVar11 = &PTR_FUN_007e48ac;
        puVar11[3] = iVar5;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_004f1937:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x1b3);
        if (iVar5 == 0) goto LAB_004f1937;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar10[3] = iVar5;
      if (puVar11 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar11[2] = puVar11[2] + 1;
        puVar10[4] = puVar11;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))(puVar10);
  }
  if (*(char *)((int)unaff_ESI + 0x2a) != '\0') {
    puVar10 = operator_new(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar11 = operator_new(0xe);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar2 = *(undefined1 *)((int)unaff_ESI + 0x2a);
        FUN_004252e0(6);
        *(undefined1 *)(puVar11 + 3) = uVar2;
        *puVar11 = &PTR_FUN_007e76a0;
        piVar3 = unaff_EBP;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_004f1a17:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x7b);
        if (iVar5 == 0) goto LAB_004f1a17;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar10[3] = iVar5;
      if (puVar11 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar11[2] = puVar11[2] + 1;
        puVar10[4] = puVar11;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))(puVar10);
  }
  if (*(int *)((int)unaff_ESI + 0x26) != 0) {
    puVar10 = operator_new(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar11 = operator_new(0x10);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar13 = *(undefined4 *)((int)unaff_ESI + 0x26);
        FUN_004252e0(4);
        puVar11[3] = uVar13;
        *puVar11 = &PTR_FUN_007e3978;
        piVar3 = unaff_EBP;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_004f1af8:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x24b);
        if (iVar5 == 0) goto LAB_004f1af8;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar10[3] = iVar5;
      if (puVar11 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar11[2] = puVar11[2] + 1;
        puVar10[4] = puVar11;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))(puVar10);
  }
  if ((float)unaff_ESI[0xd] != _DAT_007e3380) {
    puVar10 = operator_new(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar11 = operator_new(0x10);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        iVar5 = unaff_ESI[0xd];
        FUN_004252e0(5);
        *puVar11 = &PTR_FUN_007e48ac;
        puVar11[3] = iVar5;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_004f1be8:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x297);
        if (iVar5 == 0) goto LAB_004f1be8;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar10[3] = iVar5;
      if (puVar11 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar11[2] = puVar11[2] + 1;
        puVar10[4] = puVar11;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))(puVar10);
  }
  puVar10 = operator_new(0x14);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar11 = operator_new(0x10);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      uVar13 = *(undefined4 *)((int)unaff_ESI + 0x1e);
      FUN_004252e0(4);
      puVar11[3] = uVar13;
      *puVar11 = &PTR_FUN_007e3978;
      piVar3 = unaff_EBP;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if (pvVar6 == (void *)0x0) {
LAB_004f1cbc:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x23c);
      if (iVar5 == 0) goto LAB_004f1cbc;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar10[3] = iVar5;
    if (puVar11 == (undefined4 *)0x0) {
      *puVar10 = &PTR_FUN_007e3878;
      puVar10[4] = 0;
    }
    else {
      puVar11[2] = puVar11[2] + 1;
      puVar10[4] = puVar11;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))(puVar10);
  if (*(int *)((int)unaff_EDI + 0x22) != 0) {
    puVar10 = operator_new(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar11 = operator_new(0x10);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar13 = *(undefined4 *)((int)unaff_EDI + 0x22);
        FUN_004252e0(4);
        puVar11[3] = uVar13;
        *puVar11 = &PTR_FUN_007e3978;
        piVar3 = unaff_ESI;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_004f1d9d:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x298);
        if (iVar5 == 0) goto LAB_004f1d9d;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar10[3] = iVar5;
      if (puVar11 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar11[2] = puVar11[2] + 1;
        puVar10[4] = puVar11;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))(puVar10);
  }
  puVar10 = operator_new(0x14);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar11 = operator_new(0x10);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      uVar13 = *(undefined4 *)((int)unaff_EDI + 0xe);
      FUN_004252e0(4);
      puVar11[3] = uVar13;
      *puVar11 = &PTR_FUN_007e3978;
      piVar3 = unaff_ESI;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if (pvVar6 == (void *)0x0) {
LAB_004f1e71:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x299);
      if (iVar5 == 0) goto LAB_004f1e71;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar10[3] = iVar5;
    if (puVar11 == (undefined4 *)0x0) {
      *puVar10 = &PTR_FUN_007e3878;
      puVar10[4] = 0;
    }
    else {
      puVar11[2] = puVar11[2] + 1;
      puVar10[4] = puVar11;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))(puVar10);
  puVar10 = operator_new(0x14);
  if (puVar10 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar12 = operator_new(0x10);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar13 = *(undefined4 *)((int)piVar4 + 0x12);
      FUN_004252e0(4);
      puVar12[3] = uVar13;
      *puVar12 = &PTR_FUN_007e3978;
      piVar3 = unaff_EDI;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if (pvVar6 == (void *)0x0) {
LAB_004f1f45:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x29a);
      if (iVar5 == 0) goto LAB_004f1f45;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar10[3] = iVar5;
    puVar11 = puVar10;
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
  (**(code **)(*piVar3 + 0x84))(puVar11);
  if ((float)puVar9[0xf] != _DAT_007e3380) {
    puVar11 = operator_new(0x14);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
      piVar3 = piVar4;
    }
    else {
      puVar12 = operator_new(0x10);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        uVar13 = puVar9[0xf];
        FUN_00444030(5);
        *puVar12 = &PTR_FUN_007e48ac;
        puVar12[3] = uVar13;
      }
      FUN_004252e0(0);
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_004f2036:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x29b);
        if (iVar5 == 0) goto LAB_004f2036;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar11[3] = iVar5;
      piVar3 = piVar4;
      if (puVar12 == (undefined4 *)0x0) {
        *puVar11 = &PTR_FUN_007e3878;
        puVar11[4] = 0;
      }
      else {
        puVar12[2] = puVar12[2] + 1;
        puVar11[4] = puVar12;
        *puVar11 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))(puVar11);
    piVar4 = piVar3;
  }
  if (puVar9[0x10] != 1) {
    puVar11 = operator_new(0x14);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar12 = operator_new(0x10);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        uVar13 = puVar9[0x10];
        piVar3 = piVar4;
        FUN_00444030(4);
        puVar12[3] = uVar13;
        *puVar12 = &PTR_FUN_007e3978;
        piVar4 = piVar3;
      }
      FUN_004252e0(0);
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_004f211f:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x1aa);
        if (iVar5 == 0) goto LAB_004f211f;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar11[3] = iVar5;
      if (puVar12 == (undefined4 *)0x0) {
        *puVar11 = &PTR_FUN_007e3878;
        puVar11[4] = 0;
      }
      else {
        puVar12[2] = puVar12[2] + 1;
        puVar11[4] = puVar12;
        *puVar11 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar3 + 0x84))(puVar11);
  }
  if (*(char *)(puVar9 + 0x11) == '\0') goto LAB_004f2240;
  puVar11 = operator_new(0x14);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar12 = operator_new(0xe);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined1 *)(puVar9 + 0x11);
      piVar3 = piVar4;
      FUN_00444030(6);
      *(undefined1 *)(puVar12 + 3) = uVar2;
      *puVar12 = &PTR_FUN_007e76a0;
      piVar4 = piVar3;
    }
    FUN_004252e0(0);
    pvVar6 = operator_new(0x14);
    if (pvVar6 == (void *)0x0) {
LAB_004f2203:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x115);
      if (iVar5 == 0) goto LAB_004f2203;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar11[3] = iVar5;
    if (puVar12 == (undefined4 *)0x0) {
      *puVar11 = &PTR_FUN_007e3878;
      puVar11[4] = 0;
    }
    else {
      puVar12[2] = puVar12[2] + 1;
      puVar11[4] = puVar12;
      *puVar11 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))(puVar11);
LAB_004f2240:
  if (*(char *)((int)puVar9 + 0x45) == '\0') {
    pvVar6 = operator_new(0x14);
    if (pvVar6 == (void *)0x0) {
      uVar13 = 0;
      piVar3 = piVar4;
    }
    else {
      pvVar6 = operator_new(0xe);
      if (pvVar6 == (void *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = FUN_004f6330(*(undefined1 *)((int)puVar9 + 0x45));
      }
      uVar13 = FUN_004441b0(0x362,uVar13);
      piVar3 = piVar4;
    }
    (**(code **)(*piVar3 + 0x84))(uVar13);
    piVar4 = piVar3;
  }
  if (*(char *)((int)puVar9 + 0x46) == '\0') {
    pvVar6 = operator_new(0x14);
    if (pvVar6 == (void *)0x0) {
      uVar13 = 0;
    }
    else {
      pvVar14 = operator_new(0xe);
      if (pvVar14 == (void *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = FUN_004f6330(*(undefined1 *)((int)puVar9 + 0x46));
      }
      uVar13 = FUN_004441b0(0x215,uVar13);
    }
    (**(code **)(*piVar4 + 0x84))(uVar13);
    ExceptionList = pvVar6;
    return piVar4;
  }
  ExceptionList = puVar10;
  return piVar3;
}


