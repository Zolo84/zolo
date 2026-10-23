// FUN_0050bba0 @ 50bba0 size=245

void FUN_0050bba0(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c178b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0xc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0x12);
    if (puVar3 == (undefined2 *)0x0) {
      puVar3 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
    }
    puVar2[1] = puVar3;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 1;
    *puVar2 = &PTR_FUN_007e877c;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *puVar3 = 0x85;
    iVar1 = puVar2[1];
    local_14 = (uint)puVar2 & 0xff000000;
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x18);
    *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_1 + 0x1c);
    iVar1 = puVar2[1];
    *(uint *)(iVar1 + 2) = local_14;
    *(undefined2 *)(iVar1 + 6) = 0;
    *puVar2 = &PTR_FUN_007e875c;
    *(undefined2 *)(puVar2[1] + 0xe) = param_2;
    *(undefined2 *)(puVar2[1] + 0x10) = param_3;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar2);
  ExceptionList = local_c;
  return;
}


