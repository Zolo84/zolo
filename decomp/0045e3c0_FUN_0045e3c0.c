// FUN_0045e3c0 @ 45e3c0 size=216

void FUN_0045e3c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc15b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0xc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0xe);
    if (puVar3 == (undefined2 *)0x0) {
      puVar3 = (undefined2 *)0x0;
    }
    else {
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      *(undefined1 *)((int)puVar3 + 3) = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
    }
    puVar2[1] = puVar3;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 1;
    *puVar2 = &PTR_FUN_007e3e5c;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *puVar3 = 0xf7;
    iVar1 = puVar2[1];
    local_14 = (uint)puVar2 & 0xff000000;
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0xc);
    *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_1 + 0x10);
    iVar1 = puVar2[1];
    *(uint *)(iVar1 + 2) = local_14;
    *(undefined2 *)(iVar1 + 6) = 0;
    *puVar2 = &PTR_FUN_007e3e3c;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar2);
  ExceptionList = local_c;
  return;
}


