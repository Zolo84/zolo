// FUN_00418f40 @ 418f40 size=89

undefined4 * __fastcall FUN_00418f40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  param_1[2] = &PTR_LAB_007e386c;
  *param_1 = &PTR_FUN_007e3858;
  ExceptionList = local_c;
  return param_1;
}


