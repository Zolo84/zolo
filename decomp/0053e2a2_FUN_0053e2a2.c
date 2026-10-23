// FUN_0053e2a2 @ 53e2a2 size=609

void __thiscall FUN_0053e2a2(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *local_83c;
  undefined2 local_828;
  int local_826;
  void *local_820;
  int *local_81c;
  int *local_818;
  undefined1 local_814 [1024];
  undefined1 local_414 [1024];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007c2fec;
  local_10 = ExceptionList;
  if (param_2 != param_3) {
    ExceptionList = &local_10;
    if (*(int *)(param_1 + 0x277e + param_2 * 4) == 0) {
      ExceptionList = &local_10;
      local_820 = operator_new(0x14abe);
      local_8 = 0;
      if (local_820 == (void *)0x0) {
        local_83c = (int *)0x0;
      }
      else {
        local_83c = (int *)FUN_005388e0();
      }
      local_81c = local_83c;
      local_8 = 0xffffffff;
      local_818 = local_83c;
      local_828 = 3;
      local_826 = param_2;
      (**(code **)(*local_83c + 4))(&local_828);
      uVar2 = FUN_004af700(param_2);
      FUN_007a630a(local_414,s__s_DESC_00851118,uVar2);
      uVar2 = FUN_004af700(param_2);
      FUN_007a630a(local_814,s__s_DESC_00851120,uVar2);
      FUN_00538a27();
      *(int **)(param_1 + 0x277e + param_2 * 4) = local_818;
      *(undefined4 *)((int)local_818 + 0x13c86) = *(undefined4 *)((int)local_818 + 6);
    }
    if ((param_3 == 0) || (*(int *)(param_1 + 0x277e + param_3 * 4) == 0)) {
      *(int *)(param_1 + 4 + *(int *)(param_1 + 0x2cde) * 4) = param_2;
      *(int *)(param_1 + 0x2cde) = *(int *)(param_1 + 0x2cde) + 1;
    }
    else {
      puVar1 = *(undefined4 **)(param_1 + 0x277e + param_3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x277e + param_3 * 4) = 0;
      for (local_14 = 0; local_14 < *(int *)(param_1 + 0x2cde); local_14 = local_14 + 1) {
        if (*(int *)(param_1 + 4 + local_14 * 4) == param_3) {
          *(int *)(param_1 + 4 + local_14 * 4) = param_2;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


