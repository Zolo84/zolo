// thunk_FUN_00434150 @ 648290 size=5

void __fastcall thunk_FUN_00434150(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_007ba6d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e4188;
  param_1[2] = &PTR_LAB_007e4184;
  uStack_4 = 0;
  FUN_005837f0();
  uStack_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


