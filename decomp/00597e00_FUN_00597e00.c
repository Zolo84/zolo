// FUN_00597e00 @ 597e00 size=1973

void __fastcall FUN_00597e00(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  int local_24;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007ca5fc;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  uVar2 = FUN_004136a0();
  local_24 = 1;
  if (1 < DAT_00877690) {
    local_20 = 0x4b2;
    do {
      piVar14 = (int *)(local_20 + DAT_00ab27b4);
      if ((0 < *(int *)((int)piVar14 + 0x19e)) && (piVar14[0xf6] != 0)) {
        puVar3 = operator_new(0x50);
        local_c = 0;
        puVar11 = (undefined4 *)0x0;
        if (puVar3 != (undefined4 *)0x0) {
          FUN_00598ae0();
          local_c = CONCAT31(local_c._1_3_,1);
          FUN_00433f00();
          *(undefined4 *)((int)puVar3 + 0x42) = param_1;
          *(undefined4 *)((int)puVar3 + 0x3e) = uVar2;
          *(undefined2 *)((int)puVar3 + 0x4a) = 0;
          puVar3[0x13] = 0;
          *puVar3 = &PTR_FUN_007eb380;
          puVar3[2] = &PTR_LAB_007eb37c;
          puVar11 = puVar3;
        }
        local_c = 0xffffffff;
        *(undefined4 *)((int)puVar11 + 0x46) = *(undefined4 *)((int)piVar14 + 0x12);
        pcVar4 = operator_new(0x104);
        local_c = 2;
        if (pcVar4 == (char *)0x0) {
          pcVar4 = (char *)0x0;
        }
        else {
          pcVar5 = (char *)(**(code **)(*piVar14 + 0xc))();
          uVar9 = 0xffffffff;
          *(undefined ***)pcVar4 = &PTR_LAB_007eb264;
          pcVar13 = &DAT_0083bf04;
          do {
            pcVar12 = pcVar13;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar12 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar12;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar12 = pcVar12 + -uVar9;
          pcVar13 = pcVar4;
          for (uVar10 = uVar9 >> 2; pcVar13 = pcVar13 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          }
          *(undefined ***)pcVar4 = &PTR_LAB_007eb23c;
          if (pcVar5 != (char *)0x0) {
            uVar9 = 0xffffffff;
            do {
              pcVar13 = pcVar5;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar5 = pcVar13 + -uVar9;
            pcVar13 = pcVar4 + 8;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar13 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
        }
        local_c = 0xffffffff;
        if (*(int *)((int)puVar11 + 0x32) < *(int *)((int)puVar11 + 0x36)) {
          *(char **)(*(int *)((int)puVar11 + 0x2e) + *(int *)((int)puVar11 + 0x32) * 4) = pcVar4;
          *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pcVar4 = operator_new(0x108);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = (char *)0x0;
        }
        else {
          uVar9 = 0xffffffff;
          iVar8 = *(int *)((int)piVar14 + 0x19e);
          *(undefined ***)pcVar4 = &PTR_LAB_007eb264;
          pcVar5 = &DAT_0083bf04;
          do {
            pcVar13 = pcVar5;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar13 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar13;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar13 = pcVar13 + -uVar9;
          pcVar5 = pcVar4;
          for (uVar10 = uVar9 >> 2; pcVar5 = pcVar5 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar5 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar5 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar5 = pcVar5 + 1;
          }
          *(float *)(pcVar4 + 0x104) = (float)iVar8;
          *(undefined ***)pcVar4 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar4 + 8,&PTR_PTR_0083c9e8,(double)iVar8);
        }
        if (*(int *)((int)puVar11 + 0x32) < *(int *)((int)puVar11 + 0x36)) {
          *(char **)(*(int *)((int)puVar11 + 0x2e) + *(int *)((int)puVar11 + 0x32) * 4) = pcVar4;
          *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pvVar6 = operator_new(0x108);
        local_c = 3;
        if (pvVar6 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_0058eef0();
        }
        local_c = 0xffffffff;
        if (*(int *)((int)puVar11 + 0x32) < *(int *)((int)puVar11 + 0x36)) {
          *(undefined4 *)(*(int *)((int)puVar11 + 0x2e) + *(int *)((int)puVar11 + 0x32) * 4) = uVar7
          ;
          *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        if (*(int *)(piVar14[0xf6] + 0x3350) == DAT_00d615c2) {
          pcVar4 = operator_new(0x108);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x0;
          }
          else {
            uVar9 = 0xffffffff;
            iVar8 = *(int *)((int)piVar14 + 0x19e);
            *(undefined ***)pcVar4 = &PTR_LAB_007eb264;
            pcVar5 = &DAT_0083bf04;
            do {
              pcVar13 = pcVar5;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar13 = pcVar13 + -uVar9;
            pcVar5 = pcVar4;
            for (uVar10 = uVar9 >> 2; pcVar5 = pcVar5 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar5 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar5 = pcVar5 + 1;
            }
            *(float *)(pcVar4 + 0x104) = (float)iVar8;
            *(undefined ***)pcVar4 = &PTR_LAB_007eb304;
            FUN_007a630a(pcVar4 + 8,&PTR_PTR_0083c9e8,(double)iVar8);
          }
          iVar8 = *(int *)((int)puVar11 + 0x32);
          if (iVar8 < *(int *)((int)puVar11 + 0x36)) {
LAB_005981be:
            *(char **)(*(int *)((int)puVar11 + 0x2e) + iVar8 * 4) = pcVar4;
            *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
        }
        else {
          pcVar4 = operator_new(0x108);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x0;
          }
          else {
            uVar9 = 0xffffffff;
            *(undefined ***)pcVar4 = &PTR_LAB_007eb264;
            pcVar5 = &DAT_0083bf04;
            do {
              pcVar13 = pcVar5;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar13 = pcVar13 + -uVar9;
            pcVar5 = pcVar4;
            for (uVar10 = uVar9 >> 2; pcVar5 = pcVar5 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar5 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar5 = pcVar5 + 1;
            }
            *(undefined ***)pcVar4 = &PTR_LAB_007eb304;
            pcVar4[0x104] = '\0';
            pcVar4[0x105] = '\0';
            pcVar4[0x106] = '\0';
            pcVar4[0x107] = '\0';
            FUN_007a630a(pcVar4 + 8,&PTR_PTR_0083c9e8,0);
          }
          iVar8 = *(int *)((int)puVar11 + 0x32);
          if (iVar8 < *(int *)((int)puVar11 + 0x36)) goto LAB_005981be;
          FUN_00405ad0();
        }
        if (*(int *)(piVar14[0xf6] + 0x3350) == DAT_00d615c6) {
          pcVar4 = operator_new(0x108);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x0;
          }
          else {
            uVar9 = 0xffffffff;
            iVar8 = *(int *)((int)piVar14 + 0x19e);
            *(undefined ***)pcVar4 = &PTR_LAB_007eb264;
            pcVar5 = &DAT_0083bf04;
            do {
              pcVar13 = pcVar5;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar13 = pcVar13 + -uVar9;
            pcVar5 = pcVar4;
            for (uVar10 = uVar9 >> 2; pcVar5 = pcVar5 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar5 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar5 = pcVar5 + 1;
            }
            *(float *)(pcVar4 + 0x104) = (float)iVar8;
            *(undefined ***)pcVar4 = &PTR_LAB_007eb304;
            FUN_007a630a(pcVar4 + 8,&PTR_PTR_0083c9e8,(double)iVar8);
          }
          iVar8 = *(int *)((int)puVar11 + 0x32);
          if (iVar8 < *(int *)((int)puVar11 + 0x36)) {
LAB_005982f2:
            *(char **)(*(int *)((int)puVar11 + 0x2e) + iVar8 * 4) = pcVar4;
            *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
        }
        else {
          pcVar4 = operator_new(0x108);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x0;
          }
          else {
            uVar9 = 0xffffffff;
            *(undefined ***)pcVar4 = &PTR_LAB_007eb264;
            pcVar5 = &DAT_0083bf04;
            do {
              pcVar13 = pcVar5;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar13 = pcVar13 + -uVar9;
            pcVar5 = pcVar4;
            for (uVar10 = uVar9 >> 2; pcVar5 = pcVar5 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar5 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar5 = pcVar5 + 1;
            }
            *(undefined ***)pcVar4 = &PTR_LAB_007eb304;
            pcVar4[0x104] = '\0';
            pcVar4[0x105] = '\0';
            pcVar4[0x106] = '\0';
            pcVar4[0x107] = '\0';
            FUN_007a630a(pcVar4 + 8,&PTR_PTR_0083c9e8,0);
          }
          iVar8 = *(int *)((int)puVar11 + 0x32);
          if (iVar8 < *(int *)((int)puVar11 + 0x36)) goto LAB_005982f2;
          FUN_00405ad0();
        }
        if (*(int *)(piVar14[0xf6] + 0x3350) == DAT_00d615ca) {
          pcVar4 = operator_new(0x108);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x0;
          }
          else {
            uVar9 = 0xffffffff;
            iVar8 = *(int *)((int)piVar14 + 0x19e);
            *(undefined ***)pcVar4 = &PTR_LAB_007eb264;
            pcVar5 = &DAT_0083bf04;
            do {
              pcVar13 = pcVar5;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar13 = pcVar13 + -uVar9;
            pcVar5 = pcVar4;
            for (uVar10 = uVar9 >> 2; pcVar5 = pcVar5 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar5 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar5 = pcVar5 + 1;
            }
            *(float *)(pcVar4 + 0x104) = (float)iVar8;
            *(undefined ***)pcVar4 = &PTR_LAB_007eb304;
            FUN_007a630a(pcVar4 + 8,&PTR_PTR_0083c9e8,(double)iVar8);
          }
          iVar8 = *(int *)((int)puVar11 + 0x32);
          if (iVar8 < *(int *)((int)puVar11 + 0x36)) {
LAB_00598426:
            *(char **)(*(int *)((int)puVar11 + 0x2e) + iVar8 * 4) = pcVar4;
            *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
        }
        else {
          pcVar4 = operator_new(0x108);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x0;
          }
          else {
            uVar9 = 0xffffffff;
            *(undefined ***)pcVar4 = &PTR_LAB_007eb264;
            pcVar5 = &DAT_0083bf04;
            do {
              pcVar13 = pcVar5;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar13 = pcVar13 + -uVar9;
            pcVar5 = pcVar4;
            for (uVar10 = uVar9 >> 2; pcVar5 = pcVar5 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar5 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar5 = pcVar5 + 1;
            }
            *(undefined ***)pcVar4 = &PTR_LAB_007eb304;
            pcVar4[0x104] = '\0';
            pcVar4[0x105] = '\0';
            pcVar4[0x106] = '\0';
            pcVar4[0x107] = '\0';
            FUN_007a630a(pcVar4 + 8,&PTR_PTR_0083c9e8,0);
          }
          iVar8 = *(int *)((int)puVar11 + 0x32);
          if (iVar8 < *(int *)((int)puVar11 + 0x36)) goto LAB_00598426;
          FUN_00405ad0();
        }
        if (*(int *)(piVar14[0xf6] + 0x3350) == 0) {
          pcVar4 = operator_new(0x108);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x0;
          }
          else {
            uVar9 = 0xffffffff;
            iVar8 = *(int *)((int)piVar14 + 0x19e);
            *(undefined ***)pcVar4 = &PTR_LAB_007eb264;
            pcVar5 = &DAT_0083bf04;
            do {
              pcVar13 = pcVar5;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar13 = pcVar13 + -uVar9;
            pcVar5 = pcVar4;
            for (uVar10 = uVar9 >> 2; pcVar5 = pcVar5 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar5 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar5 = pcVar5 + 1;
            }
            *(float *)(pcVar4 + 0x104) = (float)iVar8;
            *(undefined ***)pcVar4 = &PTR_LAB_007eb304;
            FUN_007a630a(pcVar4 + 8,&PTR_PTR_0083c9e8,(double)iVar8);
          }
          iVar8 = *(int *)((int)puVar11 + 0x32);
          if (iVar8 < *(int *)((int)puVar11 + 0x36)) {
LAB_00598555:
            *(char **)(*(int *)((int)puVar11 + 0x2e) + iVar8 * 4) = pcVar4;
            *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
        }
        else {
          pcVar4 = operator_new(0x108);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x0;
          }
          else {
            uVar9 = 0xffffffff;
            *(undefined ***)pcVar4 = &PTR_LAB_007eb264;
            pcVar5 = &DAT_0083bf04;
            do {
              pcVar13 = pcVar5;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar13 = pcVar13 + -uVar9;
            pcVar5 = pcVar4;
            for (uVar10 = uVar9 >> 2; pcVar5 = pcVar5 + 4, uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar5 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar5 = pcVar5 + 1;
            }
            *(undefined ***)pcVar4 = &PTR_LAB_007eb304;
            pcVar4[0x104] = '\0';
            pcVar4[0x105] = '\0';
            pcVar4[0x106] = '\0';
            pcVar4[0x107] = '\0';
            FUN_007a630a(pcVar4 + 8,&PTR_PTR_0083c9e8,0);
          }
          iVar8 = *(int *)((int)puVar11 + 0x32);
          if (iVar8 < *(int *)((int)puVar11 + 0x36)) goto LAB_00598555;
          FUN_00405ad0();
        }
        FUN_00598ca0();
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 0x4b2;
    } while (local_24 < DAT_00877690);
  }
  FUN_005917f0();
  ExceptionList = pvStack_14;
  return;
}


