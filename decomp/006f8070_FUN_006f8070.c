// FUN_006f8070 @ 6f8070 size=107

void __fastcall FUN_006f8070(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007dae68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f82e8;
  param_1[2] = &PTR_LAB_007f82e4;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x1e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x1e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x16) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x16))(1);
  }
  local_4 = 0xffffffff;
  FUN_006ee460();
  ExceptionList = pvStack_c;
  return;
}


