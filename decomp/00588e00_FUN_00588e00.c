// FUN_00588e00 @ 588e00 size=2225

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_00588e00(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *unaff_EBX;
  int *piVar7;
  int *local_28;
  int *local_24;
  int *local_20;
  undefined4 *puStack_1c;
  undefined4 *local_18;
  void *local_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9563;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_24 = param_1;
  local_28 = operator_new(0x1e);
  local_4 = 0;
  local_20 = local_28;
  if (local_28 == (int *)0x0) {
    local_28 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_28 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    local_28[3] = (int)&PTR_LAB_007e39f8;
    *local_28 = (int)&PTR_FUN_007e3a28;
  }
  local_4 = 0xffffffff;
  puVar3 = operator_new(0x14);
  local_4 = 2;
  local_20 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar4 = operator_new(0x1a);
    local_4._0_1_ = 3;
    local_18 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar5 = local_24[1];
      FUN_0053e740(0x523);
      *(undefined2 *)(puVar4 + 5) = 3;
      *(int *)((int)puVar4 + 0x16) = iVar5;
      *puVar4 = &PTR_FUN_007e3ba4;
      param_1 = local_24;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 4;
    local_18 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (local_18 == (undefined4 *)0x0) {
LAB_00588f1c:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x10a);
      if (iVar5 == 0) goto LAB_00588f1c;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar3[3] = iVar5;
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
  (**(code **)(*local_28 + 0x84))(puVar3);
  piVar7 = local_28;
  if ((float)param_1[7] != _DAT_007e3380) {
    puVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x6;
    puStack_1c = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar4 = operator_new(0x10);
      puStack_8._0_1_ = 7;
      local_18 = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        local_24 = (int *)param_1[7];
        FUN_004252e0(5);
        *puVar4 = &PTR_FUN_007e48ac;
        puVar4[3] = local_24;
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 8;
      local_18 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
      if (local_18 == (undefined4 *)0x0) {
LAB_0058900c:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x14e);
        if (iVar5 == 0) goto LAB_0058900c;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar3[3] = iVar5;
      if (puVar4 == (undefined4 *)0x0) {
        *puVar3 = &PTR_FUN_007e3878;
        puVar3[4] = 0;
        piVar7 = unaff_EBX;
      }
      else {
        puVar4[2] = puVar4[2] + 1;
        puVar3[4] = puVar4;
        *puVar3 = &PTR_FUN_007e3878;
        piVar7 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar7 + 0x84))(puVar3);
  }
  if ((float)param_1[6] != _DAT_007e3380) {
    puVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xa;
    local_18 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar4 = operator_new(0x10);
      puStack_8._0_1_ = 0xb;
      puStack_1c = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        local_24 = (int *)param_1[6];
        FUN_004252e0(5);
        *puVar4 = &PTR_FUN_007e48ac;
        puVar4[3] = local_24;
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xc;
      puStack_1c = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xd);
      if (puStack_1c == (undefined4 *)0x0) {
LAB_005890fc:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x22c);
        if (iVar5 == 0) goto LAB_005890fc;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar3[3] = iVar5;
      if (puVar4 == (undefined4 *)0x0) {
        *puVar3 = &PTR_FUN_007e3878;
        puVar3[4] = 0;
        piVar7 = unaff_EBX;
      }
      else {
        puVar4[2] = puVar4[2] + 1;
        puVar3[4] = puVar4;
        *puVar3 = &PTR_FUN_007e3878;
        piVar7 = unaff_EBX;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar7 + 0x84))(puVar3);
  }
  if (*(char *)((int)param_1 + 0x23) != '\0') {
    puVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xe;
    local_18 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar4 = operator_new(0xe);
      puStack_8._0_1_ = 0xf;
      puStack_1c = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        cVar1 = *(char *)((int)local_28 + 0x23);
        FUN_00444030(6);
        *(bool *)(puVar4 + 3) = cVar1 != '\0';
        *puVar4 = &PTR_FUN_007e76a0;
        param_1 = local_28;
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x10;
      puStack_1c = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x11);
      if (puStack_1c == (undefined4 *)0x0) {
LAB_005891e8:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x158);
        if (iVar5 == 0) goto LAB_005891e8;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar3[3] = iVar5;
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
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar3);
  }
  if (*(char *)((int)param_1 + 0x29) != '\0') {
    puVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x12;
    local_18 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar4 = operator_new(0xe);
      puStack_8._0_1_ = 0x13;
      puStack_1c = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        cVar1 = *(char *)((int)local_28 + 0x29);
        FUN_00444030(6);
        *(bool *)(puVar4 + 3) = cVar1 != '\0';
        *puVar4 = &PTR_FUN_007e76a0;
        param_1 = local_28;
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x14;
      puStack_1c = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x15);
      if (puStack_1c == (undefined4 *)0x0) {
LAB_005892ce:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x147);
        if (iVar5 == 0) goto LAB_005892ce;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar3[3] = iVar5;
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
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar3);
  }
  if (*(char *)((int)param_1 + 0x2b) != '\0') {
    puVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x16;
    local_18 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar4 = operator_new(0xe);
      puStack_8._0_1_ = 0x17;
      puStack_1c = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        cVar1 = *(char *)((int)local_28 + 0x2b);
        FUN_00444030(6);
        *(bool *)(puVar4 + 3) = cVar1 != '\0';
        *puVar4 = &PTR_FUN_007e76a0;
        param_1 = local_28;
      }
      puStack_8._0_1_ = 0x16;
      FUN_004252e0(0);
      puStack_8._0_1_ = 0x18;
      puStack_1c = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x19);
      if (puStack_1c == (undefined4 *)0x0) {
LAB_005893b5:
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x2b5);
        if (iVar5 == 0) goto LAB_005893b5;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar3[3] = iVar5;
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
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(puVar3);
  }
  if (0 < (short)param_1[3]) {
    iVar5 = FUN_0042e060(&local_18,param_1 + 2);
    if ((int)*(char *)(iVar5 + 2) + *(short *)(iVar5 + 4) * 0xc < 0x3c) {
      puVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x1a;
      local_18 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = FUN_0054f410();
        FUN_004252e0(0);
        puStack_8._0_1_ = 0x1b;
        puStack_1c = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1c);
        if (puStack_1c == (undefined4 *)0x0) {
LAB_0058948a:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0053e740(0x2b6);
          if (iVar6 == 0) goto LAB_0058948a;
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar3[3] = iVar6;
        if (iVar5 == 0) {
          *puVar3 = &PTR_FUN_007e3878;
          puVar3[4] = 0;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          puVar3[4] = iVar5;
          *puVar3 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*unaff_EBX + 0x84))(puVar3);
    }
  }
  if (0 < *(short *)((int)param_1 + 0x12)) {
    iVar5 = FUN_0042e060(&local_24,(int)param_1 + 0xe);
    if ((int)*(char *)(iVar5 + 2) + *(short *)(iVar5 + 4) * 0xc < 0x3c) {
      puVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x1d;
      local_18 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar5 = FUN_0054f410();
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x1e;
        puStack_1c = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1f);
        if (puStack_1c == (undefined4 *)0x0) {
LAB_00589563:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0053e740(0x2b7);
          if (iVar6 == 0) goto LAB_00589563;
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar3[3] = iVar6;
        if (iVar5 == 0) {
          *puVar3 = &PTR_FUN_007e3878;
          puVar3[4] = 0;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          puVar3[4] = iVar5;
          *puVar3 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*unaff_EBX + 0x84))(puVar3);
    }
  }
  if (*(char *)(param_1[5] + 0x11862 + param_1[1]) == '\0') {
    ExceptionList = pvStack_10;
    return unaff_EBX;
  }
  puVar3 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x20;
  local_18 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
    goto LAB_0058966e;
  }
  puVar4 = operator_new(0xe);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1[5] + 0x11862 + param_1[1]);
    puVar4[1] = 6;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = uVar2;
    *puVar4 = &PTR_FUN_007e76a0;
  }
  FUN_004252e0(0);
  puStack_8._0_1_ = 0x21;
  puStack_1c = operator_new(0x14);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x22);
  if (puStack_1c == (undefined4 *)0x0) {
LAB_00589644:
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0053e740(0x52e);
    if (iVar5 == 0) goto LAB_00589644;
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  }
  puVar3[3] = iVar5;
  if (puVar4 == (undefined4 *)0x0) {
    *puVar3 = &PTR_FUN_007e3878;
    puVar3[4] = 0;
  }
  else {
    puVar4[2] = puVar4[2] + 1;
    puVar3[4] = puVar4;
    *puVar3 = &PTR_FUN_007e3878;
  }
LAB_0058966e:
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*unaff_EBX + 0x84))(puVar3);
  ExceptionList = local_14;
  return unaff_EBX;
}


