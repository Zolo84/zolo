// FUN_006ece60 @ 6ece60 size=127

void __fastcall FUN_006ece60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007da380;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f7f8c;
  param_1[2] = &PTR_LAB_007f7f88;
  local_4 = 0;
  FUN_00796cd8(param_1[0xe]);
  FUN_00796cd8(param_1[0xf]);
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


