// FUN_0055fd30 @ 55fd30 size=865

int * __fastcall FUN_0055fd30(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c62a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_1c = operator_new(0x1e);
  local_4 = 0;
  if (local_1c == (int *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    FUN_004c0c30(2);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *local_1c = (int)&PTR_FUN_007e3a28;
    local_1c[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_00564810();
  FUN_0053ea00(uVar3);
  if (*(char *)(param_1 + 0x168) != '\0') {
    puVar4 = operator_new(0x14);
    local_4 = 2;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar5 = operator_new(0xe);
      local_4._0_1_ = 3;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)(param_1 + 0x168);
        FUN_00444030(6);
        *(undefined1 *)(puVar5 + 3) = uVar1;
        *puVar5 = &PTR_FUN_007e76a0;
      }
      local_4._0_1_ = 2;
      FUN_004252e0(0);
      local_4._0_1_ = 4;
      pvVar6 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,5);
      if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x228), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar4[3] = iVar7;
      if (puVar5 == (undefined4 *)0x0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        puVar5[2] = puVar5[2] + 1;
        puVar4[4] = puVar5;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(puVar4);
  }
  piVar9 = *(int **)(*(int *)(param_1 + 0x28c) + 4);
  while (piVar9 != (int *)0x0) {
    piVar2 = (int *)piVar9[2];
    iVar7 = *piVar9;
    if (*(int *)(iVar7 + 0x248) != *(int *)(param_1 + 0x22a)) {
      *(undefined4 *)(iVar7 + 0x25c) = *(undefined4 *)(*(int *)(iVar7 + 0x248) + 6);
    }
    puVar4 = operator_new(0x14);
    local_4 = 6;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar7 = (*(code *)**(undefined4 **)(iVar7 + 0x1e))();
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 7;
      pvVar6 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,8);
      if ((pvVar6 == (void *)0x0) || (iVar8 = FUN_0053e740(0xee), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar4[3] = iVar8;
      if (iVar7 == 0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        puVar4[4] = iVar7;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(puVar4);
    piVar9 = piVar2;
  }
  piVar9 = *(int **)(*(int *)(param_1 + 0x290) + 4);
  if (piVar9 == (int *)0x0) {
    ExceptionList = pvStack_c;
    return local_1c;
  }
  do {
    piVar2 = (int *)piVar9[2];
    iVar7 = *piVar9;
    if (*(int *)(iVar7 + 0x248) != *(int *)(param_1 + 0x22a)) {
      *(undefined4 *)(iVar7 + 0x25c) = *(undefined4 *)(*(int *)(iVar7 + 0x248) + 6);
    }
    puVar4 = operator_new(0x14);
    local_4 = 9;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar7 = (*(code *)**(undefined4 **)(iVar7 + 0x1e))();
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 10;
      pvVar6 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,0xb);
      if ((pvVar6 == (void *)0x0) || (iVar8 = FUN_0053e740(0xf0), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar4[3] = iVar8;
      if (iVar7 == 0) {
        *puVar4 = &PTR_FUN_007e3878;
        puVar4[4] = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        puVar4[4] = iVar7;
        *puVar4 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_1c + 0x84))(puVar4);
    piVar9 = piVar2;
  } while (piVar2 != (int *)0x0);
  ExceptionList = pvStack_c;
  return local_1c;
}


