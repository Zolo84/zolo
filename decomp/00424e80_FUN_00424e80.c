// FUN_00424e80 @ 424e80 size=528

int * __fastcall FUN_00424e80(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  int *unaff_EBX;
  undefined4 *puVar6;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9eb7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = operator_new(0x1e);
  local_4 = 0;
  if (local_1c == (int *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    FUN_004252e0(2);
    local_1c[4] = 0;
    local_1c[5] = 0;
    local_1c[6] = 0;
    *(undefined1 *)(local_1c + 7) = 0;
    local_1c[3] = (int)&PTR_LAB_007e3ac0;
    *local_1c = (int)&PTR_FUN_007e3a28;
    local_1c[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  puVar2 = operator_new(0x14);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *param_1;
      puVar3[1] = 4;
      puVar3[2] = 0;
      puVar3[3] = uVar1;
      *puVar3 = &PTR_FUN_007e3978;
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (pvVar4 == (void *)0x0) {
LAB_00424f7f:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0053e740(0x1ab);
      if (iVar5 == 0) goto LAB_00424f7f;
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    if (puVar3 == (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      puVar3[2] = puVar3[2] + 1;
      puVar2[4] = puVar3;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_1c + 0x84))(puVar2);
  puVar2 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x4;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
    goto LAB_00425064;
  }
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = param_1[1];
    puVar3[1] = 4;
    puVar3[2] = 0;
    puVar3[3] = uVar1;
    *puVar3 = &PTR_FUN_007e3978;
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_LAB_007e38f8;
  puStack_8._0_1_ = 5;
  pvVar4 = operator_new(0x14);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
  if (pvVar4 == (void *)0x0) {
LAB_00425045:
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0053e740(0x1ac);
    if (iVar5 == 0) goto LAB_00425045;
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  }
  puVar2[3] = iVar5;
  puVar6 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[2] = puVar3[2] + 1;
    puVar6 = puVar3;
  }
  puVar2[4] = puVar6;
  *puVar2 = &PTR_FUN_007e3878;
  puVar3 = puVar2;
LAB_00425064:
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*unaff_EBX + 0x84))(puVar3);
  ExceptionList = puVar2;
  return unaff_EBX;
}


