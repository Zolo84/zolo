// FUN_004c8bc2 @ 4c8bc2 size=547

void __fastcall FUN_004c8bc2(undefined4 *param_1)

{
  int iVar1;
  int local_4c;
  int local_3c;
  int local_2c;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_007bf1f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_007e7cf8;
  local_8 = 3;
  for (local_14 = 0; local_14 < DAT_00877690; local_14 = local_14 + 1) {
    FUN_004e9370(local_14);
  }
  (**(code **)(param_1[1] + 0x14))();
  (**(code **)(*(int *)((int)param_1 + 0x16) + 0x14))();
  local_8._0_1_ = 2;
  *(undefined ***)((int)param_1 + 0x3a) = &PTR_FUN_007e7cc8;
  local_1c = *(int *)((int)param_1 + 0x3e);
  while (local_1c != 0) {
    iVar1 = *(int *)(local_1c + 8);
    FUN_00796cd8(local_1c);
    local_1c = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  local_8._0_1_ = 1;
  param_1[10] = &PTR_FUN_007e6eac;
  local_2c = param_1[0xb];
  while (local_2c != 0) {
    iVar1 = *(int *)(local_2c + 8);
    FUN_00796cd8(local_2c);
    local_2c = iVar1;
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007e4b04;
  local_3c = *(int *)((int)param_1 + 0x1a);
  while (local_3c != 0) {
    iVar1 = *(int *)(local_3c + 8);
    FUN_00796cd8(local_3c);
    local_3c = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  local_8 = 0xffffffff;
  param_1[1] = &PTR_LAB_007e4b04;
  local_4c = param_1[2];
  while (local_4c != 0) {
    iVar1 = *(int *)(local_4c + 8);
    FUN_00796cd8(local_4c);
    local_4c = iVar1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_10;
  return;
}


