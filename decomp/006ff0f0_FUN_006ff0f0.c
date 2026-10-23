// FUN_006ff0f0 @ 6ff0f0 size=111

undefined4 * __fastcall FUN_006ff0f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db5e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  param_1[2] = &PTR_LAB_007f8528;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x182) = 0x1267;
  *param_1 = &PTR_FUN_007f8514;
  ExceptionList = local_c;
  return param_1;
}


