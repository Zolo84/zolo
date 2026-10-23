// FUN_005820d0 @ 5820d0 size=93

undefined4 FUN_005820d0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8e4b;
  local_c = ExceptionList;
  if (DAT_00bd1500 == 0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0xbda);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      DAT_00bd1500 = 0;
    }
    else {
      DAT_00bd1500 = FUN_0057af60(pvVar1);
    }
  }
  ExceptionList = local_c;
  return 1;
}


