// FUN_004d0900 @ 4d0900 size=1082

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_004d0900(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bf469;
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
  if (*(float *)(param_1 + 0x10) <= _DAT_007e3380) {
    ExceptionList = local_c;
    return local_1c;
  }
  iVar1 = __ftol();
  if ((float)iVar1 == *(float *)(param_1 + 0x10)) {
    puVar2 = operator_new(0x14);
    local_4 = 2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar4 = __ftol();
        puVar3[1] = 4;
        puVar3[2] = 0;
        puVar3[3] = uVar4;
        *puVar3 = &PTR_FUN_007e3978;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 3;
      pvVar5 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,4);
      if ((pvVar5 == (void *)0x0) || (iVar1 = FUN_0053e740(0x23c), iVar1 == 0)) {
        iVar1 = 0;
      }
      else {
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      }
      puVar2[3] = iVar1;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(puVar2);
  }
  else {
    puVar2 = operator_new(0x14);
    local_4 = 5;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x10);
      local_4._0_1_ = 6;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x10);
        FUN_004252e0(5);
        *puVar3 = &PTR_FUN_007e48ac;
        puVar3[3] = uVar4;
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 7;
      pvVar5 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,8);
      if ((pvVar5 == (void *)0x0) || (iVar1 = FUN_0053e740(0x23c), iVar1 == 0)) {
        iVar1 = 0;
      }
      else {
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      }
      puVar2[3] = iVar1;
      if (puVar3 == (undefined4 *)0x0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        puVar3[2] = puVar3[2] + 1;
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(puVar2);
  }
  if (*(float *)(param_1 + 0x14) != _DAT_007e3380) {
    iVar1 = __ftol();
    if ((float)iVar1 == *(float *)(param_1 + 0x14)) {
      puVar2 = operator_new(0x14);
      local_4 = 9;
      if (puVar2 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar6 = operator_new(0x10);
        local_4._0_1_ = 10;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          uVar4 = __ftol();
          FUN_004252e0(4);
          puVar6[3] = uVar4;
          *puVar6 = &PTR_FUN_007e3978;
        }
        local_4._0_1_ = 9;
        FUN_004252e0(0);
        local_4._0_1_ = 0xb;
        pvVar5 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0xc);
        if ((pvVar5 == (void *)0x0) || (iVar1 = FUN_0053e740(0x23d), iVar1 == 0)) {
          iVar1 = 0;
        }
        else {
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        }
        puVar2[3] = iVar1;
        puVar3 = puVar2;
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
      local_4 = 0xffffffff;
      (**(code **)(*local_1c + 0x84))(puVar3);
      ExceptionList = puVar2;
      return local_1c;
    }
    pvVar5 = operator_new(0x14);
    local_4 = 0xd;
    if (pvVar5 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar2 = operator_new(0x10);
      local_4._0_1_ = 0xe;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x14);
        FUN_00444030(5);
        *puVar2 = &PTR_FUN_007e48ac;
        puVar2[3] = uVar4;
      }
      local_4 = CONCAT31(local_4._1_3_,0xd);
      uVar4 = FUN_004441b0(0x23d,puVar2);
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(uVar4);
    ExceptionList = pvVar5;
    return local_1c;
  }
  ExceptionList = local_c;
  return local_1c;
}


