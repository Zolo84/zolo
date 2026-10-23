// thunk_FUN_00417cb0 @ 4585e0 size=5

void __fastcall thunk_FUN_00417cb0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_007b9d80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e381c;
  param_1[2] = &PTR_LAB_007e3818;
  uStack_4 = 0;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
  }
  DAT_0088ebfc = DAT_0088ebfc + -1;
  uStack_4 = 1;
  FUN_005837f0();
  uStack_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


