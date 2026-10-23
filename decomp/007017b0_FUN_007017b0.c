// FUN_007017b0 @ 7017b0 size=118

void __fastcall FUN_007017b0(undefined4 *param_1)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007db908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f853c;
  param_1[2] = &PTR_LAB_007f8538;
  local_4 = 0;
  cVar1 = FUN_0042e910();
  if ((cVar1 == '\0') && (DAT_00d610e5 == '\0')) {
    FUN_0064a850(0);
  }
  local_4 = 0xffffffff;
  FUN_0043ed70();
  ExceptionList = local_c;
  return;
}


