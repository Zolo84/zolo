// FUN_00405270 @ 405270 size=121

undefined4 * __fastcall FUN_00405270(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040e860();
  local_4 = 0;
  FUN_00583720();
  param_1[10] = &PTR_LAB_007e3370;
  param_1[0xb] = 0;
  param_1[0xc] = 0x20;
  param_1[0xd] = 0;
  *(undefined4 *)((int)param_1 + 0x23e) = 0;
  *(undefined1 *)((int)param_1 + 0x252) = 0;
  *(undefined1 *)((int)param_1 + 0x253) = 0;
  param_1[0x95] = 0;
  *param_1 = &PTR_FUN_007e3360;
  ExceptionList = local_c;
  return param_1;
}


