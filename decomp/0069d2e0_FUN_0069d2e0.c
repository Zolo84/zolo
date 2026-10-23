// FUN_0069d2e0 @ 69d2e0 size=291

void __fastcall FUN_0069d2e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007d5770;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f5514;
  local_4 = 4;
  param_1[0x3b] = &PTR_LAB_007e378c;
  iVar2 = param_1[0x3c];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  FUN_00527230();
  local_4._0_1_ = 3;
  FUN_00527230();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00527230();
  *(undefined ***)((int)param_1 + 0x9e) = &PTR_LAB_007f571c;
  iVar2 = *(int *)((int)param_1 + 0xa2);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  param_1[0x23] = &PTR_LAB_007f574c;
  iVar2 = param_1[0x24];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  local_4 = 0xffffffff;
  FUN_006a9770();
  ExceptionList = local_c;
  return;
}


