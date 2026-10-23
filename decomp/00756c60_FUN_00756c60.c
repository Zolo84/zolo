// FUN_00756c60 @ 756c60 size=356

undefined4 * __thiscall FUN_00756c60(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dfec7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 4);
  FUN_00674910(0);
  FUN_00674710((undefined1 *)(param_3 + 4),0,DAT_007f33d8);
  local_4 = 0;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_3 + 0x14);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_00674710(param_3 + 0x14,0,DAT_007f33d8);
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_3 + 0x24);
  FUN_00674910(0);
  FUN_00674710(param_3 + 0x24,0,DAT_007f33d8);
  local_4._0_1_ = 2;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_3 + 0x38);
  FUN_00674910(0);
  FUN_00674710(param_3 + 0x38,0,DAT_007f33d8);
  local_4._0_1_ = 3;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_3 + 0x48);
  FUN_00674910(0);
  FUN_00674710(param_3 + 0x48,0,DAT_007f33d8);
  param_1[0x17] = *(undefined4 *)(param_3 + 0x58);
  param_1[0x18] = *(undefined4 *)(param_3 + 0x5c);
  param_1[0xe] = &PTR_FUN_007fa230;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (param_3 == -0x60) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_3 + 100;
  }
  FUN_00748f60(iVar2);
  param_1[0x19] = &PTR_FUN_007fa228;
  param_1[0x1e] = *(undefined4 *)(param_3 + 0x74);
  uVar1 = *(undefined4 *)(param_3 + 0x78);
  param_1[1] = &PTR_FUN_007fa22c;
  param_1[0x1f] = uVar1;
  ExceptionList = local_c;
  return param_1;
}


