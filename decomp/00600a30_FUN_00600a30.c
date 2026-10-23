// FUN_00600a30 @ 600a30 size=97

void __fastcall FUN_00600a30(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cf7d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ee504;
  param_1[2] = &PTR_LAB_007ee500;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x86) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x86))(1);
  }
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


