// FUN_006a6890 @ 6a6890 size=79

void FUN_006a6890(void)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d5938;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_006a61e0();
  ExceptionList = pvStack_c;
  return;
}


