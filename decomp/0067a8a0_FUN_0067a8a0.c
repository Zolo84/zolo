// FUN_0067a8a0 @ 67a8a0 size=207

undefined4 * __thiscall FUN_0067a8a0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d4a13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006ad0f0(param_2);
  param_1[0x13] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x19] = &PTR_FUN_007e5258;
  local_4 = 1;
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  *(undefined1 *)((int)param_1 + 0x7a) = 0;
  FUN_00442b90();
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x55] = &PTR_FUN_007e5258;
  *(undefined4 *)((int)param_1 + 0x17a) = 0;
  *param_1 = &PTR_FUN_007f3600;
  iVar1 = DAT_00893530;
  *(undefined4 *)((int)param_1 + 0x7a) = *(undefined4 *)(DAT_00893530 + 0x14);
  *(undefined2 *)((int)param_1 + 0x7e) = *(undefined2 *)(iVar1 + 0x18);
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)((int)param_1 + 0x17e) = 0;
  *(undefined4 *)((int)param_1 + 0x182) = 0;
  ExceptionList = local_c;
  return param_1;
}


