// FUN_005c03a0 @ 5c03a0 size=328

undefined4 * __thiscall FUN_005c03a0(undefined4 *param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_2c;
  uint local_14;
  
  local_2c = operator_new(0x1a);
  if (local_2c == (void *)0x0) {
    local_2c = (void *)0x0;
  }
  else {
    *(undefined2 *)((int)local_2c + 6) = 0;
    *(undefined1 *)((int)local_2c + 4) = 0;
    *(undefined1 *)((int)local_2c + 3) = 0;
    *(undefined1 *)((int)local_2c + 2) = 0;
    *(undefined2 *)((int)local_2c + 8) = 0;
    *(undefined4 *)((int)local_2c + 10) = 0;
    *(undefined2 *)((int)local_2c + 0x12) = 0;
    *(undefined1 *)((int)local_2c + 0x10) = 0;
    *(undefined1 *)((int)local_2c + 0xf) = 0;
    *(undefined1 *)((int)local_2c + 0xe) = 0;
    *(undefined2 *)((int)local_2c + 0x18) = 0;
    *(undefined1 *)((int)local_2c + 0x16) = 0;
    *(undefined1 *)((int)local_2c + 0x15) = 0;
    *(undefined1 *)((int)local_2c + 0x14) = 0;
  }
  param_1[1] = local_2c;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_LAB_007e3ebc;
  *param_1 = &PTR_FUN_007ea61c;
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


