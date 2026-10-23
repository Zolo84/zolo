// FUN_005d9d40 @ 5d9d40 size=96

void __fastcall FUN_005d9d40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cda18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007ecf10;
  param_1[2] = &PTR_LAB_007ecf0c;
  local_4 = 0;
  if (DAT_00d0ca90 != 0) {
    FUN_00652fe0();
  }
  local_4 = 0xffffffff;
  FUN_005c45e0();
  ExceptionList = local_c;
  return;
}


