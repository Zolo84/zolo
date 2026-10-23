// FUN_0043eb30 @ 43eb30 size=166

undefined4 * __thiscall FUN_0043eb30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bae98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043e250(param_3,0);
  *param_1 = &PTR_FUN_007e45e4;
  param_1[2] = &PTR_LAB_007e45e0;
  param_1[0x22] = param_2;
  local_4 = 0;
  if ((DAT_00893750 != 0) && (*(char *)(DAT_00893750 + 0x111) != '\0')) {
    cVar1 = FUN_0042e910();
    if ((cVar1 == '\0') &&
       (((&DAT_00d3635f)[param_1[0x22] * 0x1a] != '\0' && (DAT_00d610e5 == '\0')))) {
      FUN_0064a850(1);
    }
  }
  ExceptionList = local_c;
  return param_1;
}


