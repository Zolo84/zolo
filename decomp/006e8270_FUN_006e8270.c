// FUN_006e8270 @ 6e8270 size=104

undefined4 * __fastcall FUN_006e8270(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da0c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  param_1[2] = &PTR_LAB_007f7f0c;
  *param_1 = &PTR_FUN_007f7ef8;
  param_1[6] = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  param_1[5] = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  ExceptionList = local_c;
  return param_1;
}


