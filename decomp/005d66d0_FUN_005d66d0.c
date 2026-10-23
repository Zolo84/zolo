// FUN_005d66d0 @ 5d66d0 size=392

void __fastcall FUN_005d66d0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cd848;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ecdc4;
  param_1[2] = &PTR_LAB_007ecdc0;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ecdbc;
  local_4 = 0;
  if ((undefined4 *)param_1[0x3c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3c])(1);
  }
  if ((undefined4 *)param_1[0x3e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3e])(1);
  }
  if ((undefined4 *)param_1[0x3d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3d])(1);
  }
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
  }
  if ((undefined4 *)param_1[0x39] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x39])(1);
  }
  if ((undefined4 *)param_1[0x3a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3a])(1);
  }
  if ((undefined4 *)param_1[0x3b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3b])(1);
  }
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x35])(1);
  }
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
  }
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x36])(1);
  }
  if ((undefined4 *)param_1[0x37] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x37])(1);
  }
  if ((undefined4 *)param_1[0x38] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x38])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x102) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x102))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xfe) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xfe))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x106) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x106))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x10e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x10e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x112) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x112))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x116) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x116))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x11a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x11a))(1);
  }
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = pvStack_c;
  return;
}


