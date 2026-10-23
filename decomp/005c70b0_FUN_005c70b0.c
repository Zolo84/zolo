// FUN_005c70b0 @ 5c70b0 size=78

void FUN_005c70b0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007ccb18;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


