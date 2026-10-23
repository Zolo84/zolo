// FUN_00644a70 @ 644a70 size=173

void __fastcall FUN_00644a70(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d2588;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f0190;
  param_1[2] = &PTR_LAB_007f018c;
  local_4 = 0;
  FUN_00657c30(param_1);
  if (*(undefined4 **)((int)param_1 + 0x92) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x92))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x96) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x96))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x9a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x9a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x9e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x9e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xae) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xae))(1);
  }
  local_4 = 0xffffffff;
  FUN_0043ec00();
  ExceptionList = pvStack_c;
  return;
}


