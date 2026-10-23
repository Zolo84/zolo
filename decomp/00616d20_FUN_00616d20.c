// FUN_00616d20 @ 616d20 size=132

void __fastcall FUN_00616d20(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d08f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ef3ec;
  param_1[2] = &PTR_LAB_007ef3e8;
  local_4 = 0;
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf])(1);
  }
  if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd])(1);
  }
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


