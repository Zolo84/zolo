// FUN_006a51e0 @ 6a51e0 size=85

void __fastcall FUN_006a51e0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d58b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f5e04;
  local_4 = 0;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_006a61e0();
  ExceptionList = pvStack_c;
  return;
}


