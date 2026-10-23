// FUN_0075d2e0 @ 75d2e0 size=564

int * FUN_0075d2e0(void)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e0367;
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
  local_4 = 0xffffffff;
  if (DAT_00d546b1 == '\0') goto LAB_0075d429;
  puVar3 = operator_new(0x14);
  local_4 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar4 = operator_new(0xe);
    cVar2 = DAT_00d546b1;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = 6;
      puVar4[2] = 0;
      *(char *)(puVar4 + 3) = cVar2;
      *puVar4 = &PTR_FUN_007e76a0;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    pvVar5 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (pvVar5 == (void *)0x0) {
LAB_0075d3ec:
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0053e740(0x1b0);
      if (iVar6 == 0) goto LAB_0075d3ec;
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
  (**(code **)(*local_18 + 0x84))(puVar3);
LAB_0075d429:
  piVar8 = DAT_00d546bc;
  if (DAT_00d546bc == (int *)0x0) {
    ExceptionList = local_c;
    return local_18;
  }
  do {
    piVar1 = (int *)piVar8[2];
    iVar6 = *piVar8;
    puVar3 = operator_new(0x14);
    local_4 = 4;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar6 = (*(code *)**(undefined4 **)(iVar6 + 0x12))();
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 5;
      pvVar5 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,6);
      if (pvVar5 == (void *)0x0) {
LAB_0075d4a1:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0053e740(0x3bc);
        if (iVar7 == 0) goto LAB_0075d4a1;
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar3[3] = iVar7;
      if (iVar6 == 0) {
        *puVar3 = &PTR_FUN_007e3878;
        puVar3[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar3[4] = iVar6;
        *puVar3 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_18 + 0x84))(puVar3);
    piVar8 = piVar1;
    if (piVar1 == (int *)0x0) {
      ExceptionList = local_c;
      return local_18;
    }
  } while( true );
}


