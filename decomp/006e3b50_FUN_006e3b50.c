// FUN_006e3b50 @ 6e3b50 size=141

void __fastcall FUN_006e3b50(undefined4 *param_1)

{
  char cVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d9fb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7e6c;
  param_1[2] = &PTR_LAB_007f7e68;
  local_4 = 0;
  cVar1 = FUN_0042e910();
  if (cVar1 == '\0') {
    FUN_0064a850(0);
  }
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
  }
  if ((undefined4 *)param_1[0x23] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x23])(1);
  }
  local_4 = 0xffffffff;
  FUN_0043e860();
  ExceptionList = pvStack_c;
  return;
}


