// FUN_00441ab0 @ 441ab0 size=93

undefined4 * __fastcall FUN_00441ab0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bb1b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  param_1[2] = &PTR_LAB_007e48a0;
  *param_1 = &PTR_FUN_007e4880;
  *(undefined1 *)((int)param_1 + 0x56) = 0;
  ExceptionList = local_c;
  return param_1;
}


