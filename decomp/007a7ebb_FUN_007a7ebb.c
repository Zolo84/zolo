// FUN_007a7ebb @ 7a7ebb size=231

void FUN_007a7ebb(uint param_1)

{
  int iVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008005b0;
  puStack_10 = &LAB_007b0b7c;
  local_14 = ExceptionList;
  if (DAT_00dc5b4c == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_00dc5b44) {
      ExceptionList = &local_14;
      FUN_007aae71(9);
      local_8 = 0;
      iVar1 = FUN_007af77a(param_1);
      local_8 = 0xffffffff;
      FUN_007a7f22();
      if (iVar1 != 0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_00dc5b4c == 2) {
      if (param_1 == 0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = param_1 + 0xf & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_0087f624) {
        ExceptionList = &local_14;
        FUN_007aae71(9);
        local_8 = 1;
        iVar1 = FUN_007b063f(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_007a7f81();
        if (iVar1 != 0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_007a7f9a;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  dwBytes = param_1 + 0xf & 0xfffffff0;
LAB_007a7f9a:
  HeapAlloc(DAT_00dc5b48,0,dwBytes);
  ExceptionList = local_14;
  return;
}


