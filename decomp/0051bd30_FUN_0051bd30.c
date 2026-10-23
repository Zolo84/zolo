// FUN_0051bd30 @ 51bd30 size=351

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051bd30(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined2 local_20;
  uint local_1c;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c1f7b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x264) != 0) {
    ExceptionList = &local_c;
    FUN_0050bca0(param_1);
    FUN_0050bba0(param_1,1,*(undefined4 *)(param_1 + 0xc));
    puVar4 = operator_new(0xc);
    local_4 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      local_14 = local_14 & 0xff000000;
      puVar5 = operator_new(0x1e);
      if (puVar5 == (undefined2 *)0x0) {
        puVar5 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d2d0();
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 5) = 0;
        puVar5[7] = 0;
        *(undefined4 *)(puVar5 + 8) = 0;
        puVar5[0xe] = 0;
        *(undefined1 *)(puVar5 + 0xd) = 0;
        *(undefined1 *)((int)puVar5 + 0x19) = 0;
        *(undefined1 *)(puVar5 + 0xc) = 0;
      }
      puVar4[1] = puVar5;
      *(undefined1 *)(puVar4 + 2) = 0;
      *(undefined1 *)((int)puVar4 + 9) = 1;
      *puVar4 = &PTR_FUN_007e77e4;
      *(undefined1 *)((int)puVar4 + 10) = 0;
      *puVar5 = 0x34;
      iVar3 = puVar4[1];
      local_1c = (uint)puVar4 & 0xff000000;
      *(undefined4 *)(iVar3 + 8) = _DAT_0088f24c;
      *(undefined2 *)(iVar3 + 0xc) = DAT_0088f24e._2_2_;
      iVar3 = puVar4[1];
      *(uint *)(iVar3 + 2) = local_1c;
      *(undefined2 *)(iVar3 + 6) = 0;
      iVar3 = puVar4[1];
      local_20 = (undefined2)uVar2;
      *puVar4 = &PTR_FUN_007e7804;
      *(undefined2 *)(iVar3 + 0x14) = local_20;
      *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(param_1 + 0x18);
      uVar1 = *(undefined2 *)(param_1 + 0x1c);
      *(undefined1 *)(iVar3 + 0x16) = 1;
      *(undefined2 *)(iVar3 + 0x12) = uVar1;
      *(uint *)(iVar3 + 0x18) = local_14;
      *(undefined2 *)(iVar3 + 0x1c) = 0;
    }
    local_4 = 0xffffffff;
    FUN_00565c30(puVar4);
  }
  ExceptionList = local_c;
  return;
}


