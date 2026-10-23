// FUN_00410960 @ 410960 size=468

void __thiscall FUN_00410960(int param_1,char *param_2,undefined4 param_3,undefined2 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  void *pvVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9976;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar5 = operator_new(6);
  if (puVar5 == (undefined2 *)0x0) {
    puVar5 = (undefined2 *)0x0;
  }
  else {
    *puVar5 = param_4;
    *(undefined4 *)(puVar5 + 1) = param_3;
  }
  iVar2 = *(int *)(param_1 + 0x100);
  iVar3 = *(int *)(iVar2 + 0x86);
  puVar6 = operator_new(0xe);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = puVar5;
    puVar6[1] = iVar3;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
  }
  iVar4 = *(int *)(iVar2 + 0x8a);
  *(undefined4 **)(iVar2 + 0x86) = puVar6;
  *(int *)(iVar2 + 0x8a) = iVar4 + 1;
  if (iVar4 == 0) {
    *(undefined4 **)(iVar2 + 0x82) = puVar6;
  }
  else {
    *(undefined4 **)(iVar3 + 8) = puVar6;
  }
  pcVar7 = operator_new(0x106);
  local_4 = 0;
  local_10 = (char *)0x0;
  if (pcVar7 != (char *)0x0) {
    *(undefined2 *)(pcVar7 + 0x100) = param_4;
    uVar10 = 0xffffffff;
    do {
      pcVar12 = param_2;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar12 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar12;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar12 = pcVar12 + -uVar10;
    pcVar13 = pcVar7;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
    pvVar8 = operator_new(0x94);
    local_4._0_1_ = 1;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_0043f070(0x10,0x10,0);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *(undefined4 *)(pcVar7 + 0x102) = uVar9;
    puVar5 = operator_new(6);
    if (puVar5 == (undefined2 *)0x0) {
      _param_4 = (undefined2 *)0x0;
    }
    else {
      *(undefined4 *)(puVar5 + 1) = 0x42c80000;
      *puVar5 = param_4;
      _param_4 = puVar5;
    }
    iVar2 = *(int *)(pcVar7 + 0x102);
    iVar3 = *(int *)(iVar2 + 0x86);
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = iVar3;
      *puVar6 = _param_4;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar4 = *(int *)(iVar2 + 0x8a);
    *(undefined4 **)(iVar2 + 0x86) = puVar6;
    *(int *)(iVar2 + 0x8a) = iVar4 + 1;
    if (iVar4 == 0) {
      *(undefined4 **)(iVar2 + 0x82) = puVar6;
    }
    else {
      *(undefined4 **)(iVar3 + 8) = puVar6;
    }
    FUN_0043f2a0();
    local_10 = pcVar7;
  }
  local_4 = 0xffffffff;
  FUN_00410de0(*(undefined4 *)(param_1 + 0x10c),1,&local_10);
  ExceptionList = local_c;
  return;
}


