// FUN_00680ef0 @ 680ef0 size=385

void __fastcall FUN_00680ef0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007d4b7d;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f3834;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f3864;
  local_4 = 2;
  *(undefined ***)((int)param_1 + 0x12a) = &PTR_LAB_007e378c;
  iVar2 = *(int *)((int)param_1 + 0x12e);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x12e) = 0;
  *(undefined4 *)((int)param_1 + 0x132) = 0;
  *(undefined4 *)((int)param_1 + 0x136) = 0;
  param_1[0x43] = &PTR_LAB_007f3a6c;
  iVar2 = param_1[0x44];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined ***)((int)param_1 + 0xda) = &PTR_LAB_007e378c;
  iVar2 = *(int *)((int)param_1 + 0xde);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0xde) = 0;
  *(undefined4 *)((int)param_1 + 0xe2) = 0;
  *(undefined4 *)((int)param_1 + 0xe6) = 0;
  param_1[0x32] = &PTR_LAB_007e6edc;
  iVar2 = param_1[0x33];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 10);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_00527230();
  local_4._0_1_ = 1;
  FUN_00527230();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006a9770();
  *param_1 = &PTR_LAB_007f3a6c;
  iVar2 = param_1[1];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = local_c;
  return;
}


