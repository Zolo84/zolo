// FUN_0050b360 @ 50b360 size=333

int * __fastcall FUN_0050b360(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c16e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = operator_new(0x1e);
  local_4 = 0;
  if (local_18 == (int *)0x0) {
    local_18 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    local_18[4] = 0;
    local_18[5] = 0;
    local_18[6] = 0;
    *(undefined1 *)(local_18 + 7) = 0;
    local_18[3] = (int)&PTR_LAB_007e3ac0;
    *local_18 = (int)&PTR_FUN_007e3a28;
    local_18[3] = (int)&PTR_LAB_007e39f8;
  }
  piVar1 = *(int **)(param_1 + -0xe);
  local_4 = 0xffffffff;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    puVar2 = operator_new(0x14);
    local_4 = 1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      iVar3 = (*(code *)**(undefined4 **)(*piVar1 + 8))();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 2;
      pvVar4 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,3);
      if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(0x1df), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar2[3] = iVar5;
      if (iVar3 == 0) {
        *puVar2 = &PTR_FUN_007e3878;
        puVar2[4] = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        puVar2[4] = iVar3;
        *puVar2 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_18 + 0x84))(puVar2);
  }
  ExceptionList = local_c;
  return local_18;
}


