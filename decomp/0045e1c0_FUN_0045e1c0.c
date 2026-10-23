// FUN_0045e1c0 @ 45e1c0 size=182

void FUN_0045e1c0(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc11b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_0044e1b0();
    FUN_00428eb0();
    FUN_0045f730();
    FUN_00447250();
    uVar2 = FUN_0045fec0();
    FUN_00446d10(uVar2);
    FUN_00463ec0(0x140,&DAT_0088f238);
  }
  local_4 = 0xffffffff;
  FUN_00565bf0();
  ExceptionList = local_c;
  return;
}


