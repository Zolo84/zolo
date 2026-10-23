// FUN_00463ec0 @ 463ec0 size=297

undefined4 * __thiscall
FUN_00463ec0(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined4 param_4,
            undefined2 param_5,undefined4 *param_6,undefined4 param_7,undefined2 param_8,
            undefined4 param_9,undefined2 param_10,undefined4 param_11)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc95b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x2a);
  local_4 = 0;
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = (undefined2 *)0x0;
  }
  else {
    FUN_0042d6c0();
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    puVar2[0xd] = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    puVar2[0x10] = 0;
    *(undefined4 *)(puVar2 + 0x11) = 0;
  }
  param_1[1] = puVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e6614;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar2 = param_2;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 8) = *param_3;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_3 + 1);
  puVar3 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 2) = *puVar3;
  *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar3 + 1);
  iVar1 = param_1[1];
  *param_1 = &PTR_FUN_007e65f4;
  *(undefined4 *)(iVar1 + 0xe) = param_4;
  *(undefined2 *)(iVar1 + 0x12) = param_5;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x20) = param_7;
  *(undefined2 *)(iVar1 + 0x24) = param_8;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x1a) = param_9;
  *(undefined2 *)(iVar1 + 0x1e) = param_10;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x14) = *param_6;
  *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(param_6 + 1);
  *(undefined4 *)(param_1[1] + 0x26) = param_11;
  ExceptionList = local_c;
  return param_1;
}


