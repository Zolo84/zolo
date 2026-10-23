// FUN_0045f240 @ 45f240 size=280

void __thiscall FUN_0045f240(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc2db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0xc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0x1a);
    if (puVar3 == (undefined2 *)0x0) {
      puVar3 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[7] = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
      puVar3[10] = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
    }
    puVar2[1] = puVar3;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 1;
    *puVar2 = &PTR_FUN_007e62a0;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *puVar3 = 0x185;
    iVar1 = puVar2[1];
    local_14 = (uint)puVar2 & 0xff000000;
    *(undefined4 *)(iVar1 + 8) = DAT_0088f238;
    *(undefined2 *)(iVar1 + 0xc) = DAT_0088f23c;
    iVar1 = puVar2[1];
    *(uint *)(iVar1 + 2) = local_14;
    *(undefined2 *)(iVar1 + 6) = 0;
    iVar1 = puVar2[1];
    *puVar2 = &PTR_FUN_007e6280;
    *(undefined4 *)(iVar1 + 0xe) = *(undefined4 *)(param_1 + 4);
    *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_1 + 8);
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(undefined2 *)(iVar1 + 0x18) = param_3;
  }
  local_4 = 0xffffffff;
  FUN_00565bf0(puVar2);
  ExceptionList = local_c;
  return;
}


