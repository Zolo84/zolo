// FUN_005dc0d0 @ 5dc0d0 size=168

void __fastcall FUN_005dc0d0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cdc88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ed094;
  param_1[2] = &PTR_LAB_007ed090;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ed08c;
  local_4 = 0;
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
  }
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
  }
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x35])(1);
  }
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x36])(1);
  }
  if ((undefined4 *)param_1[0x34] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x34])(1);
  }
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = pvStack_c;
  return;
}


