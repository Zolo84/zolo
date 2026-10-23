// thunk_FUN_004169a0 @ 4d2c30 size=5

void __fastcall thunk_FUN_004169a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_007b9cd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e3738;
  param_1[2] = &PTR_LAB_007e3734;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e3730;
  uStack_4 = 0;
  FUN_004d89c0();
  uStack_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


