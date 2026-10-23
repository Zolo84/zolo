// FUN_00542140 @ 542140 size=565

int * __fastcall FUN_00542140(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int local_24;
  int *local_20;
  undefined4 *local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c33ec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_20 = operator_new(0x1e);
  if (local_20 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    local_20[1] = 2;
    local_20[2] = 0;
    local_20[4] = 0;
    local_20[5] = 0;
    local_20[6] = 0;
    *(undefined1 *)(local_20 + 7) = 0;
    local_20[3] = (int)&PTR_LAB_007e3ac0;
    *local_20 = (int)&PTR_FUN_007e3a28;
    local_20[3] = (int)&PTR_LAB_007e39f8;
  }
  local_24 = 0;
  if (0 < DAT_0087769c) {
    local_1c = (undefined4 *)(param_1 + 0x4670);
    do {
      puVar1 = operator_new(0x14);
      local_4 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        iVar2 = (*(code *)**(undefined4 **)*local_1c)();
        uVar3 = FUN_004fe7e0(local_24);
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 1;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,2);
        if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(uVar3), iVar5 == 0)) {
          iVar5 = 0;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        }
        puVar1[3] = iVar5;
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        }
        puVar1[4] = iVar2;
        *puVar1 = &PTR_FUN_007e3878;
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_20 + 0x84))(puVar1);
      local_24 = local_24 + 1;
      local_1c = local_1c + 1;
    } while (local_24 < DAT_0087769c);
  }
  local_24 = 0;
  if (0 < DAT_008776b0) {
    local_1c = (undefined4 *)(param_1 + 0x48a0);
    do {
      puVar1 = operator_new(0x14);
      local_4 = 3;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        iVar2 = (*(code *)**(undefined4 **)*local_1c)();
        uVar3 = FUN_004fed70(local_24);
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 4;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,5);
        if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(uVar3), iVar5 == 0)) {
          iVar5 = 0;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        }
        puVar1[3] = iVar5;
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        }
        puVar1[4] = iVar2;
        *puVar1 = &PTR_FUN_007e3878;
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_20 + 0x84))(puVar1);
      local_24 = local_24 + 1;
      local_1c = local_1c + 1;
    } while (local_24 < DAT_008776b0);
  }
  ExceptionList = pvStack_c;
  return local_20;
}


