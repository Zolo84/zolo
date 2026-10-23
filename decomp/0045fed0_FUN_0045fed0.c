// FUN_0045fed0 @ 45fed0 size=300

undefined1 __thiscall FUN_0045fed0(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc45b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = FUN_0049f7c0(param_2);
  if (cVar2 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  puVar3 = operator_new(0xc);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar4 = operator_new(0x16);
    if (puVar4 == (undefined2 *)0x0) {
      puVar4 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[7] = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
    }
    puVar3[1] = puVar4;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 1;
    *puVar3 = &PTR_FUN_007e6300;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *puVar4 = 0x36;
    iVar1 = puVar3[1];
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 4);
    local_14 = (uint)puVar3 & 0xff000000;
    *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_1 + 8);
    iVar1 = puVar3[1];
    *(uint *)(iVar1 + 2) = local_14;
    *(undefined2 *)(iVar1 + 6) = 0;
    iVar1 = puVar3[1];
    *puVar3 = &PTR_FUN_007e62e0;
    *(undefined4 *)(iVar1 + 0xe) = *(undefined4 *)(param_2 + 0x18);
    *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_2 + 0x1c);
    *(undefined2 *)(puVar3[1] + 0x14) = param_3;
  }
  local_4 = 0xffffffff;
  FUN_00565ca0(puVar3);
  ExceptionList = local_c;
  return 1;
}


