// FUN_0058ae80 @ 58ae80 size=405

int * __fastcall FUN_0058ae80(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9841;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = operator_new(0x1e);
  local_4 = 0;
  if (local_1c == (int *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    local_1c[4] = 0;
    local_1c[5] = 0;
    local_1c[6] = 0;
    *(undefined1 *)(local_1c + 7) = 0;
    local_1c[3] = (int)&PTR_LAB_007e3ac0;
    *local_1c = (int)&PTR_FUN_007e3a28;
    local_1c[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  iVar4 = 0;
  do {
    if (*(char *)(param_1 + 4 + iVar4) != '\0') {
      puVar2 = operator_new(0x14);
      local_4 = 1;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar3 = operator_new(0x10);
        puVar5 = (undefined4 *)0x0;
        if (puVar3 != (undefined4 *)0x0) {
          bVar1 = *(byte *)(param_1 + 4 + iVar4);
          puVar3[2] = 0;
          puVar3[1] = 4;
          puVar3[3] = (uint)bVar1;
          *puVar3 = &PTR_FUN_007e3978;
          puVar5 = puVar3;
        }
        puVar3 = operator_new(0x1a);
        local_4 = CONCAT31(local_4._1_3_,2);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          FUN_0053e740(0x523);
          *(undefined2 *)(puVar3 + 5) = 3;
          *(int *)((int)puVar3 + 0x16) = iVar4;
          *puVar3 = &PTR_FUN_007e3ba4;
        }
        puVar2[1] = 0xd;
        puVar2[2] = 0;
        *puVar2 = &PTR_LAB_007e38f8;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3[2] = puVar3[2] + 1;
        }
        puVar2[3] = puVar3;
        if (puVar5 == (undefined4 *)0x0) {
          puVar2[4] = 0;
          *puVar2 = &PTR_FUN_007e3878;
        }
        else {
          puVar5[2] = puVar5[2] + 1;
          puVar2[4] = puVar5;
          *puVar2 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_1c + 0x84))(puVar2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x158);
  ExceptionList = local_c;
  return local_1c;
}


