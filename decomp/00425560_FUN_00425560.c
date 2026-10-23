// FUN_00425560 @ 425560 size=93

undefined4 __fastcall FUN_00425560(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9edb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x1e);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0053e800(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}


