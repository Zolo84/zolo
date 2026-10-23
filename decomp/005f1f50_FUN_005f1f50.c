// FUN_005f1f50 @ 5f1f50 size=157

undefined4 * __thiscall FUN_005f1f50(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cec43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  *(undefined ***)((int)param_1 + 0x46) = &PTR_FUN_007ed7d4;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  *(undefined1 *)((int)param_1 + 0x56) = 0;
  *param_1 = &PTR_FUN_007ed788;
  param_1[2] = &PTR_LAB_007ed784;
  *(undefined4 *)((int)param_1 + 0x3a) = param_2;
  *(undefined4 *)((int)param_1 + 0x42) = param_3;
  local_4 = 1;
  uVar1 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined4 *)((int)param_1 + 0x3e) = uVar1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_005f2360();
  ExceptionList = local_c;
  return param_1;
}


