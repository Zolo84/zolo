// FUN_0058b0b0 @ 58b0b0 size=410

int * __fastcall FUN_0058b0b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9879;
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
  if (*(int *)(param_1 + 0x1d3a4) != 0) {
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1d3a4) + 0x22) + 4);
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[2];
      iVar5 = *piVar2;
      puVar3 = operator_new(0x14);
      local_4 = 2;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar4 = operator_new(0x1a);
        local_4._0_1_ = 3;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          FUN_0053e740(0x523);
          *(undefined2 *)(puVar4 + 5) = 3;
          *(int *)((int)puVar4 + 0x16) = iVar5;
          *puVar4 = &PTR_FUN_007e3ba4;
        }
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar5 = (*(code *)**(undefined4 **)(param_1 + 4 + iVar5 * 0x15c))();
        puVar3[1] = 0xd;
        puVar3[2] = 0;
        *puVar3 = &PTR_LAB_007e38f8;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
        }
        puVar3[3] = puVar4;
        if (iVar5 == 0) {
          puVar3[4] = 0;
          *puVar3 = &PTR_FUN_007e3878;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          puVar3[4] = iVar5;
          *puVar3 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_1c + 0x84))(puVar3);
      piVar2 = piVar1;
    }
  }
  ExceptionList = local_c;
  return local_1c;
}


