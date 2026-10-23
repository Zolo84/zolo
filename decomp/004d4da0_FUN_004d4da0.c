// FUN_004d4da0 @ 4d4da0 size=2843

int * __fastcall FUN_004d4da0(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *unaff_EBX;
  int *piVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bf969;
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
    piVar3[3] = (int)&PTR_LAB_007e39f8;
    *piVar3 = (int)&PTR_FUN_007e3a28;
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
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x523), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
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
  (**(code **)(*piVar3 + 0x84))(puVar4);
  piVar10 = param_1;
  if (param_1[0x47] != 0) {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x5;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      puStack_8._0_1_ = 6;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        iVar5 = unaff_EBX[0x47];
        FUN_004252e0(4);
        puVar8[3] = iVar5;
        *puVar8 = &PTR_FUN_007e3978;
        piVar3 = param_1;
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 7;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x10c), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar4[3] = iVar5;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar4[4] = puVar8;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar4);
    piVar10 = unaff_EBX;
  }
  if (piVar10[0x48] != 0) {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x9;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      puStack_8._0_1_ = 10;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        iVar5 = unaff_EBX[0x48];
        FUN_004252e0(4);
        puVar8[3] = iVar5;
        *puVar8 = &PTR_FUN_007e3978;
        piVar3 = param_1;
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xb;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xc);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x10d), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar4[3] = iVar5;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar4[4] = puVar8;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar4);
    piVar10 = unaff_EBX;
  }
  if (*(char *)((int)piVar10 + 5) == '\0') {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xd;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      puStack_8._0_1_ = 0xe;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)((int)unaff_EBX + 5);
        FUN_004252e0(6);
        *(undefined1 *)(puVar8 + 3) = uVar1;
        *puVar8 = &PTR_FUN_007e76a0;
        piVar3 = param_1;
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xf;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x10);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x232), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar4[3] = iVar5;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar4[4] = puVar8;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar4);
    piVar10 = unaff_EBX;
  }
  if ((char)piVar10[2] == '\0') {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x11;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      puStack_8._0_1_ = 0x12;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        iVar5 = unaff_EBX[2];
        FUN_004252e0(6);
        *(char *)(puVar8 + 3) = (char)iVar5;
        *puVar8 = &PTR_FUN_007e76a0;
        piVar3 = param_1;
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x13;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x14);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x233), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar4[3] = iVar5;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar4[4] = puVar8;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar4);
    piVar10 = unaff_EBX;
  }
  if (*(char *)((int)piVar10 + 6) == '\0') {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x15;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      puStack_8._0_1_ = 0x16;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)((int)unaff_EBX + 6);
        FUN_004252e0(6);
        *(undefined1 *)(puVar8 + 3) = uVar1;
        *puVar8 = &PTR_FUN_007e76a0;
        piVar3 = param_1;
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x17;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x18);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x234), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar4[3] = iVar5;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar4[4] = puVar8;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar4);
    piVar10 = unaff_EBX;
  }
  if ((char)piVar10[1] == '\0') {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x19;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      puStack_8._0_1_ = 0x1a;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        iVar5 = unaff_EBX[1];
        FUN_00444030(6);
        *(char *)(puVar8 + 3) = (char)iVar5;
        *puVar8 = &PTR_FUN_007e76a0;
        piVar3 = param_1;
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x1b;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1c);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x235), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar4[3] = iVar5;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar4[4] = puVar8;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar4);
    piVar10 = unaff_EBX;
  }
  if (*(char *)((int)piVar10 + 7) != '\0') {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x1d;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0xe);
      puStack_8._0_1_ = 0x1e;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)((int)unaff_EBX + 7);
        FUN_00444030(6);
        *(undefined1 *)(puVar8 + 3) = uVar1;
        *puVar8 = &PTR_FUN_007e76a0;
        piVar3 = param_1;
      }
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x1f;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x20);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x382), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar4[3] = iVar5;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar4[4] = puVar8;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar4);
    piVar10 = unaff_EBX;
  }
  if (0 < *(short *)((int)piVar10 + 0x116)) {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x21;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar5 = FUN_0054f410();
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x22;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x23);
      if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x35), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar4[3] = iVar7;
      if (iVar5 == 0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
        piVar10 = unaff_EBX;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar4[4] = iVar5;
        *puVar4 = &PTR_FUN_007e3878;
        piVar10 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar4);
  }
  if (*(int *)(piVar10[0x46] + 6) != *(int *)((int)piVar10 + 0x13e)) {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x24;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x1a);
      puStack_8._0_1_ = 0x25;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar9 = *(undefined4 *)((int)unaff_EBX + 0x13e);
        FUN_0053e740(0x523);
        *(undefined2 *)(puVar8 + 5) = 3;
        *(undefined4 *)((int)puVar8 + 0x16) = uVar9;
        *puVar8 = &PTR_FUN_007e3ba4;
        piVar3 = param_1;
      }
      puStack_8._0_1_ = 0x24;
      FUN_004252e0(0);
      puStack_8._0_1_ = 0x26;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x27);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x1b5), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar4[3] = iVar5;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar4[4] = puVar8;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar4);
    piVar10 = unaff_EBX;
  }
  if (*(int *)(piVar10[0x46] + 6) != *(int *)((int)piVar10 + 0x142)) {
    puVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x28;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x1a);
      puStack_8._0_1_ = 0x29;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar9 = *(undefined4 *)((int)unaff_EBX + 0x142);
        FUN_0053e740(0x523);
        *(undefined2 *)(puVar8 + 5) = 3;
        *(undefined4 *)((int)puVar8 + 0x16) = uVar9;
        *puVar8 = &PTR_FUN_007e3ba4;
        piVar3 = param_1;
      }
      puStack_8._0_1_ = 0x28;
      FUN_004252e0(0);
      puStack_8._0_1_ = 0x2a;
      pvVar6 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x2b);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x1b6), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar4[3] = iVar5;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar4[4] = puVar8;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar4);
  }
  piVar3 = operator_new(0x1e);
  puStack_8 = (undefined1 *)0x2c;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_004c0c30(2);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x2d);
    FUN_00444250();
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  puVar4 = (undefined4 *)unaff_EBX[0x3f];
  while (puVar4 != (undefined4 *)0x0) {
    puVar8 = operator_new(0x10);
    puStack_8 = (undefined1 *)0x2e;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)puVar4[2];
      uVar9 = *puVar4;
      FUN_00444030(4);
      puVar8[3] = uVar9;
      *puVar8 = &PTR_FUN_007e3978;
      puVar4 = puVar2;
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar8);
  }
  pvVar6 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x2f;
  if (pvVar6 == (void *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_004441b0(0x89,piVar3);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*param_1 + 0x84))(uVar9);
  ExceptionList = pvVar6;
  return param_1;
}


