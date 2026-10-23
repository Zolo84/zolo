// FUN_005a13d0 @ 5a13d0 size=4625

void __fastcall FUN_005a13d0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  char acStack_64 [80];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar1 = DAT_00bda0f8;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_007caeb6;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  uVar7 = FUN_004136a0();
  piVar5 = *(int **)(iVar1 + 0x4508);
  while (piVar5 != (int *)0x0) {
    piVar13 = (int *)piVar5[2];
    piVar2 = (int *)*piVar5;
    cVar6 = (**(code **)(*piVar2 + 0x28))();
    piVar5 = piVar13;
    if (cVar6 != '\0') {
      piVar13 = (int *)(DAT_00ab27b4 + piVar2[3] * 0x4b2);
      piVar4 = *(int **)((int)piVar2 + 0x26);
      while (piVar4 != (int *)0x0) {
        piVar3 = (int *)piVar4[2];
        piVar4 = (int *)*piVar4;
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
        if (pcVar9 == (char *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar10 = (char *)(**(code **)(*piVar4 + 0xc))();
          uVar14 = 0xffffffff;
          *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
          pcVar17 = &DAT_0083bf04;
          do {
            pcVar18 = pcVar17;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar18 = pcVar17 + 1;
            cVar6 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar6 != '\0');
          uVar14 = ~uVar14;
          pcVar18 = pcVar18 + -uVar14;
          pcVar17 = pcVar9;
          for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar17 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar17 = pcVar17 + 1;
          }
          *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
          if (pcVar10 != (char *)0x0) {
            uVar14 = 0xffffffff;
            do {
              pcVar17 = pcVar10;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar17 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar17;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar10 = pcVar17 + -uVar14;
            pcVar17 = pcVar9 + 8;
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar17 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar17 = pcVar17 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar9 = operator_new(0x104);
        uStack_c = 3;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar10 = (char *)FUN_004ff300();
          uVar14 = 0xffffffff;
          *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
          pcVar17 = &DAT_0083bf04;
          do {
            pcVar18 = pcVar17;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar18 = pcVar17 + 1;
            cVar6 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar6 != '\0');
          uVar14 = ~uVar14;
          pcVar18 = pcVar18 + -uVar14;
          pcVar17 = pcVar9;
          for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar17 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar17 = pcVar17 + 1;
          }
          *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
          if (pcVar10 != (char *)0x0) {
            uVar14 = 0xffffffff;
            do {
              pcVar17 = pcVar10;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar17 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar17;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar10 = pcVar17 + -uVar14;
            pcVar17 = pcVar9 + 8;
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar17 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar17 = pcVar17 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar9 = operator_new(0x104);
        uStack_c = 4;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar10 = (char *)FUN_004ff380();
          uVar14 = 0xffffffff;
          *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
          pcVar17 = &DAT_0083bf04;
          do {
            pcVar18 = pcVar17;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar18 = pcVar17 + 1;
            cVar6 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar6 != '\0');
          uVar14 = ~uVar14;
          pcVar18 = pcVar18 + -uVar14;
          pcVar17 = pcVar9;
          for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar17 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar17 = pcVar17 + 1;
          }
          *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
          if (pcVar10 != (char *)0x0) {
            uVar14 = 0xffffffff;
            do {
              pcVar17 = pcVar10;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar17 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar17;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar10 = pcVar17 + -uVar14;
            pcVar17 = pcVar9 + 8;
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar17 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar17 = pcVar17 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        if (*(char *)((int)piVar4 + 0x155) == '\0') {
          pcVar9 = operator_new(0x104);
          uStack_c = 5;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x0;
          }
          else {
            pcVar10 = (char *)(**(code **)(*piVar2 + 0xc))();
            uVar14 = 0xffffffff;
            *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
            pcVar17 = &DAT_0083bf04;
            do {
              pcVar18 = pcVar17;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar18 = pcVar17 + 1;
              cVar6 = *pcVar17;
              pcVar17 = pcVar18;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar18 = pcVar18 + -uVar14;
            pcVar17 = pcVar9;
            for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar17 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar17 = pcVar17 + 1;
            }
            *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
            if (pcVar10 != (char *)0x0) {
              uVar14 = 0xffffffff;
              do {
                pcVar17 = pcVar10;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                pcVar17 = pcVar10 + 1;
                cVar6 = *pcVar10;
                pcVar10 = pcVar17;
              } while (cVar6 != '\0');
              uVar14 = ~uVar14;
              pcVar10 = pcVar17 + -uVar14;
              pcVar17 = pcVar9 + 8;
              for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar17 = pcVar17 + 4;
              }
              for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *pcVar17 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar17 = pcVar17 + 1;
              }
            }
          }
          uStack_c = 0xffffffff;
          if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
            *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
            goto LAB_005a1925;
          }
          FUN_00405ad0();
        }
        else {
          pcVar9 = (char *)(**(code **)(*piVar2 + 0xc))();
          uVar14 = 0xffffffff;
          do {
            pcVar10 = pcVar9;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar10 = pcVar9 + 1;
            cVar6 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar6 != '\0');
          uVar14 = ~uVar14;
          pcVar9 = pcVar10 + -uVar14;
          pcVar10 = acStack_64;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar10 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
          }
          pcVar9 = operator_new(0x104);
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x0;
          }
          else {
            uVar14 = 0xffffffff;
            pcVar10 = &DAT_00858a60;
            do {
              pcVar17 = pcVar10;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar17 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar17;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            iVar16 = -1;
            pcVar10 = acStack_64;
            do {
              pcVar18 = pcVar10;
              if (iVar16 == 0) break;
              iVar16 = iVar16 + -1;
              pcVar18 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar18;
            } while (cVar6 != '\0');
            pcVar10 = pcVar17 + -uVar14;
            pcVar17 = pcVar18 + -1;
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar17 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar17 = pcVar17 + 1;
            }
            uVar14 = 0xffffffff;
            *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
            pcVar10 = &DAT_0083bf04;
            do {
              pcVar17 = pcVar10;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar17 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar17;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar17 = pcVar17 + -uVar14;
            pcVar10 = pcVar9;
            for (uVar15 = uVar14 >> 2; pcVar10 = pcVar10 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar10 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcVar10 = pcVar10 + 1;
            }
            *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
            if (acStack_64 != (char *)0x0) {
              uVar14 = 0xffffffff;
              pcVar10 = acStack_64;
              do {
                pcVar17 = pcVar10;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                pcVar17 = pcVar10 + 1;
                cVar6 = *pcVar10;
                pcVar10 = pcVar17;
              } while (cVar6 != '\0');
              uVar14 = ~uVar14;
              pcVar10 = pcVar17 + -uVar14;
              pcVar17 = pcVar9 + 8;
              for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar17 = pcVar17 + 4;
              }
              for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *pcVar17 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar17 = pcVar17 + 1;
              }
            }
          }
          if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
            *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
LAB_005a1925:
            *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
        }
        pcVar9 = operator_new(0x104);
        uStack_c = 6;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar10 = (char *)(**(code **)(*piVar13 + 0xc))();
          uVar14 = 0xffffffff;
          *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
          pcVar17 = &DAT_0083bf04;
          do {
            pcVar18 = pcVar17;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar18 = pcVar17 + 1;
            cVar6 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar6 != '\0');
          uVar14 = ~uVar14;
          pcVar18 = pcVar18 + -uVar14;
          pcVar17 = pcVar9;
          for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar17 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar17 = pcVar17 + 1;
          }
          *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
          if (pcVar10 != (char *)0x0) {
            uVar14 = 0xffffffff;
            do {
              pcVar17 = pcVar10;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar17 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar17;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar10 = pcVar17 + -uVar14;
            pcVar17 = pcVar9 + 8;
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar17 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar17 = pcVar17 + 1;
            }
          }
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar9 = operator_new(0x108);
        if (pcVar9 == (char *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          uVar14 = 0xffffffff;
          iVar16 = piVar4[0x3b];
          *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar17 = pcVar10;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar17 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar17;
          } while (cVar6 != '\0');
          uVar14 = ~uVar14;
          pcVar17 = pcVar17 + -uVar14;
          pcVar10 = pcVar9;
          for (uVar15 = uVar14 >> 2; pcVar10 = pcVar10 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar10 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(int *)(pcVar9 + 0x104) = iVar16;
          *(undefined ***)pcVar9 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar9 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar9 = operator_new(0x108);
        if (pcVar9 == (char *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          uVar14 = 0xffffffff;
          iVar16 = piVar4[0x3d];
          *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar17 = pcVar10;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar17 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar17;
          } while (cVar6 != '\0');
          uVar14 = ~uVar14;
          pcVar17 = pcVar17 + -uVar14;
          pcVar10 = pcVar9;
          for (uVar15 = uVar14 >> 2; pcVar10 = pcVar10 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar10 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar10 = pcVar10 + 1;
          }
          *(int *)(pcVar9 + 0x104) = iVar16;
          *(undefined ***)pcVar9 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar9 + 8,&PTR_PTR_0083c9e8);
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pvVar11 = operator_new(0x10a);
        uStack_c = 7;
        if (pvVar11 == (void *)0x0) {
          uVar12 = 0;
        }
        else {
          FUN_00447250();
          uVar12 = FUN_0058f0b0();
        }
        uStack_c = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(undefined4 *)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = uVar12;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        if (*(int *)(piVar4[0x1b] + 0x264) == 0) {
          pcVar9 = operator_new(0x104);
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x0;
          }
          else {
            uVar14 = 0xffffffff;
            *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
            pcVar10 = &DAT_0083bf04;
            do {
              pcVar17 = pcVar10;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar17 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar17;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar17 = pcVar17 + -uVar14;
            pcVar10 = pcVar9;
            for (uVar15 = uVar14 >> 2; pcVar10 = pcVar10 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar10 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcVar10 = pcVar10 + 1;
            }
            *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
            uVar14 = 0xffffffff;
            pcVar10 = &DAT_0088ebf8;
            do {
              pcVar17 = pcVar10;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar17 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar17;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar10 = pcVar17 + -uVar14;
            pcVar17 = pcVar9 + 8;
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar17 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar17 = pcVar17 + 1;
            }
          }
          if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
            *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
LAB_005a1d00:
            *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
        }
        else {
          pcVar9 = operator_new(0x104);
          uStack_c = 8;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x0;
          }
          else {
            pcVar10 = (char *)FUN_005154b0();
            uVar14 = 0xffffffff;
            *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
            pcVar17 = &DAT_0083bf04;
            do {
              pcVar18 = pcVar17;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar18 = pcVar17 + 1;
              cVar6 = *pcVar17;
              pcVar17 = pcVar18;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar18 = pcVar18 + -uVar14;
            pcVar17 = pcVar9;
            for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar17 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar17 = pcVar17 + 1;
            }
            *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
            if (pcVar10 != (char *)0x0) {
              uVar14 = 0xffffffff;
              do {
                pcVar17 = pcVar10;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                pcVar17 = pcVar10 + 1;
                cVar6 = *pcVar10;
                pcVar10 = pcVar17;
              } while (cVar6 != '\0');
              uVar14 = ~uVar14;
              pcVar10 = pcVar17 + -uVar14;
              pcVar17 = pcVar9 + 8;
              for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar17 = pcVar17 + 4;
              }
              for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *pcVar17 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar17 = pcVar17 + 1;
              }
            }
          }
          uStack_c = 0xffffffff;
          if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
            *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
            goto LAB_005a1d00;
          }
          FUN_00405ad0();
        }
        FUN_00598ca0();
        piVar4 = piVar3;
      }
    }
  }
  piVar5 = *(int **)(iVar1 + 0x451c);
  do {
    do {
      if (piVar5 == (int *)0x0) {
        FUN_005917f0();
        ExceptionList = pvStack_14;
        return;
      }
      piVar13 = (int *)piVar5[2];
      piVar2 = (int *)*piVar5;
      piVar5 = piVar13;
    } while (((*(char *)((int)piVar2 + 0x15f) == '\0') || ((char)piVar2[0x55] != '\0')) ||
            (*(char *)((int)piVar2 + 0x162) != '\0'));
    puVar8 = operator_new(0x50);
    uStack_c = 9;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      FUN_00598ae0();
      uStack_c = CONCAT31(uStack_c._1_3_,10);
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
    uStack_c = 0xb;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar10 = (char *)(**(code **)(*piVar2 + 0xc))();
      uVar14 = 0xffffffff;
      *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
      pcVar17 = &DAT_0083bf04;
      do {
        pcVar18 = pcVar17;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar17 + 1;
        cVar6 = *pcVar17;
        pcVar17 = pcVar18;
      } while (cVar6 != '\0');
      uVar14 = ~uVar14;
      pcVar18 = pcVar18 + -uVar14;
      pcVar17 = pcVar9;
      for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar17 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar17 = pcVar17 + 1;
      }
      *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
      if (pcVar10 != (char *)0x0) {
        uVar14 = 0xffffffff;
        do {
          pcVar17 = pcVar10;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar17;
        } while (cVar6 != '\0');
        uVar14 = ~uVar14;
        pcVar10 = pcVar17 + -uVar14;
        pcVar17 = pcVar9 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar9 = operator_new(0x104);
    uStack_c = 0xc;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar10 = (char *)FUN_004ff300();
      uVar14 = 0xffffffff;
      *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
      pcVar17 = &DAT_0083bf04;
      do {
        pcVar18 = pcVar17;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar17 + 1;
        cVar6 = *pcVar17;
        pcVar17 = pcVar18;
      } while (cVar6 != '\0');
      uVar14 = ~uVar14;
      pcVar18 = pcVar18 + -uVar14;
      pcVar17 = pcVar9;
      for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar17 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar17 = pcVar17 + 1;
      }
      *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
      if (pcVar10 != (char *)0x0) {
        uVar14 = 0xffffffff;
        do {
          pcVar17 = pcVar10;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar17;
        } while (cVar6 != '\0');
        uVar14 = ~uVar14;
        pcVar10 = pcVar17 + -uVar14;
        pcVar17 = pcVar9 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar9 = operator_new(0x104);
    uStack_c = 0xd;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar10 = (char *)FUN_004ff380();
      uVar14 = 0xffffffff;
      *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
      pcVar17 = &DAT_0083bf04;
      do {
        pcVar18 = pcVar17;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar17 + 1;
        cVar6 = *pcVar17;
        pcVar17 = pcVar18;
      } while (cVar6 != '\0');
      uVar14 = ~uVar14;
      pcVar18 = pcVar18 + -uVar14;
      pcVar17 = pcVar9;
      for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar17 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar17 = pcVar17 + 1;
      }
      *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
      if (pcVar10 != (char *)0x0) {
        uVar14 = 0xffffffff;
        do {
          pcVar17 = pcVar10;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar17;
        } while (cVar6 != '\0');
        uVar14 = ~uVar14;
        pcVar10 = pcVar17 + -uVar14;
        pcVar17 = pcVar9 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    if (piVar2[0x53] == 0) {
      pcVar9 = operator_new(0x104);
      if (pcVar9 == (char *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        uVar14 = 0xffffffff;
        *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
        pcVar10 = &DAT_0083bf04;
        do {
          pcVar17 = pcVar10;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar17;
        } while (cVar6 != '\0');
        uVar14 = ~uVar14;
        pcVar17 = pcVar17 + -uVar14;
        pcVar10 = pcVar9;
        for (uVar15 = uVar14 >> 2; pcVar10 = pcVar10 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar10 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar10 = pcVar10 + 1;
        }
        *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
        uVar14 = 0xffffffff;
        pcVar10 = &DAT_0088ebf8;
        do {
          pcVar17 = pcVar10;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar17;
        } while (cVar6 != '\0');
        uVar14 = ~uVar14;
        pcVar10 = pcVar17 + -uVar14;
        pcVar17 = pcVar9 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      pcVar9 = operator_new(0x104);
      if (pcVar9 == (char *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        uVar14 = 0xffffffff;
        *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
        pcVar10 = &DAT_0083bf04;
        do {
          pcVar17 = pcVar10;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar17;
        } while (cVar6 != '\0');
        uVar14 = ~uVar14;
        pcVar17 = pcVar17 + -uVar14;
        pcVar10 = pcVar9;
        for (uVar15 = uVar14 >> 2; pcVar10 = pcVar10 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar10 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar10 = pcVar10 + 1;
        }
        *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
        uVar14 = 0xffffffff;
        pcVar10 = &DAT_0088ebf8;
        do {
          pcVar17 = pcVar10;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar17;
        } while (cVar6 != '\0');
        uVar14 = ~uVar14;
        pcVar10 = pcVar17 + -uVar14;
        pcVar17 = pcVar9 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
        goto LAB_005a2334;
      }
      FUN_00405ad0();
    }
    else {
      pcVar9 = operator_new(0x104);
      uStack_c = 0xe;
      if (pcVar9 == (char *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        pcVar10 = (char *)FUN_0042b6c9();
        uVar14 = 0xffffffff;
        *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
        pcVar17 = &DAT_0083bf04;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar6 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar6 != '\0');
        uVar14 = ~uVar14;
        pcVar18 = pcVar18 + -uVar14;
        pcVar17 = pcVar9;
        for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar17 = pcVar17 + 1;
        }
        *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
        if (pcVar10 != (char *)0x0) {
          uVar14 = 0xffffffff;
          do {
            pcVar17 = pcVar10;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar17 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar17;
          } while (cVar6 != '\0');
          uVar14 = ~uVar14;
          pcVar10 = pcVar17 + -uVar14;
          pcVar17 = pcVar9 + 8;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar17 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      pcVar9 = operator_new(0x104);
      uStack_c = 0xf;
      if (pcVar9 == (char *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        piVar13 = (int *)FUN_004e9370();
        pcVar10 = (char *)(**(code **)(*piVar13 + 0xc))();
        uVar14 = 0xffffffff;
        *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
        pcVar17 = &DAT_0083bf04;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar6 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar6 != '\0');
        uVar14 = ~uVar14;
        pcVar18 = pcVar18 + -uVar14;
        pcVar17 = pcVar9;
        for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar17 = pcVar17 + 1;
        }
        *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
        if (pcVar10 != (char *)0x0) {
          uVar14 = 0xffffffff;
          do {
            pcVar17 = pcVar10;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar17 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar17;
          } while (cVar6 != '\0');
          uVar14 = ~uVar14;
          pcVar10 = pcVar17 + -uVar14;
          pcVar17 = pcVar9 + 8;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar17 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
      }
      uStack_c = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
LAB_005a2334:
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
    }
    pcVar9 = operator_new(0x108);
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x0;
    }
    else {
      uVar14 = 0xffffffff;
      iVar1 = piVar2[0x3b];
      *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
      pcVar10 = &DAT_0083bf04;
      do {
        pcVar17 = pcVar10;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar17 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar17;
      } while (cVar6 != '\0');
      uVar14 = ~uVar14;
      pcVar17 = pcVar17 + -uVar14;
      pcVar10 = pcVar9;
      for (uVar15 = uVar14 >> 2; pcVar10 = pcVar10 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar10 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar10 = pcVar10 + 1;
      }
      *(int *)(pcVar9 + 0x104) = iVar1;
      *(undefined ***)pcVar9 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar9 + 8,&PTR_PTR_0083c9e8);
    }
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar9 = operator_new(0x108);
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x0;
    }
    else {
      uVar14 = 0xffffffff;
      iVar1 = piVar2[0x3d];
      *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
      pcVar10 = &DAT_0083bf04;
      do {
        pcVar17 = pcVar10;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar17 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar17;
      } while (cVar6 != '\0');
      uVar14 = ~uVar14;
      pcVar17 = pcVar17 + -uVar14;
      pcVar10 = pcVar9;
      for (uVar15 = uVar14 >> 2; pcVar10 = pcVar10 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar10 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar10 = pcVar10 + 1;
      }
      *(int *)(pcVar9 + 0x104) = iVar1;
      *(undefined ***)pcVar9 = &PTR_LAB_007eb304;
      FUN_007a630a(pcVar9 + 8,&PTR_PTR_0083c9e8);
    }
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pvVar11 = operator_new(0x10a);
    uStack_c = 0x10;
    if (pvVar11 == (void *)0x0) {
      uVar12 = 0;
    }
    else {
      FUN_00447250();
      uVar12 = FUN_0058f0b0();
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(undefined4 *)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = uVar12;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    pcVar9 = operator_new(0x104);
    uStack_c = 0x11;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar10 = (char *)FUN_0042b6c9();
      uVar14 = 0xffffffff;
      *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
      pcVar17 = &DAT_0083bf04;
      do {
        pcVar18 = pcVar17;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar17 + 1;
        cVar6 = *pcVar17;
        pcVar17 = pcVar18;
      } while (cVar6 != '\0');
      uVar14 = ~uVar14;
      pcVar18 = pcVar18 + -uVar14;
      pcVar17 = pcVar9;
      for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar17 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar17 = pcVar17 + 1;
      }
      *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
      if (pcVar10 != (char *)0x0) {
        uVar14 = 0xffffffff;
        do {
          pcVar17 = pcVar10;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar17;
        } while (cVar6 != '\0');
        uVar14 = ~uVar14;
        pcVar10 = pcVar17 + -uVar14;
        pcVar17 = pcVar9 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
    }
    uStack_c = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar9;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0();
    }
    FUN_00598ca0();
  } while( true );
}


