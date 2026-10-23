// FUN_0065dff0 @ 65dff0 size=158

void __fastcall FUN_0065dff0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d3680;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f0b00;
  param_1[2] = &PTR_LAB_007f0afc;
  local_4 = 0;
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
  }
  param_1[0xc] = 0;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
  }
  param_1[10] = 0;
  *param_1 = &PTR_FUN_007f0ab4;
  param_1[2] = &PTR_LAB_007f0ab0;
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


