// FUN_0057d8e0 @ 57d8e0 size=308

void __fastcall FUN_0057d8e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8bcb;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x37b) != '\0') {
    ExceptionList = &local_c;
    puVar5 = operator_new(0xc);
    local_4 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      iVar1 = *(int *)(param_1 + 900);
      uVar4 = FUN_0042e980();
      uVar2 = *(undefined4 *)(param_1 + 0x3cc + iVar1 * 0x3e);
      uVar3 = *(undefined4 *)(param_1 + 0x3b0 + iVar1 * 0x3e);
      puVar6 = operator_new(0x18);
      if (puVar6 == (undefined2 *)0x0) {
        puVar6 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d2d0();
        puVar6[4] = 0;
        *(undefined4 *)(puVar6 + 5) = 0;
      }
      puVar5[1] = puVar6;
      *(undefined1 *)(puVar5 + 2) = 0;
      *(undefined1 *)((int)puVar5 + 9) = 1;
      *puVar5 = &PTR_FUN_007ea35c;
      *(undefined1 *)((int)puVar5 + 10) = 0;
      *puVar6 = 3;
      iVar1 = puVar5[1];
      local_14 = (uint)puVar5 & 0xff000000;
      *(undefined4 *)(iVar1 + 8) = DAT_0088f29c;
      *(undefined2 *)(iVar1 + 0xc) = DAT_0088f2a0;
      iVar1 = puVar5[1];
      *(uint *)(iVar1 + 2) = local_14;
      *(undefined2 *)(iVar1 + 6) = 0;
      *puVar5 = &PTR_FUN_007ea2fc;
      *(undefined4 *)(puVar5[1] + 0xe) = uVar3;
      *(undefined4 *)(puVar5[1] + 0x12) = uVar2;
      *(undefined1 *)(puVar5[1] + 0x16) = uVar4;
    }
    local_4 = 0xffffffff;
    FUN_00565c70(puVar5);
  }
  ExceptionList = local_c;
  return;
}


