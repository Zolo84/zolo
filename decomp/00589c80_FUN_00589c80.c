// FUN_00589c80 @ 589c80 size=3039

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00589c80(void)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9779;
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
    if (pvVar6 == (void *)0x0) {
LAB_00589d5d:
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0053e740(0x523);
      if (iVar7 == 0) goto LAB_00589d5d;
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
  (**(code **)(*piVar3 + 0x84))();
  puVar8 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    pvVar6 = operator_new(0x14);
    puStack_8._0_1_ = 6;
    if (pvVar6 == (void *)0x0) {
      iVar5 = 0;
    }
    else if (*(int *)(unaff_EBX + 0xc) == 0) {
      iVar5 = FUN_0053e740(0x147);
    }
    else if (*(int *)(unaff_EBX + 0xc) == 1) {
      iVar5 = FUN_0053e740(0x14c);
    }
    else {
      iVar5 = FUN_0053e740(0x1b4);
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 7;
    pvVar6 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if (pvVar6 == (void *)0x0) {
LAB_00589e52:
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0053e740(0x141);
      if (iVar7 == 0) goto LAB_00589e52;
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar8[3] = iVar7;
    if (iVar5 == 0) {
      *puVar8 = &PTR_FUN_007e3878;
      puVar8[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar8[4] = iVar5;
      *puVar8 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar3 + 0x84))(puVar8);
  puVar8 = operator_new(0x14);
  local_c = (void *)0x9;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    pvVar6 = operator_new(0x10);
    local_c._0_1_ = 10;
    if (pvVar6 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar9 = FUN_004af700(*(undefined4 *)(unaff_EBP + 4));
      iVar5 = FUN_0053ee00(uVar9);
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 0xb;
    pvVar6 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0xc);
    if (pvVar6 == (void *)0x0) {
LAB_00589f23:
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0053e740(0xec);
      if (iVar7 == 0) goto LAB_00589f23;
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar8[3] = iVar7;
    if (iVar5 == 0) {
      *puVar8 = &PTR_FUN_007e3878;
      puVar8[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar8[4] = iVar5;
      *puVar8 = &PTR_FUN_007e3878;
    }
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*piVar3 + 0x84))(puVar8);
  puVar8 = operator_new(0x14);
  if (puVar8 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    pvVar6 = operator_new(0x10);
    if (pvVar6 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar9 = FUN_004af700(*(undefined4 *)(unaff_ESI + 8));
      iVar5 = FUN_0053ee00(uVar9);
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if (pvVar6 == (void *)0x0) {
LAB_00589ff4:
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0053e740(0xec);
      if (iVar7 == 0) goto LAB_00589ff4;
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar8[3] = iVar7;
    puVar10 = puVar8;
    if (iVar5 == 0) {
      *puVar8 = &PTR_FUN_007e3878;
      puVar8[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar8[4] = iVar5;
      *puVar8 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar3 + 0x84))(puVar10);
  cVar2 = FUN_0042dd70(DAT_00893530 + 0x14);
  if (cVar2 != '\0') {
    puVar10 = operator_new(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      iVar5 = FUN_0054f410();
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_0058a0b5:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0053e740(0x156);
        if (iVar7 == 0) goto LAB_0058a0b5;
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
    (**(code **)(*piVar3 + 0x84))(puVar10);
  }
  puVar10 = operator_new(0x14);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    iVar5 = FUN_0054f410();
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if (pvVar6 == (void *)0x0) {
LAB_0058a159:
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0053e740(0x132);
      if (iVar7 == 0) goto LAB_0058a159;
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
  (**(code **)(*piVar3 + 0x84))(puVar10);
  if ((float)puVar4[7] != _DAT_007e3380) {
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
        uVar9 = puVar4[7];
        puVar11[1] = 5;
        puVar11[2] = 0;
        puVar11[3] = uVar9;
        *puVar11 = &PTR_FUN_007e48ac;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_0058a239:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x235);
        if (iVar5 == 0) goto LAB_0058a239;
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
  if ((float)puVar4[0xc] != _DAT_007e3380) {
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
        uVar9 = puVar4[0xc];
        puVar11[1] = 5;
        puVar11[2] = 0;
        puVar11[3] = uVar9;
        *puVar11 = &PTR_FUN_007e48ac;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_0058a319:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x382);
        if (iVar5 == 0) goto LAB_0058a319;
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
  if ((float)puVar4[10] != _DAT_007e3380) {
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
        uVar9 = puVar4[10];
        puVar11[1] = 5;
        puVar11[2] = 0;
        puVar11[3] = uVar9;
        *puVar11 = &PTR_FUN_007e48ac;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_0058a3f9:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x232);
        if (iVar5 == 0) goto LAB_0058a3f9;
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
  if ((float)puVar4[9] != _DAT_007e3380) {
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
        uVar9 = puVar4[9];
        FUN_004252e0(5);
        *puVar11 = &PTR_FUN_007e48ac;
        puVar11[3] = uVar9;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_0058a4e9:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x234);
        if (iVar5 == 0) goto LAB_0058a4e9;
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
  if ((float)puVar4[8] != _DAT_007e3380) {
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
        uVar9 = puVar4[8];
        FUN_004252e0(5);
        *puVar11 = &PTR_FUN_007e48ac;
        puVar11[3] = uVar9;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_0058a5d9:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x233);
        if (iVar5 == 0) goto LAB_0058a5d9;
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
  if ((float)puVar4[0xb] == _DAT_007e3380) goto LAB_0058a706;
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
      uVar9 = puVar4[0xb];
      FUN_00444030(5);
      *puVar11 = &PTR_FUN_007e48ac;
      puVar11[3] = uVar9;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if (pvVar6 == (void *)0x0) {
LAB_0058a6c9:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0xf6);
      if (iVar5 == 0) goto LAB_0058a6c9;
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
LAB_0058a706:
  if ((float)puVar4[0xd] < _DAT_007e3374) {
    pvVar6 = operator_new(0x14);
    if (pvVar6 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      puVar10 = operator_new(0x10);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar9 = puVar4[0xd];
        FUN_00444030(5);
        *puVar10 = &PTR_FUN_007e48ac;
        puVar10[3] = uVar9;
      }
      uVar9 = FUN_004441b0(0x2a2,puVar10);
    }
    (**(code **)(*unaff_EDI + 0x84))(uVar9);
    piVar3 = unaff_EDI;
  }
  if (*(char *)((int)puVar4 + 0x39) == '\0') {
    pvVar6 = operator_new(0x14);
    if (pvVar6 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)((int)puVar4 + 0x39);
        FUN_00444030(6);
        *(undefined1 *)(puVar8 + 3) = uVar1;
        *puVar8 = &PTR_FUN_007e76a0;
      }
      uVar9 = FUN_004441b0(0x166,puVar8);
    }
    (**(code **)(*unaff_EDI + 0x84))(uVar9);
    ExceptionList = pvVar6;
    return unaff_EDI;
  }
  ExceptionList = puVar8;
  return piVar3;
}


