// FUN_0061f330 @ 61f330 size=168

void __fastcall FUN_0061f330(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d0ee8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ef64c;
  param_1[2] = &PTR_LAB_007ef648;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ef644;
  local_4 = 0;
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xc6) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xc6))(1);
  }
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xca) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xca))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xce) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xce))(1);
  }
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = pvStack_c;
  return;
}


