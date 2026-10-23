// FUN_00460150 @ 460150 size=197

void FUN_00460150(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc49b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042dc20();
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0045fec0();
    FUN_00446d10(uVar2);
    FUN_00465280(0xa7);
  }
  local_4 = 0xffffffff;
  FUN_00565bc0();
  FUN_00565bc0();
  ExceptionList = local_c;
  return;
}


