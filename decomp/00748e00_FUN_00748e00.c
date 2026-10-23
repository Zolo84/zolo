// FUN_00748e00 @ 748e00 size=302

undefined4 * __thiscall FUN_00748e00(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df5f7;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 4);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_00674710(param_2 + 4,0,DAT_007f33d8);
  local_4 = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x14);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_00674710(param_2 + 0x14,0,DAT_007f33d8);
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x24);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_00674710(param_2 + 0x24,0,DAT_007f33d8);
  local_4._0_1_ = 2;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x38);
  FUN_00674910(0);
  FUN_00674710(param_2 + 0x38,0,DAT_007f33d8);
  local_4._0_1_ = 3;
  FUN_00673b50(param_2 + 0x48);
  param_1[0x16] = *(undefined4 *)(param_2 + 0x58);
  param_1[0x17] = *(undefined4 *)(param_2 + 0x5c);
  param_1[0xd] = &PTR_FUN_007fa230;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (param_2 != -0x60) {
    iVar2 = param_2 + 100;
  }
  FUN_00748f60(iVar2);
  param_1[0x18] = &PTR_FUN_007fa228;
  param_1[0x1d] = *(undefined4 *)(param_2 + 0x74);
  uVar1 = *(undefined4 *)(param_2 + 0x78);
  *param_1 = &PTR_FUN_007fa22c;
  param_1[0x1e] = uVar1;
  ExceptionList = local_c;
  return param_1;
}


