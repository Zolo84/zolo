// FUN_0075f480 @ 75f480 size=2369

int * FUN_0075f480(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e065e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = operator_new(0x1e);
  local_4 = 0;
  if (local_1c == (int *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    local_1c[4] = 0;
    local_1c[5] = 0;
    local_1c[6] = 0;
    *(undefined1 *)(local_1c + 7) = 0;
    local_1c[3] = (int)&PTR_LAB_007e3ac0;
    *local_1c = (int)&PTR_FUN_007e3a28;
    local_1c[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  puVar1 = operator_new(0x14);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar2 = FUN_00427f80();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar3 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x523), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar1[3] = iVar4;
    if (iVar2 == 0) {
      *puVar1 = &PTR_FUN_007e3878;
      puVar1[4] = 0;
    }
    else {
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      puVar1[4] = iVar2;
      *puVar1 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_1c + 0x84))(puVar1);
  piVar5 = operator_new(0x1e);
  puStack_8 = (undefined1 *)0x4;
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[6] = 0;
    *(undefined1 *)(piVar5 + 7) = 0;
    piVar5[3] = (int)&PTR_LAB_007e3ac0;
    *piVar5 = (int)&PTR_FUN_007e3a28;
    piVar5[3] = (int)&PTR_LAB_007e39f8;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  puVar1 = (undefined4 *)local_1c[2];
  while (puVar1 != (undefined4 *)0x0) {
    puVar6 = operator_new(0x10);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)puVar1[2];
      uVar8 = *puVar1;
      puVar6[1] = 4;
      puVar6[2] = 0;
      puVar6[3] = uVar8;
      *puVar6 = &PTR_FUN_007e3978;
      puVar1 = puVar7;
    }
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 6;
    puStack_8._1_3_ = 0;
    pvVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    if ((pvVar3 == (void *)0x0) || (iVar2 = FUN_0053e740(0x1b7), iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    puVar1[3] = iVar2;
    if (piVar5 == (int *)0x0) {
      *puVar1 = &PTR_FUN_007e3878;
      puVar1[4] = 0;
    }
    else {
      piVar5[2] = piVar5[2] + 1;
      puVar1[4] = piVar5;
      *puVar1 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*unaff_EBX + 0x84))(puVar1);
  puVar1 = operator_new(0x14);
  local_c = (void *)0x8;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar6 = operator_new(0x10);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar2 = unaff_EBX[8];
      puVar6[1] = 4;
      puVar6[2] = 0;
      puVar6[3] = iVar2;
      *puVar6 = &PTR_FUN_007e3978;
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 9;
    pvVar3 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,10);
    if ((pvVar3 == (void *)0x0) || (iVar2 = FUN_0053e740(0x3bd), iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    puVar1[3] = iVar2;
    unaff_EBX = unaff_EBP;
    if (puVar6 == (undefined4 *)0x0) {
      *puVar1 = &PTR_FUN_007e3878;
      puVar1[4] = 0;
    }
    else {
      puVar6[2] = puVar6[2] + 1;
      puVar1[4] = puVar6;
      *puVar1 = &PTR_FUN_007e3878;
    }
  }
  local_c = (void *)0xffffffff;
  (**(code **)(*unaff_EBX + 0x84))(puVar1);
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar8 = *(undefined4 *)((int)unaff_EBP + 0x1a);
      puVar7[1] = 4;
      puVar7[2] = 0;
      puVar7[3] = uVar8;
      *puVar7 = &PTR_FUN_007e3978;
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_LAB_007e38f8;
    pvVar3 = operator_new(0x14);
    if ((pvVar3 == (void *)0x0) || (iVar2 = FUN_0053e740(0x1aa), iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    puVar1[3] = iVar2;
    puVar6 = puVar1;
    if (puVar7 == (undefined4 *)0x0) {
      *puVar1 = &PTR_FUN_007e3878;
      puVar1[4] = 0;
    }
    else {
      puVar7[2] = puVar7[2] + 1;
      puVar1[4] = puVar7;
      *puVar1 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_ESI + 0x84))(puVar6);
  if ((char)unaff_ESI[10] != '\0') {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
      piVar5 = unaff_ESI;
    }
    else {
      puVar7 = operator_new(0xe);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        iVar2 = unaff_ESI[10];
        puVar7[1] = 6;
        puVar7[2] = 0;
        *(char *)(puVar7 + 3) = (char)iVar2;
        *puVar7 = &PTR_FUN_007e76a0;
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar3 = operator_new(0x14);
      if ((pvVar3 == (void *)0x0) || (iVar2 = FUN_0053e740(0x19d), iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      }
      puVar6[3] = iVar2;
      piVar5 = unaff_EDI;
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
    (**(code **)(*piVar5 + 0x84))(puVar6);
  }
  switch(unaff_ESI[9]) {
  case 0:
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) goto LAB_0075fc1f;
    pvVar3 = operator_new(0x10);
    if (pvVar3 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      uVar8 = FUN_005341fe(0x3bf);
      iVar2 = FUN_0053ee00(uVar8);
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar3 = operator_new(0x14);
LAB_0075f9c2:
    if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x3be), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    puVar6[3] = iVar4;
    iVar4 = 0;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      iVar4 = iVar2;
    }
    puVar6[4] = iVar4;
    *puVar6 = &PTR_FUN_007e3878;
    goto LAB_0075fc21;
  case 1:
    puVar6 = operator_new(0x14);
    if (puVar6 != (undefined4 *)0x0) {
      pvVar3 = operator_new(0x10);
      if (pvVar3 == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        uVar8 = FUN_005341fe(0x3c0);
        iVar2 = FUN_0053ee00(uVar8);
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar3 = operator_new(0x14);
LAB_0075fa73:
      if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x3be), iVar4 == 0)) {
        iVar4 = 0;
      }
      else {
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar6[3] = iVar4;
      iVar4 = 0;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        iVar4 = iVar2;
      }
      puVar6[4] = iVar4;
      *puVar6 = &PTR_FUN_007e3878;
      goto LAB_0075fcb1;
    }
    break;
  case 2:
    puVar6 = operator_new(0x14);
    if (puVar6 != (undefined4 *)0x0) {
      pvVar3 = operator_new(0x10);
      if (pvVar3 == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        uVar8 = FUN_005341fe(0x3c1);
        iVar2 = FUN_0053ee00(uVar8);
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar3 = operator_new(0x14);
      goto LAB_0075f9c2;
    }
    goto LAB_0075fc1f;
  case 3:
    puVar6 = operator_new(0x14);
    if (puVar6 != (undefined4 *)0x0) {
      pvVar3 = operator_new(0x10);
      if (pvVar3 == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        uVar8 = FUN_005341fe(0x3c2);
        iVar2 = FUN_0053ee00(uVar8);
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar3 = operator_new(0x14);
      goto LAB_0075fa73;
    }
    break;
  case 4:
    puVar6 = operator_new(0x14);
    if (puVar6 != (undefined4 *)0x0) {
      pvVar3 = operator_new(0x10);
      if (pvVar3 == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        uVar8 = FUN_005341fe(0x3c3);
        iVar2 = FUN_0053ee00(uVar8);
      }
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      pvVar3 = operator_new(0x14);
      goto LAB_0075f9c2;
    }
LAB_0075fc1f:
    puVar6 = (undefined4 *)0x0;
LAB_0075fc21:
    iVar2 = *unaff_EDI;
LAB_0075fda4:
    (**(code **)(iVar2 + 0x84))(puVar6);
switchD_0075f943_default:
    ExceptionList = puVar1;
    return unaff_EDI;
  case 5:
    puVar6 = operator_new(0x14);
    if (puVar6 != (undefined4 *)0x0) {
      pvVar3 = operator_new(0x10);
      if (pvVar3 == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        uVar8 = FUN_005341fe(0x3c4);
        iVar2 = FUN_0053ee00(uVar8);
      }
      FUN_004252e0(0);
      pvVar3 = operator_new(0x14);
      goto LAB_0075fa73;
    }
    break;
  case 6:
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) {
LAB_0075fd93:
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pvVar3 = operator_new(0x10);
      if (pvVar3 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_005341fe(0x3c5);
        uVar8 = FUN_0053ee00(uVar8);
      }
      puVar6 = (undefined4 *)FUN_004441b0(0x3be,uVar8);
    }
    goto LAB_0075fd95;
  case 7:
    pvVar3 = operator_new(0x14);
    if (pvVar3 == (void *)0x0) goto LAB_0075fd93;
    pvVar3 = operator_new(0x10);
    if (pvVar3 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_005341fe(0x3c6);
      uVar8 = FUN_0053ee00(uVar8);
    }
    puVar6 = (undefined4 *)FUN_004441b0(0x3be,uVar8);
LAB_0075fd95:
    iVar2 = *unaff_EDI;
    goto LAB_0075fda4;
  default:
    goto switchD_0075f943_default;
  }
  puVar6 = (undefined4 *)0x0;
LAB_0075fcb1:
  (**(code **)(*unaff_EDI + 0x84))(puVar6);
  ExceptionList = puVar1;
  return unaff_EDI;
}


