// FUN_006a6430 @ 6a6430 size=79

void FUN_006a6430(void)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d5918;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_006a61e0();
  ExceptionList = pvStack_c;
  return;
}


