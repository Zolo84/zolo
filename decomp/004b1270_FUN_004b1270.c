// FUN_004b1270 @ 4b1270 size=1976

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004b1270(void)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007be380;
  local_c = ExceptionList;
  ExceptionList = &local_c;
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
  puVar3 = operator_new(0x14);
  local_4 = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar4 = FUN_00427f80();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar5 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (pvVar5 == (void *)0x0) {
LAB_004b1350:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x523);
      if (iVar6 == 0) goto LAB_004b1350;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (iVar4 == 0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      puVar3[4] = iVar4;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x84))(puVar3);
  puVar3 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar4 = FUN_0054f410();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 6;
    pvVar5 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    if (pvVar5 == (void *)0x0) {
LAB_004b13f8:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x156);
      if (iVar6 == 0) goto LAB_004b13f8;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (iVar4 == 0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      puVar3[4] = iVar4;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))(puVar3);
  puVar3 = operator_new(0x14);
  local_c = (void *)0x8;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar4 = FUN_0054f410();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 9;
    pvVar5 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,10);
    if (pvVar5 == (void *)0x0) {
LAB_004b14a0:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x157);
      if (iVar6 == 0) goto LAB_004b14a0;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (iVar4 == 0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      puVar3[4] = iVar4;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))(puVar3);
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar8 = *(undefined4 *)((int)unaff_ESI + 0x9a);
      FUN_004252e0(4);
      puVar7[3] = uVar8;
      *puVar7 = &PTR_FUN_007e3978;
      piVar2 = unaff_EBP;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
LAB_004b1578:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x1f1);
      if (iVar4 == 0) goto LAB_004b1578;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar3[3] = iVar4;
    if (puVar7 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar7[2] = puVar7[2] + 1;
      puVar3[4] = puVar7;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))(puVar3);
  if (*(char *)(unaff_EDI + 0xa4) != '\0') {
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar7 = operator_new(0x10);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        bVar1 = *(byte *)(unaff_EDI + 0xa4);
        FUN_004252e0(4);
        puVar7[3] = (uint)bVar1;
        *puVar7 = &PTR_FUN_007e3978;
        piVar2 = unaff_ESI;
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      pvVar5 = operator_new(0x14);
      if (pvVar5 == (void *)0x0) {
LAB_004b1666:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x4f0);
        if (iVar4 == 0) goto LAB_004b1666;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar3[3] = iVar4;
      if (puVar7 == (undefined4 *)0x0) {
        *puVar3 = &PTR_FUN_007e3878;
        puVar3[4] = 0;
      }
      else {
        puVar7[2] = puVar7[2] + 1;
        puVar3[4] = puVar7;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar2 + 0x84))(puVar3);
  }
  if (*(float *)(unaff_EDI + 0x94) != _DAT_007e3380) {
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar7 = operator_new(0x10);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar8 = *(undefined4 *)(unaff_EDI + 0x94);
        FUN_004252e0(5);
        *puVar7 = &PTR_FUN_007e48ac;
        puVar7[3] = uVar8;
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      pvVar5 = operator_new(0x14);
      if (pvVar5 == (void *)0x0) {
LAB_004b175d:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x1fe);
        if (iVar4 == 0) goto LAB_004b175d;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar3[3] = iVar4;
      if (puVar7 == (undefined4 *)0x0) {
        *puVar3 = &PTR_FUN_007e3878;
        puVar3[4] = 0;
      }
      else {
        puVar7[2] = puVar7[2] + 1;
        puVar3[4] = puVar7;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar2 + 0x84))(puVar3);
  }
  if (*(char *)(unaff_EDI + 0xa6) != '\0') {
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar7 = operator_new(0x10);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        bVar1 = *(byte *)(unaff_EDI + 0xa6);
        FUN_00444030(4);
        puVar7[3] = (uint)bVar1;
        *puVar7 = &PTR_FUN_007e3978;
      }
      FUN_004252e0(0);
      pvVar5 = operator_new(0x14);
      if (pvVar5 == (void *)0x0) {
LAB_004b1849:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0053e740(0x4ed);
        if (iVar4 == 0) goto LAB_004b1849;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar3[3] = iVar4;
      if (puVar7 == (undefined4 *)0x0) {
        *puVar3 = &PTR_FUN_007e3878;
        puVar3[4] = 0;
      }
      else {
        puVar7[2] = puVar7[2] + 1;
        puVar3[4] = puVar7;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_ESI + 0x84))(puVar3);
    piVar2 = unaff_ESI;
  }
  if (*(char *)(unaff_EDI + 0xa5) == '\0') goto LAB_004b1981;
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      bVar1 = *(byte *)(unaff_EDI + 0xa5);
      FUN_00444030(4);
      puVar7[3] = (uint)bVar1;
      *puVar7 = &PTR_FUN_007e3978;
    }
    FUN_004252e0(0);
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
LAB_004b193c:
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0053e740(0x4f3);
      if (iVar4 == 0) goto LAB_004b193c;
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar3[3] = iVar4;
    if (puVar7 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar7[2] = puVar7[2] + 1;
      puVar3[4] = puVar7;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_ESI + 0x84))(puVar3);
  piVar2 = unaff_ESI;
LAB_004b1981:
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_004b07d0();
    uVar8 = FUN_004441b0(0x1a2,uVar8);
  }
  (**(code **)(*piVar2 + 0x84))(uVar8);
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_004b07d0();
    uVar8 = FUN_004441b0(0x1a3,uVar8);
  }
  (**(code **)(*piVar2 + 0x84))(uVar8);
  ExceptionList = pvVar5;
  return piVar2;
}


