// FUN_00757450 @ 757450 size=104

void __fastcall FUN_00757450(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007dff0b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007fa2cc;
  DAT_00d4c348 = DAT_00d4c348 + -1;
  local_4 = 0;
  FUN_007415c0();
  if (*(undefined4 **)((int)param_1 + 0x4a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x4a))(1);
  }
  FUN_00741520();
  ExceptionList = pvStack_c;
  return;
}


