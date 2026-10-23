// FUN_00461790 @ 461790 size=154

void FUN_00461790(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc6eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  iVar2 = 0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00449290();
    FUN_00446d10(&DAT_0088f2a4);
    iVar2 = FUN_004646f0(0xcc);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0xe) = param_1;
  FUN_00565bf0();
  ExceptionList = local_c;
  return;
}


