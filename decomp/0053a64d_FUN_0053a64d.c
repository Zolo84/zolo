// FUN_0053a64d @ 53a64d size=217

void __thiscall FUN_0053a64d(int param_1,undefined4 param_2)

{
  int local_728;
  undefined1 local_724 [1812];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007c2afc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0053a726();
  *(undefined4 *)(param_1 + 0x2cde) = 0;
  FUN_006cd210();
  for (local_728 = 0; local_728 < 0x158; local_728 = local_728 + 1) {
    *(undefined4 *)(param_1 + 0x277e + local_728 * 4) = 0;
  }
  FUN_00534930(param_2,&DAT_00851088);
  local_8 = 0;
  FUN_0053aa39(local_724);
  local_8 = 0xffffffff;
  FUN_005349a0();
  ExceptionList = local_10;
  return;
}


