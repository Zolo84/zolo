// FUN_00621c30 @ 621c30 size=119

void __fastcall FUN_00621c30(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d1070;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ef718;
  param_1[2] = &PTR_LAB_007ef714;
  local_4 = 0;
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xe])(1);
  }
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


