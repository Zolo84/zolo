// FUN_00512660 @ 512660 size=389

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00512660(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint local_1c;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c1a16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0xc);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00516380(0x85,param_1 + 0x18);
    *puVar3 = &PTR_FUN_007e875c;
    *(undefined2 *)(puVar3[1] + 0xe) = 1;
    *(undefined2 *)(puVar3[1] + 0x10) = param_2;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar3);
  puVar3 = operator_new(0xc);
  local_4 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_14 = local_14 & 0xff000000;
    puVar4 = operator_new(0x1e);
    if (puVar4 == (undefined2 *)0x0) {
      puVar4 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[7] = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      FUN_0042d2d0();
    }
    puVar3[1] = puVar4;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 1;
    *puVar3 = &PTR_FUN_007e77e4;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *puVar4 = 0x34;
    iVar2 = puVar3[1];
    local_1c = (uint)puVar3 & 0xff000000;
    *(undefined4 *)(iVar2 + 8) = _DAT_0088f24c;
    *(undefined2 *)(iVar2 + 0xc) = DAT_0088f24e._2_2_;
    iVar2 = puVar3[1];
    *(uint *)(iVar2 + 2) = local_1c;
    *(undefined2 *)(iVar2 + 6) = 0;
    iVar2 = puVar3[1];
    *puVar3 = &PTR_FUN_007e7804;
    *(undefined2 *)(iVar2 + 0x14) = param_2;
    *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(param_1 + 0x18);
    uVar1 = *(undefined2 *)(param_1 + 0x1c);
    *(undefined1 *)(iVar2 + 0x16) = 1;
    *(undefined2 *)(iVar2 + 0x12) = uVar1;
    *(uint *)(iVar2 + 0x18) = local_14;
    *(undefined2 *)(iVar2 + 0x1c) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00565c30(puVar3);
  ExceptionList = local_c;
  return;
}


