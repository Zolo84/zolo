// FUN_005fdab0 @ 5fdab0 size=113

void __fastcall FUN_005fdab0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cf668;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ee3d4;
  param_1[2] = &PTR_LAB_007ee3d0;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x8a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x8a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x8e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x8e))(1);
  }
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


