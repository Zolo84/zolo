// FUN_00461bc0 @ 461bc0 size=258

void __thiscall FUN_00461bc0(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc72b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0xc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0x18);
    if (puVar3 == (undefined2 *)0x0) {
      puVar3 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[7] = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
    }
    puVar2[1] = puVar3;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 1;
    *puVar2 = &PTR_FUN_007e53b8;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *puVar3 = 0xf6;
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 4);
    local_14 = (uint)puVar2 & 0xff000000;
    *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_1 + 8);
    iVar1 = puVar2[1];
    *(uint *)(iVar1 + 2) = local_14;
    *(undefined2 *)(iVar1 + 6) = 0;
    iVar1 = puVar2[1];
    *puVar2 = &PTR_FUN_007e5398;
    *(undefined4 *)(iVar1 + 0xe) = param_2;
    *(undefined2 *)(iVar1 + 0x12) = param_3;
    *(undefined4 *)(puVar2[1] + 0x14) = param_4;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar2);
  ExceptionList = local_c;
  return;
}


