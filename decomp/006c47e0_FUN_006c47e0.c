// FUN_006c47e0 @ 6c47e0 size=1678

int * __fastcall FUN_006c47e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *unaff_EBX;
  int *unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d8445;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x1e);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar1 = (int)&PTR_FUN_007e492c;
    FUN_00444250();
    *piVar1 = (int)&PTR_FUN_007e3a28;
    piVar1[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  piVar2 = operator_new(0x14);
  local_4 = 1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar3 = operator_new(0xe);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar5 = param_1[1];
      puVar3[1] = 6;
      puVar3[2] = 0;
      *(char *)(puVar3 + 3) = (char)iVar5;
      *puVar3 = &PTR_FUN_007e76a0;
    }
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (pvVar4 == (void *)0x0) {
LAB_006c48dc:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x456);
      if (iVar5 == 0) goto LAB_006c48dc;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    piVar2[3] = iVar5;
    if (puVar3 == (undefined4 *)0x0) {
      *piVar2 = (int)&PTR_FUN_007e3878;
      piVar2[4] = 0;
    }
    else {
      puVar3[2] = puVar3[2] + 1;
      piVar2[4] = (int)puVar3;
      *piVar2 = (int)&PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x84))();
  puVar3 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x4;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar6 = operator_new(0x10);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar9 = *(undefined4 *)((int)unaff_EBX + 6);
      FUN_004252e0(4);
      puVar6[3] = uVar9;
      *puVar6 = &PTR_FUN_007e3978;
      piVar1 = param_1;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 5;
    pvVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    if (pvVar4 == (void *)0x0) {
LAB_006c49a7:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x4b0);
      if (iVar5 == 0) goto LAB_006c49a7;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar3[3] = iVar5;
    if (puVar6 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar6[2] = puVar6[2] + 1;
      puVar3[4] = puVar6;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))();
  puVar6 = operator_new(0x14);
  local_c = (void *)0x7;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar9 = *(undefined4 *)((int)unaff_EBP + 10);
      FUN_004252e0(4);
      puVar7[3] = uVar9;
      *puVar7 = &PTR_FUN_007e3978;
      piVar1 = unaff_EBX;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    local_c._0_1_ = 8;
    pvVar4 = operator_new(0x14);
    local_c = (void *)CONCAT31(local_c._1_3_,9);
    if (pvVar4 == (void *)0x0) {
LAB_006c4a72:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x4b1);
      if (iVar5 == 0) goto LAB_006c4a72;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar6[3] = iVar5;
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
  local_c = (void *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar6);
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar9 = *(undefined4 *)(unaff_ESI + 0xe);
      FUN_004252e0(4);
      puVar7[3] = uVar9;
      *puVar7 = &PTR_FUN_007e3978;
      piVar1 = unaff_EBP;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006c4b3d:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x4b2);
      if (iVar5 == 0) goto LAB_006c4b3d;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar6[3] = iVar5;
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
  (**(code **)(*piVar1 + 0x84))(puVar6);
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar9 = *(undefined4 *)(unaff_EDI + 0x16);
      FUN_00444030(5);
      *puVar7 = &PTR_FUN_007e48ac;
      puVar7[3] = uVar9;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    pvVar4 = operator_new(0x14);
    if (pvVar4 == (void *)0x0) {
LAB_006c4c0c:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x52f);
      if (iVar5 == 0) goto LAB_006c4c0c;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar6[3] = iVar5;
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
  (**(code **)(*piVar1 + 0x84))(puVar6);
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
    goto LAB_006c4d01;
  }
  puVar8 = operator_new(0x10);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    uVar9 = *(undefined4 *)((int)piVar2 + 0x12);
    FUN_00444030(5);
    *puVar8 = &PTR_FUN_007e48ac;
    puVar8[3] = uVar9;
  }
  FUN_004252e0(0);
  pvVar4 = operator_new(0x14);
  if (pvVar4 == (void *)0x0) {
LAB_006c4cd7:
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0053e740(0x530);
    if (iVar5 == 0) goto LAB_006c4cd7;
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  }
  puVar6[3] = iVar5;
  puVar7 = puVar6;
  if (puVar8 == (undefined4 *)0x0) {
    *puVar6 = &PTR_FUN_007e3878;
    puVar6[4] = 0;
  }
  else {
    puVar8[2] = puVar8[2] + 1;
    puVar6[4] = puVar8;
    *puVar6 = &PTR_FUN_007e3878;
  }
LAB_006c4d01:
  (**(code **)(*piVar1 + 0x84))(puVar7);
  iVar5 = 0;
  if (0 < DAT_0087769c) {
    puVar7 = (undefined4 *)((int)puVar3 + 0x24a);
    do {
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        puVar8 = operator_new(0x10);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          uVar9 = *puVar7;
          FUN_00444030(5);
          *puVar8 = &PTR_FUN_007e48ac;
          puVar8[3] = uVar9;
        }
        uVar9 = FUN_004fe7e0(iVar5,puVar8);
        uVar9 = FUN_004441b0(uVar9,puVar8);
      }
      (**(code **)(*piVar2 + 0x84))(uVar9);
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar5 < DAT_0087769c);
  }
  iVar5 = 1;
  if (1 < DAT_008776b0) {
    puVar3 = (undefined4 *)((int)puVar3 + 0x1e);
    do {
      pvVar4 = operator_new(0x14);
      if (pvVar4 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        pvVar4 = operator_new(0x10);
        if (pvVar4 == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_004440b0(*puVar3);
        }
        uVar10 = FUN_004fed70(iVar5,uVar9);
        uVar9 = FUN_004441b0(uVar10,uVar9);
      }
      (**(code **)(*piVar2 + 0x84))(uVar9);
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar5 < DAT_008776b0);
    ExceptionList = puVar6;
    return piVar2;
  }
  ExceptionList = puVar6;
  return piVar2;
}


