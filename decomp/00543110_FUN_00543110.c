// FUN_00543110 @ 543110 size=336

int * __fastcall FUN_00543110(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c354e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = operator_new(0x1e);
  iVar6 = 0;
  if (local_1c == (int *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    local_1c[1] = 2;
    local_1c[2] = 0;
    local_1c[4] = 0;
    local_1c[5] = 0;
    local_1c[6] = 0;
    *(undefined1 *)(local_1c + 7) = 0;
    local_1c[3] = (int)&PTR_LAB_007e3ac0;
    *local_1c = (int)&PTR_FUN_007e3a28;
    local_1c[3] = (int)&PTR_LAB_007e39f8;
  }
  if (0 < DAT_0087769c) {
    do {
      puVar1 = operator_new(0x14);
      local_4 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x40))(iVar6);
        uVar3 = FUN_004fe7e0(iVar6);
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 1;
        pvVar4 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,2);
        if ((pvVar4 == (void *)0x0) || (iVar5 = FUN_0053e740(uVar3), iVar5 == 0)) {
          iVar5 = 0;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        }
        puVar1[3] = iVar5;
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        }
        puVar1[4] = iVar2;
        *puVar1 = &PTR_FUN_007e3878;
      }
      local_4 = 0xffffffff;
      (**(code **)(*local_1c + 0x84))(puVar1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_0087769c);
    ExceptionList = local_c;
    return local_1c;
  }
  ExceptionList = local_c;
  return local_1c;
}


