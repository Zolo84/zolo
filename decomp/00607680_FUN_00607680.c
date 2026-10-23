// FUN_00607680 @ 607680 size=142

void __fastcall FUN_00607680(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cfdc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007eef68;
  param_1[2] = &PTR_LAB_007eef64;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x86) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x86))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x82) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x82))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x7e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x7e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x8e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x8e))(1);
  }
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


