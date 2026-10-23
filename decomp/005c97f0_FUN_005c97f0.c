// FUN_005c97f0 @ 5c97f0 size=365

void __fastcall FUN_005c97f0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cd1d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ec9b4;
  param_1[2] = &PTR_LAB_007ec9b0;
  local_4 = 0;
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
  }
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x32) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x32))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x2e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2e))(1);
  }
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
  }
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x11])(1);
  }
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x13])(1);
  }
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x15])(1);
  }
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16])(1);
  }
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17])(1);
  }
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1a])(1);
  }
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1b])(1);
  }
  if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1c])(1);
  }
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x20])(1);
  }
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
  }
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1e])(1);
  }
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x24])(1);
  }
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x25])(1);
  }
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


