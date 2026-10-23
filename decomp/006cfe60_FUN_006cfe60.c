// FUN_006cfe60 @ 6cfe60 size=115

undefined4 * __fastcall FUN_006cfe60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d90e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[3] = &PTR_LAB_007f7470;
  param_1[2] = &PTR_LAB_007f746c;
  *param_1 = &PTR_FUN_007f7458;
  param_1[3] = &PTR_LAB_007f7428;
  ExceptionList = local_c;
  return param_1;
}


