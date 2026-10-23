// FUN_0058dee0 @ 58dee0 size=376

int * __fastcall FUN_0058dee0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int *local_118;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9b15;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_118 = operator_new(0x1e);
  local_4 = 0;
  if (local_118 == (int *)0x0) {
    local_118 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    local_118[4] = 0;
    local_118[5] = 0;
    local_118[6] = 0;
    *(undefined1 *)(local_118 + 7) = 0;
    local_118[3] = (int)&PTR_LAB_007e3ac0;
    *local_118 = (int)&PTR_FUN_007e3a28;
    local_118[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  piVar2 = *(int **)(param_1 + 0x11c);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    piVar2 = (int *)*piVar2;
    FUN_00429d20((int)piVar2 + 0xaa,local_10c);
    puVar3 = operator_new(0x14);
    local_4 = 1;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar4 = (**(code **)(*piVar2 + 100))();
      puVar3[1] = 0xd;
      puVar3[2] = 0;
      *puVar3 = &PTR_LAB_007e38f8;
      local_4._0_1_ = 2;
      pvVar5 = operator_new(0x14);
      local_4 = CONCAT31(local_4._1_3_,3);
      if ((pvVar5 == (void *)0x0) || (iVar6 = FUN_0053e770(local_10c), iVar6 == 0)) {
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
    (**(code **)(*local_118 + 0x84))(puVar3);
    piVar2 = piVar1;
  }
  ExceptionList = local_c;
  return local_118;
}


