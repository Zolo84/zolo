// FUN_005408e0 @ 5408e0 size=404

int * __fastcall FUN_005408e0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c31d1;
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
  uVar2 = FUN_00564810();
  FUN_0053ea00(uVar2);
  piVar7 = *(int **)(*(int *)(param_1 + 0x276) + 4);
  if (piVar7 == (int *)0x0) {
    ExceptionList = local_c;
    return local_1c;
  }
  do {
    piVar1 = (int *)piVar7[2];
    iVar4 = *piVar7;
    if (*(int *)(iVar4 + 0x248) != *(int *)(param_1 + 0x22a)) {
      *(undefined4 *)(iVar4 + 0x25c) = *(undefined4 *)(*(int *)(iVar4 + 0x248) + 6);
    }
    puVar3 = operator_new(0x14);
    local_4 = 2;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar4 = (*(code *)**(undefined4 **)(iVar4 + 0x1e))();
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 3;
      pvVar5 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,4);
      if (pvVar5 == (void *)0x0) {
LAB_00540a01:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0053e740(0xee);
        if (iVar6 == 0) goto LAB_00540a01;
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar3[3] = iVar6;
      if (iVar4 == 0) {
        *puVar3 = &PTR_FUN_007e3878;
        puVar3[4] = 0;
      }
      else {
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        puVar3[4] = iVar4;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(puVar3);
    piVar7 = piVar1;
    if (piVar1 == (int *)0x0) {
      ExceptionList = local_c;
      return local_1c;
    }
  } while( true );
}


