// FUN_004b94d0 @ 4b94d0 size=370

void __fastcall FUN_004b94d0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined4 local_14;
  undefined2 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007be85e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar5 = (undefined4 *)FUN_0042e8c0();
  local_14 = *puVar5;
  local_10 = *(undefined2 *)(puVar5 + 1);
  FUN_0042db80(1);
  puVar5 = operator_new(0xc);
  local_4 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x74);
    uVar3 = *(undefined4 *)(DAT_00893530 + 0x14);
    uVar1 = *(undefined2 *)(DAT_00893530 + 0x18);
    puVar6 = operator_new(0x1e);
    local_4._0_1_ = 1;
    if (puVar6 == (undefined2 *)0x0) {
      puVar6 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar6[4] = 0;
      *(undefined4 *)(puVar6 + 5) = 0;
      puVar6[9] = 0;
      *(undefined4 *)(puVar6 + 10) = 0;
      FUN_0042d2d0();
    }
    puVar5[1] = puVar6;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 1;
    *puVar5 = &PTR_FUN_007e7638;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    *puVar6 = 0x22;
    iVar4 = puVar5[1];
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0xc);
    local_4 = CONCAT31(local_4._1_3_,2);
    *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(param_1 + 0x10);
    puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar4 = puVar5[1];
    *(undefined4 *)(iVar4 + 2) = *puVar7;
    *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar7 + 1);
    *puVar5 = &PTR_FUN_007e7618;
    *(undefined4 *)(puVar5[1] + 0xe) = uVar2;
    iVar4 = puVar5[1];
    *(undefined4 *)(iVar4 + 0x12) = *(undefined4 *)(param_1 + 0xc);
    *(undefined2 *)(iVar4 + 0x16) = *(undefined2 *)(param_1 + 0x10);
    iVar4 = puVar5[1];
    *(undefined4 *)(iVar4 + 0x18) = uVar3;
    *(undefined2 *)(iVar4 + 0x1c) = uVar1;
  }
  local_4 = 0xffffffff;
  FUN_00565af0(puVar5,&local_14);
  ExceptionList = local_c;
  return;
}


