// FUN_0069c0a0 @ 69c0a0 size=79

void FUN_0069c0a0(void)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d56c8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_006a61e0();
  ExceptionList = pvStack_c;
  return;
}


