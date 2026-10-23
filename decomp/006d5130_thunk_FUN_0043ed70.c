// thunk_FUN_0043ed70 @ 6d5130 size=5

void __fastcall thunk_FUN_0043ed70(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_007baf08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e4610;
  param_1[2] = &PTR_LAB_007e460c;
  uStack_4 = 0;
  FUN_004161c0();
  uStack_4 = 0xffffffff;
  FUN_0043e860();
  ExceptionList = pvStack_c;
  return;
}


