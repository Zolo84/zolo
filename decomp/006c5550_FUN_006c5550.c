// FUN_006c5550 @ 6c5550 size=617

int * __fastcall FUN_006c5550(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *local_20;
  undefined4 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d84ac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20 = operator_new(0x1e);
  if (local_20 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    FUN_004252e0(2);
    local_20[4] = 0;
    local_20[5] = 0;
    local_20[6] = 0;
    *(undefined1 *)(local_20 + 7) = 0;
    local_20[3] = (int)&PTR_LAB_007e3ac0;
    *local_20 = (int)&PTR_FUN_007e3a28;
    local_20[3] = (int)&PTR_LAB_007e39f8;
  }
  iVar7 = 0;
  if (0 < DAT_0087769c) {
    do {
      puVar2 = operator_new(0x14);
      local_4 = 0;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        local_1c = operator_new(0xe);
        if (local_1c == (undefined4 *)0x0) {
          local_1c = (undefined4 *)0x0;
        }
        else {
          uVar1 = *(undefined1 *)(iVar7 + 0x90 + param_1);
          local_1c[1] = 6;
          local_1c[2] = 0;
          *(undefined1 *)(local_1c + 3) = uVar1;
          *local_1c = &PTR_FUN_007e76a0;
        }
        uVar3 = FUN_004fe7e0(iVar7);
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 1;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,2);
        if (pvVar4 == (void *)0x0) {
LAB_006c565b:
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0053e740(uVar3);
          if (iVar5 == 0) goto LAB_006c565b;
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        }
        puVar2[3] = iVar5;
        if (local_1c == (undefined4 *)0x0) {
          puVar2[4] = 0;
          *puVar2 = &PTR_FUN_007e3878;
        }
        else {
          local_1c[2] = local_1c[2] + 1;
          puVar2[4] = local_1c;
          *puVar2 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_20 + 0x84))(puVar2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_0087769c);
  }
  local_1c = (undefined4 *)0x1;
  if (1 < DAT_008776b0) {
    do {
      puVar2 = operator_new(0x14);
      local_4 = 3;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar6 = operator_new(0xe);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          uVar1 = *(undefined1 *)((int)local_1c + 4 + param_1);
          puVar6[1] = 6;
          puVar6[2] = 0;
          *(undefined1 *)(puVar6 + 3) = uVar1;
          *puVar6 = &PTR_FUN_007e76a0;
        }
        uVar3 = FUN_004fed70(local_1c);
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 4;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,5);
        if (pvVar4 == (void *)0x0) {
LAB_006c5759:
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_0053e740(uVar3);
          if (iVar7 == 0) goto LAB_006c5759;
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar2[3] = iVar7;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6[2] = puVar6[2] + 1;
        }
        puVar2[4] = puVar6;
        *puVar2 = &PTR_FUN_007e3878;
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_20 + 0x84))(puVar2);
      local_1c = (undefined4 *)((int)local_1c + 1);
    } while ((int)local_1c < DAT_008776b0);
  }
  ExceptionList = local_c;
  return local_20;
}


