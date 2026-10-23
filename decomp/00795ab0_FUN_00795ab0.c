// FUN_00795ab0 @ 795ab0 size=248

undefined4 * __thiscall FUN_00795ab0(undefined4 *param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_24;
  uint local_14;
  
  local_24 = operator_new(0x1e);
  if (local_24 == (void *)0x0) {
    local_24 = (void *)0x0;
  }
  else {
    *(undefined2 *)((int)local_24 + 6) = 0;
    *(undefined1 *)((int)local_24 + 4) = 0;
    *(undefined1 *)((int)local_24 + 3) = 0;
    *(undefined1 *)((int)local_24 + 2) = 0;
    *(undefined2 *)((int)local_24 + 8) = 0;
    *(undefined4 *)((int)local_24 + 10) = 0;
  }
  param_1[1] = local_24;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_LAB_007e3ebc;
  *param_1 = &PTR_FUN_007eae68;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined2 *)param_1[1] = param_2;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 8) = *param_3;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_3 + 1);
  local_14 = local_14 & 0xff000000;
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 2) = local_14;
  *(undefined2 *)(iVar1 + 6) = 0;
  return param_1;
}


