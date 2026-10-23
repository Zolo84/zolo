// FUN_00430870 @ 430870 size=138

void __fastcall FUN_00430870(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007ba4ff;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e4048;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e402c;
  param_1[2] = &PTR_LAB_007e4034;
  local_4 = 1;
  if (*(undefined4 **)((int)param_1 + 0x22) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x22))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x26) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x26))(1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00428ca0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


