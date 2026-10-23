// FUN_00433f00 @ 433f00 size=112

undefined4 * __fastcall FUN_00433f00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *param_1 = &PTR_FUN_007e4138;
  param_1[2] = &PTR_LAB_007e4134;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = DAT_00bd1bac;
  ExceptionList = local_c;
  return param_1;
}


