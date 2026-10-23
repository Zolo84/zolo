// FUN_007add12 @ 7add12 size=214

SIZE_T FUN_007add12(LPCVOID param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  undefined1 local_30 [4];
  byte *local_2c;
  undefined1 local_28 [4];
  SIZE_T local_24;
  byte *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00800998;
  puStack_10 = &LAB_007b0b7c;
  local_14 = ExceptionList;
  if (DAT_00dc5b4c == 3) {
    ExceptionList = &local_14;
    FUN_007aae71(9);
    local_8 = 0;
    local_20 = (byte *)FUN_007af426(param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)((int)param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_007add7c();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_00dc5b4c != 2) goto LAB_007addd0;
    ExceptionList = &local_14;
    FUN_007aae71(9);
    local_8 = 1;
    local_2c = (byte *)FUN_007b05a3(param_1,local_30,local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_007addf7();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_007addd0:
  SVar2 = HeapSize(DAT_00dc5b48,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}


