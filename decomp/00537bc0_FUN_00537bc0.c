// FUN_00537bc0 @ 537bc0 size=1453

int * FUN_00537bc0(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  void *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c28a3;
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
    FUN_00581e60();
    iVar4 = FUN_00424e80();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar5 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x247), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
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
    iVar4 = FUN_00424e80();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 6;
    pvVar5 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x249), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
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
    puVar7 = operator_new(0x10);
    uVar8 = DAT_00a98440;
    local_c._0_1_ = 9;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      FUN_004252e0(4);
      puVar7[3] = uVar8;
      *puVar7 = &PTR_FUN_007e3978;
      piVar2 = unaff_EBP;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 10;
    pvVar5 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,0xb);
    if ((pvVar5 == (void *)0x0) || (iVar4 = FUN_0053e740(0x248), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
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
  local_c = (void *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))(puVar3);
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    uVar8 = DAT_00a98464;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      FUN_00444030(4);
      puVar7[3] = uVar8;
      *puVar7 = &PTR_FUN_007e3978;
      piVar2 = unaff_ESI;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if ((pvVar5 == (void *)0x0) || (iVar4 = FUN_0053e740(0x24a), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
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
  cVar1 = FUN_0042e9a0();
  if (cVar1 != '\0') {
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
        uVar8 = *(undefined4 *)(DAT_00d0ca90 + 0x22202);
        FUN_00444030(4);
        puVar7[3] = uVar8;
        *puVar7 = &PTR_FUN_007e3978;
        piVar2 = unaff_EDI;
      }
      FUN_004252e0(0);
      pvVar5 = operator_new(0x14);
      if ((pvVar5 == (void *)0x0) || (iVar4 = FUN_0053e740(0x208), iVar4 == 0)) {
        iVar4 = 0;
      }
      else {
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
  iVar4 = 0;
  puVar3 = &DAT_00850bac;
  do {
    piVar2 = operator_new(0x1e);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      FUN_004c0c30(2);
      FUN_00444250();
      *piVar2 = (int)&PTR_FUN_007e3a28;
      piVar2[3] = (int)&PTR_LAB_007e39f8;
    }
    iVar6 = *(int *)(iVar4 + 0x21ec6 + DAT_00d0ca90);
    while (iVar6 != 0) {
      pvVar5 = operator_new(0x14);
      if (pvVar5 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 10);
        uVar8 = FUN_00427f80();
        uVar8 = FUN_004441b0(0x523,uVar8);
      }
      (**(code **)(*piVar2 + 0x84))(uVar8);
    }
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_004441b0(*puVar3,piVar2);
    }
    (**(code **)(*unaff_EDI + 0x84))(uVar8);
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 0x12;
  } while ((int)puVar3 < 0x850bd4);
  ExceptionList = local_1c;
  return unaff_EDI;
}


