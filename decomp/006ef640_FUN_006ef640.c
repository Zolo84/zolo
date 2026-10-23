// FUN_006ef640 @ 6ef640 size=185

void __fastcall FUN_006ef640(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007da6b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f811c;
  param_1[2] = &PTR_LAB_007f8118;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x16) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x16))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x112) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x112))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x10e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x10e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x106) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x106))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x10a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x10a))(1);
  }
  FUN_005846f0();
  FUN_006d37e0();
  FUN_006ee4e0();
  local_4 = 0xffffffff;
  FUN_006ee460();
  ExceptionList = pvStack_c;
  return;
}


