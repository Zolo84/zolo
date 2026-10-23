// FUN_0061eea0 @ 61eea0 size=132

void __fastcall FUN_0061eea0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d0e90;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ef598;
  param_1[2] = &PTR_LAB_007ef594;
  local_4 = 0;
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf])(1);
  }
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
  }
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


