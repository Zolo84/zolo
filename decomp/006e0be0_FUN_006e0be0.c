// FUN_006e0be0 @ 6e0be0 size=128

undefined4 * __thiscall FUN_006e0be0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x36) = param_2;
  *param_1 = &PTR_FUN_007f7d14;
  param_1[2] = &PTR_LAB_007f7d10;
  if (param_3 != 0) {
    uVar1 = FUN_007a8d6d(param_3);
    *(undefined4 *)((int)param_1 + 0x3a) = uVar1;
  }
  *(char **)((int)param_1 + 0x3e) = s________0086d4a4;
  uVar1 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined4 *)((int)param_1 + 0x2e) = uVar1;
  ExceptionList = local_c;
  return param_1;
}


