// FUN_00651b50 @ 651b50 size=147

void __fastcall FUN_00651b50(undefined4 param_1)

{
  char cVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2d4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_004442a0();
  if (cVar1 != '\0') {
    pvVar2 = operator_new(0xbe);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_00498d60();
      FUN_00644fc0(param_1);
    }
    local_4 = 0xffffffff;
  }
  FUN_0047e2f0();
  ExceptionList = local_c;
  return;
}


