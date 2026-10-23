// FUN_00598760 @ 598760 size=893

void __fastcall FUN_00598760(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  int *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007ca651;
  local_14 = ExceptionList;
  local_1c = &DAT_0089cad8;
  ExceptionList = &local_14;
  do {
    iVar6 = *local_1c;
    if (iVar6 != 0) {
      puVar2 = operator_new(0x50);
      local_c = 0;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = FUN_004136a0();
        FUN_00598ae0();
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_00433f00();
        *(undefined4 *)((int)puVar2 + 0x3e) = uVar3;
        *(int *)((int)puVar2 + 0x42) = param_1;
        *(undefined2 *)((int)puVar2 + 0x4a) = 0;
        puVar2[0x13] = 0;
        *puVar2 = &PTR_FUN_007eb380;
        puVar2[2] = &PTR_LAB_007eb37c;
      }
      local_c = 0xffffffff;
      pvVar4 = operator_new(0x108);
      local_c = 2;
      if (pvVar4 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0058eef0();
      }
      local_c = 0xffffffff;
      if (*(int *)((int)puVar2 + 0x32) < *(int *)((int)puVar2 + 0x36)) {
        *(undefined4 *)(*(int *)((int)puVar2 + 0x2e) + *(int *)((int)puVar2 + 0x32) * 4) = uVar3;
        *(int *)((int)puVar2 + 0x32) = *(int *)((int)puVar2 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      iVar12 = 0;
      iVar6 = *(int *)(iVar6 + 0xe8a4);
      while (iVar6 != 0) {
        iVar6 = *(int *)(iVar6 + 8);
        iVar5 = FUN_004e9370();
        iVar12 = iVar12 + *(int *)(iVar5 + 0x19e);
      }
      iVar6 = __ftol();
      pcVar7 = operator_new(0x108);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x0;
      }
      else {
        uVar9 = 0xffffffff;
        *(undefined ***)pcVar7 = &PTR_LAB_007eb264;
        pcVar13 = &DAT_0083bf04;
        do {
          pcVar11 = pcVar13;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar11 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar11;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar11 = pcVar11 + -uVar9;
        pcVar13 = pcVar7;
        for (uVar10 = uVar9 >> 2; pcVar13 = pcVar13 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        *(float *)(pcVar7 + 0x104) = (float)iVar12;
        *(undefined ***)pcVar7 = &PTR_LAB_007eb304;
        FUN_007a630a(pcVar7 + 8,&PTR_PTR_0083c9e8,(double)iVar12);
      }
      if (*(int *)((int)puVar2 + 0x32) < *(int *)((int)puVar2 + 0x36)) {
        *(char **)(*(int *)((int)puVar2 + 0x2e) + *(int *)((int)puVar2 + 0x32) * 4) = pcVar7;
        *(int *)((int)puVar2 + 0x32) = *(int *)((int)puVar2 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      pcVar7 = operator_new(0x108);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x0;
      }
      else {
        uVar9 = 0xffffffff;
        *(undefined ***)pcVar7 = &PTR_LAB_007eb264;
        pcVar13 = &DAT_0083bf04;
        do {
          pcVar11 = pcVar13;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar11 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar11;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar11 = pcVar11 + -uVar9;
        pcVar13 = pcVar7;
        for (uVar10 = uVar9 >> 2; pcVar13 = pcVar13 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        *(float *)(pcVar7 + 0x104) = (float)iVar6;
        *(undefined ***)pcVar7 = &PTR_LAB_007eb304;
        FUN_007a630a(pcVar7 + 8,&PTR_PTR_0083c9e8,(double)iVar6);
      }
      if (*(int *)((int)puVar2 + 0x32) < *(int *)((int)puVar2 + 0x36)) {
        *(char **)(*(int *)((int)puVar2 + 0x2e) + *(int *)((int)puVar2 + 0x32) * 4) = pcVar7;
        *(int *)((int)puVar2 + 0x32) = *(int *)((int)puVar2 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      pcVar7 = operator_new(0x108);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x0;
      }
      else {
        uVar9 = 0xffffffff;
        *(undefined ***)pcVar7 = &PTR_LAB_007eb264;
        pcVar13 = &DAT_0083bf04;
        do {
          pcVar11 = pcVar13;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar11 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar11;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar11 = pcVar11 + -uVar9;
        pcVar13 = pcVar7;
        for (uVar10 = uVar9 >> 2; pcVar13 = pcVar13 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        *(float *)(pcVar7 + 0x104) = (float)(iVar6 + iVar12);
        *(undefined ***)pcVar7 = &PTR_LAB_007eb304;
        FUN_007a630a(pcVar7 + 8,&PTR_PTR_0083c9e8,(double)(iVar6 + iVar12));
      }
      if (*(int *)((int)puVar2 + 0x32) < *(int *)((int)puVar2 + 0x36)) {
        *(char **)(*(int *)((int)puVar2 + 0x2e) + *(int *)((int)puVar2 + 0x32) * 4) = pcVar7;
        *(int *)((int)puVar2 + 0x32) = *(int *)((int)puVar2 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      iVar6 = *(int *)(param_1 + 0x15a);
      iVar12 = *(int *)(iVar6 + 8);
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = puVar2;
        puVar8[1] = iVar12;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar5 = *(int *)(iVar6 + 0xc);
      *(undefined4 **)(iVar6 + 8) = puVar8;
      *(int *)(iVar6 + 0xc) = iVar5 + 1;
      if (iVar5 == 0) {
        *(undefined4 **)(iVar6 + 4) = puVar8;
      }
      else {
        *(undefined4 **)(iVar12 + 8) = puVar8;
      }
    }
    local_1c = local_1c + 1;
    if (0x89d037 < (int)local_1c) {
      FUN_005917f0();
      ExceptionList = local_14;
      return;
    }
  } while( true );
}


