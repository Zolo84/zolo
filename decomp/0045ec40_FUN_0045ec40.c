// FUN_0045ec40 @ 45ec40 size=419

void __thiscall FUN_0045ec40(int param_1,int param_2,int param_3,char param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc246;
  local_c = ExceptionList;
  local_14 = DAT_0088f28c;
  uStack_12 = (undefined2)DAT_0088f28e;
  uStack_10 = (undefined2)((uint)DAT_0088f28e >> 0x10);
  if (param_3 == 0) {
    local_18 = uStack_10;
    if (param_4 == '\0') {
      uStack_1a = (undefined2)DAT_0088f25e;
      local_18 = (undefined2)((uint)DAT_0088f25e >> 0x10);
      local_14 = DAT_0088f25c;
      uStack_12 = uStack_1a;
    }
  }
  else if (*(char *)(param_3 + 0x161) == '\0') {
    local_14 = 3;
    uVar1 = *(undefined4 *)(*(int *)(param_3 + 0x5c) + 6);
    uStack_12 = (undefined2)uVar1;
    uStack_10 = (undefined2)((uint)uVar1 >> 0x10);
    local_18 = uStack_10;
  }
  else {
    local_14 = (undefined2)*(undefined4 *)(param_3 + 0xc);
    uStack_12 = (undefined2)((uint)*(undefined4 *)(param_3 + 0xc) >> 0x10);
    local_18 = *(undefined2 *)(param_3 + 0x10);
  }
  ExceptionList = &local_c;
  puVar3 = operator_new(0xc);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar4 = operator_new(0x20);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar4 == (undefined2 *)0x0) {
      puVar4 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d6c0();
      puVar4[7] = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      puVar4[10] = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
    }
    puVar3[1] = puVar4;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 1;
    *puVar3 = &PTR_FUN_007e61a0;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *puVar4 = 0x6c;
    iVar2 = puVar3[1];
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 4);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(param_1 + 8);
    puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar2 = puVar3[1];
    *(undefined4 *)(iVar2 + 2) = *puVar5;
    *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar5 + 1);
    iVar2 = puVar3[1];
    *puVar3 = &PTR_FUN_007e6180;
    *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(param_2 + 0xc);
    *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(param_2 + 0x10);
    iVar2 = puVar3[1];
    *(uint *)(iVar2 + 0x14) = CONCAT22(uStack_12,local_14);
    *(undefined2 *)(iVar2 + 0x18) = local_18;
    *(char *)(puVar3[1] + 0x1a) = param_4;
    *(undefined4 *)(puVar3[1] + 0x1c) = param_5;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar3);
  ExceptionList = local_c;
  return;
}


