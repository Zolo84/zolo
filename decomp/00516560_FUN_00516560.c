// FUN_00516560 @ 516560 size=350

undefined4 * __thiscall
FUN_00516560(undefined4 *param_1,undefined4 *param_2,undefined2 param_3,undefined4 param_4,
            undefined2 param_5,undefined2 param_6,undefined4 param_7,undefined1 param_8,
            undefined1 param_9,undefined4 param_10,undefined2 param_11,undefined4 param_12,
            undefined2 param_13,undefined4 param_14,undefined1 param_15,undefined1 param_16,
            undefined1 param_17,undefined4 param_18,undefined1 param_19)

{
  int iVar1;
  void *pvVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c1c7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(0x38);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)FUN_00516910();
  }
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e87c8;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar3 = 0x86;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 8) = *param_2;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_2 + 1);
  puVar4 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 2) = *puVar4;
  *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar4 + 1);
  *param_1 = &PTR_FUN_007e87a8;
  *(undefined2 *)(param_1[1] + 0xe) = param_3;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x12) = param_4;
  *(undefined2 *)(iVar1 + 0x16) = param_5;
  *(undefined4 *)(param_1[1] + 0x18) = param_7;
  *(undefined1 *)(param_1[1] + 0x1c) = param_8;
  *(undefined1 *)(param_1[1] + 0x1d) = param_9;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x1e) = param_10;
  *(undefined2 *)(iVar1 + 0x22) = param_11;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x24) = param_12;
  *(undefined2 *)(iVar1 + 0x28) = param_13;
  *(undefined2 *)(param_1[1] + 0x10) = param_6;
  *(undefined4 *)(param_1[1] + 0x2a) = param_14;
  *(undefined1 *)(param_1[1] + 0x2e) = param_15;
  *(undefined1 *)(param_1[1] + 0x2f) = param_16;
  *(undefined1 *)(param_1[1] + 0x30) = param_17;
  *(undefined4 *)(param_1[1] + 0x32) = param_18;
  *(undefined1 *)(param_1[1] + 0x36) = param_19;
  ExceptionList = local_c;
  return param_1;
}


