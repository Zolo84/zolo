// FUN_006dfa00 @ 6dfa00 size=96

undefined4 * __fastcall FUN_006dfa00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00441ab0();
  local_4 = 0;
  FUN_007a8800(param_1 + 0x1f,0x3e,0x20,&LAB_0057b1d0,&LAB_0057b1f0);
  *param_1 = &PTR_FUN_007f7cf0;
  param_1[2] = &PTR_LAB_007f7cec;
  ExceptionList = local_c;
  return param_1;
}


