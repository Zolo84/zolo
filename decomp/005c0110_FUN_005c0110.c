// FUN_005c0110 @ 5c0110 size=350

undefined4 * __thiscall
FUN_005c0110(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined2 param_4,
            undefined4 param_5,undefined2 param_6)

{
  int iVar1;
  void *local_38;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc60b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_38 = operator_new(0x16);
  local_8 = 0;
  if (local_38 == (void *)0x0) {
    local_38 = (void *)0x0;
  }
  else {
    FUN_0042d2d0();
    *(undefined2 *)((int)local_38 + 8) = 0;
    *(undefined4 *)((int)local_38 + 10) = 0;
    *(undefined2 *)((int)local_38 + 0x10) = 0;
    *(undefined4 *)((int)local_38 + 0x12) = 0;
  }
  param_1[1] = local_38;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_LAB_007e3ebc;
  *param_1 = &PTR_FUN_007ea5fc;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined2 *)param_1[1] = param_2;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 8) = *param_3;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_3 + 1);
  local_20 = local_20 & 0xff000000;
  iVar1 = param_1[1];
  *(uint *)(iVar1 + 2) = local_20;
  *(undefined2 *)(iVar1 + 6) = 0;
  *param_1 = &PTR_FUN_007ea11c;
  *(undefined2 *)(param_1[1] + 0xe) = param_4;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x10) = param_5;
  *(undefined2 *)(iVar1 + 0x14) = param_6;
  ExceptionList = local_10;
  return param_1;
}


