// FUN_00648ea0 @ 648ea0 size=256

void __fastcall FUN_00648ea0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint local_1c;
  undefined4 local_14;
  undefined2 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d27ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0xc);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x16);
    puVar4 = operator_new(0xe);
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
    *puVar3 = &PTR_FUN_007e3e5c;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *puVar4 = 0x117;
    iVar2 = puVar3[1];
    local_1c = (uint)puVar3 & 0xff000000;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 4);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar1 + 8);
    iVar1 = puVar3[1];
    *(uint *)(iVar1 + 2) = local_1c;
    *(undefined2 *)(iVar1 + 6) = 0;
    *puVar3 = &PTR_FUN_007e3e3c;
  }
  local_4 = 0xffffffff;
  local_14 = *(undefined4 *)(DAT_00893530 + 0x14);
  local_10 = *(undefined2 *)(DAT_00893530 + 0x18);
  FUN_0042dc20(10);
  FUN_00565af0(puVar3,&local_14);
  ExceptionList = local_c;
  return;
}


