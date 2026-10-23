// FUN_005f4220 @ 5f4220 size=222

void __fastcall FUN_005f4220(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cee38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ed888;
  param_1[2] = &PTR_LAB_007ed884;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x82) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x82))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x7e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x7e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x8a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x8a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x8e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x8e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x86) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x86))(1);
  }
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x26])(1);
  }
  if ((undefined4 *)param_1[0x27] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x27])(1);
  }
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x28])(1);
  }
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x25])(1);
  }
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


