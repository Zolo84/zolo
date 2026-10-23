// FUN_007ad33d @ 7ad33d size=79

void FUN_007ad33d(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00800908;
  puStack_10 = &LAB_007b0b7c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_0087d514 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_0087d514)();
  }
  local_8 = 0xffffffff;
  FUN_007ad2c4();
  return;
}


