// FUN_005efdf0 @ 5efdf0 size=210

void __fastcall FUN_005efdf0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007ceaa0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ed5c8;
  param_1[2] = &PTR_LAB_007ed5c4;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x32) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x32))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x3a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x3a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x36) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x36))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x3e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x3e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x42) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x42))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x46) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x46))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x4a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x4a))(1);
  }
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


