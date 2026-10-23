// FUN_0076c4b0 @ 76c4b0 size=681

void __fastcall FUN_0076c4b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007e0be1;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007fa58c;
  local_4 = 5;
  param_1[0xd5b5] = &PTR_LAB_007fa5a4;
  iVar2 = param_1[0xd5b6];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0xd5b6] = 0;
  param_1[0xd5b7] = 0;
  param_1[0xd5b8] = 0;
  *(undefined ***)((int)param_1 + 0x356c2) = &PTR_LAB_007fa5d4;
  iVar2 = *(int *)((int)param_1 + 0x356c6);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x356c6) = 0;
  *(undefined4 *)((int)param_1 + 0x356ca) = 0;
  *(undefined4 *)((int)param_1 + 0x356ce) = 0;
  param_1[0x715e] = &PTR_LAB_007fa604;
  iVar2 = param_1[0x715f];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x715f] = 0;
  param_1[0x7160] = 0;
  param_1[0x7161] = 0;
  *(undefined ***)((int)param_1 + 0x167f6) = &PTR_LAB_007e4b94;
  iVar2 = *(int *)((int)param_1 + 0x167fa);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x167fa) = 0;
  *(undefined4 *)((int)param_1 + 0x167fe) = 0;
  *(undefined4 *)((int)param_1 + 0x16802) = 0;
  *(undefined ***)((int)param_1 + 0x167de) = &PTR_LAB_007e8724;
  iVar2 = *(int *)((int)param_1 + 0x167e2);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x167e2) = 0;
  *(undefined4 *)((int)param_1 + 0x167e6) = 0;
  *(undefined4 *)((int)param_1 + 0x167ea) = 0;
  param_1[0x59f3] = &PTR_LAB_007e4ad4;
  iVar2 = param_1[0x59f4];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x59f4] = 0;
  param_1[0x59f5] = 0;
  param_1[0x59f6] = 0;
  *(undefined ***)((int)param_1 + 0x167ba) = &PTR_LAB_007e6af8;
  iVar2 = *(int *)((int)param_1 + 0x167be);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x167be) = 0;
  *(undefined4 *)((int)param_1 + 0x167c2) = 0;
  *(undefined4 *)((int)param_1 + 0x167c6) = 0;
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x167ae));
  *(undefined4 *)((int)param_1 + 0x167ae) = 0;
  *(undefined4 *)((int)param_1 + 0x167b2) = 0;
  *(undefined4 *)((int)param_1 + 0x167b6) = 0;
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x1679e));
  *(undefined4 *)((int)param_1 + 0x1679e) = 0;
  *(undefined4 *)((int)param_1 + 0x167a2) = 0;
  *(undefined4 *)((int)param_1 + 0x167a6) = 0;
  FUN_007a8882((int)param_1 + 0x15dc2,0x12,0x8c,&LAB_0078e250);
  local_4._0_1_ = 4;
  FUN_007a8882((int)param_1 + 0x153ea,0x12,0x8c,&LAB_0078e250);
  local_4._0_1_ = 3;
  FUN_007a8882((int)param_1 + 0x722a,0xa8,0x158,FUN_0076c360);
  local_4._0_1_ = 2;
  FUN_00425c10();
  local_4._0_1_ = 1;
  FUN_00425c10();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00425c10();
  local_4 = 0xffffffff;
  FUN_00425c10();
  ExceptionList = local_c;
  return;
}


