// FUN_004b0e90 @ 4b0e90 size=330

undefined4 * __thiscall FUN_004b0e90(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007be218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined ***)((int)param_1 + 6) = &PTR_LAB_007e4a74;
  FUN_004b3f40();
  FUN_00499510();
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  *(undefined ***)((int)param_1 + 0x4a) = &PTR_LAB_007e4a74;
  FUN_004b3f40();
  FUN_00499510();
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((int)param_1 + 0x8a) = 0;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((int)param_1 + 0x92) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((int)param_1 + 0x8f) = 0;
  *(undefined1 *)((int)param_1 + 0x8e) = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  *(undefined2 *)((int)param_1 + 0x9e) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = *(undefined4 *)(param_2 + 0xc);
  uVar1 = *(undefined2 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined2 *)((int)param_1 + 0xa2) = uVar1;
  *(undefined1 *)((int)param_1 + 0xa5) = 0;
  *(undefined1 *)((int)param_1 + 0xa6) = 0;
  iVar2 = DAT_00893530;
  param_1[0x22] = *(undefined4 *)(DAT_00893530 + 0x14);
  *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)(iVar2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x78);
  param_1[0x26] = *(undefined4 *)(iVar2 + 0x10);
  uVar1 = *(undefined2 *)(iVar2 + 0x14);
  *(undefined4 **)((int)param_1 + 0x2e) = param_1;
  *(undefined2 *)(param_1 + 0x27) = uVar1;
  *(undefined4 **)((int)param_1 + 0x72) = param_1;
  param_1[0x25] = 0;
  ExceptionList = local_c;
  return param_1;
}


