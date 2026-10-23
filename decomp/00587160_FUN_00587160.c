// FUN_00587160 @ 587160 size=2769

int * __fastcall FUN_00587160(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  void *pvVar14;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c93ac;
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
    puVar4 = operator_new(0x1a);
    local_4._0_1_ = 3;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_0053e740(0x523);
      *(undefined2 *)(puVar4 + 5) = *(undefined2 *)(param_1 + 8);
      *(undefined4 *)((int)puVar4 + 0x16) = *(undefined4 *)(param_1 + 10);
      *puVar4 = &PTR_FUN_007e3ba4;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 4;
    pvVar5 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (pvVar5 == (void *)0x0) {
LAB_00587274:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x137);
      if (iVar6 == 0) goto LAB_00587274;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      puVar3[4] = puVar4;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x84))();
  puVar4 = operator_new(0x1a);
  puStack_8 = (undefined1 *)0x6;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar13 = *(undefined4 *)(unaff_EBX + 0xe);
    FUN_0053e740(0x523);
    *(undefined2 *)(puVar4 + 5) = 3;
    *(undefined4 *)((int)puVar4 + 0x16) = uVar13;
    *puVar4 = &PTR_FUN_007e3ba4;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))();
  puVar7 = operator_new(0x1a);
  local_c = (void *)0x7;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    uVar13 = *(undefined4 *)(unaff_EBP + 0x12);
    FUN_0053e740(0x523);
    *(undefined2 *)(puVar7 + 5) = 3;
    *(undefined4 *)((int)puVar7 + 0x16) = uVar13;
    *puVar7 = &PTR_FUN_007e3ba4;
  }
  local_c = (void *)0xffffffff;
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
      uVar13 = *(undefined4 *)(unaff_ESI + 4);
      FUN_004252e0(4);
      puVar9[3] = uVar13;
      *puVar9 = &PTR_FUN_007e3978;
    }
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
LAB_005873f3:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x141);
      if (iVar6 == 0) goto LAB_005873f3;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar8[3] = iVar6;
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
    puVar10 = operator_new(0xe);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)((int)unaff_EDI + 0x138a2);
      FUN_004252e0(6);
      *(undefined1 *)(puVar10 + 3) = uVar1;
      *puVar10 = &PTR_FUN_007e76a0;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
LAB_005874c9:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x1bb);
      if (iVar6 == 0) goto LAB_005874c9;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar9[3] = iVar6;
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
  (**(code **)(*piVar2 + 0x84))();
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
      uVar1 = *(undefined1 *)((int)puVar3 + 0x138a3);
      FUN_004252e0(6);
      *(undefined1 *)(puVar11 + 3) = uVar1;
      *puVar11 = &PTR_FUN_007e76a0;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    unaff_EDI = operator_new(0x14);
    if (unaff_EDI == (int *)0x0) {
LAB_0058759f:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x1bc);
      if (iVar6 == 0) goto LAB_0058759f;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar10[3] = iVar6;
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
  (**(code **)(*piVar2 + 0x84))();
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar11 = operator_new(0x10);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      unaff_EDI = *(int **)((int)puVar4 + 0x138b2);
      FUN_004252e0(5);
      *puVar11 = &PTR_FUN_007e48ac;
      puVar11[3] = unaff_EDI;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
