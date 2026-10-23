// FUN_007a77fa @ 7a77fa size=215

void FUN_007a77fa(LPVOID param_1)

{
  int iVar1;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00800598;
  puStack_10 = &LAB_007b0b7c;
  local_14 = ExceptionList;
  if (param_1 == (LPVOID)0x0) {
    return;
  }
  if (DAT_00dc5b4c == 3) {
    ExceptionList = &local_14;
    FUN_007aae71(9);
    local_8 = 0;
    local_20 = FUN_007af426(param_1);
    if (local_20 != 0) {
      FUN_007af451(local_20,param_1);
    }
    local_8 = 0xffffffff;
    FUN_007a7864();
    iVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_00dc5b4c != 2) goto LAB_007a78c6;
    ExceptionList = &local_14;
    FUN_007aae71(9);
    local_8 = 1;
    local_28 = FUN_007b05a3(param_1,&local_2c,&local_24);
    if (local_28 != 0) {
      FUN_007b05fa(local_2c,local_24,local_28);
    }
    local_8 = 0xffffffff;
    FUN_007a78bc();
    iVar1 = local_28;
  }
  if (iVar1 != 0) {
    ExceptionList = local_14;
    return;
  }
LAB_007a78c6:
  HeapFree(DAT_00dc5b48,0,param_1);
  ExceptionList = local_14;
  return;
}


