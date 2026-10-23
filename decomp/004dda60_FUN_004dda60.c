// FUN_004dda60 @ 4dda60 size=84

undefined4 * __fastcall FUN_004dda60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bfbc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004d8990();
  local_4 = 0;
  FUN_004e05c0();
  param_1[1] = &PTR_LAB_007e7f58;
  *param_1 = &PTR_FUN_007e7f54;
  ExceptionList = local_c;
  return param_1;
}


