// FUN_0050a310 @ 50a310 size=270

void __fastcall FUN_0050a310(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c1656;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0xc);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x62);
    puVar4 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar4 == (undefined2 *)0x0) {
      puVar5 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d6c0();
      puVar4[7] = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      puVar5 = puVar4;
    }
    puVar3[1] = puVar5;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 1;
    *puVar3 = &PTR_FUN_007e68a0;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *puVar5 = 0x91;
    iVar2 = puVar3[1];
    local_14 = (uint)puVar4 & 0xff000000;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 4);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar1 + 8);
    iVar1 = puVar3[1];
    *(uint *)(iVar1 + 2) = local_14;
    *(undefined2 *)(iVar1 + 6) = 0;
    iVar1 = puVar3[1];
    *puVar3 = &PTR_FUN_007e6880;
    *(undefined4 *)(iVar1 + 0xe) = *(undefined4 *)(param_1 + 0x10);
    *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_1 + 0x14);
  }
  local_4 = 0xffffffff;
  FUN_00565b30(puVar3,DAT_00893530 + 0x14);
  ExceptionList = local_c;
  return;
}


