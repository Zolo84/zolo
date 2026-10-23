// FUN_0042cf30 @ 42cf30 size=862

void __thiscall FUN_0042cf30(int param_1,undefined4 param_2)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  undefined4 local_1c;
  undefined2 local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba182;
  local_c = ExceptionList;
  sVar4 = *(short *)(param_1 + 0x18);
  cVar2 = *(char *)(param_1 + 0x16);
  cVar3 = *(char *)(param_1 + 0x15);
  puVar1 = (uint *)(param_1 + 0x14);
  ExceptionList = &local_c;
  FUN_0042db80(param_2);
  local_18 = 0xbb9;
  local_1c = (uint)local_1c._3_1_ << 0x18;
  cVar7 = FUN_0042dd70(&local_1c);
  if (cVar7 == '\0') {
    local_18 = 1;
    local_1c = (uint)local_1c._3_1_ << 0x18;
    cVar7 = FUN_0042ddd0(&local_1c);
    if (cVar7 == '\0') {
      local_1c = local_1c & 0xff000000;
      *puVar1 = local_1c;
      *(undefined2 *)(param_1 + 0x18) = 1;
    }
    if (cVar3 != *(char *)(param_1 + 0x15)) {
      puVar8 = operator_new(0xc);
      local_4 = 0;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        local_1c = *puVar1;
        local_18 = *(undefined2 *)(param_1 + 0x18);
        FUN_0042d560(0x18,&DAT_0088f29c);
        iVar5 = puVar8[1];
        *puVar8 = &PTR_FUN_007e3e9c;
        *(uint *)(iVar5 + 0xe) = local_1c;
        *(undefined2 *)(iVar5 + 0x12) = local_18;
      }
      local_4 = 0xffffffff;
      FUN_00565c30(puVar8);
    }
    if (cVar2 != *(char *)(param_1 + 0x16)) {
      puVar8 = operator_new(0xc);
      local_4 = 1;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        local_1c = *puVar1;
        local_18 = *(undefined2 *)(param_1 + 0x18);
        FUN_0042d560(0x19,&DAT_0088f29c);
        iVar5 = puVar8[1];
        *puVar8 = &PTR_FUN_007e3e9c;
        *(uint *)(iVar5 + 0xe) = local_1c;
        *(undefined2 *)(iVar5 + 0x12) = local_18;
      }
      local_4 = 0xffffffff;
      FUN_00565c30(puVar8);
    }
    if (sVar4 != *(short *)(param_1 + 0x18)) {
      puVar8 = operator_new(0xc);
      local_4 = 2;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        local_18 = *(undefined2 *)(param_1 + 0x18);
        uVar6 = *puVar1;
        pvVar9 = operator_new(0x14);
        local_4._0_1_ = 3;
        if (pvVar9 == (void *)0x0) {
          pvVar9 = (void *)0x0;
        }
        else {
          FUN_0042d6c0();
          FUN_0042d2d0();
        }
        local_4._0_1_ = 2;
        FUN_0042d320(pvVar9);
        *puVar8 = &PTR_FUN_007e3e7c;
        *(undefined1 *)((int)puVar8 + 10) = 0;
        *(undefined2 *)puVar8[1] = 0x1a;
        iVar5 = puVar8[1];
        *(undefined4 *)(iVar5 + 8) = DAT_0088f29c;
        local_4 = CONCAT31(local_4._1_3_,4);
        *(undefined2 *)(iVar5 + 0xc) = DAT_0088f2a0;
        puVar10 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar5 = puVar8[1];
        *(undefined4 *)(iVar5 + 2) = *puVar10;
        *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(puVar10 + 1);
        iVar5 = puVar8[1];
        *puVar8 = &PTR_FUN_007e3e9c;
        *(uint *)(iVar5 + 0xe) = uVar6;
        *(undefined2 *)(iVar5 + 0x12) = local_18;
      }
      local_4 = 0xffffffff;
      FUN_00565c30(puVar8);
      puVar8 = operator_new(0xc);
      local_4 = 5;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar11 = operator_new(0xe);
        local_4._0_1_ = 6;
        if (puVar11 == (undefined2 *)0x0) {
          puVar11 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d2d0();
          puVar11[4] = 0;
          *(undefined4 *)(puVar11 + 5) = 0;
        }
        puVar8[1] = puVar11;
        *(undefined1 *)(puVar8 + 2) = 0;
        *(undefined1 *)((int)puVar8 + 9) = 1;
        *puVar8 = &PTR_FUN_007e3e5c;
        *(undefined1 *)((int)puVar8 + 10) = 0;
        *puVar11 = 0x9c;
        iVar5 = puVar8[1];
        *(undefined4 *)(iVar5 + 8) = DAT_0088f29c;
        *(undefined2 *)(iVar5 + 0xc) = DAT_0088f2a0;
        local_4 = CONCAT31(local_4._1_3_,7);
        puVar10 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar5 = puVar8[1];
        *(undefined4 *)(iVar5 + 2) = *puVar10;
        *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(puVar10 + 1);
        *puVar8 = &PTR_FUN_007e3e3c;
      }
      local_4 = 0xffffffff;
      FUN_00565c30(puVar8);
    }
  }
  else {
    local_1c = (uint)local_1c._3_1_ << 0x18;
    *puVar1 = local_1c;
    *(undefined2 *)(param_1 + 0x18) = 0xbb9;
  }
  ExceptionList = local_c;
  return;
}


