// FUN_006904f0 @ 6904f0 size=309

void __fastcall FUN_006904f0(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007d5330;
  ExceptionList = &local_c;
  local_4 = 6;
  *(undefined ***)(param_1 + 0xf0) = &PTR_LAB_007f465c;
  iVar2 = *(int *)(param_1 + 0xf4);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined ***)(param_1 + 0xde) = &PTR_LAB_007e378c;
  iVar2 = *(int *)(param_1 + 0xe2);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0xe2) = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  *(undefined4 *)(param_1 + 0xea) = 0;
  FUN_00527230();
  local_4._0_1_ = 5;
  FUN_00527230();
  local_4._0_1_ = 4;
  FUN_00527230();
  local_4._0_1_ = 3;
  FUN_00527230();
  local_4._0_1_ = 2;
  FUN_00527230();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00527230();
  *(undefined ***)(param_1 + 0x40) = &PTR_LAB_007e378c;
  iVar2 = *(int *)(param_1 + 0x44);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  local_4 = 0xffffffff;
  FUN_006a9770();
  ExceptionList = local_c;
  return;
}


