// FUN_004e2180 @ 4e2180 size=157

void __fastcall FUN_004e2180(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bfe00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e7fb4;
  param_1[2] = &PTR_LAB_007e7fb0;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x2a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x2e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x32) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x32))(1);
  }
  FUN_00796cd8(param_1[0xe]);
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


