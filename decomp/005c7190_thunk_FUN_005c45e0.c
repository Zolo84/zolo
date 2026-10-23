// thunk_FUN_005c45e0 @ 5c7190 size=5

void __fastcall thunk_FUN_005c45e0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_007cc8f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ec774;
  param_1[2] = &PTR_LAB_007ec770;
  uStack_4 = 1;
  if ((undefined4 *)param_1[0x23] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x23])(1);
  }
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x20])(1);
  }
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x21])(1);
  }
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
  }
  uStack_4 = uStack_4 & 0xffffff00;
  FUN_005c1ab0();
  uStack_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


