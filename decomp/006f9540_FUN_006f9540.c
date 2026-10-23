// FUN_006f9540 @ 6f9540 size=134

void __fastcall FUN_006f9540(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007db047;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f8320;
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x226) != 0) {
    FUN_006d4290(*(int *)((int)param_1 + 0x226));
  }
  if (*(undefined4 **)((int)param_1 + 0x226) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x226))(1);
  }
  *(undefined4 *)((int)param_1 + 0x226) = 0;
  local_4 = 0xffffffff;
  FUN_0040f570();
  ExceptionList = pvStack_c;
  return;
}


