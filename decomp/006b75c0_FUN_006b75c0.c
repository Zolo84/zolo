// FUN_006b75c0 @ 6b75c0 size=2398

int * __fastcall FUN_006b75c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *unaff_EBX;
  int *local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d6e62;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_24 = operator_new(0x1e);
  local_4 = 0;
  if (local_24 == (int *)0x0) {
    local_24 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_24 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *local_24 = (int)&PTR_FUN_007e3a28;
    local_24[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  iVar3 = (**(code **)(*(int *)(param_1 + 4) + 4))();
  if (0 < iVar3) {
    piVar4 = operator_new(0x1e);
    local_4 = 2;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *piVar4 = (int)&PTR_FUN_007e492c;
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_00444250();
      *piVar4 = (int)&PTR_FUN_007e3a28;
      piVar4[3] = (int)&PTR_LAB_007e39f8;
    }
    local_4 = 0xffffffff;
    puVar6 = *(undefined4 **)(param_1 + 8);
    while (puVar6 != (undefined4 *)0x0) {
      puVar5 = operator_new(0x1a);
      local_4 = 4;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)puVar6[2];
        uVar9 = *puVar6;
        FUN_0053e740(0x523);
        *(undefined2 *)(puVar5 + 5) = 3;
        *(undefined4 *)((int)puVar5 + 0x16) = uVar9;
        *puVar5 = &PTR_FUN_007e3ba4;
        puVar6 = puVar8;
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar4 + 0x84))(puVar5);
    }
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 6;
      local_4._1_3_ = 0;
      pvVar7 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,7);
      if ((pvVar7 == (void *)0x0) || (iVar3 = FUN_0053e740(0x14a), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar6[3] = iVar3;
      if (piVar4 == (int *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        piVar4[2] = piVar4[2] + 1;
        puVar6[4] = piVar4;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_24 + 0x84))(puVar6);
  }
  iVar3 = (**(code **)(*(int *)(param_1 + 0x16) + 4))();
  if (0 < iVar3) {
    piVar4 = operator_new(0x1e);
    local_4 = 8;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *piVar4 = (int)&PTR_FUN_007e492c;
      local_4 = CONCAT31(local_4._1_3_,9);
      FUN_00444250();
      piVar4[3] = (int)&PTR_LAB_007e39f8;
      *piVar4 = (int)&PTR_FUN_007e3a28;
    }
    local_4 = 0xffffffff;
    piVar2 = *(int **)(param_1 + 0x1a);
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[2];
      puVar6 = (undefined4 *)*piVar2;
      puVar5 = operator_new(0x14);
      local_4 = 10;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar8 = operator_new(0x10);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          uVar9 = puVar6[1];
          puVar8[1] = 4;
          puVar8[2] = 0;
          puVar8[3] = uVar9;
          *puVar8 = &PTR_FUN_007e3978;
        }
        pvVar7 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0xb);
        if (pvVar7 == (void *)0x0) {
          iVar3 = 0;
        }
        else {
          uVar9 = FUN_004af700(*puVar6);
          iVar3 = FUN_0053e770(uVar9);
        }
        puVar5[1] = 0xd;
        puVar5[2] = 0;
        *puVar5 = &PTR_LAB_007e38f8;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        }
        puVar5[3] = iVar3;
        if (puVar8 == (undefined4 *)0x0) {
          *puVar5 = &PTR_FUN_007e3878;
          puVar5[4] = 0;
        }
        else {
          puVar8[2] = puVar8[2] + 1;
          puVar5[4] = puVar8;
          *puVar5 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar4 + 0x84))(puVar5);
      piVar2 = piVar1;
    }
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0xd;
      local_4._1_3_ = 0;
      pvVar7 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0xe);
      if ((pvVar7 == (void *)0x0) || (iVar3 = FUN_0053e740(0x149), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar6[3] = iVar3;
      if (piVar4 == (int *)0x0) {
        *puVar6 = &PTR_FUN_007e3878;
        puVar6[4] = 0;
      }
      else {
        piVar4[2] = piVar4[2] + 1;
        puVar6[4] = piVar4;
        *puVar6 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_24 + 0x84))(puVar6);
  }
  puVar6 = operator_new(0x14);
  local_4 = 0xf;
  if (puVar6 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0x10);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + 0x28);
      puVar8[1] = 5;
      puVar8[2] = 0;
      puVar8[3] = uVar9;
      *puVar8 = &PTR_FUN_007e48ac;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 0x10;
    pvVar7 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,0x11);
    if ((pvVar7 == (void *)0x0) || (iVar3 = FUN_0053e740(0x148), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    puVar6[3] = iVar3;
    puVar5 = puVar6;
    if (puVar8 == (undefined4 *)0x0) {
      *puVar6 = &PTR_FUN_007e3878;
      puVar6[4] = 0;
    }
    else {
      puVar8[2] = puVar8[2] + 1;
      puVar6[4] = puVar8;
      *puVar6 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_24 + 0x84))(puVar5);
  if (*(int *)(param_1 + 0x2c) != -0x40800000) {
    puVar5 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x12;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar9 = *(undefined4 *)(param_1 + 0x2c);
        FUN_004252e0(5);
        *puVar8 = &PTR_FUN_007e48ac;
        puVar8[3] = uVar9;
      }
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x13;
      pvVar7 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x14);
      if ((pvVar7 == (void *)0x0) || (iVar3 = FUN_0053e740(0x235), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar5[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar5 = &PTR_FUN_007e3878;
        puVar5[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar5[4] = puVar8;
        *puVar5 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar5);
  }
  if (*(int *)(param_1 + 0x30) != -0x40800000) {
    puVar5 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x15;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar9 = *(undefined4 *)(param_1 + 0x30);
        FUN_004252e0(5);
        *puVar8 = &PTR_FUN_007e48ac;
        puVar8[3] = uVar9;
      }
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x16;
      pvVar7 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x17);
      if ((pvVar7 == (void *)0x0) || (iVar3 = FUN_0053e740(0x233), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar5[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar5 = &PTR_FUN_007e3878;
        puVar5[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar5[4] = puVar8;
        *puVar5 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar5);
  }
  if (*(int *)(param_1 + 0x34) != -0x40800000) {
    puVar5 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x18;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar9 = *(undefined4 *)(param_1 + 0x34);
        FUN_004252e0(5);
        *puVar8 = &PTR_FUN_007e48ac;
        puVar8[3] = uVar9;
      }
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x19;
      pvVar7 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1a);
      if ((pvVar7 == (void *)0x0) || (iVar3 = FUN_0053e740(0x234), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar5[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar5 = &PTR_FUN_007e3878;
        puVar5[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar5[4] = puVar8;
        *puVar5 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar5);
  }
  if (*(int *)(param_1 + 0x38) != -0x40800000) {
    puVar5 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x1b;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar9 = *(undefined4 *)(param_1 + 0x38);
        FUN_00444030(5);
        *puVar8 = &PTR_FUN_007e48ac;
        puVar8[3] = uVar9;
      }
      FUN_004252e0(0);
      puStack_8._0_1_ = 0x1c;
      pvVar7 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1d);
      if ((pvVar7 == (void *)0x0) || (iVar3 = FUN_0053e740(0x232), iVar3 == 0)) {
        iVar3 = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      }
      puVar5[3] = iVar3;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar5 = &PTR_FUN_007e3878;
        puVar5[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar5[4] = puVar8;
        *puVar5 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar5);
  }
  if (*(int *)(param_1 + 0x3c) != -0x40800000) {
    pvVar7 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x1e;
    if (pvVar7 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      puVar5 = operator_new(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        uVar9 = FUN_004441b0(0xf6,0);
      }
      else {
        uVar9 = *(undefined4 *)(param_1 + 0x3c);
        FUN_00444030(5);
        puVar5[3] = uVar9;
        *puVar5 = &PTR_FUN_007e48ac;
        uVar9 = FUN_004441b0(0xf6,puVar5);
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(uVar9);
  }
  if (*(int *)(param_1 + 0x40) == -0x40800000) {
    ExceptionList = puVar6;
    return unaff_EBX;
  }
  pvVar7 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x1f;
  if (pvVar7 == (void *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar6 = operator_new(0x10);
    if (puVar6 == (undefined4 *)0x0) {
      uVar9 = FUN_004441b0(0x382,0);
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + 0x40);
      FUN_00444030(5);
      puVar6[3] = uVar9;
      *puVar6 = &PTR_FUN_007e48ac;
      uVar9 = FUN_004441b0(0x382,puVar6);
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*unaff_EBX + 0x84))(uVar9);
  ExceptionList = pvVar7;
  return unaff_EBX;
}


