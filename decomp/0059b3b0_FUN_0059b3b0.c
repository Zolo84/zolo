// FUN_0059b3b0 @ 59b3b0 size=6203

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0059b3b0(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  void *pvVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  float10 fVar19;
  char acStack_114 [256];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar14 = DAT_00bda0f8;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_007ca9de;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  uVar7 = FUN_004136a0();
  piVar5 = *(int **)(iVar14 + 0x4508);
  while (piVar5 != (int *)0x0) {
    piVar3 = (int *)piVar5[2];
    piVar4 = (int *)*piVar5;
    cVar6 = (**(code **)(*piVar4 + 0x28))();
    piVar5 = piVar3;
    if (cVar6 != '\0') {
      piVar3 = *(int **)((int)piVar4 + 0x26);
      while (piVar3 != (int *)0x0) {
        piVar4 = (int *)piVar3[2];
        piVar3 = (int *)*piVar3;
        puVar8 = operator_new(0x50);
        uStack_c = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          FUN_00598ae0();
          uStack_c = CONCAT31(uStack_c._1_3_,1);
          FUN_00433f00();
          *(undefined4 *)((int)puVar8 + 0x3e) = uVar7;
          *(undefined4 *)((int)puVar8 + 0x42) = param_1;
          *(undefined2 *)((int)puVar8 + 0x4a) = 0;
          puVar8[0x13] = 0;
          *puVar8 = &PTR_FUN_007eb380;
          puVar8[2] = &PTR_LAB_007eb37c;
        }
        uStack_c = 0xffffffff;
        FUN_00447250();
        FUN_00598c30();
        pcVar9 = operator_new(0x104);
        uStack_c = 2;
        pcVar11 = (char *)0x0;
        if (pcVar9 != (char *)0x0) {
          pcVar10 = (char *)(**(code **)(*piVar3 + 0xc))();
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
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
          pcVar11 = pcVar9;
          for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar11 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
          pcVar11 = pcVar9;
          if (pcVar10 != (char *)0x0) {
            uVar16 = 0xffffffff;
            do {
              pcVar18 = pcVar10;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar18 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar18;
            } while (cVar6 != '\0');
            uVar16 = ~uVar16;
            pcVar10 = pcVar18 + -uVar16;
            pcVar9 = pcVar9 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar9 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar11 = operator_new(0x104);
        uStack_c = 3;
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          pcVar9 = (char *)FUN_004ff320();
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar18 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar18 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar18;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar18 = pcVar18 + -uVar16;
          pcVar10 = pcVar11;
          for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar10 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
          if (pcVar9 != (char *)0x0) {
            uVar16 = 0xffffffff;
            do {
              pcVar10 = pcVar9;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar10 = pcVar9 + 1;
              cVar6 = *pcVar9;
              pcVar9 = pcVar10;
            } while (cVar6 != '\0');
            uVar16 = ~uVar16;
            pcVar9 = pcVar10 + -uVar16;
            pcVar10 = pcVar11 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar10 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar10 = pcVar10 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar11 = operator_new(0x104);
        uStack_c = 4;
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          pcVar9 = (char *)FUN_0044e050();
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar18 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar18 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar18;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar18 = pcVar18 + -uVar16;
          pcVar10 = pcVar11;
          for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar10 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
          if (pcVar9 != (char *)0x0) {
            uVar16 = 0xffffffff;
            do {
              pcVar10 = pcVar9;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar10 = pcVar9 + 1;
              cVar6 = *pcVar9;
              pcVar9 = pcVar10;
            } while (cVar6 != '\0');
            uVar16 = ~uVar16;
            pcVar9 = pcVar10 + -uVar16;
            pcVar10 = pcVar11 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar10 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar10 = pcVar10 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        if (piVar3[0x22] == 0) {
          pcVar11 = operator_new(0x104);
          if (pcVar11 == (char *)0x0) {
            pcVar11 = (char *)0x0;
          }
          else {
            uVar16 = 0xffffffff;
            *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
            pcVar9 = &DAT_0083bf04;
            do {
              pcVar10 = pcVar9;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar10 = pcVar9 + 1;
              cVar6 = *pcVar9;
              pcVar9 = pcVar10;
            } while (cVar6 != '\0');
            uVar16 = ~uVar16;
            pcVar10 = pcVar10 + -uVar16;
            pcVar9 = pcVar11;
            for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar9 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            }
            *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
            uVar16 = 0xffffffff;
            pcVar9 = &DAT_0088ebf8;
            do {
              pcVar10 = pcVar9;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar10 = pcVar9 + 1;
              cVar6 = *pcVar9;
              pcVar9 = pcVar10;
            } while (cVar6 != '\0');
            uVar16 = ~uVar16;
            pcVar9 = pcVar10 + -uVar16;
            pcVar10 = pcVar11 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar10 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar10 = pcVar10 + 1;
            }
          }
          iVar12 = *(int *)((int)puVar8 + 0x32);
          if (iVar12 < *(int *)((int)puVar8 + 0x36)) goto LAB_0059b8ab;
          FUN_00405ad0();
        }
        else {
          FUN_004ff3a0();
          FUN_007a630a();
          pcVar11 = operator_new(0x104);
          if (pcVar11 == (char *)0x0) {
            pcVar11 = (char *)0x0;
          }
          else {
            uVar16 = 0xffffffff;
            *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
            pcVar9 = &DAT_0083bf04;
            do {
              pcVar10 = pcVar9;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar10 = pcVar9 + 1;
              cVar6 = *pcVar9;
              pcVar9 = pcVar10;
            } while (cVar6 != '\0');
            uVar16 = ~uVar16;
            pcVar10 = pcVar10 + -uVar16;
            pcVar9 = pcVar11;
            for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar9 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            }
            *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
            if (&stack0x00000000 != (undefined1 *)0x114) {
              uVar16 = 0xffffffff;
              pcVar9 = acStack_114;
              do {
                pcVar10 = pcVar9;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                pcVar10 = pcVar9 + 1;
                cVar6 = *pcVar9;
                pcVar9 = pcVar10;
              } while (cVar6 != '\0');
              uVar16 = ~uVar16;
              pcVar9 = pcVar10 + -uVar16;
              pcVar10 = pcVar11 + 8;
              for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar10 = pcVar10 + 4;
              }
              for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *pcVar10 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar10 = pcVar10 + 1;
              }
            }
          }
          iVar12 = *(int *)((int)puVar8 + 0x32);
          if (iVar12 < *(int *)((int)puVar8 + 0x36)) {
LAB_0059b8ab:
            *(char **)(*(int *)((int)puVar8 + 0x2e) + iVar12 * 4) = pcVar11;
            *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
        }
        puVar13 = operator_new(0x108);
        uStack_c = 5;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          FUN_00598b50();
          *puVar13 = &PTR_LAB_007eb464;
          FUN_007a630a();
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) =
               puVar13;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar11 = operator_new(0x108);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          iVar12 = piVar3[0xb8];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar9 = &DAT_0083bf04;
          do {
            pcVar10 = pcVar9;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar10 = pcVar9 + 1;
            cVar6 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar10 + -uVar16;
          pcVar9 = pcVar11;
          for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar9 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          }
          *(int *)(pcVar11 + 0x104) = iVar12;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb304;
          FUN_007a630a();
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar11 = operator_new(0x108);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          iVar12 = piVar3[0xb7];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar9 = &DAT_0083bf04;
          do {
            pcVar10 = pcVar9;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar10 = pcVar9 + 1;
            cVar6 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar10 + -uVar16;
          pcVar9 = pcVar11;
          for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar9 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          }
          *(int *)(pcVar11 + 0x104) = iVar12;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb304;
          FUN_007a630a();
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar11 = operator_new(0x108);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          iVar12 = piVar3[0x46];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar9 = &DAT_0083bf04;
          do {
            pcVar10 = pcVar9;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar10 = pcVar9 + 1;
            cVar6 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar10 + -uVar16;
          pcVar9 = pcVar11;
          for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar9 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          }
          *(int *)(pcVar11 + 0x104) = iVar12;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb304;
          FUN_007a630a();
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar11 = operator_new(0x108);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          iVar12 = piVar3[0xb3];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar9 = &DAT_0083bf04;
          do {
            pcVar10 = pcVar9;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar10 = pcVar9 + 1;
            cVar6 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar10 + -uVar16;
          pcVar9 = pcVar11;
          for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar9 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          }
          *(int *)(pcVar11 + 0x104) = iVar12;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb304;
          FUN_007a630a();
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar11 = operator_new(0x108);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          iVar12 = piVar3[0xb4];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar9 = &DAT_0083bf04;
          do {
            pcVar10 = pcVar9;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar10 = pcVar9 + 1;
            cVar6 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar10 + -uVar16;
          pcVar9 = pcVar11;
          for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar9 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          }
          *(int *)(pcVar11 + 0x104) = iVar12;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb304;
          FUN_007a630a();
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar11 = operator_new(0x108);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          iVar12 = piVar3[0x45];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar9 = &DAT_0083bf04;
          do {
            pcVar10 = pcVar9;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar10 = pcVar9 + 1;
            cVar6 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar10 + -uVar16;
          pcVar9 = pcVar11;
          for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar9 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          }
          *(int *)(pcVar11 + 0x104) = iVar12;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb304;
          FUN_007a630a();
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar11 = operator_new(0x108);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          iVar12 = piVar3[0xb6];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar9 = &DAT_0083bf04;
          do {
            pcVar10 = pcVar9;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar10 = pcVar9 + 1;
            cVar6 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar10 + -uVar16;
          pcVar9 = pcVar11;
          for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar9 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          }
          *(int *)(pcVar11 + 0x104) = iVar12;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb304;
          FUN_007a630a();
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar11 = operator_new(0x108);
        uStack_c = 6;
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          fVar19 = (float10)(**(code **)(*piVar3 + 0x28))();
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar9 = &DAT_0083bf04;
          do {
            pcVar10 = pcVar9;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar10 = pcVar9 + 1;
            cVar6 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar10 + -uVar16;
          pcVar9 = pcVar11;
          for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar9 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          }
          *(float *)(pcVar11 + 0x104) = (float)fVar19;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb304;
          FUN_007a630a();
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar11 = operator_new(0x108);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0x42];
          fVar2 = (float)piVar3[0x3c];
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar9 = &DAT_0083bf04;
          do {
            pcVar10 = pcVar9;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar10 = pcVar9 + 1;
            cVar6 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar6 != '\0');
          fVar1 = fVar1 * fVar2 * _DAT_007e543c;
          uVar16 = ~uVar16;
          pcVar10 = pcVar10 + -uVar16;
          pcVar9 = pcVar11;
          for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar9 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          }
          *(float *)(pcVar11 + 0x104) = fVar1;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb304;
          FUN_007a630a();
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        puVar13 = operator_new(0x108);
        uStack_c = 7;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          fVar1 = (float)piVar3[0x43] * (float)piVar3[0x3c] * _DAT_007e543c;
          FUN_00592190();
          *puVar13 = &PTR_LAB_007eb304;
          puVar13[0x41] = fVar1;
          FUN_007a630a();
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) =
               puVar13;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        puVar13 = operator_new(0x108);
        uStack_c = 8;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          iVar12 = piVar3[0x40];
          FUN_00592190();
          *puVar13 = &PTR_LAB_007eb354;
          puVar13[0x41] = iVar12;
          FUN_007a630a();
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(undefined4 **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) =
               puVar13;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        FUN_00598ca0();
        piVar3 = piVar4;
      }
    }
  }
  piVar5 = *(int **)(iVar14 + 0x451c);
  do {
    do {
      if (piVar5 == (int *)0x0) {
        FUN_005917f0();
        ExceptionList = pvStack_14;
        return;
      }
      piVar3 = (int *)piVar5[2];
      piVar4 = (int *)*piVar5;
      piVar5 = piVar3;
    } while (((*(char *)((int)piVar4 + 0x15f) == '\0') || ((char)piVar4[0x55] != '\0')) ||
            (*(char *)((int)piVar4 + 0x162) != '\0'));
    puVar13 = operator_new(0x50);
    uStack_c = 9;
    puVar8 = (undefined4 *)0x0;
    if (puVar13 != (undefined4 *)0x0) {
      FUN_00598ae0();
      uStack_c = CONCAT31(uStack_c._1_3_,10);
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
    FUN_00447250();
    FUN_00598c30();
    pcVar11 = operator_new(0x104);
    uStack_c = 0xb;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar9 = (char *)(**(code **)(*piVar4 + 0xc))();
      uVar16 = 0xffffffff;
      *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
      pcVar10 = &DAT_0083bf04;
      do {
        pcVar18 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar18 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar18;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar18 = pcVar18 + -uVar16;
      pcVar10 = pcVar11;
      for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar10 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar10 = pcVar10 + 1;
      }
      *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
      if (pcVar9 != (char *)0x0) {
        uVar16 = 0xffffffff;
        do {
          pcVar10 = pcVar9;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar10 = pcVar9 + 1;
          cVar6 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar6 != '\0');
        uVar16 = ~uVar16;
        pcVar9 = pcVar10 + -uVar16;
        pcVar10 = pcVar11 + 8;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
    }
    piVar3 = (int *)((int)puVar8 + 0x2e);
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(char **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar11 = operator_new(0x104);
    uStack_c = 0xc;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar9 = (char *)FUN_004ff320();
      uVar16 = 0xffffffff;
      *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
      pcVar10 = &DAT_0083bf04;
      do {
        pcVar18 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar18 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar18;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar18 = pcVar18 + -uVar16;
      pcVar10 = pcVar11;
      for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar10 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar10 = pcVar10 + 1;
      }
      *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
      if (pcVar9 != (char *)0x0) {
        uVar16 = 0xffffffff;
        do {
          pcVar10 = pcVar9;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar10 = pcVar9 + 1;
          cVar6 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar6 != '\0');
        uVar16 = ~uVar16;
        pcVar9 = pcVar10 + -uVar16;
        pcVar10 = pcVar11 + 8;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(char **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar11 = operator_new(0x104);
    uStack_c = 0xd;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar9 = (char *)FUN_0044e050();
      uVar16 = 0xffffffff;
      *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
      pcVar10 = &DAT_0083bf04;
      do {
        pcVar18 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar18 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar18;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar18 = pcVar18 + -uVar16;
      pcVar10 = pcVar11;
      for (uVar17 = uVar16 >> 2; pcVar10 = pcVar10 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar10 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar10 = pcVar10 + 1;
      }
      *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
      if (pcVar9 != (char *)0x0) {
        uVar16 = 0xffffffff;
        do {
          pcVar10 = pcVar9;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar10 = pcVar9 + 1;
          cVar6 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar6 != '\0');
        uVar16 = ~uVar16;
        pcVar9 = pcVar10 + -uVar16;
        pcVar10 = pcVar11 + 8;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(char **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    if (piVar4[0x22] == 0) {
      pcVar11 = operator_new(0x104);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x0;
      }
      else {
        uVar16 = 0xffffffff;
        *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
        pcVar9 = &DAT_0083bf04;
        do {
          pcVar10 = pcVar9;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar10 = pcVar9 + 1;
          cVar6 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar6 != '\0');
        uVar16 = ~uVar16;
        pcVar10 = pcVar10 + -uVar16;
        pcVar9 = pcVar11;
        for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar9 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        }
        *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
        uVar16 = 0xffffffff;
        pcVar9 = &DAT_0088ebf8;
        do {
          pcVar10 = pcVar9;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar10 = pcVar9 + 1;
          cVar6 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar6 != '\0');
        uVar16 = ~uVar16;
        pcVar9 = pcVar10 + -uVar16;
        pcVar10 = pcVar11 + 8;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
      iVar14 = *(int *)((int)puVar8 + 0x32);
      if (iVar14 < *(int *)((int)puVar8 + 0x36)) goto LAB_0059c502;
      FUN_00405ad0();
    }
    else {
      FUN_004ff3a0();
      FUN_007a630a();
      pcVar11 = operator_new(0x104);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x0;
      }
      else {
        uVar16 = 0xffffffff;
        *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
        pcVar9 = &DAT_0083bf04;
        do {
          pcVar10 = pcVar9;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar10 = pcVar9 + 1;
          cVar6 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar6 != '\0');
        uVar16 = ~uVar16;
        pcVar10 = pcVar10 + -uVar16;
        pcVar9 = pcVar11;
        for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar9 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        }
        *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
        if (&stack0x00000000 != (undefined1 *)0x114) {
          uVar16 = 0xffffffff;
          pcVar9 = acStack_114;
          do {
            pcVar10 = pcVar9;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar10 = pcVar9 + 1;
            cVar6 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar9 = pcVar10 + -uVar16;
          pcVar10 = pcVar11 + 8;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar10 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
          }
        }
      }
      iVar14 = *(int *)((int)puVar8 + 0x32);
      if (iVar14 < *(int *)((int)puVar8 + 0x36)) {
LAB_0059c502:
        *(char **)(*piVar3 + iVar14 * 4) = pcVar11;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
    }
    puVar13 = operator_new(0x108);
    uStack_c = 0xe;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      FUN_00598b50();
      *puVar13 = &PTR_LAB_007eb464;
      FUN_007a630a();
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(undefined4 **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar11 = operator_new(0x108);
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x0;
    }
    else {
      uVar16 = 0xffffffff;
      iVar14 = piVar4[0xb8];
      *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
      pcVar9 = &DAT_0083bf04;
      do {
        pcVar10 = pcVar9;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar10 = pcVar9 + 1;
        cVar6 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar10 + -uVar16;
      pcVar9 = pcVar11;
      for (uVar17 = uVar16 >> 2; pcVar9 = pcVar9 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar9 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar9 + 1;
      }
      *(int *)(pcVar11 + 0x104) = iVar14;
      *(undefined ***)pcVar11 = &PTR_LAB_007eb304;
      FUN_007a630a();
    }
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(char **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar13 = operator_new(0x108);
    uStack_c = 0xf;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      iVar14 = piVar4[0xb7];
      FUN_00592190();
      *puVar13 = &PTR_LAB_007eb304;
      puVar13[0x41] = iVar14;
      FUN_007a630a();
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(undefined4 **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar13 = operator_new(0x108);
    uStack_c = 0x10;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      iVar14 = piVar4[0x46];
      FUN_00592190();
      *puVar13 = &PTR_LAB_007eb304;
      puVar13[0x41] = iVar14;
      FUN_007a630a();
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(undefined4 **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar13 = operator_new(0x108);
    uStack_c = 0x11;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      iVar14 = piVar4[0xb3];
      FUN_00592190();
      *puVar13 = &PTR_LAB_007eb304;
      puVar13[0x41] = iVar14;
      FUN_007a630a();
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(undefined4 **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar13 = operator_new(0x108);
    uStack_c = 0x12;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      iVar14 = piVar4[0xb4];
      FUN_00592190();
      *puVar13 = &PTR_LAB_007eb304;
      puVar13[0x41] = iVar14;
      FUN_007a630a();
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(undefined4 **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar13 = operator_new(0x108);
    uStack_c = 0x13;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      iVar14 = piVar4[0x45];
      FUN_00592190();
      *puVar13 = &PTR_LAB_007eb304;
      puVar13[0x41] = iVar14;
      FUN_007a630a();
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(undefined4 **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar13 = operator_new(0x108);
    uStack_c = 0x14;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      iVar14 = piVar4[0xb6];
      FUN_00592190();
      *puVar13 = &PTR_LAB_007eb304;
      puVar13[0x41] = iVar14;
      FUN_007a630a();
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(undefined4 **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar13 = operator_new(0x108);
    uStack_c = 0x15;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      fVar19 = (float10)(**(code **)(*piVar4 + 0x28))();
      FUN_00592190();
      *puVar13 = &PTR_LAB_007eb304;
      puVar13[0x41] = (float)fVar19;
      FUN_007a630a();
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(undefined4 **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar13 = operator_new(0x108);
    uStack_c = 0x16;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      fVar1 = (float)piVar4[0x42] * (float)piVar4[0x3c] * _DAT_007e543c;
      FUN_00592190();
      *puVar13 = &PTR_LAB_007eb304;
      puVar13[0x41] = fVar1;
      FUN_007a630a();
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(undefined4 **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar13 = operator_new(0x108);
    uStack_c = 0x17;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      fVar1 = (float)piVar4[0x43] * (float)piVar4[0x3c] * _DAT_007e543c;
      FUN_00592190();
      *puVar13 = &PTR_LAB_007eb304;
      puVar13[0x41] = fVar1;
      FUN_007a630a();
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(undefined4 **)(*piVar3 + *(int *)((int)puVar8 + 0x32) * 4) = puVar13;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pvVar15 = operator_new(0x108);
    uStack_c = 0x18;
    if (pvVar15 != (void *)0x0) {
      FUN_00598b50();
    }
    uStack_c = 0xffffffff;
    FUN_00598b10();
    FUN_00598ca0();
  } while( true );
}


