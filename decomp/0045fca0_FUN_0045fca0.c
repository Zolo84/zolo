// FUN_0045fca0 @ 45fca0 size=264

void __thiscall FUN_0045fca0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc426;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0xc);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 6);
    puVar4 = operator_new(0x1a);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar4 == (undefined2 *)0x0) {
      puVar5 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d6c0();
      puVar5 = puVar4;
    }
    puVar3[1] = puVar5;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 1;
    *puVar3 = &PTR_FUN_007e62c0;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *puVar5 = 0xff;
    iVar2 = puVar3[1];
    local_14 = (uint)puVar4 & 0xff000000;
    *(undefined4 *)(iVar2 + 8) = DAT_0088f2a4;
    *(undefined2 *)(iVar2 + 0xc) = DAT_0088f2a8;
    iVar2 = puVar3[1];
    *(uint *)(iVar2 + 2) = local_14;
    *(undefined2 *)(iVar2 + 6) = 0;
    *puVar3 = &PTR_FUN_007e6020;
    *(undefined4 *)(puVar3[1] + 0xe) = param_2;
    *(undefined4 *)(puVar3[1] + 0x12) = uVar1;
    *(undefined1 *)(puVar3[1] + 0x16) = 1;
    *(undefined1 *)(puVar3[1] + 0x17) = 0;
    *(undefined1 *)(puVar3[1] + 0x18) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00565bf0(puVar3);
  ExceptionList = local_c;
  return;
}


