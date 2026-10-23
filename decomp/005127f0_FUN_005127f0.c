// FUN_005127f0 @ 5127f0 size=409

void FUN_005127f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined2 uStack_12;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c1a41;
  local_c = ExceptionList;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  ExceptionList = &local_c;
  puVar4 = operator_new(0xc);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00516380(0x85,param_1 + 0x18);
    *puVar4 = &PTR_FUN_007e875c;
    *(undefined2 *)(puVar4[1] + 0xe) = 0;
    *(short *)(puVar4[1] + 0x10) = (short)uVar1;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar4);
  puVar4 = operator_new(0xc);
  uVar3 = DAT_0088f28c;
  local_4 = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uStack_12 = (undefined2)DAT_0088f28e;
    uStack_10 = (undefined2)((uint)DAT_0088f28e >> 0x10);
    pvVar5 = operator_new(0x20);
    local_4._0_1_ = 2;
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      FUN_0042d6c0();
      *(undefined2 *)((int)pvVar5 + 0xe) = 0;
      *(undefined4 *)((int)pvVar5 + 0x10) = 0;
      *(undefined2 *)((int)pvVar5 + 0x1a) = 0;
      *(undefined4 *)((int)pvVar5 + 0x1c) = 0;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0042d320(pvVar5);
    *puVar4 = &PTR_FUN_007e5e5c;
    *(undefined1 *)((int)puVar4 + 10) = 0;
    *(undefined2 *)puVar4[1] = 0x30;
    iVar2 = puVar4[1];
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x18);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(param_1 + 0x1c);
    puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar2 = puVar4[1];
    *(undefined4 *)(iVar2 + 2) = *puVar6;
    *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar6 + 1);
    iVar2 = puVar4[1];
    *puVar4 = &PTR_FUN_007e5370;
    *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(param_1 + 0x18);
    *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar4[1] + 0x14) = 1;
    *(undefined1 *)(puVar4[1] + 0x15) = 0;
    *(undefined4 *)(puVar4[1] + 0x16) = 0;
    iVar2 = puVar4[1];
    *(uint *)(iVar2 + 0x1a) = CONCAT22(uStack_12,uVar3);
    *(undefined2 *)(iVar2 + 0x1e) = uStack_10;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar4);
  ExceptionList = local_c;
  return;
}


