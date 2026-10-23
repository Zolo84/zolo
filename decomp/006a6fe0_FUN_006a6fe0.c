// FUN_006a6fe0 @ 6a6fe0 size=122

void __fastcall FUN_006a6fe0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d59a4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f6490;
  local_4 = 2;
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2e])(1);
  }
  local_4._0_1_ = 1;
  FUN_00527230();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_006a61e0();
  ExceptionList = pvStack_c;
  return;
}


