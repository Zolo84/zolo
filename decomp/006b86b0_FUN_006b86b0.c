// FUN_006b86b0 @ 6b86b0 size=1793

int * __fastcall FUN_006b86b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *local_2c;
  int *local_20;
  CHAR aCStack_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d6fab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_2c = operator_new(0x1e);
  local_4 = 0;
  if (local_2c == (int *)0x0) {
    local_2c = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_2c = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *local_2c = (int)&PTR_FUN_007e3a28;
    local_2c[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  iVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))();
  if (0 < iVar2) {
    piVar3 = operator_new(0x1e);
    local_4 = 2;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *piVar3 = (int)&PTR_FUN_007e492c;
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_00444250();
      *piVar3 = (int)&PTR_FUN_007e3a28;
      piVar3[3] = (int)&PTR_LAB_007e39f8;
    }
    local_4 = 0xffffffff;
    puVar5 = *(undefined4 **)(param_1 + 8);
    while (puVar5 != (undefined4 *)0x0) {
      puVar4 = operator_new(0x1a);
      local_4 = 4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)puVar5[2];
        uVar8 = *puVar5;
        FUN_0053e740(0x523);
        *(undefined2 *)(puVar4 + 5) = 3;
        *(undefined4 *)((int)puVar4 + 0x16) = uVar8;
        *puVar4 = &PTR_FUN_007e3ba4;
        puVar5 = puVar7;
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar3 + 0x84))(puVar4);
    }
    puVar5 = operator_new(0x14);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 6;
      local_4._1_3_ = 0;
      pvVar6 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,7);
      if ((pvVar6 == (void *)0x0) || (iVar2 = FUN_0053e740(0x14a), iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      }
      puVar5[3] = iVar2;
      if (piVar3 == (int *)0x0) {
        *puVar5 = &PTR_FUN_007e3878;
        puVar5[4] = 0;
      }
      else {
        piVar3[2] = piVar3[2] + 1;
        puVar5[4] = piVar3;
        *puVar5 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_2c + 0x84))(puVar5);
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x28) + 4))();
  if (0 < iVar2) {
    local_20 = operator_new(0x1e);
    local_4 = 8;
    if (local_20 == (int *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *local_20 = (int)&PTR_FUN_007e492c;
      local_4 = CONCAT31(local_4._1_3_,9);
      FUN_00444250();
      *local_20 = (int)&PTR_FUN_007e3a28;
      local_20[3] = (int)&PTR_LAB_007e39f8;
    }
    local_4 = 0xffffffff;
    piVar3 = *(int **)(param_1 + 0x2c);
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[2];
      puVar5 = (undefined4 *)*piVar3;
      puVar4 = operator_new(0x14);
      local_4 = 10;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar7 = operator_new(0x10);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          uVar8 = puVar5[1];
          FUN_004252e0(4);
          puVar7[3] = uVar8;
          *puVar7 = &PTR_FUN_007e3978;
        }
        pvVar6 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0xb);
        if (pvVar6 == (void *)0x0) {
          iVar2 = 0;
        }
        else {
          uVar8 = FUN_004af700(*puVar5);
          iVar2 = FUN_0053e770(uVar8);
        }
        puVar4[1] = 0xd;
        puVar4[2] = 0;
        *puVar4 = &PTR_LAB_007e38f8;
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        }
        puVar4[3] = iVar2;
        if (puVar7 == (undefined4 *)0x0) {
          *puVar4 = &PTR_FUN_007e3878;
          puVar4[4] = 0;
        }
        else {
          puVar7[2] = puVar7[2] + 1;
          puVar4[4] = puVar7;
          *puVar4 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_20 + 0x84))(puVar4);
      piVar3 = piVar1;
    }
    puVar5 = operator_new(0x14);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0xd;
      local_4._1_3_ = 0;
      pvVar6 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0xe);
      if ((pvVar6 == (void *)0x0) || (iVar2 = FUN_0053e740(0x149), iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      }
      puVar5[3] = iVar2;
      if (local_20 == (int *)0x0) {
        *puVar5 = &PTR_FUN_007e3878;
        puVar5[4] = 0;
      }
      else {
        local_20[2] = local_20[2] + 1;
        puVar5[4] = local_20;
        *puVar5 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_2c + 0x84))(puVar5);
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x3a) + 4))();
  if (0 < iVar2) {
    local_20 = operator_new(0x1e);
    local_4 = 0xf;
    if (local_20 == (int *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *local_20 = (int)&PTR_FUN_007e492c;
      local_4 = CONCAT31(local_4._1_3_,0x10);
      FUN_00444250();
      *local_20 = (int)&PTR_FUN_007e3a28;
      local_20[3] = (int)&PTR_LAB_007e39f8;
    }
    local_4 = 0xffffffff;
    piVar3 = *(int **)(param_1 + 0x3e);
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[2];
      puVar5 = (undefined4 *)*piVar3;
      wsprintfA(aCStack_14,&DAT_008390a0,*puVar5);
      puVar4 = operator_new(0x14);
      local_4 = 0x11;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar7 = operator_new(0x10);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          uVar8 = puVar5[1];
          FUN_004252e0(4);
          puVar7[3] = uVar8;
          *puVar7 = &PTR_FUN_007e3978;
        }
        pvVar6 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0x12);
        if (pvVar6 == (void *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_0053e770(aCStack_14);
        }
        puVar4[1] = 0xd;
        puVar4[2] = 0;
        *puVar4 = &PTR_LAB_007e38f8;
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        }
        puVar4[3] = iVar2;
        if (puVar7 == (undefined4 *)0x0) {
          *puVar4 = &PTR_FUN_007e3878;
          puVar4[4] = 0;
        }
        else {
          puVar7[2] = puVar7[2] + 1;
          puVar4[4] = puVar7;
          *puVar4 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_20 + 0x84))(puVar4);
      piVar3 = piVar1;
    }
    puVar5 = operator_new(0x14);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0x14;
      local_4._1_3_ = 0;
      pvVar6 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x15);
      if ((pvVar6 == (void *)0x0) || (iVar2 = FUN_0053e740(0x4a6), iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      }
      puVar5[3] = iVar2;
      if (local_20 == (int *)0x0) {
        *puVar5 = &PTR_FUN_007e3878;
        puVar5[4] = 0;
      }
      else {
        local_20[2] = local_20[2] + 1;
        puVar5[4] = local_20;
        *puVar5 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_2c + 0x84))(puVar5);
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x16) + 4))();
  if (iVar2 < 1) {
    ExceptionList = pvStack_c;
    return local_2c;
  }
  piVar3 = operator_new(0x1e);
  local_4 = 0x16;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_004c0c30(2);
    local_4 = CONCAT31(local_4._1_3_,0x17);
    FUN_00444250();
    piVar3[3] = (int)&PTR_LAB_007e39f8;
    *piVar3 = (int)&PTR_FUN_007e3a28;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x1a);
  local_4 = 0xffffffff;
  while (puVar5 != (undefined4 *)0x0) {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)puVar5[2];
      uVar8 = *puVar5;
      puVar4[1] = 4;
      puVar4[2] = 0;
      puVar4[3] = uVar8;
      *puVar4 = &PTR_FUN_007e3978;
      puVar5 = puVar7;
    }
    (**(code **)(*piVar3 + 0x84))(puVar4);
  }
  pvVar6 = operator_new(0x14);
  local_4 = 0x18;
  if (pvVar6 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_004441b0(0x3df,piVar3);
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_2c + 0x84))(uVar8);
  ExceptionList = pvStack_10;
  return local_2c;
}


