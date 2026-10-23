// FUN_0043e040 @ 43e040 size=114

void __fastcall FUN_0043e040(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007badc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e4594;
  param_1[2] = &PTR_LAB_007e4590;
  local_4 = 0;
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
  }
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
  }
  FUN_00442830();
  local_4 = 0xffffffff;
  FUN_00441ec0();
  ExceptionList = pvStack_c;
  return;
}


