// FUN_006fe040 @ 6fe040 size=94

void __fastcall FUN_006fe040(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007db508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f84cc;
  param_1[2] = &PTR_LAB_007f84c8;
  local_4 = 0;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


