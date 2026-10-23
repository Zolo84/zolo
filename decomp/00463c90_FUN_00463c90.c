// FUN_00463c90 @ 463c90 size=460

undefined4 * __thiscall
FUN_00463c90(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
            undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
            undefined2 param_13,char *param_14,undefined2 param_15,undefined2 param_16,
            undefined2 param_17,undefined2 param_18,undefined2 param_19,undefined2 param_20,
            undefined1 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
            undefined4 param_25)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc93b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(0x86);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00465df0();
  }
  FUN_0042d320(uVar3);
  *param_1 = &PTR_FUN_007e65d4;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined2 *)param_1[1] = param_2;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 8) = *param_3;
  *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_3 + 1);
  puVar4 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 2) = *puVar4;
  *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar4 + 1);
  iVar1 = param_1[1];
  *param_1 = &PTR_FUN_007e65b4;
  *(undefined4 *)(iVar1 + 0xe) = *param_4;
  *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_4 + 1);
  *(undefined2 *)(param_1[1] + 0x1a) = param_7;
  *(undefined2 *)(param_1[1] + 0x1c) = param_8;
  *(undefined2 *)(param_1[1] + 0x1e) = param_9;
  *(undefined2 *)(param_1[1] + 0x20) = param_10;
  *(undefined2 *)(param_1[1] + 0x22) = param_11;
  *(undefined2 *)(param_1[1] + 0x24) = param_12;
  *(undefined2 *)(param_1[1] + 0x26) = param_13;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  *(undefined2 *)(iVar1 + 0x18) = param_6;
  *(undefined2 *)(param_1[1] + 0x68) = param_15;
  *(undefined2 *)(param_1[1] + 0x6a) = param_16;
  *(undefined2 *)(param_1[1] + 0x6c) = param_17;
  *(undefined2 *)(param_1[1] + 0x6e) = param_18;
  *(undefined2 *)(param_1[1] + 0x70) = param_19;
  *(undefined2 *)(param_1[1] + 0x72) = param_20;
  *(undefined1 *)(param_1[1] + 0x74) = param_21;
  *(undefined4 *)(param_1[1] + 0x82) = param_22;
  *(undefined4 *)(param_1[1] + 0x76) = param_23;
  *(undefined4 *)(param_1[1] + 0x7a) = param_24;
  *(undefined4 *)(param_1[1] + 0x7e) = param_25;
  _strncpy((char *)(param_1[1] + 0x28),param_14,0x3f);
  *(undefined1 *)(param_1[1] + 0x67) = 0;
  ExceptionList = local_c;
  return param_1;
}


