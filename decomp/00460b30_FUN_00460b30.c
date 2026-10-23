// FUN_00460b30 @ 460b30 size=184

void FUN_00460b30(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc59b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_0045f730();
    FUN_0045f730();
    FUN_0045f730(&DAT_0088f28c);
    FUN_00464b70(0xcf,&DAT_0088f2a4);
  }
  local_4 = 0xffffffff;
  FUN_00565bf0();
  ExceptionList = local_c;
  return;
}


