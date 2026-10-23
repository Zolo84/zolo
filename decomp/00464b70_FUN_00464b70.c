// FUN_00464b70 @ 464b70 size=299

undefined4 * __thiscall
FUN_00464b70(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined4 param_4,
            undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8,
            undefined2 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12,
            undefined1 param_13)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc9db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(0x2a);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    FUN_0042d6c0();
    *(undefined2 *)((int)pvVar2 + 0xe) = 0;
    *(undefined4 *)((int)pvVar2 + 0x10) = 0;
    *(undefined2 *)((int)pvVar2 + 0x14) = 0;
    *(undefined4 *)((int)pvVar2 + 0x16) = 0;
    *(undefined2 *)((int)pvVar2 + 0x1a) = 0;
    *(undefined4 *)((int)pvVar2 + 0x1c) = 0;
  }
  FUN_0042d320(pvVar2);
  *param_1 = &PTR_FUN_007e6714;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined2 *)param_1[1] = param_2;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 8) = *param_3;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_3 + 1);
  puVar3 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 2) = *puVar3;
  *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar3 + 1);
  iVar1 = param_1[1];
  *param_1 = &PTR_FUN_007e66f4;
  *(undefined4 *)(iVar1 + 0xe) = param_4;
  *(undefined2 *)(iVar1 + 0x12) = param_5;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x14) = param_6;
  *(undefined2 *)(iVar1 + 0x18) = param_7;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x1a) = param_8;
  *(undefined2 *)(iVar1 + 0x1e) = param_9;
  *(undefined4 *)(param_1[1] + 0x20) = param_10;
  *(undefined4 *)(param_1[1] + 0x24) = param_11;
  *(undefined1 *)(param_1[1] + 0x28) = param_12;
  *(undefined1 *)(param_1[1] + 0x29) = param_13;
  ExceptionList = local_c;
  return param_1;
}


