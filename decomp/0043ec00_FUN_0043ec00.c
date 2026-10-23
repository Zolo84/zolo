// FUN_0043ec00 @ 43ec00 size=117

void __fastcall FUN_0043ec00(undefined4 *param_1)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007baeb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e45e4;
  param_1[2] = &PTR_LAB_007e45e0;
  local_4 = 0;
  if (DAT_00893750 != 0) {
    cVar1 = FUN_0042e910();
    if ((cVar1 == '\0') && (DAT_00d0ca90 != 0)) {
      FUN_0064a850(0);
    }
  }
  local_4 = 0xffffffff;
  FUN_0043e860();
  ExceptionList = local_c;
  return;
}


