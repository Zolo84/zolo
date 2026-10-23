// FUN_005a8310 @ 5a8310 size=881

void __fastcall FUN_005a8310(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 uVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  undefined4 uStack_14;
  short sStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cb2b2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  piVar11 = DAT_00d96a46;
  do {
    if (piVar11 == (int *)0x0) {
      FUN_005917f0();
      ExceptionList = pvStack_c;
      return;
    }
    piVar2 = (int *)piVar11[2];
    puVar13 = (undefined4 *)*piVar11;
    puVar7 = operator_new(0x50);
    local_4 = 0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *(undefined4 *)((int)puVar7 + 0x32) = 0;
      *(undefined4 *)((int)puVar7 + 0x36) = 0xe;
      *(undefined4 *)((int)puVar7 + 0x3a) = 0;
      pvVar8 = operator_new(0x38);
      *(void **)((int)puVar7 + 0x2e) = pvVar8;
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00433f00();
      *(undefined4 *)((int)puVar7 + 0x3e) = uVar6;
      *(int *)((int)puVar7 + 0x42) = param_1;
      *(undefined2 *)((int)puVar7 + 0x4a) = 0;
      puVar7[0x13] = 0;
      *puVar7 = &PTR_FUN_007eb380;
      puVar7[2] = &PTR_LAB_007eb37c;
    }
    local_4 = 0xffffffff;
    pvVar8 = operator_new(0x108);
    local_4 = 2;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_0058eef0(*puVar13);
    }
    local_4 = 0xffffffff;
    if (*(int *)((int)puVar7 + 0x32) < *(int *)((int)puVar7 + 0x36)) {
      *(undefined4 *)(*(int *)((int)puVar7 + 0x2e) + *(int *)((int)puVar7 + 0x32) * 4) = uVar9;
      *(int *)((int)puVar7 + 0x32) = *(int *)((int)puVar7 + 0x32) + 1;
    }
    else {
      FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
    }
    pvVar8 = operator_new(0x108);
    local_4 = 3;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_0058eef0(puVar13[1]);
    }
    local_4 = 0xffffffff;
    if (*(int *)((int)puVar7 + 0x32) < *(int *)((int)puVar7 + 0x36)) {
      *(undefined4 *)(*(int *)((int)puVar7 + 0x2e) + *(int *)((int)puVar7 + 0x32) * 4) = uVar9;
      *(int *)((int)puVar7 + 0x32) = *(int *)((int)puVar7 + 0x32) + 1;
    }
    else {
      FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
    }
    pcVar10 = operator_new(0x104);
    local_4 = 4;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      piVar11 = (int *)FUN_004e9370(puVar13[2]);
      pcVar12 = (char *)(**(code **)(*piVar11 + 0xc))();
      uVar14 = 0xffffffff;
      *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
      pcVar17 = &DAT_0083bf04;
      do {
        pcVar16 = pcVar17;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar16 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar16;
      } while (cVar1 != '\0');
      uVar14 = ~uVar14;
      pcVar16 = pcVar16 + -uVar14;
      pcVar17 = pcVar10;
      for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar17 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar17 = pcVar17 + 1;
      }
      *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
      if (pcVar12 != (char *)0x0) {
        uVar14 = 0xffffffff;
        do {
          pcVar17 = pcVar12;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar17;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar12 = pcVar17 + -uVar14;
        pcVar17 = pcVar10 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
    }
    local_4 = 0xffffffff;
    if (*(int *)((int)puVar7 + 0x32) < *(int *)((int)puVar7 + 0x36)) {
      *(char **)(*(int *)((int)puVar7 + 0x2e) + *(int *)((int)puVar7 + 0x32) * 4) = pcVar10;
      *(int *)((int)puVar7 + 0x32) = *(int *)((int)puVar7 + 0x32) + 1;
    }
    else {
      FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
    }
    pcVar10 = operator_new(0x108);
    local_4 = 5;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      uVar14 = 0xffffffff;
      uVar9 = puVar13[3];
      sStack_10 = *(short *)(puVar13 + 4);
      *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
      pcVar12 = &DAT_0083bf04;
      do {
        pcVar17 = pcVar12;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar17 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar17;
      } while (cVar1 != '\0');
      uVar14 = ~uVar14;
      pcVar17 = pcVar17 + -uVar14;
      pcVar12 = pcVar10;
      for (uVar15 = uVar14 >> 2; pcVar12 = pcVar12 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      *(undefined ***)pcVar10 = &PTR_LAB_007eb7d8;
      uStack_14._2_1_ = (char)((uint)uVar9 >> 0x10);
      uStack_14._1_1_ = (char)((uint)uVar9 >> 8);
      *(int *)(pcVar10 + 0x104) =
           (int)uStack_14._1_1_ + ((int)uStack_14._2_1_ + sStack_10 * 0xc) * 0x1e;
      uStack_14 = uVar9;
      FUN_00791b3b(pcVar10 + 8,&uStack_14);
    }
    local_4 = 0xffffffff;
    if (*(int *)((int)puVar7 + 0x32) < *(int *)((int)puVar7 + 0x36)) {
      *(char **)(*(int *)((int)puVar7 + 0x2e) + *(int *)((int)puVar7 + 0x32) * 4) = pcVar10;
      *(int *)((int)puVar7 + 0x32) = *(int *)((int)puVar7 + 0x32) + 1;
    }
    else {
      FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
    }
    iVar3 = *(int *)(param_1 + 0x15a);
    iVar4 = *(int *)(iVar3 + 8);
    puVar13 = operator_new(0xe);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      *puVar13 = puVar7;
      puVar13[1] = iVar4;
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 0;
    }
    iVar5 = *(int *)(iVar3 + 0xc);
    *(undefined4 **)(iVar3 + 8) = puVar13;
    *(int *)(iVar3 + 0xc) = iVar5 + 1;
    piVar11 = piVar2;
    if (iVar5 == 0) {
      *(undefined4 **)(iVar3 + 4) = puVar13;
    }
    else {
      *(undefined4 **)(iVar4 + 8) = puVar13;
    }
  } while( true );
}


