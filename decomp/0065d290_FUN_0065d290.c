// FUN_0065d290 @ 65d290 size=138

void __fastcall FUN_0065d290(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d3580;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f0ae4;
  param_1[2] = &PTR_LAB_007f0ae0;
  local_4 = 0;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
  }
  param_1[8] = 0;
  *param_1 = &PTR_FUN_007f0ab4;
  param_1[2] = &PTR_LAB_007f0ab0;
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


