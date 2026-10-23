// FUN_00541eb0 @ 541eb0 size=399

int * __fastcall FUN_00541eb0(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  int *local_20;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c339e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20 = operator_new(0x1e);
  if (local_20 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    local_20[1] = 2;
    local_20[2] = 0;
    local_20[4] = 0;
    local_20[5] = 0;
    local_20[6] = 0;
    *(undefined1 *)(local_20 + 7) = 0;
    local_20[3] = (int)&PTR_LAB_007e3ac0;
    *local_20 = (int)&PTR_FUN_007e3a28;
    local_20[3] = (int)&PTR_LAB_007e39f8;
  }
  local_18 = 0;
  if (0 < DAT_008776b0) {
    do {
      if (*(char *)(param_1 + 0x4b5c + local_18) != '\0') {
        puVar2 = operator_new(0x14);
        local_4 = 0;
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar3 = operator_new(0xe);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            uVar1 = *(undefined1 *)(param_1 + 0x4b5c + local_18);
            puVar3[1] = 6;
            puVar3[2] = 0;
            *(undefined1 *)(puVar3 + 3) = uVar1;
            *puVar3 = &PTR_FUN_007e76a0;
          }
          uVar4 = FUN_004fed70(local_18);
          puVar2[1] = 0;
          puVar2[2] = 0;
          *puVar2 = &PTR_LAB_007e38f8;
          local_4._0_1_ = 1;
          pvVar5 = operator_new(0x14);
          local_4 = CONCAT31(local_4._1_3_,2);
          if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e740(uVar4), iVar6 == 0)) {
            iVar6 = 0;
          }
          else {
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          }
          puVar2[3] = iVar6;
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3[2] = puVar3[2] + 1;
          }
          puVar2[4] = puVar3;
          *puVar2 = &PTR_FUN_007e3878;
        }
        local_4 = 0xffffffff;
        (**(code **)(*local_20 + 0x84))(puVar2);
      }
      local_18 = local_18 + 1;
    } while (local_18 < DAT_008776b0);
    ExceptionList = local_c;
    return local_20;
  }
  ExceptionList = local_c;
  return local_20;
}


