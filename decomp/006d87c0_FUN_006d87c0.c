// FUN_006d87c0 @ 6d87c0 size=630

undefined4 __fastcall FUN_006d87c0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  bool bVar12;
  undefined4 uVar13;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9621;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x2220a) == 0) {
    puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x2220e) + 0x20);
    uVar7 = *puVar8;
    iVar11 = 0;
    do {
      puVar8 = (undefined4 *)puVar8[2];
      bVar12 = iVar11 != 0;
      iVar11 = iVar11 + -1;
    } while (bVar12);
    uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x2220e) + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 6);
    ExceptionList = &local_c;
    uVar6 = FUN_0042b6c9(*puVar8);
    uVar7 = FUN_0042b6c9(uVar7);
    FUN_006eab80(0,uVar1,&DAT_0088ebf8,uVar7,uVar6,uVar13);
    puVar8 = operator_new(0xc);
    local_4 = 0;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      uVar7 = *(undefined4 *)(DAT_00bd1500 + 900);
      FUN_006d9a20(0xae,&DAT_0088f29c);
      *puVar8 = &PTR_FUN_007e9cdc;
      *(undefined4 *)(puVar8[1] + 0xe) = uVar7;
    }
    local_4 = 0xffffffff;
    FUN_00565c50(puVar8);
    *(undefined4 *)(param_1 + 0x2220a) = DAT_0089c0c0;
  }
  else {
    ExceptionList = &local_c;
    cVar5 = (**(code **)(*(int *)(DAT_00d13360 + 0x12) + 0x24))(*(int *)(param_1 + 0x2220a));
    if (cVar5 == '\0') {
      iVar11 = *(int *)(param_1 + 0x2220e);
      puVar8 = *(undefined4 **)(iVar11 + 0x20);
      while (puVar8 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar8[2];
        FUN_00796cd8(*puVar8);
        FUN_00796cd8(puVar8);
        puVar8 = puVar2;
      }
      *(undefined4 *)(iVar11 + 0x20) = 0;
      *(undefined4 *)(iVar11 + 0x24) = 0;
      *(undefined4 *)(iVar11 + 0x28) = 0;
      iVar11 = *(int *)(param_1 + 0x2220e);
      if (iVar11 != 0) {
        *(undefined ***)(iVar11 + 0x1c) = &PTR_LAB_007e3b70;
        iVar4 = *(int *)(iVar11 + 0x20);
        while (iVar4 != 0) {
          iVar3 = *(int *)(iVar4 + 8);
          FUN_00796cd8(iVar4);
          iVar4 = iVar3;
        }
        *(undefined4 *)(iVar11 + 0x20) = 0;
        *(undefined4 *)(iVar11 + 0x24) = 0;
        *(undefined4 *)(iVar11 + 0x28) = 0;
        *(undefined ***)(iVar11 + 4) = &PTR_LAB_007e378c;
        iVar4 = *(int *)(iVar11 + 8);
        while (iVar4 != 0) {
          iVar3 = *(int *)(iVar4 + 8);
          FUN_00796cd8(iVar4);
          iVar4 = iVar3;
        }
        *(undefined4 *)(iVar11 + 8) = 0;
        *(undefined4 *)(iVar11 + 0xc) = 0;
        *(undefined4 *)(iVar11 + 0x10) = 0;
        FUN_00796cd8(iVar11);
      }
      *(undefined4 *)(param_1 + 0x2220e) = 0;
      *(undefined4 *)(param_1 + 0x2220a) = 0;
      puVar8 = operator_new(0xc);
      local_4 = 1;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar7 = *(undefined4 *)(DAT_00bd1500 + 900);
        puVar9 = operator_new(0x12);
        local_4 = CONCAT31(local_4._1_3_,2);
        if (puVar9 == (undefined2 *)0x0) {
          puVar10 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d6c0();
          puVar10 = puVar9;
        }
        puVar8[1] = puVar10;
        *(undefined1 *)(puVar8 + 2) = 0;
        *(undefined1 *)((int)puVar8 + 9) = 1;
        *puVar8 = &PTR_FUN_007e9cfc;
        *(undefined1 *)((int)puVar8 + 10) = 0;
        *puVar10 = 0xaf;
        iVar11 = puVar8[1];
        uStack_14 = (uint)puVar9 & 0xff000000;
        *(undefined4 *)(iVar11 + 8) = DAT_0088f29c;
        *(undefined2 *)(iVar11 + 0xc) = DAT_0088f2a0;
        iVar11 = puVar8[1];
        *(uint *)(iVar11 + 2) = uStack_14;
        *(undefined2 *)(iVar11 + 6) = 0;
        *puVar8 = &PTR_FUN_007e9cdc;
        *(undefined4 *)(puVar8[1] + 0xe) = uVar7;
      }
      local_4 = 0xffffffff;
      FUN_00565c50(puVar8);
    }
  }
  ExceptionList = local_c;
  return 1;
}


