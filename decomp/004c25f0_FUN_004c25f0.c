// FUN_004c25f0 @ 4c25f0 size=295

void __fastcall FUN_004c25f0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_14 [4];
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007bf01e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e79a8;
  local_4 = 2;
  local_10 = param_1;
  FUN_004c48b0(local_14,*(undefined4 *)param_1[0x1e],(undefined4 *)param_1[0x1e]);
  FUN_00796cd8(param_1[0x1e]);
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  FUN_00798acc();
  iVar1 = DAT_008e8328;
  DAT_008e832c = DAT_008e832c + -1;
  iVar2 = 0;
  if (DAT_008e832c == 0) {
    DAT_008e8328 = 0;
    iVar2 = iVar1;
  }
  FUN_00798b68();
  if (iVar2 != 0) {
    FUN_00796cd8(iVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004c48b0(local_14,*(undefined4 *)param_1[0x1a],(undefined4 *)param_1[0x1a]);
  FUN_00796cd8(param_1[0x1a]);
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  FUN_00798acc();
  iVar1 = DAT_008e8328;
  DAT_008e832c = DAT_008e832c + -1;
  iVar2 = 0;
  if (DAT_008e832c == 0) {
    DAT_008e8328 = 0;
    iVar2 = iVar1;
  }
  FUN_00798b68();
  if (iVar2 != 0) {
    FUN_00796cd8(iVar2);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_004bc880();
  ExceptionList = local_c;
  return;
}


