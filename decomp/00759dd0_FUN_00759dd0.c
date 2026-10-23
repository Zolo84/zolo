// FUN_00759dd0 @ 759dd0 size=250

undefined4 * __fastcall FUN_00759dd0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e0014;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428000();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007ed804;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0xb] = &PTR_LAB_007e4a74;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  *(undefined ***)((int)param_1 + 0x3e) = &PTR_LAB_007e4a74;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00702780();
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  *(undefined1 *)((int)param_1 + 0x92) = 0;
  *(undefined ***)((int)param_1 + 0x82) = &PTR_LAB_007e4a74;
  param_1[2] = &PTR_LAB_007fa3cc;
  *param_1 = &PTR_FUN_007fa3bc;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007fa3b4;
  param_1[10] = 0;
  *(undefined4 *)((int)param_1 + 0x13a) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x11e);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  ExceptionList = local_c;
  return param_1;
}


