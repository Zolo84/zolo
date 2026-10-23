// FUN_005b9229 @ 5b9229 size=103

undefined4 * __fastcall FUN_005b9229(undefined4 *param_1)

{
  undefined2 local_18;
  undefined4 local_16;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc2b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004289a0();
  local_8 = 0;
  *param_1 = &PTR_FUN_007ec5dc;
  local_18 = 2;
  local_16 = 3;
  FUN_00428a80(&local_18);
  ExceptionList = local_10;
  return param_1;
}


