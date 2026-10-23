// FUN_00648b50 @ 648b50 size=145

void __fastcall FUN_00648b50(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d2770;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f04a4;
  param_1[2] = &PTR_LAB_007f04a0;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x1a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x1a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x1e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x1e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x22) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x22))(1);
  }
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


