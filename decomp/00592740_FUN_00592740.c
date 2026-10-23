// FUN_00592740 @ 592740 size=97

void __fastcall FUN_00592740(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c9ec8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007eb4b8;
  param_1[2] = &PTR_LAB_007eb4b4;
  local_4 = 0;
  if ((undefined4 *)param_1[0x46] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x46])(1);
  }
  local_4 = 0xffffffff;
  FUN_0058ede0();
  ExceptionList = pvStack_c;
  return;
}