LAB_0058767b:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x14e);
      if (iVar6 == 0) goto LAB_0058767b;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (puVar11 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar11[2] = puVar11[2] + 1;
      puVar3[4] = puVar11;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))(puVar3);
  if (0 < *(int *)((int)puVar7 + 0x1a)) {
    piVar2 = operator_new(0x1e);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *piVar2 = (int)&PTR_FUN_007e492c;
      FUN_00444250();
      *piVar2 = (int)&PTR_FUN_007e3a28;
      piVar2[3] = (int)&PTR_LAB_007e39f8;
    }
    piVar12 = operator_new(0x1e);
    if (piVar12 == (int *)0x0) {
      piVar12 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *piVar12 = (int)&PTR_FUN_007e492c;
      FUN_00444250();
      *piVar12 = (int)&PTR_FUN_007e3a28;
      piVar12[3] = (int)&PTR_LAB_007e39f8;
    }
    iVar6 = 0;
    if (0 < *(int *)((int)puVar7 + 0x1a)) {
      puVar3 = (undefined4 *)((int)puVar7 + 0x22);
      do {
        puVar4 = operator_new(0x10);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar13 = *puVar3;
          FUN_004252e0(4);
          puVar4[3] = uVar13;
          *puVar4 = &PTR_FUN_007e3978;
        }
        (**(code **)(*piVar2 + 0x84))(puVar4);
        iVar6 = iVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 < *(int *)((int)puVar7 + 0x1a));
    }
    iVar6 = 0;
    if (0 < *(int *)((int)puVar7 + 0x1a)) {
      puVar3 = (undefined4 *)((int)puVar7 + 0x9c62);
      do {
        puVar4 = operator_new(0x1a);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar13 = *puVar3;
          FUN_0053e740(0x523);
          *(undefined2 *)(puVar4 + 5) = 3;
          *(undefined4 *)((int)puVar4 + 0x16) = uVar13;
          *puVar4 = &PTR_FUN_007e3ba4;
        }
        (**(code **)(*piVar12 + 0x84))(puVar4);
        iVar6 = iVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 < *(int *)((int)puVar7 + 0x1a));
    }
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      pvVar5 = operator_new(0x14);
      if (pvVar5 == (void *)0x0) {
LAB_005878af:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0053e740(0x1b7);
        if (iVar6 == 0) goto LAB_005878af;
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar3[3] = iVar6;
      if (piVar2 == (int *)0x0) {
        *puVar3 = &PTR_FUN_007e3878;
        puVar3[4] = 0;
      }
      else {
        piVar2[2] = piVar2[2] + 1;
        puVar3[4] = piVar2;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EDI + 0x84))(puVar3);
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      pvVar5 = operator_new(0x14);
      if (pvVar5 == (void *)0x0) {
LAB_0058794d:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0053e740(0x1b8);
        if (iVar6 == 0) goto LAB_0058794d;
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar3[3] = iVar6;
      if (piVar2 == (int *)0x0) {
        *puVar3 = &PTR_FUN_007e3878;
        puVar3[4] = 0;
      }
      else {
        piVar2[2] = piVar2[2] + 1;
        puVar3[4] = piVar2;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EDI + 0x84))(puVar3);
    piVar2 = unaff_EDI;
  }
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar4 = operator_new(0xe);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined1 *)(puVar7 + 0x4e2c);
      FUN_00444030(6);
      *(undefined1 *)(puVar4 + 3) = uVar1;
      *puVar4 = &PTR_FUN_007e76a0;
    }
    FUN_004252e0(0);
    pvVar5 = operator_new(0x14);
    if (pvVar5 == (void *)0x0) {
LAB_00587a26:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x140);
      if (iVar6 == 0) goto LAB_00587a26;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      puVar3[4] = puVar4;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*piVar2 + 0x84))(puVar3);
  puVar3 = operator_new(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
    goto LAB_00587b27;
  }
  puVar4 = operator_new(0xe);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined1 *)((int)puVar8 + 0x138b1);
    FUN_00444030(6);
    *(undefined1 *)(puVar4 + 3) = uVar1;
    *puVar4 = &PTR_FUN_007e76a0;
  }
  FUN_004252e0(0);
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
LAB_00587afd:
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_0053e740(0x1ba);
    if (iVar6 == 0) goto LAB_00587afd;
    *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
  }
  puVar3[3] = iVar6;
  if (puVar4 == (undefined4 *)0x0) {
    *puVar3 = &PTR_FUN_007e3878;
    puVar3[4] = 0;
  }
  else {
    puVar4[2] = puVar4[2] + 1;
    puVar3[4] = puVar4;
    *puVar3 = &PTR_FUN_007e3878;
  }
LAB_00587b27:
  (**(code **)(*piVar2 + 0x84))(puVar3);
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
    uVar13 = 0;
  }
  else {
    pvVar5 = operator_new(0xe);
    if (pvVar5 == (void *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = FUN_004f6330(*(undefined1 *)((int)puVar9 + 0x138be));
    }
    uVar13 = FUN_004441b0(0xe4,uVar13);
  }
  (**(code **)(*piVar2 + 0x84))(uVar13);
  pvVar5 = operator_new(0x14);
  if (pvVar5 == (void *)0x0) {
    uVar13 = 0;
  }
  else {
    pvVar14 = operator_new(0xe);
    if (pvVar14 == (void *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = FUN_004f6330(*(undefined1 *)((int)puVar10 + 0x138bf));
    }
    uVar13 = FUN_004441b0(0x2b5,uVar13);
  }
  (**(code **)(*piVar2 + 0x84))(uVar13);
  ExceptionList = pvVar5;
  return piVar2;
}


