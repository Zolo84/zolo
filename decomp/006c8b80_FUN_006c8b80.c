// FUN_006c8b80 @ 6c8b80 size=747

int * __fastcall FUN_006c8b80(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *unaff_EBX;
  int unaff_EBP;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d8a45;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x1e);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar2 = (int)&PTR_FUN_007e492c;
    FUN_00444250();
    *piVar2 = (int)&PTR_FUN_007e3a28;
    piVar2[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  puVar3 = operator_new(0x14);
  local_4 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x16);
      FUN_004252e0(5);
      *puVar4 = &PTR_FUN_007e48ac;
      puVar4[3] = uVar1;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar5 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x502), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (puVar4 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      puVar3[4] = puVar4;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x84))(puVar3);
  puVar3 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x4;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)((int)unaff_EBX + 0x1a);
      FUN_004252e0(5);
      *puVar7 = &PTR_FUN_007e48ac;
      puVar7[3] = uVar1;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 5;
    pvVar5 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x52c), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    puVar4 = puVar3;
    if (puVar7 == (undefined4 *)0x0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      puVar7[2] = puVar7[2] + 1;
      puVar3[4] = puVar7;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar2 + 0x84))(puVar4);
  for (puVar4 = *(undefined4 **)(unaff_EBP + 8); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)puVar4[2]) {
    puVar7 = operator_new(0x14);
    local_c = (void *)0x7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      iVar6 = (*(code *)**(undefined4 **)*puVar4)();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      local_c._0_1_ = 8;
      pvVar5 = operator_new(0x14);
      local_c = (void *)CONCAT31(local_c._1_3_,9);
      if ((pvVar5 == (void *)0x0) || (iVar8 = FUN_0053e740(0x500), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar7[3] = iVar8;
      piVar2 = unaff_EBX;
      if (iVar6 == 0) {
        *puVar7 = &PTR_FUN_007e3878;
        puVar7[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar7[4] = iVar6;
        *puVar7 = &PTR_FUN_007e3878;
      }
    }
    local_c = (void *)0xffffffff;
    (**(code **)(*piVar2 + 0x84))(puVar7);
  }
  ExceptionList = puVar3;
  return piVar2;
}


