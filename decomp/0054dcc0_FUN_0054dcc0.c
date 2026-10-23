// FUN_0054dcc0 @ 54dcc0 size=345

int * __fastcall FUN_0054dcc0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int *local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c466e;
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
  local_1c = 0;
  if (0 < DAT_008776b0) {
    do {
      iVar1 = (**(code **)(*param_1 + 0x48))(local_1c);
      if (iVar1 != 0) {
        puVar2 = operator_new(0x14);
        uStack_4 = 0;
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          uVar3 = FUN_004fed70(local_1c);
          puVar2[1] = 0;
          puVar2[2] = 0;
          *puVar2 = &PTR_LAB_007e38f8;
          uStack_4._0_1_ = 1;
          pvVar4 = operator_new(0x14);
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(uVar3), iVar5 == 0)) {
            iVar5 = 0;
          }
          else {
            *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          }
          puVar2[3] = iVar5;
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
          puVar2[4] = iVar1;
          *puVar2 = &PTR_FUN_007e3878;
        }
        uStack_4 = 0xffffffff;
        (**(code **)(*local_20 + 0x84))(puVar2);
      }
      local_1c = local_1c + 1;
    } while (local_1c < DAT_008776b0);
    ExceptionList = local_c;
    return local_20;
  }
  ExceptionList = local_c;
  return local_20;
}


