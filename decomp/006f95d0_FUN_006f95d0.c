// FUN_006f95d0 @ 6f95d0 size=144

void __fastcall FUN_006f95d0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007db087;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_007f8184;
  local_4 = 0;
  if (param_1[0x88] != 0) {
    FUN_006d4290(param_1[0x88]);
  }
  param_1[0x88] = 0;
  if ((undefined4 *)param_1[0x87] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x87])(1);
  }
  param_1[0x87] = 0;
  local_4 = 0xffffffff;
  FUN_0040f570();
  ExceptionList = pvStack_c;
  return;
}


