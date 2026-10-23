// FUN_006cccf0 @ 6cccf0 size=101

void __fastcall FUN_006cccf0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d8de8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f736c;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f7320;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f731c;
  local_4 = 0;
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1b])(1);
  }
  local_4 = 0xffffffff;
  FUN_006ed760();
  ExceptionList = pvStack_c;
  return;
}


