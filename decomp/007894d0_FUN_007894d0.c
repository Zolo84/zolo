// FUN_007894d0 @ 7894d0 size=667

int * __thiscall FUN_007894d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e137a;
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
  local_4 = 0xffffffff;
  local_18 = 0;
  piVar5 = (int *)(param_1 + 0x28c6a + param_2 * 4);
  do {
    if (piVar5[-0x31b8] != 0) {
      puVar2 = operator_new(0x14);
      local_4 = 2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar3 = operator_new(0x10);
        local_4._0_1_ = 3;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          iVar1 = piVar5[-0x31b8];
          FUN_004252e0(4);
          puVar3[3] = iVar1;
          *puVar3 = &PTR_FUN_007e3978;
        }
        local_4._0_1_ = 2;
        puVar4 = operator_new(0x1a);
        local_4 = CONCAT31(local_4._1_3_,4);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          FUN_0053e740(0x523);
          *(undefined2 *)(puVar4 + 5) = 3;
          *(int *)((int)puVar4 + 0x16) = local_18;
          *puVar4 = &PTR_FUN_007e3ba4;
        }
        puVar2[1] = 0xd;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_007e38f8;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
        }
        puVar2[3] = puVar4;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3[2] = puVar3[2] + 1;
        }
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_1c + 0x84))(puVar2);
    }
    if (*piVar5 != 0) {
      puVar2 = operator_new(0x14);
      local_4 = 5;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar3 = operator_new(0x10);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          iVar1 = *piVar5;
          puVar3[1] = 4;
          puVar3[2] = 0;
          puVar3[3] = -iVar1;
          *puVar3 = &PTR_FUN_007e3978;
        }
        puVar4 = operator_new(0x1a);
        local_4 = CONCAT31(local_4._1_3_,6);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          FUN_0053e740(0x523);
          *(undefined2 *)(puVar4 + 5) = 3;
          *(int *)((int)puVar4 + 0x16) = local_18;
          *puVar4 = &PTR_FUN_007e3ba4;
        }
        puVar2[1] = 0xd;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_007e38f8;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
        }
        puVar2[3] = puVar4;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3[2] = puVar3[2] + 1;
        }
        puVar2[4] = puVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_1c + 0x84))(puVar2);
    }
    piVar5 = piVar5 + 0x25;
    local_18 = local_18 + 1;
  } while (local_18 < 0x158);
  ExceptionList = local_c;
  return local_1c;
}


