// FUN_0059d020 @ 59d020 size=6390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0059d020(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined6 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  int *piVar15;
  void *pvVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  float10 fVar20;
  int iStack_84;
  undefined2 uVar21;
  undefined4 *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar6 = DAT_00bda0f8;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_007cab86;
  pvStack_14 = ExceptionList;
  _iStack_84 = 3.3710303578345695e-306;
  ExceptionList = &pvStack_14;
  uVar8 = FUN_004136a0();
  piVar5 = *(int **)(iVar6 + 0x4508);
  while (piVar5 != (int *)0x0) {
    piVar3 = (int *)piVar5[2];
    piVar4 = (int *)*piVar5;
    _iStack_84 = (double)CONCAT44(0x59d084,iStack_84);
    cVar7 = (**(code **)(*piVar4 + 0x2c))();
    piVar5 = piVar3;
    if (cVar7 != '\0') {
      piVar3 = *(int **)((int)piVar4 + 0x26);
      while (piVar3 != (int *)0x0) {
        piVar4 = (int *)piVar3[2];
        piVar3 = (int *)*piVar3;
        _iStack_84 = 1.69762571411348e-312;
        puVar9 = operator_new(0x50);
        uStack_c = 0;
        local_18 = puVar9;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          _iStack_84 = 4.03208281758058e-313;
          FUN_00598ae0();
          uStack_c = CONCAT31(uStack_c._1_3_,1);
          _iStack_84 = (double)CONCAT44(0x59d0d8,iStack_84);
          FUN_00433f00();
          *(undefined4 *)((int)puVar9 + 0x3e) = uVar8;
          *(undefined4 *)((int)puVar9 + 0x42) = param_1;
          *(undefined2 *)((int)puVar9 + 0x4a) = 0;
          puVar9[0x13] = 0;
          *puVar9 = &PTR_FUN_007eb380;
          puVar9[2] = &PTR_LAB_007eb37c;
        }
        uStack_c = 0xffffffff;
        _iStack_84 = (double)CONCAT44(0x59d10f,iStack_84);
        puVar10 = (undefined6 *)FUN_00447250();
        local_18 = &iStack_84;
        uVar21 = (undefined2)((ulonglong)_iStack_84 >> 0x30);
        _iStack_84 = (double)CONCAT26(uVar21,*puVar10);
        FUN_00598c30();
        _iStack_84 = 5.51721813850313e-312;
        pcVar11 = operator_new(0x104);
        uStack_c = 2;
        pcVar13 = (char *)0x0;
        if (pcVar11 != (char *)0x0) {
          _iStack_84 = (double)CONCAT44(0x59d14f,iStack_84);
          pcVar12 = (char *)(**(code **)(*piVar3 + 0xc))();
          uVar17 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar13 = &DAT_0083bf04;
          do {
            pcVar19 = pcVar13;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar19 = pcVar13 + 1;
            cVar7 = *pcVar13;
            pcVar13 = pcVar19;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar19 = pcVar19 + -uVar17;
          pcVar13 = pcVar11;
          for (uVar18 = uVar17 >> 2; pcVar13 = pcVar13 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar13 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar13 = pcVar13 + 1;
          }
          *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
          pcVar13 = pcVar11;
          if (pcVar12 != (char *)0x0) {
            uVar17 = 0xffffffff;
            do {
              pcVar19 = pcVar12;
              if (uVar17 == 0) break;
              uVar17 = uVar17 - 1;
              pcVar19 = pcVar12 + 1;
              cVar7 = *pcVar12;
              pcVar12 = pcVar19;
            } while (cVar7 != '\0');
            uVar17 = ~uVar17;
            pcVar12 = pcVar19 + -uVar17;
            pcVar11 = pcVar11 + 8;
            for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *pcVar11 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar11 = pcVar11 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612604441e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.51721813945668e-312;
        pcVar13 = operator_new(0x104);
        uStack_c = 3;
        if (pcVar13 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          _iStack_84 = (double)CONCAT44(piVar3[0x4c],0x59d219);
          pcVar11 = (char *)FUN_004ff320();
          uVar17 = 0xffffffff;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
          pcVar12 = &DAT_0083bf04;
          do {
            pcVar19 = pcVar12;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar19 = pcVar12 + 1;
            cVar7 = *pcVar12;
            pcVar12 = pcVar19;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar19 = pcVar19 + -uVar17;
          pcVar12 = pcVar13;
          for (uVar18 = uVar17 >> 2; pcVar12 = pcVar12 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar12 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar12 = pcVar12 + 1;
          }
          *(undefined ***)pcVar13 = &PTR_LAB_007eb23c;
          if (pcVar11 != (char *)0x0) {
            uVar17 = 0xffffffff;
            do {
              pcVar12 = pcVar11;
              if (uVar17 == 0) break;
              uVar17 = uVar17 - 1;
              pcVar12 = pcVar11 + 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar12;
            } while (cVar7 != '\0');
            uVar17 = ~uVar17;
            pcVar11 = pcVar12 + -uVar17;
            pcVar12 = pcVar13 + 8;
            for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *pcVar12 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar12 = pcVar12 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612604573e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.51721814048928e-312;
        pcVar13 = operator_new(0x104);
        uStack_c = 4;
        if (pcVar13 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          _iStack_84 = (double)CONCAT44(piVar3[0x4e],piVar3[0x4c]);
          pcVar11 = (char *)FUN_0044e050();
          uVar17 = 0xffffffff;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
          pcVar12 = &DAT_0083bf04;
          do {
            pcVar19 = pcVar12;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar19 = pcVar12 + 1;
            cVar7 = *pcVar12;
            pcVar12 = pcVar19;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar19 = pcVar19 + -uVar17;
          pcVar12 = pcVar13;
          for (uVar18 = uVar17 >> 2; pcVar12 = pcVar12 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar12 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar12 = pcVar12 + 1;
          }
          *(undefined ***)pcVar13 = &PTR_LAB_007eb23c;
          if (pcVar11 != (char *)0x0) {
            uVar17 = 0xffffffff;
            do {
              pcVar12 = pcVar11;
              if (uVar17 == 0) break;
              uVar17 = uVar17 - 1;
              pcVar12 = pcVar11 + 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar12;
            } while (cVar7 != '\0');
            uVar17 = ~uVar17;
            pcVar11 = pcVar12 + -uVar17;
            pcVar12 = pcVar13 + 8;
            for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *pcVar12 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar12 = pcVar12 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.82692061260471e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209797320001e-312;
        pcVar13 = operator_new(0x108);
        if (pcVar13 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0xb9];
          uVar17 = 0xffffffff;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar12 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar12 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar12 = pcVar12 + -uVar17;
          pcVar11 = pcVar13;
          for (uVar18 = uVar17 >> 2; pcVar11 = pcVar11 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar11 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(float *)(pcVar13 + 0x104) = fVar1;
          _iStack_84 = (double)fVar1;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar13 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.8269206126048114e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209797399052e-312;
        pcVar13 = operator_new(0x108);
        if (pcVar13 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0xbc];
          uVar17 = 0xffffffff;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar12 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar12 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar12 = pcVar12 + -uVar17;
          pcVar11 = pcVar13;
          for (uVar18 = uVar17 >> 2; pcVar11 = pcVar11 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar11 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(float *)(pcVar13 + 0x104) = fVar1;
          _iStack_84 = (double)fVar1;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar13 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.8269206126049126e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209797478102e-312;
        pcVar13 = operator_new(0x108);
        if (pcVar13 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0x46];
          uVar17 = 0xffffffff;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar12 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar12 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar12 = pcVar12 + -uVar17;
          pcVar11 = pcVar13;
          for (uVar18 = uVar17 >> 2; pcVar11 = pcVar11 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar11 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(float *)(pcVar13 + 0x104) = fVar1;
          _iStack_84 = (double)fVar1;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar13 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612605014e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209797557153e-312;
        pcVar13 = operator_new(0x108);
        if (pcVar13 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0xb8];
          uVar17 = 0xffffffff;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar12 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar12 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar12 = pcVar12 + -uVar17;
          pcVar11 = pcVar13;
          for (uVar18 = uVar17 >> 2; pcVar11 = pcVar11 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar11 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(float *)(pcVar13 + 0x104) = fVar1;
          _iStack_84 = (double)fVar1;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar13 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612605115e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209797636203e-312;
        pcVar13 = operator_new(0x108);
        if (pcVar13 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0x45];
          uVar17 = 0xffffffff;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar12 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar12 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar12 = pcVar12 + -uVar17;
          pcVar11 = pcVar13;
          for (uVar18 = uVar17 >> 2; pcVar11 = pcVar11 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar11 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(float *)(pcVar13 + 0x104) = fVar1;
          _iStack_84 = (double)fVar1;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar13 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612605216e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209797715254e-312;
        pcVar13 = operator_new(0x108);
        uStack_c = 5;
        if (pcVar13 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          _iStack_84 = (double)CONCAT44(0x59d6da,iStack_84);
          fVar20 = (float10)(**(code **)(*piVar3 + 0x28))();
          uVar17 = 0xffffffff;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar12 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar12 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar12 = pcVar12 + -uVar17;
          pcVar11 = pcVar13;
          for (uVar18 = uVar17 >> 2; pcVar11 = pcVar11 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar11 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(float *)(pcVar13 + 0x104) = (float)fVar20;
          _iStack_84 = (double)fVar20;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar13 + 8,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612605324e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209797799739e-312;
        pcVar13 = operator_new(0x108);
        if (pcVar13 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0x42];
          fVar2 = (float)piVar3[0x3c];
          uVar17 = 0xffffffff;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar12 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar12 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar7 != '\0');
          fVar1 = fVar1 * fVar2 * _DAT_007e543c;
          uVar17 = ~uVar17;
          pcVar12 = pcVar12 + -uVar17;
          pcVar11 = pcVar13;
          for (uVar18 = uVar17 >> 2; pcVar11 = pcVar11 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar11 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(float *)(pcVar13 + 0x104) = fVar1;
          _iStack_84 = (double)fVar1;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar13 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612605435e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.602097978862e-312;
        pcVar13 = operator_new(0x108);
        if (pcVar13 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0x43];
          fVar2 = (float)piVar3[0x3c];
          uVar17 = 0xffffffff;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar12 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar12 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar7 != '\0');
          fVar1 = fVar1 * fVar2 * _DAT_007e543c;
          uVar17 = ~uVar17;
          pcVar12 = pcVar12 + -uVar17;
          pcVar11 = pcVar13;
          for (uVar18 = uVar17 >> 2; pcVar11 = pcVar11 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar11 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(float *)(pcVar13 + 0x104) = fVar1;
          _iStack_84 = (double)fVar1;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar13 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.8269206126055456e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209797972662e-312;
        pcVar13 = operator_new(0x108);
        if (pcVar13 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0xbe];
          uVar17 = 0xffffffff;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar12 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar12 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar12 = pcVar12 + -uVar17;
          pcVar11 = pcVar13;
          for (uVar18 = uVar17 >> 2; pcVar11 = pcVar11 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar11 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(float *)(pcVar13 + 0x104) = fVar1;
          _iStack_84 = (double)fVar1;
          *(undefined ***)pcVar13 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar13 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.8269206126056487e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209798053194e-312;
        puVar14 = operator_new(0x108);
        uStack_c = 6;
        local_18 = puVar14;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0xb3];
          _iStack_84 = (double)CONCAT44(0x59d992,iStack_84);
          FUN_00592190();
          *puVar14 = &PTR_LAB_007eb304;
          _iStack_84 = (double)fVar1;
          puVar14[0x41] = fVar1;
          FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) =
               puVar14;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612605735e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209798120881e-312;
        puVar14 = operator_new(0x108);
        uStack_c = 7;
        local_18 = puVar14;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0xb4];
          _iStack_84 = (double)CONCAT44(0x59da1b,iStack_84);
          FUN_00592190();
          *puVar14 = &PTR_LAB_007eb304;
          _iStack_84 = (double)fVar1;
          puVar14[0x41] = fVar1;
          FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) =
               puVar14;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612605822e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209798188568e-312;
        puVar14 = operator_new(0x108);
        uStack_c = 8;
        local_18 = puVar14;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0xb5];
          _iStack_84 = (double)CONCAT44(0x59daa4,iStack_84);
          FUN_00592190();
          *puVar14 = &PTR_LAB_007eb304;
          _iStack_84 = (double)fVar1;
          puVar14[0x41] = fVar1;
          FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) =
               puVar14;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.8269206126059086e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209798256255e-312;
        puVar14 = operator_new(0x108);
        uStack_c = 9;
        local_18 = puVar14;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0xba];
          _iStack_84 = (double)CONCAT44(0x59db2d,iStack_84);
          FUN_00592190();
          *puVar14 = &PTR_LAB_007eb304;
          _iStack_84 = (double)fVar1;
          puVar14[0x41] = fVar1;
          FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) =
               puVar14;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612605995e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209798323942e-312;
        puVar14 = operator_new(0x108);
        uStack_c = 10;
        local_18 = puVar14;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0xb7];
          _iStack_84 = (double)CONCAT44(0x59dbb6,iStack_84);
          FUN_00592190();
          *puVar14 = &PTR_LAB_007eb304;
          _iStack_84 = (double)fVar1;
          puVar14[0x41] = fVar1;
          FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) =
               puVar14;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612606082e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209798391629e-312;
        puVar14 = operator_new(0x108);
        uStack_c = 0xb;
        local_18 = puVar14;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0xb6] * _DAT_007e4088;
          _iStack_84 = (double)CONCAT44(0x59dc45,iStack_84);
          FUN_00592190();
          *puVar14 = &PTR_LAB_007eb304;
          _iStack_84 = (double)fVar1;
          puVar14[0x41] = fVar1;
          FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) =
               puVar14;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612606172e-306;
          FUN_00405ad0();
        }
        _iStack_84 = 5.60209798462281e-312;
        piVar15 = operator_new(0x108);
        uStack_c = 0xc;
        local_18 = piVar15;
        if (piVar15 == (int *)0x0) {
          piVar15 = (int *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0x40];
          _iStack_84 = (double)CONCAT44(0x59dcce,iStack_84);
          FUN_00592190();
          *piVar15 = (int)&PTR_LAB_007eb354;
          _iStack_84 = (double)fVar1;
          piVar15[0x41] = (int)fVar1;
          FUN_007a630a(piVar15 + 2,&DAT_00858140);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(int **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = piVar15;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          _iStack_84 = 3.826920612606259e-306;
          FUN_00405ad0();
        }
        _iStack_84 = (double)CONCAT44(puVar9,0x59dd37);
        FUN_00598ca0();
        piVar3 = piVar4;
      }
    }
  }
  piVar5 = *(int **)(iVar6 + 0x451c);
  do {
    if (piVar5 == (int *)0x0) {
      _iStack_84 = (double)CONCAT44(0x59e903,iStack_84);
      FUN_005917f0();
      ExceptionList = pvStack_14;
      return;
    }
    local_18 = (int *)piVar5[2];
    piVar5 = (int *)*piVar5;
    if (((*(char *)((int)piVar5 + 0x161) != '\0') && ((char)piVar5[0x55] == '\0')) &&
       (*(char *)((int)piVar5 + 0x162) == '\0')) {
      _iStack_84 = 1.69762573048681e-312;
      puVar14 = operator_new(0x50);
      uStack_c = 0xd;
      puVar9 = (undefined4 *)0x0;
      if (puVar14 != (undefined4 *)0x0) {
        _iStack_84 = 4.03208298151156e-313;
        FUN_00598ae0();
        uStack_c = CONCAT31(uStack_c._1_3_,0xe);
        _iStack_84 = (double)CONCAT44(0x59ddce,iStack_84);
        FUN_00433f00();
        *(undefined4 *)((int)puVar14 + 0x3e) = uVar8;
        *(undefined4 *)((int)puVar14 + 0x42) = param_1;
        *(undefined2 *)((int)puVar14 + 0x4a) = 0;
        puVar14[0x13] = 0;
        *puVar14 = &PTR_FUN_007eb380;
        puVar14[2] = &PTR_LAB_007eb37c;
        puVar9 = puVar14;
      }
      uStack_c = 0xffffffff;
      _iStack_84 = (double)CONCAT44(0x59de06,iStack_84);
      puVar10 = (undefined6 *)FUN_00447250();
      uVar21 = (undefined2)((ulonglong)_iStack_84 >> 0x30);
      _iStack_84 = (double)CONCAT26(uVar21,*puVar10);
      FUN_00598c30();
      _iStack_84 = 5.51721815490117e-312;
      pcVar13 = operator_new(0x104);
      uStack_c = 0xf;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x0;
      }
      else {
        _iStack_84 = (double)CONCAT44(0x59de48,iStack_84);
        pcVar11 = (char *)(**(code **)(*piVar5 + 0xc))();
        uVar17 = 0xffffffff;
        *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
        pcVar12 = &DAT_0083bf04;
        do {
          pcVar19 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar19 = pcVar12 + 1;
          cVar7 = *pcVar12;
          pcVar12 = pcVar19;
        } while (cVar7 != '\0');
        uVar17 = ~uVar17;
        pcVar19 = pcVar19 + -uVar17;
        pcVar12 = pcVar13;
        for (uVar18 = uVar17 >> 2; pcVar12 = pcVar12 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar12 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar12 = pcVar12 + 1;
        }
        *(undefined ***)pcVar13 = &PTR_LAB_007eb23c;
        if (pcVar11 != (char *)0x0) {
          uVar17 = 0xffffffff;
          do {
            pcVar12 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar12 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar11 = pcVar12 + -uVar17;
          pcVar12 = pcVar13 + 8;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar12 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
      }
      piVar3 = (int *)((int)puVar9 + 0x2e);
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(char **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.826920612606539e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.51721815584978e-312;
      pcVar13 = operator_new(0x104);
      uStack_c = 0x10;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x0;
      }
      else {
        _iStack_84 = (double)CONCAT44(piVar5[0x4c],0x59df11);
        pcVar11 = (char *)FUN_004ff320();
        uVar17 = 0xffffffff;
        *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
        pcVar12 = &DAT_0083bf04;
        do {
          pcVar19 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar19 = pcVar12 + 1;
          cVar7 = *pcVar12;
          pcVar12 = pcVar19;
        } while (cVar7 != '\0');
        uVar17 = ~uVar17;
        pcVar19 = pcVar19 + -uVar17;
        pcVar12 = pcVar13;
        for (uVar18 = uVar17 >> 2; pcVar12 = pcVar12 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar12 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar12 = pcVar12 + 1;
        }
        *(undefined ***)pcVar13 = &PTR_LAB_007eb23c;
        if (pcVar11 != (char *)0x0) {
          uVar17 = 0xffffffff;
          do {
            pcVar12 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar12 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar11 = pcVar12 + -uVar17;
          pcVar12 = pcVar13 + 8;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar12 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(char **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.8269206126066637e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.51721815682309e-312;
      pcVar13 = operator_new(0x104);
      uStack_c = 0x11;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = (char *)0x0;
      }
      else {
        _iStack_84 = (double)CONCAT44(piVar5[0x4e],piVar5[0x4c]);
        pcVar11 = (char *)FUN_0044e050();
        uVar17 = 0xffffffff;
        *(undefined ***)pcVar13 = &PTR_LAB_007eb264;
        pcVar12 = &DAT_0083bf04;
        do {
          pcVar19 = pcVar12;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar19 = pcVar12 + 1;
          cVar7 = *pcVar12;
          pcVar12 = pcVar19;
        } while (cVar7 != '\0');
        uVar17 = ~uVar17;
        pcVar19 = pcVar19 + -uVar17;
        pcVar12 = pcVar13;
        for (uVar18 = uVar17 >> 2; pcVar12 = pcVar12 + 4, uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar12 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar12 = pcVar12 + 1;
        }
        *(undefined ***)pcVar13 = &PTR_LAB_007eb23c;
        if (pcVar11 != (char *)0x0) {
          uVar17 = 0xffffffff;
          do {
            pcVar12 = pcVar11;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar12 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar7 != '\0');
          uVar17 = ~uVar17;
          pcVar11 = pcVar12 + -uVar17;
          pcVar12 = pcVar13 + 8;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar12 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(char **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = pcVar13;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.8269206126067933e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209798947453e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x12;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0xb9];
        _iStack_84 = (double)CONCAT44(0x59e0a8,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.826920612606887e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209799020575e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x13;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0xbc];
        _iStack_84 = (double)CONCAT44(0x59e138,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.8269206126069736e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209799088262e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x14;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0x46];
        _iStack_84 = (double)CONCAT44(0x59e1c1,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.82692061260706e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209799155949e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x15;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0xb8];
        _iStack_84 = (double)CONCAT44(0x59e24a,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.826920612607147e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209799223636e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x16;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0x45];
        _iStack_84 = (double)CONCAT44(0x59e2d3,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.8269206126072335e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209799291323e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x17;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        _iStack_84 = (double)CONCAT44(0x59e352,iStack_84);
        fVar20 = (float10)(**(code **)(*piVar5 + 0x28))();
        _iStack_84 = (double)CONCAT44(0x59e35d,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)(float)fVar20;
        puVar14[0x41] = (float)fVar20;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.826920612607321e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209799359504e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x18;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0x42] * (float)piVar5[0x3c] * _DAT_007e543c;
        _iStack_84 = (double)CONCAT44(0x59e3f2,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.826920612607415e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.6020979943312e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x19;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0x43] * (float)piVar5[0x3c] * _DAT_007e543c;
        _iStack_84 = (double)CONCAT44(0x59e487,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.826920612607509e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209799506736e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x1a;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0xbe];
        _iStack_84 = (double)CONCAT44(0x59e510,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.826920612607596e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209799574423e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x1b;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0xb3];
        _iStack_84 = (double)CONCAT44(0x59e599,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.8269206126076825e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.6020979964211e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x1c;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0xb4];
        _iStack_84 = (double)CONCAT44(0x59e622,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.826920612607769e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209799709797e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x1d;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0xb5];
        _iStack_84 = (double)CONCAT44(0x59e6ab,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.826920612607856e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209799777484e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x1e;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0xba];
        _iStack_84 = (double)CONCAT44(0x59e734,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.8269206126079424e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209799845171e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x1f;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0xb7];
        _iStack_84 = (double)CONCAT44(0x59e7bd,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(undefined4 **)(*piVar3 + *(int *)((int)puVar9 + 0x32) * 4) = puVar14;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        _iStack_84 = 3.826920612608029e-306;
        FUN_00405ad0();
      }
      _iStack_84 = 5.60209799912858e-312;
      puVar14 = operator_new(0x108);
      uStack_c = 0x20;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar5[0xb6] * _DAT_007e4088;
        _iStack_84 = (double)CONCAT44(0x59e84c,iStack_84);
        FUN_00592190();
        *puVar14 = &PTR_LAB_007eb304;
        _iStack_84 = (double)fVar1;
        puVar14[0x41] = fVar1;
        FUN_007a630a(puVar14 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      _iStack_84 = (double)CONCAT44(&puStack_24,0x59e88f);
      puStack_24 = puVar14;
      FUN_00598b10();
      _iStack_84 = 5.6020979997264e-312;
      pvVar16 = operator_new(0x108);
      uStack_c = 0x21;
      if (pvVar16 == (void *)0x0) {
        uStack_1c = 0;
      }
      else {
        iStack_20 = piVar5[0x40];
        _iStack_84 = (double)CONCAT44(iStack_20,0x59e8c0);
        uStack_1c = FUN_00598b50();
      }
      uStack_c = 0xffffffff;
      _iStack_84 = (double)CONCAT44(&uStack_1c,0x59e8d8);
      FUN_00598b10();
      _iStack_84 = (double)CONCAT44(puVar9,0x59e8ec);
      FUN_00598ca0();
    }
    piVar5 = local_18;
  } while( true );
}


