// FUN_004466b0 @ 4466b0 size=89

void __fastcall FUN_004466b0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bb938;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_007a8882(param_1 + 0xc,0x2c,0x158,FUN_00588520);
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


