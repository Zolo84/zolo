// FUN_005a76d0 @ 5a76d0 size=1064

void __fastcall FUN_005a76d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  int *piVar16;
  char *pcVar17;
  int *local_260;
  int local_25c;
  int *local_250;
  int local_244 [140];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007cb19a;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar6 = FUN_004136a0();
  local_250 = &DAT_0089cad8;
  do {
    iVar1 = *local_250;
    if ((iVar1 != 0) &&
       ((((DAT_00d0ca90 == iVar1 || (cVar5 = FUN_0044b300(), cVar5 != '\0')) ||
         (*(int *)(*(int *)(iVar1 + 0x12da) + 0x3b30) == *(int *)(DAT_00d0ca90 + 6))) ||
        (((DAT_00d610dc != '\0' || (cVar5 = FUN_0044a690(), cVar5 != '\0')) ||
         (*(char *)(*(int *)(DAT_00d0ca90 + 6) + 0x34ac + iVar1) != '\0')))))) {
      local_25c = DAT_00dbdeca;
      if (0 < DAT_00dbdeca) {
        piVar16 = local_244;
        for (iVar12 = DAT_00dbdeca; iVar12 != 0; iVar12 = iVar12 + -1) {
          *piVar16 = 0;
          piVar16 = piVar16 + 1;
        }
      }
      iVar12 = 0;
      piVar16 = *(int **)(iVar1 + 0x4508);
      while (piVar16 != (int *)0x0) {
        piVar2 = (int *)piVar16[2];
        piVar4 = *(int **)(*piVar16 + 0x26);
        while (piVar16 = piVar2, piVar4 != (int *)0x0) {
          piVar16 = (int *)piVar4[2];
          iVar3 = *piVar4;
          piVar4 = piVar16;
          if (((*(char *)(iVar3 + 0x160) != '\0') &&
              (iVar3 = *(int *)(&DAT_00dbe32e + *(int *)(iVar3 + 0x130) * 4), -1 < iVar3)) &&
             (iVar3 < DAT_00dbdeca)) {
            local_244[iVar3] = local_244[iVar3] + 1;
            iVar12 = iVar12 + 1;
          }
        }
      }
      piVar16 = *(int **)(iVar1 + 0x451c);
      while (piVar16 != (int *)0x0) {
        piVar2 = (int *)piVar16[2];
        iVar1 = *piVar16;
        piVar16 = piVar2;
        if ((((*(char *)(iVar1 + 0x162) == '\0') && (*(char *)(iVar1 + 0x154) == '\0')) &&
            (*(char *)(iVar1 + 0x160) != '\0')) &&
           ((iVar1 = *(int *)(&DAT_00dbe32e + *(int *)(iVar1 + 0x130) * 4), -1 < iVar1 &&
            (iVar1 < DAT_00dbdeca)))) {
          iVar12 = iVar12 + 1;
          local_244[iVar1] = local_244[iVar1] + 1;
        }
      }
      puVar7 = operator_new(0x50);
      local_c = 0;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *(undefined4 *)((int)puVar7 + 0x32) = 0;
        *(int *)((int)puVar7 + 0x36) = local_25c + 2;
        *(undefined4 *)((int)puVar7 + 0x3a) = 0;
        pvVar8 = operator_new((local_25c + 2) * 4);
        *(void **)((int)puVar7 + 0x2e) = pvVar8;
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_00433f00();
        *(undefined4 *)((int)puVar7 + 0x3e) = uVar6;
        *(int *)((int)puVar7 + 0x42) = param_1;
        *(undefined2 *)((int)puVar7 + 0x4a) = 0;
        puVar7[0x13] = 0;
        *puVar7 = &PTR_FUN_007eb380;
        puVar7[2] = &PTR_LAB_007eb37c;
      }
      local_c = 0xffffffff;
      pvVar8 = operator_new(0x108);
      local_c = 2;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_0058eef0();
      }
      local_c = 0xffffffff;
      if (*(int *)((int)puVar7 + 0x32) < *(int *)((int)puVar7 + 0x36)) {
        *(undefined4 *)(*(int *)((int)puVar7 + 0x2e) + *(int *)((int)puVar7 + 0x32) * 4) = uVar9;
        *(int *)((int)puVar7 + 0x32) = *(int *)((int)puVar7 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      if (0 < local_25c) {
        local_260 = local_244;
        do {
          pcVar10 = operator_new(0x108);
          if (pcVar10 == (char *)0x0) {
            pcVar10 = (char *)0x0;
          }
          else {
            uVar13 = 0xffffffff;
            *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
            pcVar17 = &DAT_0083bf04;
            do {
              pcVar15 = pcVar17;
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              pcVar15 = pcVar17 + 1;
              cVar5 = *pcVar17;
              pcVar17 = pcVar15;
            } while (cVar5 != '\0');
            iVar1 = *local_260;
            uVar13 = ~uVar13;
            pcVar15 = pcVar15 + -uVar13;
            pcVar17 = pcVar10;
            for (uVar14 = uVar13 >> 2; pcVar17 = pcVar17 + 4, uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pcVar17 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar17 = pcVar17 + 1;
            }
            *(float *)(pcVar10 + 0x104) = (float)iVar1;
            *(undefined ***)pcVar10 = &PTR_LAB_007eb304;
            FUN_007a630a(pcVar10 + 8,&PTR_PTR_0083c9e8,(double)iVar1);
          }
          if (*(int *)((int)puVar7 + 0x32) < *(int *)((int)puVar7 + 0x36)) {
            *(char **)(*(int *)((int)puVar7 + 0x2e) + *(int *)((int)puVar7 + 0x32) * 4) = pcVar10;
            *(int *)((int)puVar7 + 0x32) = *(int *)((int)puVar7 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
          local_260 = local_260 + 1;
          local_25c = local_25c + -1;
        } while (local_25c != 0);
      }
      pcVar10 = operator_new(0x108);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x0;
      }
      else {
        uVar13 = 0xffffffff;
        *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
        pcVar17 = &DAT_0083bf04;
        do {
          pcVar15 = pcVar17;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar15 = pcVar17 + 1;
          cVar5 = *pcVar17;
          pcVar17 = pcVar15;
        } while (cVar5 != '\0');
        uVar13 = ~uVar13;
        pcVar15 = pcVar15 + -uVar13;
        pcVar17 = pcVar10;
        for (uVar14 = uVar13 >> 2; pcVar17 = pcVar17 + 4, uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar17 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar17 = pcVar17 + 1;
        }
        *(float *)(pcVar10 + 0x104) = (float)iVar12;
        *(undefined ***)pcVar10 = &PTR_LAB_007eb304;
        FUN_007a630a(pcVar10 + 8,&PTR_PTR_0083c9e8,(double)iVar12);
      }
      if (*(int *)((int)puVar7 + 0x32) < *(int *)((int)puVar7 + 0x36)) {
        *(char **)(*(int *)((int)puVar7 + 0x2e) + *(int *)((int)puVar7 + 0x32) * 4) = pcVar10;
        *(int *)((int)puVar7 + 0x32) = *(int *)((int)puVar7 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      iVar1 = *(int *)(param_1 + 0x15a);
      iVar12 = *(int *)(iVar1 + 8);
      puVar11 = operator_new(0xe);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        *puVar11 = puVar7;
        puVar11[1] = iVar12;
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 0;
      }
      iVar3 = *(int *)(iVar1 + 0xc);
      *(undefined4 **)(iVar1 + 8) = puVar11;
      *(int *)(iVar1 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar1 + 4) = puVar11;
      }
      else {
        *(undefined4 **)(iVar12 + 8) = puVar11;
      }
    }
    local_250 = local_250 + 1;
    if (0x89d037 < (int)local_250) {
      FUN_005917f0();
      ExceptionList = local_14;
      return;
    }
  } while( true );
}


