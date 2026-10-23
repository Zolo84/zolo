// FUN_005b4900 @ 5b4900 size=350

undefined4 * __thiscall
FUN_005b4900(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
            undefined4 *param_9,undefined4 *param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  void *pvVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cbe1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(0x40);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)FUN_005b4c90();
  }
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007ea57c;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar3 = param_2;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 8) = *param_3;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_3 + 1);
  puVar4 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 2) = *puVar4;
  *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar4 + 1);
  iVar1 = param_1[1];
  *param_1 = &PTR_FUN_007e9ebc;
  *(undefined4 *)(iVar1 + 0xe) = *param_4;
  *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_4 + 1);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x14) = *param_5;
  *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(param_5 + 1);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x1a) = *param_6;
  *(undefined2 *)(iVar1 + 0x1e) = *(undefined2 *)(param_6 + 1);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x20) = *param_7;
  *(undefined2 *)(iVar1 + 0x24) = *(undefined2 *)(param_7 + 1);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x2c) = *param_8;
  *(undefined2 *)(iVar1 + 0x30) = *(undefined2 *)(param_8 + 1);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x26) = *param_9;
  *(undefined2 *)(iVar1 + 0x2a) = *(undefined2 *)(param_9 + 1);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x32) = *param_10;
  *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_10 + 1);
  *(undefined4 *)(param_1[1] + 0x38) = param_11;
  *(undefined4 *)(param_1[1] + 0x3c) = param_12;
  ExceptionList = local_c;
  return param_1;
}


