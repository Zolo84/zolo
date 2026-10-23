// FUN_00514810 @ 514810 size=2993

int * __fastcall FUN_00514810(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int unaff_EBX;
  int unaff_EBP;
  int *piVar10;
  int local_20;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c1c5a;
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
  local_20 = param_1;
  local_1c = piVar2;
  if (*(int *)(param_1 + 4) != 0) {
    puVar3 = operator_new(0x14);
    local_4 = 2;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      pvVar4 = operator_new(0x14);
      local_4._0_1_ = 3;
      if (pvVar4 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        uVar5 = FUN_00514330(*(undefined4 *)(param_1 + 4));
        iVar6 = FUN_0053e740(uVar5);
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 4;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,5);
      if (pvVar4 == (void *)0x0) {
LAB_00514929:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0053e740(0x141);
        if (iVar7 == 0) goto LAB_00514929;
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar3[3] = iVar7;
      if (iVar6 == 0) {
        *puVar3 = &PTR_FUN_007e3878;
        puVar3[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar3[4] = iVar6;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar2 + 0x84))(puVar3);
    puVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x6;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar8 = operator_new(0x10);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(unaff_EBX + 8);
        puVar8[1] = 4;
        puVar8[2] = 0;
        puVar8[3] = uVar5;
        *puVar8 = &PTR_FUN_007e3978;
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 7;
      pvVar4 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
      if (pvVar4 == (void *)0x0) {
LAB_005149ee:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0053e740(0x6d);
        if (iVar6 == 0) goto LAB_005149ee;
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar3[3] = iVar6;
      if (puVar8 == (undefined4 *)0x0) {
        *puVar3 = &PTR_FUN_007e3878;
        puVar3[4] = 0;
      }
      else {
        puVar8[2] = puVar8[2] + 1;
        puVar3[4] = puVar8;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar2 + 0x84))(puVar3);
    local_1c = operator_new(0x14);
    local_c = (void *)0x9;
    if (local_1c == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      local_c._0_1_ = 10;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        local_20 = *(int *)(unaff_EBP + 0xc);
        FUN_004252e0(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = local_20;
      }
      local_1c[1] = 0;
      local_1c[2] = 0;
      *local_1c = (int)&PTR_LAB_007e38f8;
      local_c._0_1_ = 0xb;
      pvVar4 = operator_new(0x14);
      local_c = (void *)CONCAT31(local_c._1_3_,0xc);
      if (pvVar4 == (void *)0x0) {
LAB_00514ac6:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0053e740(0x1e4);
        if (iVar6 == 0) goto LAB_00514ac6;
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      local_1c[3] = iVar6;
      piVar10 = local_1c;
      if (puVar3 == (undefined4 *)0x0) {
        *local_1c = (int)&PTR_FUN_007e3878;
        local_1c[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        local_1c[4] = (int)puVar3;
        *local_1c = (int)&PTR_FUN_007e3878;
      }
    }
    local_c = (void *)0xffffffff;
    (**(code **)(*piVar2 + 0x84))(piVar10);
    if (*(char *)(local_20 + 0x10) != '\0') {
      puVar3 = operator_new(0x14);
      local_4 = 0xd;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar8 = operator_new(0xe);
        local_4._0_1_ = 0xe;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          uVar1 = *(undefined1 *)(local_20 + 0x10);
          FUN_004252e0(6);
          *(undefined1 *)(puVar8 + 3) = uVar1;
          *puVar8 = &PTR_FUN_007e76a0;
          piVar2 = local_1c;
        }
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 0xf;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0x10);
        if (pvVar4 == (void *)0x0) {
LAB_00514ba6:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0053e740(0x31);
          if (iVar6 == 0) goto LAB_00514ba6;
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar3[3] = iVar6;
        if (puVar8 == (undefined4 *)0x0) {
          *puVar3 = &PTR_FUN_007e3878;
          puVar3[4] = 0;
        }
        else {
          puVar8[2] = puVar8[2] + 1;
          puVar3[4] = puVar8;
          *puVar3 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar2 + 0x84))(puVar3);
    }
    if (*(char *)(local_20 + 0x11) == '\0') {
      puVar3 = operator_new(0x14);
      local_4 = 0x11;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar8 = operator_new(0xe);
        local_4._0_1_ = 0x12;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          uVar1 = *(undefined1 *)(local_20 + 0x11);
          FUN_004252e0(6);
          *(undefined1 *)(puVar8 + 3) = uVar1;
          *puVar8 = &PTR_FUN_007e76a0;
          piVar2 = local_1c;
        }
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 0x13;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0x14);
        if (pvVar4 == (void *)0x0) {
LAB_00514c89:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0053e740(0xfb);
          if (iVar6 == 0) goto LAB_00514c89;
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar3[3] = iVar6;
        if (puVar8 == (undefined4 *)0x0) {
          *puVar3 = &PTR_FUN_007e3878;
          puVar3[4] = 0;
        }
        else {
          puVar8[2] = puVar8[2] + 1;
          puVar3[4] = puVar8;
          *puVar3 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar2 + 0x84))(puVar3);
    }
    if (*(int *)(local_20 + 0x26) != -1) {
      puVar3 = operator_new(0x14);
      local_4 = 0x15;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar8 = operator_new(0x10);
        local_4._0_1_ = 0x16;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          uVar5 = *(undefined4 *)(local_20 + 0x26);
          FUN_004252e0(4);
          puVar8[3] = uVar5;
          *puVar8 = &PTR_FUN_007e3978;
          piVar2 = local_1c;
        }
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 0x17;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0x18);
        if (pvVar4 == (void *)0x0) {
LAB_00514d6b:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0053e740(0x56c);
          if (iVar6 == 0) goto LAB_00514d6b;
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar3[3] = iVar6;
        if (puVar8 == (undefined4 *)0x0) {
          *puVar3 = &PTR_FUN_007e3878;
          puVar3[4] = 0;
        }
        else {
          puVar8[2] = puVar8[2] + 1;
          puVar3[4] = puVar8;
          *puVar3 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar2 + 0x84))(puVar3);
    }
    if (*(char *)(local_20 + 0x2a) != '\0') {
      puVar3 = operator_new(0x14);
      local_4 = 0x19;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar8 = operator_new(0xe);
        local_4._0_1_ = 0x1a;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          uVar1 = *(undefined1 *)(local_20 + 0x2a);
          FUN_004252e0(6);
          *(undefined1 *)(puVar8 + 3) = uVar1;
          *puVar8 = &PTR_FUN_007e76a0;
          piVar2 = local_1c;
        }
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 0x1b;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0x1c);
        if (pvVar4 == (void *)0x0) {
LAB_00514e4e:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0053e740(0x56d);
          if (iVar6 == 0) goto LAB_00514e4e;
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar3[3] = iVar6;
        if (puVar8 == (undefined4 *)0x0) {
          *puVar3 = &PTR_FUN_007e3878;
          puVar3[4] = 0;
        }
        else {
          puVar8[2] = puVar8[2] + 1;
          puVar3[4] = puVar8;
          *puVar3 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar2 + 0x84))(puVar3);
    }
    if (*(char *)(local_20 + 0x2b) == '\0') {
      puVar3 = operator_new(0x14);
      local_4 = 0x1d;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar8 = operator_new(0xe);
        local_4._0_1_ = 0x1e;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          uVar1 = *(undefined1 *)(local_20 + 0x2b);
          FUN_004252e0(6);
          *(undefined1 *)(puVar8 + 3) = uVar1;
          *puVar8 = &PTR_FUN_007e76a0;
          piVar2 = local_1c;
        }
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 0x1f;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0x20);
        if (pvVar4 == (void *)0x0) {
LAB_00514f31:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0053e740(0x56e);
          if (iVar6 == 0) goto LAB_00514f31;
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar3[3] = iVar6;
        if (puVar8 == (undefined4 *)0x0) {
          *puVar3 = &PTR_FUN_007e3878;
          puVar3[4] = 0;
        }
        else {
          puVar8[2] = puVar8[2] + 1;
          puVar3[4] = puVar8;
          *puVar3 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar2 + 0x84))(puVar3);
    }
    if (*(char *)(local_20 + 0x2c) != '\0') {
      puVar3 = operator_new(0x14);
      local_4 = 0x21;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar8 = operator_new(0xe);
        local_4._0_1_ = 0x22;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          uVar1 = *(undefined1 *)(local_20 + 0x2c);
          FUN_00444030(6);
          *(undefined1 *)(puVar8 + 3) = uVar1;
          *puVar8 = &PTR_FUN_007e76a0;
          piVar2 = local_1c;
        }
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 0x23;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0x24);
        if (pvVar4 == (void *)0x0) {
LAB_00515014:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0053e740(0x56f);
          if (iVar6 == 0) goto LAB_00515014;
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar3[3] = iVar6;
        if (puVar8 == (undefined4 *)0x0) {
          *puVar3 = &PTR_FUN_007e3878;
          puVar3[4] = 0;
        }
        else {
          puVar8[2] = puVar8[2] + 1;
          puVar3[4] = puVar8;
          *puVar3 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar2 + 0x84))(puVar3);
    }
    if (*(float *)(local_20 + 0x2e) != *(float *)(local_20 + 0xc)) {
      puVar3 = operator_new(0x14);
      local_4 = 0x25;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar8 = operator_new(0x10);
        local_4._0_1_ = 0x26;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          uVar5 = *(undefined4 *)(local_20 + 0x2e);
          FUN_00444030(5);
          *puVar8 = &PTR_FUN_007e48ac;
          puVar8[3] = uVar5;
        }
        local_4._0_1_ = 0x25;
        FUN_004252e0(0);
        local_4._0_1_ = 0x27;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0x28);
        if (pvVar4 == (void *)0x0) {
LAB_00515102:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0053e740(0x570);
          if (iVar6 == 0) goto LAB_00515102;
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar3[3] = iVar6;
        if (puVar8 == (undefined4 *)0x0) {
          *puVar3 = &PTR_FUN_007e3878;
          puVar3[4] = 0;
        }
        else {
          puVar8[2] = puVar8[2] + 1;
          puVar3[4] = puVar8;
          *puVar3 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_1c + 0x84))(puVar3);
      piVar2 = local_1c;
    }
  }
  if (*(short *)(local_20 + 0x16) != 0) {
    puVar3 = operator_new(0x14);
    local_4 = 0x29;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar6 = FUN_0054f410();
      FUN_004252e0(0);
      local_4._0_1_ = 0x2a;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0x2b);
      if (pvVar4 == (void *)0x0) {
LAB_005151b6:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0053e740(0x156);
        if (iVar7 == 0) goto LAB_005151b6;
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar3[3] = iVar7;
      if (iVar6 == 0) {
        *puVar3 = &PTR_FUN_007e3878;
        puVar3[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar3[4] = iVar6;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar2 + 0x84))(puVar3);
  }
  if (*(short *)(local_20 + 0x1c) == 0) goto LAB_005152a1;
  puVar3 = operator_new(0x14);
  local_4 = 0x2c;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar6 = FUN_0054f410();
    FUN_004252e0(0);
    local_4._0_1_ = 0x2d;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,0x2e);
    if (pvVar4 == (void *)0x0) {
LAB_00515264:
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0053e740(0x157);
      if (iVar7 == 0) goto LAB_00515264;
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    puVar3[3] = iVar7;
    if (iVar6 == 0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      puVar3[4] = iVar6;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x84))(puVar3);
LAB_005152a1:
  if (*(int *)(local_20 + 0x1e) != 0) {
    pvVar4 = operator_new(0x14);
    local_4 = 0x2f;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar3 = operator_new(0x10);
      local_4._0_1_ = 0x30;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(local_20 + 0x1e);
        FUN_00444030(4);
        puVar3[3] = uVar5;
        *puVar3 = &PTR_FUN_007e3978;
      }
      local_4 = CONCAT31(local_4._1_3_,0x2f);
      uVar5 = FUN_004441b0(0x162,puVar3);
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(uVar5);
    pvVar4 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x31;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      pvVar9 = operator_new(0x10);
      puStack_8._0_1_ = 0x32;
      if (pvVar9 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00516850(*(undefined4 *)(unaff_EBX + 0x22));
      }
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x31);
      uVar5 = FUN_004441b0(0xf4,uVar5);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*local_1c + 0x84))(uVar5);
    ExceptionList = pvVar4;
    return local_1c;
  }
  ExceptionList = local_c;
  return piVar2;
}


