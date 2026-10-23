// FUN_0040b860 @ 40b860 size=151

void __fastcall FUN_0040b860(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007b97a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e338c;
  param_1[2] = &PTR_LAB_007e3388;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e3384;
  local_4 = 0;
  if (*(char *)(param_1 + 0x25) == '\0') {
    *(undefined4 *)((int)param_1 + 0x26) = 0;
    *(undefined4 *)((int)param_1 + 0x22) = 0;
    FUN_0040fe10(param_1,0);
    FUN_0040fe10(param_1,1);
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0xce));
  local_4 = 0xffffffff;
  FUN_004169a0();
  ExceptionList = local_c;
  return;
}


