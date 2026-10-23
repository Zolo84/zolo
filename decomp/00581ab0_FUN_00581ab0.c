// FUN_00581ab0 @ 581ab0 size=909

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00581ab0(void)

{
  int iVar1;
  int iVar2;
  LONG LVar3;
  LONG LVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  tagPOINT local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8dec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GetCursorPos(&local_14);
  if (DAT_00bd13f0 != '\0') {
    DAT_00bd13e0 = DAT_00bd13e0 + (local_14.x - DAT_00bd13d8);
    DAT_00bd13e4 = DAT_00bd13e4 + (local_14.y - DAT_00bd13dc);
    if (DAT_00bd13e0 < -99) {
      DAT_00bd13e0 = -100;
    }
    else if (99 < DAT_00bd13e0) {
      DAT_00bd13e0 = 100;
    }
    if (DAT_00bd13e4 < -99) {
      DAT_00bd13e4 = -100;
    }
    else if (99 < DAT_00bd13e4) {
      DAT_00bd13e4 = 100;
    }
    SetCursorPos(DAT_00bd13c0,DAT_00bd13c4);
    DAT_00bd13d8 = DAT_00bd13c0;
    DAT_00bd13dc = DAT_00bd13c4;
    ExceptionList = local_c;
    return;
  }
  local_14.y = local_14.y - DAT_00bd1534;
  local_14.x = local_14.x - DAT_00bd1530;
  if (local_14.x < 0) {
    local_14.x = 0;
  }
  if (local_14.y < 0) {
    local_14.y = 0;
  }
  if ((local_14.x != DAT_00bd13d8) || (local_14.y != DAT_00bd13dc)) {
    _DAT_00bd13cc = local_14.y - DAT_00bd13dc;
    _DAT_00bd13c8 = local_14.x - DAT_00bd13d8;
    puVar5 = operator_new(0xc);
    LVar4 = local_14.y;
    LVar3 = local_14.x;
    local_4 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      pvVar6 = operator_new(0x1e);
      local_4._0_1_ = 1;
      if (pvVar6 == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00581f50();
      }
      local_4._0_1_ = 0;
      FUN_0042d320(uVar7);
      *puVar5 = &PTR_FUN_007eae68;
      *(undefined1 *)((int)puVar5 + 10) = 0;
      *(undefined2 *)puVar5[1] = 0xd;
      iVar9 = puVar5[1];
      *(undefined4 *)(iVar9 + 8) = DAT_0088f29c;
      local_4 = CONCAT31(local_4._1_3_,2);
      *(undefined2 *)(iVar9 + 0xc) = DAT_0088f2a0;
      puVar8 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar9 = puVar5[1];
      *(undefined4 *)(iVar9 + 2) = *puVar8;
      *(undefined2 *)(iVar9 + 6) = *(undefined2 *)(puVar8 + 1);
      *puVar5 = &PTR_FUN_007eae48;
      *(undefined4 *)(puVar5[1] + 0xe) = 0;
      *(undefined4 *)(puVar5[1] + 0x12) = 0;
      iVar9 = puVar5[1];
      *(LONG *)(iVar9 + 0x16) = LVar3;
      *(LONG *)(iVar9 + 0x1a) = LVar4;
    }
    local_4 = 0xffffffff;
    FUN_00577f00(puVar5);
    DAT_00bd13f4 = *(undefined4 *)(DAT_00893530 + 0x20);
  }
  DAT_00bd13d0 = local_14.x;
  if (local_14.x < 0) {
    DAT_00bd13d0 = 0;
  }
  DAT_00bd13d4 = local_14.y;
  DAT_00bd13d8 = local_14.x;
  DAT_00bd13dc = local_14.y;
  iVar9 = FUN_005841a0();
  if (iVar9 + -1 < DAT_00bd13d0) {
    iVar9 = FUN_005841a0();
    DAT_00bd13d0 = iVar9 + -1;
  }
  if (DAT_00bd13d4 < 0) {
    DAT_00bd13d4 = 0;
  }
  iVar9 = FUN_005841b0();
  if (iVar9 + -1 < DAT_00bd13d4) {
    iVar9 = FUN_005841b0();
    DAT_00bd13d4 = iVar9 + -1;
  }
  if (DAT_00bd13ec != '\0') {
    puVar5 = operator_new(0xc);
    iVar2 = DAT_00bd13d4;
    iVar9 = DAT_00bd13d0;
    local_4 = 3;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar10 = operator_new(0x1e);
      local_4._0_1_ = 4;
      if (puVar10 == (undefined2 *)0x0) {
        puVar10 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d6c0();
      }
      puVar5[1] = puVar10;
      *(undefined1 *)(puVar5 + 2) = 0;
      *(undefined1 *)((int)puVar5 + 9) = 1;
      *puVar5 = &PTR_FUN_007eae68;
      *(undefined1 *)((int)puVar5 + 10) = 0;
      *puVar10 = 0x13;
      iVar1 = puVar5[1];
      *(undefined4 *)(iVar1 + 8) = DAT_0088f29c;
      *(undefined2 *)(iVar1 + 0xc) = DAT_0088f2a0;
      local_4 = CONCAT31(local_4._1_3_,5);
      puVar8 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar1 = puVar5[1];
      *(undefined4 *)(iVar1 + 2) = *puVar8;
      *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar8 + 1);
      *puVar5 = &PTR_FUN_007eae48;
      *(undefined4 *)(puVar5[1] + 0xe) = 0;
      *(undefined4 *)(puVar5[1] + 0x12) = 0;
      iVar1 = puVar5[1];
      *(int *)(iVar1 + 0x16) = iVar9;
      *(int *)(iVar1 + 0x1a) = iVar2;
    }
    local_4 = 0xffffffff;
    FUN_00577f00(puVar5);
  }
  ExceptionList = local_c;
  return;
}


