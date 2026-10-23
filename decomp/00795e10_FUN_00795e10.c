// FUN_00795e10 @ 795e10 size=218

void __fastcall FUN_00795e10(int *param_1)

{
  int iVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007e17bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = (int)&PTR_FUN_007fa744;
  local_8 = 0;
  (**(code **)(*param_1 + 0x20))(param_1[1]);
  param_1[1] = 0;
  (**(code **)(*(int *)((int)param_1 + 0x12) + 0x14))();
  *(undefined4 *)((int)param_1 + 10) = 0;
  local_8 = 0xffffffff;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007fa770;
  local_14 = *(int *)((int)param_1 + 0x16);
  while (local_14 != 0) {
    iVar1 = *(int *)(local_14 + 8);
    FUN_00796cd8(local_14);
    local_14 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  ExceptionList = local_10;
  return;
}


