// FUN_004b34a0 @ 4b34a0 size=556

int * __fastcall FUN_004b34a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007be517;
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
  piVar2 = *(int **)(param_1 + 8);
  local_4 = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    do {
      iVar4 = *piVar2;
      piVar2 = (int *)piVar2[2];
      piVar1 = *(int **)(iVar4 + 4);
      if (piVar1 == (int *)0x0) {
        puVar3 = operator_new(0x14);
        local_4 = 4;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          iVar4 = FUN_004b1d20();
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = &PTR_LAB_007e38f8;
          local_4._0_1_ = 5;
          pvVar5 = operator_new(0x14);
          local_4 = CONCAT31(local_4._1_3_,6);
          if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x4f1), iVar6 == 0)) {
            iVar6 = 0;
          }
          else {
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
      }
      else if ((((char)piVar1[0x29] == '\0') || (*piVar1 != 0)) || (piVar1[0x11] != 0)) {
        puVar3 = operator_new(0x14);
        local_4 = 1;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          iVar4 = FUN_004b1270();
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = &PTR_LAB_007e38f8;
          local_4._0_1_ = 2;
          pvVar5 = operator_new(0x14);
          local_4 = CONCAT31(local_4._1_3_,3);
          if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(0x4ee), iVar6 == 0)) {
            iVar6 = 0;
          }
          else {
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
      }
    } while (piVar2 != (int *)0x0);
    ExceptionList = local_c;
    return local_1c;
  }
  ExceptionList = local_c;
  return local_1c;
}


