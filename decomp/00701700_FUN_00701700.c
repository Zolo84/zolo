// FUN_00701700 @ 701700 size=133

undefined4 * __thiscall FUN_00701700(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db8e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043ec80(0,*(undefined4 *)(DAT_00d0ca90 + 6));
  *param_1 = &PTR_FUN_007f853c;
  param_1[2] = &PTR_LAB_007f8538;
  param_1[0x2a] = param_2;
  local_4 = 0;
  cVar1 = FUN_0042e910();
  if ((cVar1 == '\0') && (DAT_00d610e5 == '\0')) {
    FUN_0064a850(1);
  }
  ExceptionList = local_c;
  return param_1;
}


