// FUN_0075a550 @ 75a550 size=233

void __thiscall FUN_0075a550(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e00ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0xc);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xe);
    puVar4 = operator_new(0x12);
    if (puVar4 == (undefined2 *)0x0) {
      puVar4 = (undefined2 *)0x0;
    }
    else {
      puVar4[3] = 0;
      *(undefined1 *)(puVar4 + 2) = 0;
      *(undefined1 *)((int)puVar4 + 3) = 0;
      *(undefined1 *)(puVar4 + 1) = 0;
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
    }
    puVar3[1] = puVar4;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 1;
    *puVar3 = &PTR_FUN_007e5f80;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *puVar4 = 0x180;
    iVar2 = puVar3[1];
    local_14 = (uint)puVar3 & 0xff000000;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 4);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(param_2 + 8);
    iVar2 = puVar3[1];
    *(uint *)(iVar2 + 2) = local_14;
    *(undefined2 *)(iVar2 + 6) = 0;
    *puVar3 = &PTR_FUN_007e5f60;
    *(undefined4 *)(puVar3[1] + 0xe) = uVar1;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar3);
  ExceptionList = local_c;
  return;
}


