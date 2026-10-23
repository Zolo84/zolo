// FUN_006db710 @ 6db710 size=218

void __fastcall FUN_006db710(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d98c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7c54;
  param_1[2] = &PTR_LAB_007f7c50;
  local_4 = 0;
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16])(1);
  }
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17])(1);
  }
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
  }
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1a])(1);
  }
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
  }
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x7a));
  if (*(undefined4 **)((int)param_1 + 0x86) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x86))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x8a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x8a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x8e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x8e))(1);
  }
  FUN_006d4290(param_1);
  local_4 = 0xffffffff;
  FUN_00441ec0();
  ExceptionList = pvStack_c;
  return;
}


