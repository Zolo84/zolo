// FUN_0074ab60 @ 74ab60 size=345

void FUN_0074ab60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007df6d8;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    FUN_00674910(0);
    FUN_00674710(param_2 + 2,0,DAT_007f33d8);
    local_4._0_1_ = 1;
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    FUN_00674910(0);
    FUN_00674710(param_2 + 6,0,DAT_007f33d8);
    local_4._0_1_ = 2;
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    FUN_00674710(param_2 + 10,0,DAT_007f33d8);
    local_4._0_1_ = 3;
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    FUN_00674910(0);
    FUN_00674710(param_2 + 0xf,0,DAT_007f33d8);
    local_4._0_1_ = 4;
    FUN_00673b50(param_2 + 0x13);
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0xe] = &PTR_FUN_007fa230;
    local_4 = CONCAT31(local_4._1_3_,5);
    if (param_2 == (undefined4 *)0xffffff9c) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = param_2 + 0x1a;
    }
    FUN_00748f60(puVar1);
    param_1[0x19] = &PTR_FUN_007fa228;
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    param_1[1] = &PTR_FUN_007fa22c;
  }
  ExceptionList = local_c;
  return;
}


