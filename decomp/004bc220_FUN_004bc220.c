// FUN_004bc220 @ 4bc220 size=740

int * __thiscall FUN_004bc220(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *local_20;
  undefined4 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bec0a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20 = operator_new(0x1e);
  local_4 = 0;
  if (local_20 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_20 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *local_20 = (int)&PTR_FUN_007e3a28;
    local_20[3] = (int)&PTR_LAB_007e39f8;
  }
  piVar5 = *(int **)(param_1 + 0xa2);
  bVar4 = false;
  local_4 = 0xffffffff;
  if (piVar5 != (int *)0x0) {
    do {
      puVar1 = (undefined4 *)*piVar5;
      piVar5 = (int *)piVar5[2];
      if (0 < (int)puVar1[param_2 + 1]) {
        puVar6 = operator_new(0x14);
        local_4 = 2;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          local_1c = operator_new(0x10);
          local_4._0_1_ = 3;
          if (local_1c == (undefined4 *)0x0) {
            local_1c = (undefined4 *)0x0;
          }
          else {
            uVar2 = puVar1[param_2 + 1];
            FUN_004252e0(4);
            local_1c[3] = uVar2;
            *local_1c = &PTR_FUN_007e3978;
          }
          local_4._0_1_ = 2;
          puVar7 = operator_new(0x1a);
          local_4 = CONCAT31(local_4._1_3_,4);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            uVar2 = *puVar1;
            FUN_0053e740(0x523);
            *(undefined2 *)(puVar7 + 5) = 3;
            *(undefined4 *)((int)puVar7 + 0x16) = uVar2;
            *puVar7 = &PTR_FUN_007e3ba4;
          }
          puVar6[1] = 0xd;
          puVar6[2] = 0;
          *puVar6 = &PTR_LAB_007e38f8;
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7[2] = puVar7[2] + 1;
          }
          puVar6[3] = puVar7;
          if (local_1c == (undefined4 *)0x0) {
            local_1c = (undefined4 *)0x0;
          }
          else {
            local_1c[2] = local_1c[2] + 1;
          }
          puVar6[4] = local_1c;
          *puVar6 = &PTR_FUN_007e3878;
        }
        local_4 = 0xffffffff;
        (**(code **)(*local_20 + 0x84))(puVar6);
        bVar4 = true;
      }
      if (0 < (int)puVar1[param_2 + 0x26]) {
        puVar6 = operator_new(0x14);
        local_4 = 5;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          local_1c = operator_new(0x10);
          if (local_1c == (undefined4 *)0x0) {
            local_1c = (undefined4 *)0x0;
          }
          else {
            iVar3 = puVar1[param_2 + 0x26];
            local_1c[1] = 4;
            local_1c[2] = 0;
            local_1c[3] = -iVar3;
            *local_1c = &PTR_FUN_007e3978;
          }
          puVar7 = operator_new(0x1a);
          local_4 = CONCAT31(local_4._1_3_,6);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            uVar2 = *puVar1;
            FUN_0053e740(0x523);
            *(undefined2 *)(puVar7 + 5) = 3;
            *(undefined4 *)((int)puVar7 + 0x16) = uVar2;
            *puVar7 = &PTR_FUN_007e3ba4;
          }
          puVar6[1] = 0xd;
          puVar6[2] = 0;
          *puVar6 = &PTR_LAB_007e38f8;
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7[2] = puVar7[2] + 1;
          }
          puVar6[3] = puVar7;
          if (local_1c == (undefined4 *)0x0) {
            puVar6[4] = 0;
            *puVar6 = &PTR_FUN_007e3878;
          }
          else {
            local_1c[2] = local_1c[2] + 1;
            puVar6[4] = local_1c;
            *puVar6 = &PTR_FUN_007e3878;
          }
        }
        local_4 = 0xffffffff;
        (**(code **)(*local_20 + 0x84))(puVar6);
        bVar4 = true;
      }
    } while (piVar5 != (int *)0x0);
    if (bVar4) {
      ExceptionList = local_c;
      return local_20;
    }
  }
  if (local_20 != (int *)0x0) {
    (**(code **)*local_20)(1);
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


