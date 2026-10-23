// FUN_006ce2b0 @ 6ce2b0 size=206

void __fastcall FUN_006ce2b0(undefined4 *param_1)

{
  char cVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d8f68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f73d4;
  param_1[2] = &PTR_LAB_007f73d0;
  local_4 = 0;
  cVar1 = FUN_00433920();
  if (cVar1 == '\0') {
    *(undefined4 *)(*DAT_00d12b40 + 0x37e) = 1;
  }
  else {
    *(undefined4 *)(*DAT_00d12b40 + 0x37e) = 0;
  }
  FUN_006cd800();
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16])(1);
  }
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17])(1);
  }
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
  }
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
  }
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1a])(1);
  }
  local_4 = 0xffffffff;
  FUN_00441ec0();
  ExceptionList = pvStack_c;
  return;
}


