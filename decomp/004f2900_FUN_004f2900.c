// FUN_004f2900 @ 4f2900 size=2815

int * __fastcall FUN_004f2900(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_EBX;
  int *piVar7;
  int *local_1c;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c07f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = operator_new(0x1e);
  local_4 = 0;
  if (local_1c == (int *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_1c = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    local_1c[3] = (int)&PTR_LAB_007e39f8;
    *local_1c = (int)&PTR_FUN_007e3a28;
  }
  local_4 = 0xffffffff;
  uVar1 = FUN_004f1310();
  FUN_0053ea00(uVar1);
  puVar2 = operator_new(0x14);
  local_4 = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar3 = operator_new(0x14);
    local_4._0_1_ = 3;
    if (pvVar3 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      uVar1 = FUN_004fe7e0(param_1[0x12]);
      iVar4 = FUN_0053e740(uVar1);
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 4;
    local_10 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,5);
    if ((local_10 == (void *)0x0) || (iVar5 = FUN_0053e740(0x141), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    if (iVar4 == 0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      puVar2[4] = iVar4;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_1c + 0x84))(puVar2);
  piVar7 = local_1c;
  if (0 < param_1[0x14]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x6;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar6 = operator_new(0x10);
      puStack_8._0_1_ = 7;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        iVar4 = local_1c[0x14];
        FUN_004252e0(4);
        puVar6[3] = iVar4;
        *puVar6 = &PTR_FUN_007e3978;
        param_1 = local_1c;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 8;
      pvVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
      if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x341), iVar4 == 0)) {
        iVar4 = 0;
      }
      else {
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      puVar2[3] = iVar4;
      if (puVar6 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar6[2] = puVar6[2] + 1;
        puVar2[4] = puVar6;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar2);
    piVar7 = unaff_EBX;
  }
  if (0 < param_1[0x13]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xa;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      pvVar3 = operator_new(0x14);
      puStack_8._0_1_ = 0xb;
      if (pvVar3 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        uVar1 = FUN_004fed70(param_1[0x13]);
        iVar4 = FUN_0053e740(uVar1);
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xc;
      pvVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xd);
      if ((pvVar3 == (void *)0x0) || (iVar5 = FUN_0053e740(0x20e), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (iVar4 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar7 = unaff_EBX;
      }
      else {
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        puVar2[4] = iVar4;
        *puVar2 = &PTR_FUN_007e3878;
        piVar7 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar7 + 0x84))(puVar2);
    if (0 < param_1[0x19]) {
      puVar2 = operator_new(0x14);
      puStack_8 = (undefined1 *)0xe;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar6 = operator_new(0x10);
        puStack_8._0_1_ = 0xf;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          iVar4 = local_1c[0x19];
          FUN_004252e0(4);
          puVar6[3] = iVar4;
          *puVar6 = &PTR_FUN_007e3978;
          param_1 = local_1c;
        }
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x10;
        pvVar3 = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x11);
        if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x342), iVar4 == 0)) {
          iVar4 = 0;
        }
        else {
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        }
        puVar2[3] = iVar4;
        if (puVar6 == (undefined4 *)0x0) {
          *puVar2 = &PTR_FUN_007e3878;
          puVar2[4] = 0;
        }
        else {
          puVar6[2] = puVar6[2] + 1;
          puVar2[4] = puVar6;
          *puVar2 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*unaff_EBX + 0x84))(puVar2);
      piVar7 = unaff_EBX;
    }
  }
  if (0 < param_1[0x1a]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x12;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      pvVar3 = operator_new(0x14);
      puStack_8._0_1_ = 0x13;
      if (pvVar3 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        uVar1 = FUN_004fed70(param_1[0x1a]);
        iVar4 = FUN_0053e740(uVar1);
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x14;
      pvVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x15);
      if ((pvVar3 == (void *)0x0) || (iVar5 = FUN_0053e740(0x517), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (iVar4 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar7 = unaff_EBX;
      }
      else {
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        puVar2[4] = iVar4;
        *puVar2 = &PTR_FUN_007e3878;
        piVar7 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar7 + 0x84))(puVar2);
    if (0 < param_1[0x15]) {
      puVar2 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x16;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar6 = operator_new(0x10);
        puStack_8._0_1_ = 0x17;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          iVar4 = local_1c[0x15];
          FUN_004252e0(4);
          puVar6[3] = iVar4;
          *puVar6 = &PTR_FUN_007e3978;
          param_1 = local_1c;
        }
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x18;
        pvVar3 = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x19);
        if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x512), iVar4 == 0)) {
          iVar4 = 0;
        }
        else {
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        }
        puVar2[3] = iVar4;
        if (puVar6 == (undefined4 *)0x0) {
          *puVar2 = &PTR_FUN_007e3878;
          puVar2[4] = 0;
        }
        else {
          puVar6[2] = puVar6[2] + 1;
          puVar2[4] = puVar6;
          *puVar2 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*unaff_EBX + 0x84))(puVar2);
      piVar7 = unaff_EBX;
    }
  }
  if (0 < param_1[0x1b]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x1a;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      pvVar3 = operator_new(0x14);
      puStack_8._0_1_ = 0x1b;
      if (pvVar3 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        uVar1 = FUN_004fed70(param_1[0x1b]);
        iVar4 = FUN_0053e740(uVar1);
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x1c;
      pvVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1d);
      if ((pvVar3 == (void *)0x0) || (iVar5 = FUN_0053e740(0x518), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (iVar4 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar7 = unaff_EBX;
      }
      else {
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        puVar2[4] = iVar4;
        *puVar2 = &PTR_FUN_007e3878;
        piVar7 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar7 + 0x84))(puVar2);
    if (0 < param_1[0x16]) {
      puVar2 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x1e;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar6 = operator_new(0x10);
        puStack_8._0_1_ = 0x1f;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          iVar4 = local_1c[0x16];
          FUN_004252e0(4);
          puVar6[3] = iVar4;
          *puVar6 = &PTR_FUN_007e3978;
          param_1 = local_1c;
        }
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x20;
        pvVar3 = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x21);
        if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x513), iVar4 == 0)) {
          iVar4 = 0;
        }
        else {
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        }
        puVar2[3] = iVar4;
        if (puVar6 == (undefined4 *)0x0) {
          *puVar2 = &PTR_FUN_007e3878;
          puVar2[4] = 0;
        }
        else {
          puVar6[2] = puVar6[2] + 1;
          puVar2[4] = puVar6;
          *puVar2 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*unaff_EBX + 0x84))(puVar2);
      piVar7 = unaff_EBX;
    }
  }
  if (0 < param_1[0x1c]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x22;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      pvVar3 = operator_new(0x14);
      puStack_8._0_1_ = 0x23;
      if (pvVar3 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        uVar1 = FUN_004fed70(param_1[0x1c]);
        iVar4 = FUN_0053e740(uVar1);
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x24;
      pvVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x25);
      if ((pvVar3 == (void *)0x0) || (iVar5 = FUN_0053e740(0x519), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (iVar4 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar7 = unaff_EBX;
      }
      else {
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        puVar2[4] = iVar4;
        *puVar2 = &PTR_FUN_007e3878;
        piVar7 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar7 + 0x84))(puVar2);
    if (0 < param_1[0x17]) {
      puVar2 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x26;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar6 = operator_new(0x10);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          iVar4 = param_1[0x17];
          puVar6[1] = 4;
          puVar6[2] = 0;
          puVar6[3] = iVar4;
          *puVar6 = &PTR_FUN_007e3978;
        }
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x27;
        pvVar3 = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x28);
        if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x514), iVar4 == 0)) {
          iVar4 = 0;
        }
        else {
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        }
        puVar2[3] = iVar4;
        if (puVar6 == (undefined4 *)0x0) {
          *puVar2 = &PTR_FUN_007e3878;
          puVar2[4] = 0;
          piVar7 = unaff_EBX;
        }
        else {
          puVar6[2] = puVar6[2] + 1;
          puVar2[4] = puVar6;
          *puVar2 = &PTR_FUN_007e3878;
          piVar7 = unaff_EBX;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*piVar7 + 0x84))(puVar2);
    }
  }
  if (0 < param_1[0x1d]) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x29;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      pvVar3 = operator_new(0x14);
      puStack_8._0_1_ = 0x2a;
      if (pvVar3 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        uVar1 = FUN_004fed70(param_1[0x1d]);
        iVar4 = FUN_0053e740(uVar1);
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x2b;
      pvVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x2c);
      if ((pvVar3 == (void *)0x0) || (iVar5 = FUN_0053e740(0x51a), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (iVar4 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
        piVar7 = unaff_EBX;
      }
      else {
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        puVar2[4] = iVar4;
        *puVar2 = &PTR_FUN_007e3878;
        piVar7 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar7 + 0x84))(puVar2);
    if (0 < param_1[0x18]) {
      puVar2 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x2d;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar6 = operator_new(0x10);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          iVar4 = param_1[0x18];
          puVar6[1] = 4;
          puVar6[2] = 0;
          puVar6[3] = iVar4;
          *puVar6 = &PTR_FUN_007e3978;
        }
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x2e;
        pvVar3 = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x2f);
        if ((pvVar3 == (void *)0x0) || (iVar4 = FUN_0053e740(0x515), iVar4 == 0)) {
          iVar4 = 0;
        }
        else {
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        }
        puVar2[3] = iVar4;
        if (puVar6 == (undefined4 *)0x0) {
          *puVar2 = &PTR_FUN_007e3878;
          puVar2[4] = 0;
        }
        else {
          puVar6[2] = puVar6[2] + 1;
          puVar2[4] = puVar6;
          *puVar2 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*unaff_EBX + 0x84))(puVar2);
      ExceptionList = local_10;
      return unaff_EBX;
    }
    ExceptionList = local_10;
    return piVar7;
  }
  ExceptionList = local_10;
  return piVar7;
}


