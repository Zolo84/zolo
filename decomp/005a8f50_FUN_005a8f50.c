// FUN_005a8f50 @ 5a8f50 size=726

void __fastcall FUN_005a8f50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  int local_c0;
  int *local_bc;
  int *local_b0;
  undefined1 local_a8 [100];
  int local_44 [12];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007cb3ca;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar5 = FUN_004136a0();
  local_b0 = &DAT_0089cad8;
  do {
    iVar1 = *local_b0;
    if (iVar1 != 0) {
      if (DAT_00d0ca90 != iVar1) {
        cVar4 = FUN_0044b300();
        if (((cVar4 == '\0') &&
            (*(int *)(*(int *)(iVar1 + 0x12da) + 0x3b30) != *(int *)(DAT_00d0ca90 + 6))) &&
           (DAT_00d610dc == '\0')) {
          cVar4 = FUN_0044a690();
          if ((cVar4 == '\0') && (*(char *)(*(int *)(DAT_00d0ca90 + 6) + 0x34ac + iVar1) == '\0'))
          goto LAB_005a91e8;
        }
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
        *(undefined4 *)((int)puVar6 + 0x3e) = uVar5;
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
      FUN_004a7690(local_a8,0);
      local_bc = local_44;
      local_c0 = 0xc;
      do {
        pcVar9 = operator_new(0x108);
        if (pcVar9 == (char *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          uVar11 = 0xffffffff;
          iVar1 = *local_bc;
          *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
          pcVar14 = &DAT_0083bf04;
          do {
            pcVar13 = pcVar14;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar13 = pcVar14 + 1;
            cVar4 = *pcVar14;
            pcVar14 = pcVar13;
          } while (cVar4 != '\0');
          uVar11 = ~uVar11;
          pcVar13 = pcVar13 + -uVar11;
          pcVar14 = pcVar9;
          for (uVar12 = uVar11 >> 2; pcVar14 = pcVar14 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar14 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar14 = pcVar14 + 1;
          }
          *(float *)(pcVar9 + 0x104) = (float)iVar1;
          *(undefined ***)pcVar9 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar9 + 8,&PTR_PTR_0083c9e8,(double)iVar1);
        }
        if (*(int *)((int)puVar6 + 0x32) < *(int *)((int)puVar6 + 0x36)) {
          *(char **)(*(int *)((int)puVar6 + 0x2e) + *(int *)((int)puVar6 + 0x32) * 4) = pcVar9;
          *(int *)((int)puVar6 + 0x32) = *(int *)((int)puVar6 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        local_bc = local_bc + 1;
        local_c0 = local_c0 + -1;
      } while (local_c0 != 0);
      iVar1 = *(int *)(param_1 + 0x15a);
      iVar2 = *(int *)(iVar1 + 8);
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
      iVar3 = *(int *)(iVar1 + 0xc);
      *(undefined4 **)(iVar1 + 8) = puVar10;
      *(int *)(iVar1 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar1 + 4) = puVar10;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar10;
      }
    }
LAB_005a91e8:
    local_b0 = local_b0 + 1;
    if (0x89d037 < (int)local_b0) {
      FUN_005917f0();
      ExceptionList = local_14;
      return;
    }
  } while( true );
}


