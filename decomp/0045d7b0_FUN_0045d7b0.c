// FUN_0045d7b0 @ 45d7b0 size=323

void __thiscall FUN_0045d7b0(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined2 uStack_12;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbfe6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0xc);
  uVar2 = DAT_0088f28c;
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uStack_12 = (undefined2)DAT_0088f28e;
    uStack_10 = (undefined2)((uint)DAT_0088f28e >> 0x10);
    puVar4 = operator_new(0x20);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar4 == (undefined2 *)0x0) {
      puVar4 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d6c0();
      puVar4[7] = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      puVar4[0xd] = 0;
      *(undefined4 *)(puVar4 + 0xe) = 0;
    }
    puVar3[1] = puVar4;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 1;
    *puVar3 = &PTR_FUN_007e5e5c;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *puVar4 = 0x1ae;
    iVar1 = puVar3[1];
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 4);
    *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_1 + 8);
    puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar1 = puVar3[1];
    *(undefined4 *)(iVar1 + 2) = *puVar5;
    *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar5 + 1);
    iVar1 = puVar3[1];
    *puVar3 = &PTR_FUN_007e5370;
    *(undefined4 *)(iVar1 + 0xe) = *(undefined4 *)(param_2 + 0x18);
    *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_2 + 0x1c);
    *(undefined1 *)(puVar3[1] + 0x14) = 1;
    *(undefined1 *)(puVar3[1] + 0x15) = 0;
    *(undefined4 *)(puVar3[1] + 0x16) = 0;
    iVar1 = puVar3[1];
    *(uint *)(iVar1 + 0x1a) = CONCAT22(uStack_12,uVar2);
    *(undefined2 *)(iVar1 + 0x1e) = uStack_10;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar3);
  ExceptionList = local_c;
  return;
}


