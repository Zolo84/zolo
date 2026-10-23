// FUN_005a28e0 @ 5a28e0 size=4548

void __fastcall FUN_005a28e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  void *pvVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar2 = DAT_00bda0f8;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_007cafa6;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  uVar8 = FUN_004136a0();
  piVar6 = *(int **)(iVar2 + 0x4508);
  while (piVar6 != (int *)0x0) {
    piVar14 = (int *)piVar6[2];
    piVar3 = (int *)*piVar6;
    cVar7 = (**(code **)(*piVar3 + 0x2c))();
    piVar6 = piVar14;
    if (cVar7 != '\0') {
      piVar14 = (int *)(DAT_00ab27b4 + piVar3[3] * 0x4b2);
      piVar5 = *(int **)((int)piVar3 + 0x26);
      while (piVar5 != (int *)0x0) {
        piVar4 = (int *)piVar5[2];
        piVar5 = (int *)*piVar5;
        puVar9 = operator_new(0x50);
        uStack_c = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          FUN_00598ae0();
          uStack_c = CONCAT31(uStack_c._1_3_,1);
          FUN_00433f00();
          *(undefined4 *)((int)puVar9 + 0x3e) = uVar8;
          *(undefined4 *)((int)puVar9 + 0x42) = param_1;
          *(undefined2 *)((int)puVar9 + 0x4a) = 0;
          puVar9[0x13] = 0;
          *puVar9 = &PTR_FUN_007eb380;
          puVar9[2] = &PTR_LAB_007eb37c;
        }
        uStack_c = 0xffffffff;
        FUN_00447250();
        FUN_00598c30();
        pcVar10 = operator_new(0x104);
        uStack_c = 2;
        if (pcVar10 == (char *)0x0) {
          pcVar10 = (char *)0x0;
        }
        else {
          pcVar11 = (char *)(**(code **)(*piVar5 + 0xc))();
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
          pcVar18 = &DAT_0083bf04;
          do {
            pcVar19 = pcVar18;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar19 = pcVar18 + 1;
            cVar7 = *pcVar18;
            pcVar18 = pcVar19;
          } while (cVar7 != '\0');
          uVar16 = ~uVar16;
          pcVar19 = pcVar19 + -uVar16;
          pcVar18 = pcVar10;
          for (uVar17 = uVar16 >> 2; pcVar18 = pcVar18 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar18 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar18 = pcVar18 + 1;
          }
          *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
          if (pcVar11 != (char *)0x0) {
            uVar16 = 0xffffffff;
            do {
              pcVar18 = pcVar11;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar18 = pcVar11 + 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar18;
            } while (cVar7 != '\0');
            uVar16 = ~uVar16;
            pcVar11 = pcVar18 + -uVar16;
            pcVar18 = pcVar10 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar18 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar18 = pcVar18 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar10 = operator_new(0x104);
        uStack_c = 3;
        if (pcVar10 == (char *)0x0) {
          pcVar10 = (char *)0x0;
        }
        else {
          pcVar11 = (char *)FUN_004ff300();
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
          pcVar18 = &DAT_0083bf04;
          do {
            pcVar19 = pcVar18;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar19 = pcVar18 + 1;
            cVar7 = *pcVar18;
            pcVar18 = pcVar19;
          } while (cVar7 != '\0');
          uVar16 = ~uVar16;
          pcVar19 = pcVar19 + -uVar16;
          pcVar18 = pcVar10;
          for (uVar17 = uVar16 >> 2; pcVar18 = pcVar18 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar18 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar18 = pcVar18 + 1;
          }
          *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
          if (pcVar11 != (char *)0x0) {
            uVar16 = 0xffffffff;
            do {
              pcVar18 = pcVar11;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar18 = pcVar11 + 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar18;
            } while (cVar7 != '\0');
            uVar16 = ~uVar16;
            pcVar11 = pcVar18 + -uVar16;
            pcVar18 = pcVar10 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar18 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar18 = pcVar18 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        if ((*(char *)((int)piVar5 + 0x161) == '\0') ||
           (cVar7 = (**(code **)(*piVar5 + 0x14))(), cVar7 == '\0')) {
          pcVar10 = operator_new(0x104);
          if (pcVar10 == (char *)0x0) {
            pcVar10 = (char *)0x0;
          }
          else {
            uVar16 = 0xffffffff;
            *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
            pcVar11 = &DAT_0083bf04;
            do {
              pcVar18 = pcVar11;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar18 = pcVar11 + 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar18;
            } while (cVar7 != '\0');
            uVar16 = ~uVar16;
            pcVar18 = pcVar18 + -uVar16;
            pcVar11 = pcVar10;
            for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar11 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar11 = pcVar11 + 1;
            }
            *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
            uVar16 = 0xffffffff;
            pcVar11 = &DAT_0088ebf8;
            do {
              pcVar18 = pcVar11;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar18 = pcVar11 + 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar18;
            } while (cVar7 != '\0');
            uVar16 = ~uVar16;
            pcVar11 = pcVar18 + -uVar16;
            pcVar18 = pcVar10 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar18 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar18 = pcVar18 + 1;
            }
          }
          if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
            *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
            goto LAB_005a2d05;
          }
          FUN_00405ad0();
        }
        else {
          pcVar10 = operator_new(0x104);
          uStack_c = 4;
          if (pcVar10 == (char *)0x0) {
            pcVar10 = (char *)0x0;
          }
          else {
            pcVar11 = (char *)FUN_0042b6c9();
            uVar16 = 0xffffffff;
            *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
            pcVar18 = &DAT_0083bf04;
            do {
              pcVar19 = pcVar18;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar19 = pcVar18 + 1;
              cVar7 = *pcVar18;
              pcVar18 = pcVar19;
            } while (cVar7 != '\0');
            uVar16 = ~uVar16;
            pcVar19 = pcVar19 + -uVar16;
            pcVar18 = pcVar10;
            for (uVar17 = uVar16 >> 2; pcVar18 = pcVar18 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
              pcVar19 = pcVar19 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar18 = *pcVar19;
              pcVar19 = pcVar19 + 1;
              pcVar18 = pcVar18 + 1;
            }
            *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
            if (pcVar11 != (char *)0x0) {
              uVar16 = 0xffffffff;
              do {
                pcVar18 = pcVar11;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                pcVar18 = pcVar11 + 1;
                cVar7 = *pcVar11;
                pcVar11 = pcVar18;
              } while (cVar7 != '\0');
              uVar16 = ~uVar16;
              pcVar11 = pcVar18 + -uVar16;
              pcVar18 = pcVar10 + 8;
              for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar18 = pcVar18 + 4;
              }
              for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *pcVar18 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar18 = pcVar18 + 1;
              }
            }
          }
          uStack_c = 0xffffffff;
          if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
            *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
LAB_005a2d05:
            *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
        }
        pcVar10 = operator_new(0x104);
        uStack_c = 5;
        if (pcVar10 == (char *)0x0) {
          pcVar10 = (char *)0x0;
        }
        else {
          pcVar11 = (char *)(**(code **)(*piVar3 + 0xc))();
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
          pcVar18 = &DAT_0083bf04;
          do {
            pcVar19 = pcVar18;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar19 = pcVar18 + 1;
            cVar7 = *pcVar18;
            pcVar18 = pcVar19;
          } while (cVar7 != '\0');
          uVar16 = ~uVar16;
          pcVar19 = pcVar19 + -uVar16;
          pcVar18 = pcVar10;
          for (uVar17 = uVar16 >> 2; pcVar18 = pcVar18 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar18 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar18 = pcVar18 + 1;
          }
          *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
          if (pcVar11 != (char *)0x0) {
            uVar16 = 0xffffffff;
            do {
              pcVar18 = pcVar11;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar18 = pcVar11 + 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar18;
            } while (cVar7 != '\0');
            uVar16 = ~uVar16;
            pcVar11 = pcVar18 + -uVar16;
            pcVar18 = pcVar10 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar18 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar18 = pcVar18 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar10 = operator_new(0x104);
        uStack_c = 6;
        if (pcVar10 == (char *)0x0) {
          pcVar10 = (char *)0x0;
        }
        else {
          pcVar11 = (char *)(**(code **)(*piVar14 + 0xc))();
          uVar16 = 0xffffffff;
          *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
          pcVar18 = &DAT_0083bf04;
          do {
            pcVar19 = pcVar18;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar19 = pcVar18 + 1;
            cVar7 = *pcVar18;
            pcVar18 = pcVar19;
          } while (cVar7 != '\0');
          uVar16 = ~uVar16;
          pcVar19 = pcVar19 + -uVar16;
          pcVar18 = pcVar10;
          for (uVar17 = uVar16 >> 2; pcVar18 = pcVar18 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar18 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar18 = pcVar18 + 1;
          }
          *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
          if (pcVar11 != (char *)0x0) {
            uVar16 = 0xffffffff;
            do {
              pcVar18 = pcVar11;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar18 = pcVar11 + 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar18;
            } while (cVar7 != '\0');
            uVar16 = ~uVar16;
            pcVar11 = pcVar18 + -uVar16;
            pcVar18 = pcVar10 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar18 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar18 = pcVar18 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar10 = operator_new(0x108);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = (char *)0x0;
        }
        else {
          uVar16 = 0xffffffff;
          iVar1 = piVar5[0x3b];
          *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar18 = pcVar11;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar18 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar18;
          } while (cVar7 != '\0');
          uVar16 = ~uVar16;
          pcVar18 = pcVar18 + -uVar16;
          pcVar11 = pcVar10;
          for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar11 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(int *)(pcVar10 + 0x104) = iVar1;
          *(undefined ***)pcVar10 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar10 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar10 = operator_new(0x108);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = (char *)0x0;
        }
        else {
          uVar16 = 0xffffffff;
          iVar1 = piVar5[0x3d];
          *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar18 = pcVar11;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar18 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar18;
          } while (cVar7 != '\0');
          uVar16 = ~uVar16;
          pcVar18 = pcVar18 + -uVar16;
          pcVar11 = pcVar10;
          for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar11 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(int *)(pcVar10 + 0x104) = iVar1;
          *(undefined ***)pcVar10 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar10 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pvVar12 = operator_new(0x10a);
        uStack_c = 7;
        if (pvVar12 == (void *)0x0) {
          uVar13 = 0;
        }
        else {
          FUN_00447250();
          uVar13 = FUN_0058f0b0();
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
          *(undefined4 *)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = uVar13;
          *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        if (*(int *)(piVar5[0x1b] + 0x264) == 0) {
          pcVar10 = operator_new(0x104);
          if (pcVar10 == (char *)0x0) {
            pcVar10 = (char *)0x0;
          }
          else {
            uVar16 = 0xffffffff;
            *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
            pcVar11 = &DAT_0083bf04;
            do {
              pcVar18 = pcVar11;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar18 = pcVar11 + 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar18;
            } while (cVar7 != '\0');
            uVar16 = ~uVar16;
            pcVar18 = pcVar18 + -uVar16;
            pcVar11 = pcVar10;
            for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar11 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar11 = pcVar11 + 1;
            }
            *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
            uVar16 = 0xffffffff;
            pcVar11 = &DAT_0088ebf8;
            do {
              pcVar18 = pcVar11;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar18 = pcVar11 + 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar18;
            } while (cVar7 != '\0');
            uVar16 = ~uVar16;
            pcVar11 = pcVar18 + -uVar16;
            pcVar18 = pcVar10 + 8;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar18 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar18 = pcVar18 + 1;
            }
          }
          if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
            *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
LAB_005a3189:
            *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
        }
        else {
          pcVar10 = operator_new(0x104);
          uStack_c = 8;
          if (pcVar10 == (char *)0x0) {
            pcVar10 = (char *)0x0;
          }
          else {
            pcVar11 = (char *)FUN_005154b0();
            uVar16 = 0xffffffff;
            *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
            pcVar18 = &DAT_0083bf04;
            do {
              pcVar19 = pcVar18;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar19 = pcVar18 + 1;
              cVar7 = *pcVar18;
              pcVar18 = pcVar19;
            } while (cVar7 != '\0');
            uVar16 = ~uVar16;
            pcVar19 = pcVar19 + -uVar16;
            pcVar18 = pcVar10;
            for (uVar17 = uVar16 >> 2; pcVar18 = pcVar18 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
              pcVar19 = pcVar19 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar18 = *pcVar19;
              pcVar19 = pcVar19 + 1;
              pcVar18 = pcVar18 + 1;
            }
            *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
            if (pcVar11 != (char *)0x0) {
              uVar16 = 0xffffffff;
              do {
                pcVar18 = pcVar11;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                pcVar18 = pcVar11 + 1;
                cVar7 = *pcVar11;
                pcVar11 = pcVar18;
              } while (cVar7 != '\0');
              uVar16 = ~uVar16;
              pcVar11 = pcVar18 + -uVar16;
              pcVar18 = pcVar10 + 8;
              for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar18 = pcVar18 + 4;
              }
              for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *pcVar18 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar18 = pcVar18 + 1;
              }
            }
          }
          uStack_c = 0xffffffff;
          if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
            *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
            goto LAB_005a3189;
          }
          FUN_00405ad0();
        }
        FUN_00598ca0();
        piVar5 = piVar4;
      }
    }
  }
  piVar6 = *(int **)(iVar2 + 0x451c);
  do {
    do {
      if (piVar6 == (int *)0x0) {
        FUN_005917f0();
        ExceptionList = pvStack_14;
        return;
      }
      piVar14 = (int *)piVar6[2];
      piVar3 = (int *)*piVar6;
      piVar6 = piVar14;
    } while (((*(char *)((int)piVar3 + 0x161) == '\0') || ((char)piVar3[0x55] != '\0')) ||
            (*(char *)((int)piVar3 + 0x162) != '\0'));
    puVar9 = operator_new(0x50);
    uStack_c = 9;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      FUN_00598ae0();
      uStack_c = CONCAT31(uStack_c._1_3_,10);
      FUN_00433f00();
      *(undefined4 *)((int)puVar9 + 0x3e) = uVar8;
      *(undefined4 *)((int)puVar9 + 0x42) = param_1;
      *(undefined2 *)((int)puVar9 + 0x4a) = 0;
      puVar9[0x13] = 0;
      *puVar9 = &PTR_FUN_007eb380;
      puVar9[2] = &PTR_LAB_007eb37c;
    }
    uStack_c = 0xffffffff;
    FUN_00447250();
    FUN_00598c30();
    pcVar10 = operator_new(0x104);
    uStack_c = 0xb;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      pcVar11 = (char *)(**(code **)(*piVar3 + 0xc))();
      uVar16 = 0xffffffff;
      *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
      pcVar18 = &DAT_0083bf04;
      do {
        pcVar19 = pcVar18;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar19 = pcVar18 + 1;
        cVar7 = *pcVar18;
        pcVar18 = pcVar19;
      } while (cVar7 != '\0');
      uVar16 = ~uVar16;
      pcVar19 = pcVar19 + -uVar16;
      pcVar18 = pcVar10;
      for (uVar17 = uVar16 >> 2; pcVar18 = pcVar18 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar18 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar18 = pcVar18 + 1;
      }
      *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
      if (pcVar11 != (char *)0x0) {
        uVar16 = 0xffffffff;
        do {
          pcVar18 = pcVar11;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar18 = pcVar11 + 1;
          cVar7 = *pcVar11;
          pcVar11 = pcVar18;
        } while (cVar7 != '\0');
        uVar16 = ~uVar16;
        pcVar11 = pcVar18 + -uVar16;
        pcVar18 = pcVar10 + 8;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar18 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar18 = pcVar18 + 1;
        }
      }
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
      *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
      *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar10 = operator_new(0x104);
    uStack_c = 0xc;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      pcVar11 = (char *)FUN_004ff300();
      uVar16 = 0xffffffff;
      *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
      pcVar18 = &DAT_0083bf04;
      do {
        pcVar19 = pcVar18;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar19 = pcVar18 + 1;
        cVar7 = *pcVar18;
        pcVar18 = pcVar19;
      } while (cVar7 != '\0');
      uVar16 = ~uVar16;
      pcVar19 = pcVar19 + -uVar16;
      pcVar18 = pcVar10;
      for (uVar17 = uVar16 >> 2; pcVar18 = pcVar18 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar18 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        pcVar18 = pcVar18 + 1;
      }
      *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
      if (pcVar11 != (char *)0x0) {
        uVar16 = 0xffffffff;
        do {
          pcVar18 = pcVar11;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar18 = pcVar11 + 1;
          cVar7 = *pcVar11;
          pcVar11 = pcVar18;
        } while (cVar7 != '\0');
        uVar16 = ~uVar16;
        pcVar11 = pcVar18 + -uVar16;
        pcVar18 = pcVar10 + 8;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar18 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar18 = pcVar18 + 1;
        }
      }
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
      *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
      *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    cVar7 = (**(code **)(*piVar3 + 0x14))();
    if (cVar7 == '\0') {
      pcVar10 = operator_new(0x104);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x0;
      }
      else {
        uVar16 = 0xffffffff;
        *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
        pcVar11 = &DAT_0083bf04;
        do {
          pcVar18 = pcVar11;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar18 = pcVar11 + 1;
          cVar7 = *pcVar11;
          pcVar11 = pcVar18;
        } while (cVar7 != '\0');
        uVar16 = ~uVar16;
        pcVar18 = pcVar18 + -uVar16;
        pcVar11 = pcVar10;
        for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar11 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar11 = pcVar11 + 1;
        }
        *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
        uVar16 = 0xffffffff;
        pcVar11 = &DAT_0088ebf8;
        do {
          pcVar18 = pcVar11;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar18 = pcVar11 + 1;
          cVar7 = *pcVar11;
          pcVar11 = pcVar18;
        } while (cVar7 != '\0');
        uVar16 = ~uVar16;
        pcVar11 = pcVar18 + -uVar16;
        pcVar18 = pcVar10 + 8;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar18 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar18 = pcVar18 + 1;
        }
      }
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
        goto LAB_005a356b;
      }
      FUN_00405ad0();
    }
    else {
      pcVar10 = operator_new(0x104);
      uStack_c = 0xd;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x0;
      }
      else {
        pcVar11 = (char *)FUN_0042b6c9();
        uVar16 = 0xffffffff;
        *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
        pcVar18 = &DAT_0083bf04;
        do {
          pcVar19 = pcVar18;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar19 = pcVar18 + 1;
          cVar7 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar7 != '\0');
        uVar16 = ~uVar16;
        pcVar19 = pcVar19 + -uVar16;
        pcVar18 = pcVar10;
        for (uVar17 = uVar16 >> 2; pcVar18 = pcVar18 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar18 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar18 = pcVar18 + 1;
        }
        *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
        if (pcVar11 != (char *)0x0) {
          uVar16 = 0xffffffff;
          do {
            pcVar18 = pcVar11;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar18 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar18;
          } while (cVar7 != '\0');
          uVar16 = ~uVar16;
          pcVar11 = pcVar18 + -uVar16;
          pcVar18 = pcVar10 + 8;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar18 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar18 = pcVar18 + 1;
          }
        }
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
LAB_005a356b:
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
    }
    if (piVar3[0x53] == 0) {
      pcVar10 = operator_new(0x104);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x0;
      }
      else {
        uVar16 = 0xffffffff;
        *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
        pcVar11 = &DAT_0083bf04;
        do {
          pcVar18 = pcVar11;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar18 = pcVar11 + 1;
          cVar7 = *pcVar11;
          pcVar11 = pcVar18;
        } while (cVar7 != '\0');
        uVar16 = ~uVar16;
        pcVar18 = pcVar18 + -uVar16;
        pcVar11 = pcVar10;
        for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar11 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar11 = pcVar11 + 1;
        }
        *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
        uVar16 = 0xffffffff;
        pcVar11 = &DAT_0088ebf8;
        do {
          pcVar18 = pcVar11;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar18 = pcVar11 + 1;
          cVar7 = *pcVar11;
          pcVar11 = pcVar18;
        } while (cVar7 != '\0');
        uVar16 = ~uVar16;
        pcVar11 = pcVar18 + -uVar16;
        pcVar18 = pcVar10 + 8;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar18 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar18 = pcVar18 + 1;
        }
      }
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      pcVar10 = operator_new(0x104);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x0;
      }
      else {
        uVar16 = 0xffffffff;
        *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
        pcVar11 = &DAT_0083bf04;
        do {
          pcVar18 = pcVar11;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar18 = pcVar11 + 1;
          cVar7 = *pcVar11;
          pcVar11 = pcVar18;
        } while (cVar7 != '\0');
        uVar16 = ~uVar16;
        pcVar18 = pcVar18 + -uVar16;
        pcVar11 = pcVar10;
        for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar11 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar11 = pcVar11 + 1;
        }
        *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
        uVar16 = 0xffffffff;
        pcVar11 = &DAT_0088ebf8;
        do {
          pcVar18 = pcVar11;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar18 = pcVar11 + 1;
          cVar7 = *pcVar11;
          pcVar11 = pcVar18;
        } while (cVar7 != '\0');
        uVar16 = ~uVar16;
        pcVar11 = pcVar18 + -uVar16;
        pcVar18 = pcVar10 + 8;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar18 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar18 = pcVar18 + 1;
        }
      }
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
        goto LAB_005a3834;
      }
      FUN_00405ad0();
    }
    else {
      pcVar10 = operator_new(0x104);
      uStack_c = 0xe;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x0;
      }
      else {
        pcVar11 = (char *)FUN_0042b6c9();
        uVar16 = 0xffffffff;
        *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
        pcVar18 = &DAT_0083bf04;
        do {
          pcVar19 = pcVar18;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar19 = pcVar18 + 1;
          cVar7 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar7 != '\0');
        uVar16 = ~uVar16;
        pcVar19 = pcVar19 + -uVar16;
        pcVar18 = pcVar10;
        for (uVar17 = uVar16 >> 2; pcVar18 = pcVar18 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar18 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar18 = pcVar18 + 1;
        }
        *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
        if (pcVar11 != (char *)0x0) {
          uVar16 = 0xffffffff;
          do {
            pcVar18 = pcVar11;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar18 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar18;
          } while (cVar7 != '\0');
          uVar16 = ~uVar16;
          pcVar11 = pcVar18 + -uVar16;
          pcVar18 = pcVar10 + 8;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar18 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar18 = pcVar18 + 1;
          }
        }
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      pcVar10 = operator_new(0x104);
      uStack_c = 0xf;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x0;
      }
      else {
        piVar14 = (int *)FUN_004e9370();
        pcVar11 = (char *)(**(code **)(*piVar14 + 0xc))();
        uVar16 = 0xffffffff;
        *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
        pcVar18 = &DAT_0083bf04;
        do {
          pcVar19 = pcVar18;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar19 = pcVar18 + 1;
          cVar7 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar7 != '\0');
        uVar16 = ~uVar16;
        pcVar19 = pcVar19 + -uVar16;
        pcVar18 = pcVar10;
        for (uVar17 = uVar16 >> 2; pcVar18 = pcVar18 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar18 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar18 = pcVar18 + 1;
        }
        *(undefined ***)pcVar10 = &PTR_LAB_007eb23c;
        if (pcVar11 != (char *)0x0) {
          uVar16 = 0xffffffff;
          do {
            pcVar18 = pcVar11;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar18 = pcVar11 + 1;
            cVar7 = *pcVar11;
            pcVar11 = pcVar18;
          } while (cVar7 != '\0');
          uVar16 = ~uVar16;
          pcVar11 = pcVar18 + -uVar16;
          pcVar18 = pcVar10 + 8;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar18 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar18 = pcVar18 + 1;
          }
        }
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
        *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
