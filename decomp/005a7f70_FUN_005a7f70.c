// FUN_005a7f70 @ 5a7f70 size=622

void __fastcall FUN_005a7f70(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  int *local_30;
  int local_24;
  int *local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007cb241;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar4 = FUN_004136a0();
  local_20 = &DAT_00d8a04e;
  local_1c = 0x158;
  do {
    iVar11 = 0x19;
    piVar5 = local_20;
    while (*piVar5 == 0) {
      iVar11 = iVar11 + 1;
      piVar5 = piVar5 + 1;
      if (0x24 < iVar11) goto LAB_005a819c;
    }
    puVar6 = operator_new(0x50);
    local_c = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *(undefined4 *)((int)puVar6 + 0x32) = 0;
      *(undefined4 *)((int)puVar6 + 0x36) = 0xd;
      *(undefined4 *)((int)puVar6 + 0x3a) = 0;
      pvVar7 = operator_new(0x34);
      *(void **)((int)puVar6 + 0x2e) = pvVar7;
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_00433f00();
      *(undefined4 *)((int)puVar6 + 0x3e) = uVar4;
      *(int *)((int)puVar6 + 0x42) = param_1;
      *(undefined2 *)((int)puVar6 + 0x4a) = 0;
      puVar6[0x13] = 0;
      *puVar6 = &PTR_FUN_007eb380;
      puVar6[2] = &PTR_LAB_007eb37c;
    }
    local_c = 0xffffffff;
    pvVar7 = operator_new(0x108);
    local_c = 2;
    if (pvVar7 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_0058eef0();
    }
    local_c = 0xffffffff;
    if (*(int *)((int)puVar6 + 0x32) < *(int *)((int)puVar6 + 0x36)) {
      *(undefined4 *)(*(int *)((int)puVar6 + 0x2e) + *(int *)((int)puVar6 + 0x32) * 4) = uVar8;
      *(int *)((int)puVar6 + 0x32) = *(int *)((int)puVar6 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    local_24 = 0xc;
    local_30 = local_20;
    do {
      pcVar9 = operator_new(0x108);
      if (pcVar9 == (char *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        uVar12 = 0xffffffff;
        iVar11 = *local_30;
        *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
        pcVar15 = &DAT_0083bf04;
        do {
          pcVar14 = pcVar15;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar15 + 1;
          cVar1 = *pcVar15;
          pcVar15 = pcVar14;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        pcVar14 = pcVar14 + -uVar12;
        pcVar15 = pcVar9;
        for (uVar13 = uVar12 >> 2; pcVar15 = pcVar15 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar15 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar15 = pcVar15 + 1;
        }
        *(float *)(pcVar9 + 0x104) = (float)iVar11;
        *(undefined ***)pcVar9 = &PTR_LAB_007eb304;
        FUN_007a630a(pcVar9 + 8,&PTR_PTR_0083c9e8,(double)iVar11);
      }
      if (*(int *)((int)puVar6 + 0x32) < *(int *)((int)puVar6 + 0x36)) {
        *(char **)(*(int *)((int)puVar6 + 0x2e) + *(int *)((int)puVar6 + 0x32) * 4) = pcVar9;
        *(int *)((int)puVar6 + 0x32) = *(int *)((int)puVar6 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      local_30 = local_30 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
    iVar11 = *(int *)(param_1 + 0x15a);
    iVar2 = *(int *)(iVar11 + 8);
    puVar10 = operator_new(0xe);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      *puVar10 = puVar6;
      puVar10[1] = iVar2;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0;
    }
    iVar3 = *(int *)(iVar11 + 0xc);
    *(undefined4 **)(iVar11 + 8) = puVar10;
    *(int *)(iVar11 + 0xc) = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined4 **)(iVar11 + 4) = puVar10;
    }
    else {
      *(undefined4 **)(iVar2 + 8) = puVar10;
    }
LAB_005a819c:
    local_20 = local_20 + 0x25;
    local_1c = local_1c + -1;
    if (local_1c == 0) {
      FUN_005917f0();
      ExceptionList = local_14;
      return;
    }
  } while( true );
}


