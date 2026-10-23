// FUN_0059ed00 @ 59ed00 size=5816

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0059ed00(undefined4 param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined6 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int *piVar14;
  void *pvVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  float10 fVar19;
  int iStack_7c;
  undefined2 uVar20;
  float fStack_5c;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar5 = DAT_00bda0f8;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_007cad05;
  pvStack_14 = ExceptionList;
  _iStack_7c = 3.371030357839244e-306;
  ExceptionList = &pvStack_14;
  uVar7 = FUN_004136a0();
  piVar4 = *(int **)(iVar5 + 0x4508);
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    piVar3 = (int *)*piVar4;
    _iStack_7c = (double)CONCAT44(0x59ed64,iStack_7c);
    cVar6 = (**(code **)(*piVar3 + 0x30))();
    piVar4 = piVar2;
    if (cVar6 != '\0') {
      piVar2 = *(int **)((int)piVar3 + 0x26);
      while (piVar2 != (int *)0x0) {
        piVar3 = (int *)piVar2[2];
        piVar2 = (int *)*piVar2;
        _iStack_7c = 1.69762575062493e-312;
        puVar8 = operator_new(0x50);
        uStack_c = 0;
        local_18 = puVar8;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          _iStack_7c = 3.60768402450204e-313;
          FUN_00598ae0();
          uStack_c = CONCAT31(uStack_c._1_3_,1);
          _iStack_7c = (double)CONCAT44(0x59edb6,iStack_7c);
          FUN_00433f00();
          *(undefined4 *)((int)puVar8 + 0x3e) = uVar7;
          *(undefined4 *)((int)puVar8 + 0x42) = param_1;
          *(undefined2 *)((int)puVar8 + 0x4a) = 0;
          puVar8[0x13] = 0;
          *puVar8 = &PTR_FUN_007eb380;
          puVar8[2] = &PTR_LAB_007eb37c;
        }
        uStack_c = 0xffffffff;
        _iStack_7c = (double)CONCAT44(0x59eded,iStack_7c);
        puVar9 = (undefined6 *)FUN_00447250();
        local_18 = &iStack_7c;
        uVar20 = (undefined2)((ulonglong)_iStack_7c >> 0x30);
        _iStack_7c = (double)CONCAT26(uVar20,*puVar9);
        FUN_00598c30();
        _iStack_7c = 5.51721817501458e-312;
        pcVar10 = operator_new(0x104);
        uStack_c = 2;
        pcVar12 = (char *)0x0;
        if (pcVar10 != (char *)0x0) {
          _iStack_7c = (double)CONCAT44(0x59ee2d,iStack_7c);
          pcVar11 = (char *)(**(code **)(*piVar2 + 0xc))();
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
          pcVar12 = &DAT_0083bf04;
          do {
            pcVar18 = pcVar12;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar18 = pcVar12 + 1;
            cVar6 = *pcVar12;
            pcVar12 = pcVar18;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar18 = pcVar18 + -uVar16;
          pcVar12 = pcVar10;
          for (uVar17 = uVar16 >> 2; pcVar12 = pcVar12 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar12 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar12 = pcVar12 + 1;
          }
          *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
          pcVar12 = pcVar10;
          if (pcVar11 != (char *)0x0) {
            uVar16 = 0xffffffff;
            do {
              pcVar18 = pcVar11;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar18 = pcVar11 + 1;
              cVar6 = *pcVar11;
              pcVar11 = pcVar18;
            } while (cVar6 != '\0');
            uVar16 = ~uVar16;
            pcVar11 = pcVar18 + -uVar16;
            pcVar10 = pcVar10 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar10 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar10 = pcVar10 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.826920612609114e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.51721817596813e-312;
        pcVar12 = operator_new(0x104);
        uStack_c = 3;
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          _iStack_7c = (double)CONCAT44(piVar2[0x4c],0x59eef7);
          pcVar10 = (char *)FUN_004ff320();
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar18 = pcVar11;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar18 = pcVar11 + 1;
            cVar6 = *pcVar11;
            pcVar11 = pcVar18;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar18 = pcVar18 + -uVar16;
          pcVar11 = pcVar12;
          for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar11 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(undefined ***)pcVar12 = &PTR_LAB_007eb23c;
          if (pcVar10 != (char *)0x0) {
            uVar16 = 0xffffffff;
            do {
              pcVar11 = pcVar10;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar11 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar11;
            } while (cVar6 != '\0');
            uVar16 = ~uVar16;
            pcVar10 = pcVar11 + -uVar16;
            pcVar11 = pcVar12 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar11 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar11 = pcVar11 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.8269206126092464e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.51721817700073e-312;
        pcVar12 = operator_new(0x104);
        uStack_c = 4;
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          _iStack_7c = (double)CONCAT44(piVar2[0x4e],piVar2[0x4c]);
          pcVar10 = (char *)FUN_0044e050();
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar18 = pcVar11;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar18 = pcVar11 + 1;
            cVar6 = *pcVar11;
            pcVar11 = pcVar18;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar18 = pcVar18 + -uVar16;
          pcVar11 = pcVar12;
          for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar11 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(undefined ***)pcVar12 = &PTR_LAB_007eb23c;
          if (pcVar10 != (char *)0x0) {
            uVar16 = 0xffffffff;
            do {
              pcVar11 = pcVar10;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar11 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar11;
            } while (cVar6 != '\0');
            uVar16 = ~uVar16;
            pcVar10 = pcVar11 + -uVar16;
            pcVar11 = pcVar12 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar11 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar11 = pcVar11 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.8269206126093837e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.60209800971146e-312;
        pcVar12 = operator_new(0x108);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar2[0xb7];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar11 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar11 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar11 = pcVar11 + -uVar16;
          pcVar10 = pcVar12;
          for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar10 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(float *)(pcVar12 + 0x104) = fVar1;
          _iStack_7c = (double)fVar1;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar12 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.826920612609485e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.60209801050197e-312;
        pcVar12 = operator_new(0x108);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar2[0xb8];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar11 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar11 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar11 = pcVar11 + -uVar16;
          pcVar10 = pcVar12;
          for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar10 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(float *)(pcVar12 + 0x104) = fVar1;
          _iStack_7c = (double)fVar1;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar12 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.826920612609586e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.60209801129247e-312;
        pcVar12 = operator_new(0x108);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar2[0xb9];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar11 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar11 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar11 = pcVar11 + -uVar16;
          pcVar10 = pcVar12;
          for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar10 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(float *)(pcVar12 + 0x104) = fVar1;
          _iStack_7c = (double)fVar1;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar12 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.826920612609687e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.60209801208298e-312;
        pcVar12 = operator_new(0x108);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar2[0xba];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar11 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar11 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar11 = pcVar11 + -uVar16;
          pcVar10 = pcVar12;
          for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar10 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(float *)(pcVar12 + 0x104) = fVar1;
          _iStack_7c = (double)fVar1;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar12 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.8269206126097884e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.60209801287348e-312;
        pcVar12 = operator_new(0x108);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar2[0x46];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar11 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar11 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar11 = pcVar11 + -uVar16;
          pcVar10 = pcVar12;
          for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar10 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(float *)(pcVar12 + 0x104) = fVar1;
          _iStack_7c = (double)fVar1;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar12 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.8269206126098896e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.60209801366399e-312;
        pcVar12 = operator_new(0x108);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar2[0xb6];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar11 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar11 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar11 = pcVar11 + -uVar16;
          pcVar10 = pcVar12;
          for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar10 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(float *)(pcVar12 + 0x104) = fVar1;
          _iStack_7c = (double)fVar1;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar12 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.826920612609991e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.60209801445449e-312;
        pcVar12 = operator_new(0x108);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar2[0x45];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar11 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar11 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar11 = pcVar11 + -uVar16;
          pcVar10 = pcVar12;
          for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar10 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(float *)(pcVar12 + 0x104) = fVar1;
          _iStack_7c = (double)fVar1;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar12 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.826920612610092e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.602098015245e-312;
        pcVar12 = operator_new(0x108);
        uStack_c = 5;
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else {
          _iStack_7c = (double)CONCAT44(0x59f4f8,iStack_7c);
          fVar19 = (float10)(**(code **)(*piVar2 + 0x28))();
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar11 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar11 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar11 = pcVar11 + -uVar16;
          pcVar10 = pcVar12;
          for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar10 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(float *)(pcVar12 + 0x104) = (float)fVar19;
          _iStack_7c = (double)fVar19;
          *(undefined ***)pcVar12 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar12 + 8,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.8269206126102e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.60209801608985e-312;
        puVar13 = operator_new(0x108);
        uStack_c = 6;
        local_18 = puVar13;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          fVar1 = (float)piVar2[0x42] * (float)piVar2[0x3c] * _DAT_007e543c;
          _iStack_7c = (double)CONCAT44(0x59f5bb,iStack_7c);
          FUN_00592190();
          *puVar13 = &PTR_LAB_007eb304;
          _iStack_7c = (double)fVar1;
          puVar13[0x41] = fVar1;
          FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) =
               puVar13;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.826920612610294e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.60209801682601e-312;
        puVar13 = operator_new(0x108);
        uStack_c = 7;
        local_18 = puVar13;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          fVar1 = (float)piVar2[0x43] * (float)piVar2[0x3c] * _DAT_007e543c;
          _iStack_7c = (double)CONCAT44(0x59f650,iStack_7c);
          FUN_00592190();
          *puVar13 = &PTR_LAB_007eb304;
          _iStack_7c = (double)fVar1;
          puVar13[0x41] = fVar1;
          FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) =
               puVar13;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.8269206126103885e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.60209801756217e-312;
        puVar13 = operator_new(0x108);
        uStack_c = 8;
        local_18 = puVar13;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          if ((float)piVar2[0xbc] <= (float)piVar2[0xbd]) {
            fStack_5c = (float)piVar2[0xbc];
          }
          else {
            fStack_5c = (float)piVar2[0xbd];
          }
          _iStack_7c = (double)CONCAT44(0x59f6f8,iStack_7c);
          FUN_00592190();
          *puVar13 = &PTR_LAB_007eb304;
          _iStack_7c = (double)fStack_5c;
          puVar13[0x41] = fStack_5c;
          FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) =
               puVar13;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.826920612610495e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.6020980183922e-312;
        puVar13 = operator_new(0x108);
        uStack_c = 9;
        local_18 = puVar13;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          fVar1 = (float)piVar2[0xb4];
          _iStack_7c = (double)CONCAT44(0x59f781,iStack_7c);
          FUN_00592190();
          *puVar13 = &PTR_LAB_007eb304;
          _iStack_7c = (double)fVar1;
          puVar13[0x41] = fVar1;
          FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) =
               puVar13;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.8269206126105814e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.60209801906907e-312;
        puVar13 = operator_new(0x108);
        uStack_c = 10;
        local_18 = puVar13;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          fVar1 = (float)piVar2[0xb5];
          _iStack_7c = (double)CONCAT44(0x59f80a,iStack_7c);
          FUN_00592190();
          *puVar13 = &PTR_LAB_007eb304;
          _iStack_7c = (double)fVar1;
          puVar13[0x41] = fVar1;
          FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) =
               puVar13;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.826920612610668e-306;
          FUN_00405ad0();
        }
        _iStack_7c = 5.60209801974594e-312;
        piVar14 = operator_new(0x108);
        uStack_c = 0xb;
        local_18 = piVar14;
        if (piVar14 == (int *)0x0) {
          piVar14 = (int *)0x0;
        }
        else {
          fVar1 = (float)piVar2[0x40];
          _iStack_7c = (double)CONCAT44(0x59f893,iStack_7c);
          FUN_00592190();
          *piVar14 = (int)&PTR_LAB_007eb354;
          _iStack_7c = (double)fVar1;
          piVar14[0x41] = (int)fVar1;
          FUN_007a630a(piVar14 + 2,&DAT_00858140);
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(int **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = piVar14;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          _iStack_7c = 3.826920612610755e-306;
          FUN_00405ad0();
        }
        _iStack_7c = (double)CONCAT44(puVar8,0x59f8fc);
        FUN_00598ca0();
        piVar2 = piVar3;
      }
    }
  }
  piVar4 = *(int **)(iVar5 + 0x451c);
  do {
    if (piVar4 == (int *)0x0) {
      _iStack_7c = (double)CONCAT44(0x5a03a5,iStack_7c);
      FUN_005917f0();
      ExceptionList = pvStack_14;
      return;
    }
    local_18 = (int *)piVar4[2];
    piVar4 = (int *)*piVar4;
    if ((((char)piVar4[0x58] != '\0') && ((char)piVar4[0x55] == '\0')) &&
       (*(char *)((int)piVar4 + 0x162) == '\0')) {
      _iStack_7c = 1.69762576560994e-312;
      puVar13 = operator_new(0x50);
      uStack_c = 0xc;
      puVar8 = (undefined4 *)0x0;
      if (puVar13 != (undefined4 *)0x0) {
        _iStack_7c = 3.60768417454978e-313;
        FUN_00598ae0();
        uStack_c = CONCAT31(uStack_c._1_3_,0xd);
        _iStack_7c = (double)CONCAT44(0x59f993,iStack_7c);
        FUN_00433f00();
        *(undefined4 *)((int)puVar13 + 0x3e) = uVar7;
        *(undefined4 *)((int)puVar13 + 0x42) = param_1;
        *(undefined2 *)((int)puVar13 + 0x4a) = 0;
        puVar13[0x13] = 0;
        *puVar13 = &PTR_FUN_007eb380;
        puVar13[2] = &PTR_LAB_007eb37c;
        puVar8 = puVar13;
      }
      uStack_c = 0xffffffff;
      _iStack_7c = (double)CONCAT44(0x59f9cb,iStack_7c);
      puVar9 = (undefined6 *)FUN_00447250();
      uVar20 = (undefined2)((ulonglong)_iStack_7c >> 0x30);
      _iStack_7c = (double)CONCAT26(uVar20,*puVar9);
      FUN_00598c30();
      _iStack_7c = 5.5172181900243e-312;
      pcVar12 = operator_new(0x104);
      uStack_c = 0xe;
      if (pcVar12 == (char *)0x0) {
        pcVar12 = (char *)0x0;
      }
      else {
        _iStack_7c = (double)CONCAT44(0x59fa0d,iStack_7c);
        pcVar10 = (char *)(**(code **)(*piVar4 + 0xc))();
        uVar16 = 0xffffffff;
        *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
        pcVar11 = &DAT_0083bf04;
        do {
          pcVar18 = pcVar11;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar18 = pcVar11 + 1;
          cVar6 = *pcVar11;
          pcVar11 = pcVar18;
        } while (cVar6 != '\0');
        uVar16 = ~uVar16;
        pcVar18 = pcVar18 + -uVar16;
        pcVar11 = pcVar12;
        for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar11 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar11 = pcVar11 + 1;
        }
        *(undefined ***)pcVar12 = &PTR_LAB_007eb23c;
        if (pcVar10 != (char *)0x0) {
          uVar16 = 0xffffffff;
          do {
            pcVar11 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar11 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar11 + -uVar16;
          pcVar11 = pcVar12 + 8;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar11 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
      }
      piVar2 = (int *)((int)puVar8 + 0x2e);
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(char **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.826920612611035e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.51721819097291e-312;
      pcVar12 = operator_new(0x104);
      uStack_c = 0xf;
      if (pcVar12 == (char *)0x0) {
        pcVar12 = (char *)0x0;
      }
      else {
        _iStack_7c = (double)CONCAT44(piVar4[0x4c],0x59fad6);
        pcVar10 = (char *)FUN_004ff320();
        uVar16 = 0xffffffff;
        *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
        pcVar11 = &DAT_0083bf04;
        do {
          pcVar18 = pcVar11;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar18 = pcVar11 + 1;
          cVar6 = *pcVar11;
          pcVar11 = pcVar18;
        } while (cVar6 != '\0');
        uVar16 = ~uVar16;
        pcVar18 = pcVar18 + -uVar16;
        pcVar11 = pcVar12;
        for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar11 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar11 = pcVar11 + 1;
        }
        *(undefined ***)pcVar12 = &PTR_LAB_007eb23c;
        if (pcVar10 != (char *)0x0) {
          uVar16 = 0xffffffff;
          do {
            pcVar11 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar11 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar11 + -uVar16;
          pcVar11 = pcVar12 + 8;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar11 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(char **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.8269206126111594e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.51721819194621e-312;
      pcVar12 = operator_new(0x104);
      uStack_c = 0x10;
      if (pcVar12 == (char *)0x0) {
        pcVar12 = (char *)0x0;
      }
      else {
        _iStack_7c = (double)CONCAT44(piVar4[0x4e],piVar4[0x4c]);
        pcVar10 = (char *)FUN_0044e050();
        uVar16 = 0xffffffff;
        *(undefined ***)pcVar12 = &PTR_LAB_007eb264;
        pcVar11 = &DAT_0083bf04;
        do {
          pcVar18 = pcVar11;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar18 = pcVar11 + 1;
          cVar6 = *pcVar11;
          pcVar11 = pcVar18;
        } while (cVar6 != '\0');
        uVar16 = ~uVar16;
        pcVar18 = pcVar18 + -uVar16;
        pcVar11 = pcVar12;
        for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar11 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar11 = pcVar11 + 1;
        }
        *(undefined ***)pcVar12 = &PTR_LAB_007eb23c;
        if (pcVar10 != (char *)0x0) {
          uVar16 = 0xffffffff;
          do {
            pcVar11 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar11 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar11 + -uVar16;
          pcVar11 = pcVar12 + 8;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar11 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(char **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = pcVar12;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.826920612611289e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.60209802459766e-312;
      puVar13 = operator_new(0x108);
      uStack_c = 0x11;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar4[0xb7];
        _iStack_7c = (double)CONCAT44(0x59fc6d,iStack_7c);
        FUN_00592190();
        *puVar13 = &PTR_LAB_007eb304;
        _iStack_7c = (double)fVar1;
        puVar13[0x41] = fVar1;
        FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.8269206126113827e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.60209802532888e-312;
      puVar13 = operator_new(0x108);
      uStack_c = 0x12;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar4[0xb8];
        _iStack_7c = (double)CONCAT44(0x59fcfd,iStack_7c);
        FUN_00592190();
        *puVar13 = &PTR_LAB_007eb304;
        _iStack_7c = (double)fVar1;
        puVar13[0x41] = fVar1;
        FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.8269206126114693e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.60209802600575e-312;
      puVar13 = operator_new(0x108);
      uStack_c = 0x13;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar4[0xb9];
        _iStack_7c = (double)CONCAT44(0x59fd86,iStack_7c);
        FUN_00592190();
        *puVar13 = &PTR_LAB_007eb304;
        _iStack_7c = (double)fVar1;
        puVar13[0x41] = fVar1;
        FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.826920612611556e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.60209802668262e-312;
      puVar13 = operator_new(0x108);
      uStack_c = 0x14;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar4[0xba];
        _iStack_7c = (double)CONCAT44(0x59fe0f,iStack_7c);
        FUN_00592190();
        *puVar13 = &PTR_LAB_007eb304;
        _iStack_7c = (double)fVar1;
        puVar13[0x41] = fVar1;
        FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.8269206126116426e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.60209802735949e-312;
      puVar13 = operator_new(0x108);
      uStack_c = 0x15;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar4[0x46];
        _iStack_7c = (double)CONCAT44(0x59fe98,iStack_7c);
        FUN_00592190();
        *puVar13 = &PTR_LAB_007eb304;
        _iStack_7c = (double)fVar1;
        puVar13[0x41] = fVar1;
        FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.826920612611729e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.60209802803636e-312;
      puVar13 = operator_new(0x108);
      uStack_c = 0x16;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar4[0xb6];
        _iStack_7c = (double)CONCAT44(0x59ff21,iStack_7c);
        FUN_00592190();
        *puVar13 = &PTR_LAB_007eb304;
        _iStack_7c = (double)fVar1;
        puVar13[0x41] = fVar1;
        FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.826920612611816e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.60209802871323e-312;
      puVar13 = operator_new(0x108);
      uStack_c = 0x17;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar4[0x45];
        _iStack_7c = (double)CONCAT44(0x59ffaa,iStack_7c);
        FUN_00592190();
        *puVar13 = &PTR_LAB_007eb304;
        _iStack_7c = (double)fVar1;
        puVar13[0x41] = fVar1;
        FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.8269206126119025e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.6020980293901e-312;
      puVar13 = operator_new(0x108);
      uStack_c = 0x18;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        _iStack_7c = (double)CONCAT44(0x5a0029,iStack_7c);
        fVar19 = (float10)(**(code **)(*piVar4 + 0x28))();
        _iStack_7c = (double)CONCAT44(0x5a0034,iStack_7c);
        FUN_00592190();
        *puVar13 = &PTR_LAB_007eb304;
        _iStack_7c = (double)(float)fVar19;
        puVar13[0x41] = (float)fVar19;
        FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.82692061261199e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.60209803007191e-312;
      puVar13 = operator_new(0x108);
      uStack_c = 0x19;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar4[0x42] * (float)piVar4[0x3c] * _DAT_007e543c;
        _iStack_7c = (double)CONCAT44(0x5a00c9,iStack_7c);
        FUN_00592190();
        *puVar13 = &PTR_LAB_007eb304;
        _iStack_7c = (double)fVar1;
        puVar13[0x41] = fVar1;
        FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.826920612612084e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.60209803080807e-312;
      puVar13 = operator_new(0x108);
      uStack_c = 0x1a;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar4[0x43] * (float)piVar4[0x3c] * _DAT_007e543c;
        _iStack_7c = (double)CONCAT44(0x5a015e,iStack_7c);
        FUN_00592190();
        *puVar13 = &PTR_LAB_007eb304;
        _iStack_7c = (double)fVar1;
        puVar13[0x41] = fVar1;
        FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.826920612612178e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.60209803154422e-312;
      puVar13 = operator_new(0x108);
      uStack_c = 0x1b;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        if ((float)piVar4[0xbc] <= (float)piVar4[0xbd]) {
          fStack_5c = (float)piVar4[0xbc];
        }
        else {
          fStack_5c = (float)piVar4[0xbd];
        }
        _iStack_7c = (double)CONCAT44(0x5a0206,iStack_7c);
        FUN_00592190();
        *puVar13 = &PTR_LAB_007eb304;
        _iStack_7c = (double)fStack_5c;
        puVar13[0x41] = fStack_5c;
        FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.8269206126122845e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.60209803237425e-312;
      puVar13 = operator_new(0x108);
      uStack_c = 0x1c;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        fVar1 = (float)piVar4[0xb4];
        _iStack_7c = (double)CONCAT44(0x5a028f,iStack_7c);
        FUN_00592190();
        *puVar13 = &PTR_LAB_007eb304;
        _iStack_7c = (double)fVar1;
        puVar13[0x41] = fVar1;
        FUN_007a630a(puVar13 + 2,&PTR_PTR_0083c9e8);
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 **)(*piVar2 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        _iStack_7c = 3.826920612612371e-306;
        FUN_00405ad0();
      }
      _iStack_7c = 5.60209803305112e-312;
      pvVar15 = operator_new(0x108);
      uStack_c = 0x1d;
      if (pvVar15 == (void *)0x0) {
        uStack_24 = 0;
      }
      else {
        _iStack_7c = (double)CONCAT44(piVar4[0xb5],0x5a0319);
        uStack_24 = FUN_00598bc0();
      }
      uStack_c = 0xffffffff;
      _iStack_7c = (double)CONCAT44(&uStack_24,0x5a0331);
      FUN_00598b10();
      _iStack_7c = 5.60209803341179e-312;
      pvVar15 = operator_new(0x108);
      uStack_c = 0x1e;
      if (pvVar15 == (void *)0x0) {
        uStack_1c = 0;
      }
      else {
        iStack_20 = piVar4[0x40];
        _iStack_7c = (double)CONCAT44(iStack_20,0x5a0362);
        uStack_1c = FUN_00598b50();
      }
      uStack_c = 0xffffffff;
      _iStack_7c = (double)CONCAT44(&uStack_1c,0x5a037a);
      FUN_00598b10();
      _iStack_7c = (double)CONCAT44(puVar8,0x5a038e);
      FUN_00598ca0();
    }
    piVar4 = local_18;
  } while( true );
}


