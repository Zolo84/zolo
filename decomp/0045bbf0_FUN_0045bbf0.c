// FUN_0045bbf0 @ 45bbf0 size=138

void FUN_0045bbf0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbd0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00446d10(&DAT_0088f238);
    FUN_004638c0(0x61);
  }
  local_4 = 0xffffffff;
  FUN_00565bf0();
  ExceptionList = local_c;
  return;
}


