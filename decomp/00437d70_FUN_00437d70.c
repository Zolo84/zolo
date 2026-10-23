// FUN_00437d70 @ 437d70 size=96

void __fastcall FUN_00437d70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007baa08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e42d0;
  param_1[2] = &PTR_LAB_007e42cc;
  local_4 = 0;
  FUN_00796cd8(param_1[0x93]);
  local_4 = 0xffffffff;
  FUN_00434150();
  ExceptionList = local_c;
  return;
}


