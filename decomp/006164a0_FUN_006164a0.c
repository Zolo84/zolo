// FUN_006164a0 @ 6164a0 size=132

void __fastcall FUN_006164a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d08a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ef39c;
  param_1[2] = &PTR_LAB_007ef398;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x32) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x32))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x36) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x36))(1);
  }
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


