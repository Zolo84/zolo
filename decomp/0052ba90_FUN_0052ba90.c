// FUN_0052ba90 @ 52ba90 size=120

void __fastcall FUN_0052ba90(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c2308;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e8d18;
  param_1[2] = &PTR_LAB_007e8d14;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e8d10;
  local_4 = 0;
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x28])(1);
  }
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x29])(1);
  }
  local_4 = 0xffffffff;
  FUN_004169a0();
  ExceptionList = pvStack_c;
  return;
}


