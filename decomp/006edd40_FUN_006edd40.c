// FUN_006edd40 @ 6edd40 size=104

void __fastcall FUN_006edd40(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007da488;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f8060;
  param_1[2] = &PTR_LAB_007f805c;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007f8058;
  local_4 = 0;
  if ((undefined4 *)param_1[0x2c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2c])(1);
  }
  local_4 = 0xffffffff;
  FUN_004338f0();
  ExceptionList = pvStack_c;
  return;
}