LAB_005a3834:
        *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
    }
    pcVar10 = operator_new(0x108);
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      uVar16 = 0xffffffff;
      iVar2 = piVar3[0x3b];
      *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
      pcVar11 = &DAT_0083bf04;
      do {
        pcVar18 = pcVar11;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar18 = pcVar11 + 1;
        cVar7 = *pcVar11;
        pcVar11 = pcVar18;
      } while (cVar7 != '\0');
      uVar16 = ~uVar16;
      pcVar18 = pcVar18 + -uVar16;
      pcVar11 = pcVar10;
      for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar11 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar11 = pcVar11 + 1;
      }
      *(int *)(pcVar10 + 0x104) = iVar2;
      *(undefined ***)pcVar10 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar10 + 8,&PTR_PTR_0083c9e8);
    }
    if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
      *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
      *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar10 = operator_new(0x108);
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x0;
    }
    else {
      uVar16 = 0xffffffff;
      iVar2 = piVar3[0x3d];
      *(undefined ***)pcVar10 = &PTR_LAB_007eb264;
      pcVar11 = &DAT_0083bf04;
      do {
        pcVar18 = pcVar11;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar18 = pcVar11 + 1;
        cVar7 = *pcVar11;
        pcVar11 = pcVar18;
      } while (cVar7 != '\0');
      uVar16 = ~uVar16;
      pcVar18 = pcVar18 + -uVar16;
      pcVar11 = pcVar10;
      for (uVar17 = uVar16 >> 2; pcVar11 = pcVar11 + 4, uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar11 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar11 = pcVar11 + 1;
      }
      *(int *)(pcVar10 + 0x104) = iVar2;
      *(undefined ***)pcVar10 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar10 + 8,&PTR_PTR_0083c9e8);
    }
    if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
      *(char **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = pcVar10;
      *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pvVar12 = operator_new(0x10a);
    uStack_c = 0x10;
    if (pvVar12 == (void *)0x0) {
      uVar13 = 0;
    }
    else {
      FUN_00447250();
      uVar13 = FUN_0058f0b0();
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
      *(undefined4 *)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = uVar13;
      *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    puVar15 = operator_new(0x104);
    uStack_c = 0x11;
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      pcVar10 = (char *)FUN_0042b6c9();
      FUN_00592190();
      *puVar15 = &PTR_LAB_007eb23c;
      if (pcVar10 != (char *)0x0) {
        uVar16 = 0xffffffff;
        do {
          pcVar11 = pcVar10;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar11 = pcVar10 + 1;
          cVar7 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar7 != '\0');
        uVar16 = ~uVar16;
        pcVar10 = pcVar11 + -uVar16;
        pcVar11 = (char *)(puVar15 + 2);
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
    if (*(int *)((int)puVar9 + 0x32) < *(int *)((int)puVar9 + 0x36)) {
      *(undefined4 **)(*(int *)((int)puVar9 + 0x2e) + *(int *)((int)puVar9 + 0x32) * 4) = puVar15;
      *(int *)((int)puVar9 + 0x32) = *(int *)((int)puVar9 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    FUN_00598ca0();
  } while( true );
}


