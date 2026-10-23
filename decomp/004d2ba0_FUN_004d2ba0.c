// FUN_004d2ba0 @ 4d2ba0 size=138

void __fastcall FUN_004d2ba0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007bf6ea;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e7e90;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e7e74;
  param_1[2] = &PTR_LAB_007e7e7c;
  local_4 = 2;
  if (*(undefined4 **)((int)param_1 + 0x16) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x16))(1);
  }
  local_4._0_1_ = 1;
  FUN_004169a0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00428ca0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


