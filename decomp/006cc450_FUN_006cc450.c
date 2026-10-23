// FUN_006cc450 @ 6cc450 size=122

void __fastcall FUN_006cc450(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d8db0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7308;
  param_1[2] = &PTR_LAB_007f7304;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x40e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x40e))(1);
  }
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


