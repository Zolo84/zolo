// FUN_0045d580 @ 45d580 size=560

void __thiscall
FUN_0045d580(int param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined1 param_8,int param_9,int param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbfbc;
  local_c = ExceptionList;
  if (param_9 == 0) {
    param_9 = *(int *)(param_1 + 6);
  }
  if (param_10 == 0) {
    param_10 = *(int *)(param_1 + 6);
  }
  ExceptionList = &local_c;
  puVar4 = operator_new(0xc);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_5 + 0x12);
    uVar2 = *(undefined4 *)(param_4 + 0x12);
    pvVar5 = operator_new(0x2e);
    local_4._0_1_ = 1;
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00466750();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0042d320(uVar6);
    *puVar4 = &PTR_FUN_007e60a0;
    *(undefined1 *)((int)puVar4 + 10) = 0;
    *(undefined2 *)puVar4[1] = 0x87;
    iVar3 = puVar4[1];
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 4);
    *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(param_1 + 8);
    puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar3 = puVar4[1];
    *(undefined4 *)(iVar3 + 2) = *puVar7;
    *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar7 + 1);
    iVar3 = puVar4[1];
    *puVar4 = &PTR_FUN_007e6080;
    *(undefined4 *)(iVar3 + 0xe) = param_2;
    *(undefined2 *)(iVar3 + 0x12) = param_3;
    *(undefined4 *)(puVar4[1] + 0x14) = param_6;
    *(undefined4 *)(puVar4[1] + 0x18) = param_7;
    *(undefined4 *)(puVar4[1] + 0x1c) = uVar2;
    *(undefined4 *)(puVar4[1] + 0x20) = uVar1;
    *(undefined1 *)(puVar4[1] + 0x24) = param_8;
    *(int *)(puVar4[1] + 0x26) = param_9;
    *(int *)(puVar4[1] + 0x2a) = param_10;
  }
  local_4 = 0xffffffff;
  FUN_00565ca0(puVar4);
  puVar4 = operator_new(0xc);
  local_4 = 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0x18);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (puVar8 == (undefined2 *)0x0) {
      puVar8 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d6c0();
      puVar8[7] = 0;
      *(undefined4 *)(puVar8 + 8) = 0;
    }
    puVar4[1] = puVar8;
    *(undefined1 *)(puVar4 + 2) = 0;
    *(undefined1 *)((int)puVar4 + 9) = 1;
    *puVar4 = &PTR_FUN_007e6060;
    *(undefined1 *)((int)puVar4 + 10) = 0;
    *puVar8 = 0xf3;
    iVar3 = puVar4[1];
    *(undefined4 *)(iVar3 + 8) = DAT_0088f230;
    *(undefined2 *)(iVar3 + 0xc) = DAT_0088f234;
    puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar3 = puVar4[1];
    *(undefined4 *)(iVar3 + 2) = *puVar7;
    *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar7 + 1);
    iVar3 = puVar4[1];
    *puVar4 = &PTR_FUN_007e6040;
    *(undefined4 *)(iVar3 + 0xe) = param_2;
    *(undefined2 *)(iVar3 + 0x12) = param_3;
    *(undefined4 *)(puVar4[1] + 0x14) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00565cc0(puVar4);
  ExceptionList = local_c;
  return;
}


