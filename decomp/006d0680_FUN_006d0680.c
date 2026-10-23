// FUN_006d0680 @ 6d0680 size=121

undefined4 * __fastcall FUN_006d0680(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  *param_1 = &PTR_FUN_007f74a0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0x6ca) = 0;
  *(undefined4 *)((int)param_1 + 0x6ce) = 0;
  *(undefined4 *)((int)param_1 + 0x6d2) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  param_1[0x1f] = uVar1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  ExceptionList = local_c;
  return param_1;
}


