// FUN_004e1ad0 @ 4e1ad0 size=1260

int * __fastcall FUN_004e1ad0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bfda4;
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
    *local_1c = (int)&PTR_FUN_007e3a28;
    local_1c[3] = (int)&PTR_LAB_007e39f8;
  }
  iVar6 = 0;
  iVar5 = 0;
  local_4 = 0xffffffff;
  if (0 < DAT_00877690) {
    do {
      iVar1 = FUN_004e9370(iVar5);
      if (*(char *)(iVar1 + 0x180) != '\0') {
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_00877690);
  }
  if (DAT_00877690 / 2 < iVar6) {
    puVar2 = operator_new(0x14);
    local_4 = 2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      pvVar3 = operator_new(0x14);
      local_4._0_1_ = 3;
      if (pvVar3 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053e740(0x243);
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 4;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,5);
      if ((pvVar3 == (void *)0x0) || (iVar6 = FUN_0053e740(0x112), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar2[3] = iVar6;
      if (iVar5 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar2[4] = iVar5;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(puVar2);
    iVar5 = 0;
    if (0 < DAT_00877690) {
      do {
        iVar6 = FUN_004e9370(iVar5);
        if (*(char *)(iVar6 + 0x180) == '\0') {
          puVar2 = operator_new(0x14);
          local_4 = 6;
          if (puVar2 == (undefined4 *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar4 = operator_new(0x10);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              puVar4[1] = 4;
              puVar4[2] = 0;
              puVar4[3] = iVar5;
              *puVar4 = &PTR_FUN_007e3978;
            }
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = &PTR_LAB_007e38f8;
            local_4._0_1_ = 7;
            pvVar3 = operator_new(0x14);
            local_4 = CONCAT31(local_4._1_3_,8);
            if ((pvVar3 == (void *)0x0) || (iVar6 = FUN_0053e740(0x111), iVar6 == 0)) {
              iVar6 = 0;
            }
            else {
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            }
            puVar2[3] = iVar6;
            if (puVar4 == (undefined4 *)0x0) {
              *puVar2 = &PTR_FUN_007e3878;
              puVar2[4] = 0;
            }
            else {
              puVar4[2] = puVar4[2] + 1;
              puVar2[4] = puVar4;
              *puVar2 = &PTR_FUN_007e3878;
            }
          }
          local_4 = 0xffffffff;
          (**(code **)(*local_1c + 0x84))(puVar2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_00877690);
    }
  }
  else {
    iVar5 = 0;
    if (0 < DAT_00877690) {
      do {
        iVar6 = FUN_004e9370(iVar5);
        if (*(char *)(iVar6 + 0x180) != '\0') {
          puVar2 = operator_new(0x14);
          local_4 = 9;
          if (puVar2 == (undefined4 *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar4 = operator_new(0x10);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              puVar4[1] = 4;
              puVar4[2] = 0;
              puVar4[3] = iVar5;
              *puVar4 = &PTR_FUN_007e3978;
            }
            puVar2[1] = 0;
            puVar2[2] = 0;
            *puVar2 = &PTR_LAB_007e38f8;
            local_4._0_1_ = 10;
            pvVar3 = operator_new(0x14);
            local_4 = CONCAT31(local_4._1_3_,0xb);
            if ((pvVar3 == (void *)0x0) || (iVar6 = FUN_0053e740(0x112), iVar6 == 0)) {
              iVar6 = 0;
            }
            else {
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            }
            puVar2[3] = iVar6;
            if (puVar4 == (undefined4 *)0x0) {
              *puVar2 = &PTR_FUN_007e3878;
              puVar2[4] = 0;
            }
            else {
              puVar4[2] = puVar4[2] + 1;
              puVar2[4] = puVar4;
              *puVar2 = &PTR_FUN_007e3878;
            }
          }
          local_4 = 0xffffffff;
          (**(code **)(*local_1c + 0x84))(puVar2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_00877690);
    }
  }
  if (*param_1 != -1) {
    puVar2 = operator_new(0x14);
    local_4 = 0xc;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar5 = FUN_00424e80();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 0xd;
      pvVar3 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0xe);
      if ((pvVar3 == (void *)0x0) || (iVar6 = FUN_0053e740(0x244), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar2[3] = iVar6;
      if (iVar5 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar2[4] = iVar5;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(puVar2);
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xf;
    if (puVar2 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar5 = FUN_00424e80();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x10;
      pvVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x11);
      if ((pvVar3 == (void *)0x0) || (iVar6 = FUN_0053e740(0x245), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar2[3] = iVar6;
      puVar4 = puVar2;
      if (iVar5 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar2[4] = iVar5;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*local_1c + 0x84))(puVar4);
    ExceptionList = puVar2;
    return local_1c;
  }
  ExceptionList = local_c;
  return local_1c;
}


