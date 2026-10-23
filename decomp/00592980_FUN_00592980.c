// FUN_00592980 @ 592980 size=393

int * __fastcall FUN_00592980(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9f34;
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
  piVar5 = *(int **)(*(int *)(param_1 + 0x118) + 4);
  while (piVar5 != (int *)0x0) {
    piVar4 = (int *)piVar5[2];
    pcVar1 = (char *)(*piVar5 + 0x34);
    cVar3 = *(char *)(*piVar5 + 0x34);
    pcVar6 = pcVar1;
    while (cVar3 != '\0') {
      if (*pcVar6 == '\"') {
        *pcVar6 = '\'';
      }
      pcVar2 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar2;
    }
    puVar7 = operator_new(0x14);
    local_4 = 1;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      pvVar8 = operator_new(0x10);
      local_4._0_1_ = 2;
      if (pvVar8 == (void *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_0053ee00(pcVar1);
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 3;
      pvVar8 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,4);
      if ((pvVar8 == (void *)0x0) || (iVar10 = FUN_0053e740(0xe9), iVar10 == 0)) {
        iVar10 = 0;
      }
      else {
        *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
      }
      puVar7[3] = iVar10;
      if (iVar9 == 0) {
        *puVar7 = &PTR_FUN_007e3878;
        puVar7[4] = 0;
      }
      else {
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
        puVar7[4] = iVar9;
        *puVar7 = &PTR_FUN_007e3878;
      }
    }
    local_4 = 0xffffffff;
    (**(code **)(*local_18 + 0x84))(puVar7);
    piVar5 = piVar4;
  }
  ExceptionList = local_c;
  return local_18;
}


