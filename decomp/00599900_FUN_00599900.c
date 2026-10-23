// FUN_00599900 @ 599900 size=2070

void __fastcall FUN_00599900(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  undefined4 *puVar15;
  char *pcVar16;
  char *pcVar17;
  undefined **local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007ca785;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_005917f0();
  local_18 = 0;
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_28 = &PTR_LAB_007eb800;
  local_c = 0;
  FUN_004b31d0(*(undefined4 *)(DAT_00d0ca90 + 6),&local_28);
  uVar5 = FUN_004136a0();
  puVar4 = local_24;
  do {
    if (puVar4 == (undefined4 *)0x0) {
      local_c = 0xffffffff;
      local_28 = &PTR_LAB_007eb800;
      FUN_0059af60();
      ExceptionList = pvStack_14;
      return;
    }
    piVar2 = (int *)*puVar4;
    piVar3 = *(int **)((int)piVar2 + 0x2e);
    puVar6 = operator_new(0x50);
    local_c._0_1_ = 1;
    puVar15 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      *(undefined4 *)((int)puVar6 + 0x32) = 0;
      *(undefined4 *)((int)puVar6 + 0x36) = 8;
      *(undefined4 *)((int)puVar6 + 0x3a) = 0;
      pvVar7 = operator_new(0x20);
      *(void **)((int)puVar6 + 0x2e) = pvVar7;
      local_c._0_1_ = 2;
      FUN_00433f00();
      *(undefined4 *)((int)puVar6 + 0x42) = param_1;
      *(undefined4 *)((int)puVar6 + 0x3e) = uVar5;
      *(undefined2 *)((int)puVar6 + 0x4a) = 0;
      puVar6[0x13] = 0;
      *puVar6 = &PTR_FUN_007eb380;
      puVar6[2] = &PTR_LAB_007eb37c;
      puVar15 = puVar6;
    }
    local_c = (uint)local_c._1_3_ << 8;
    if (*(char *)(*(int *)((int)piVar2 + 0x2e) + 0xa6) == '\0') {
      if ((char)piVar2[1] == '\0') {
        pcVar8 = operator_new(0x104);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = (char *)0x0;
        }
        else {
          uVar12 = 0xffffffff;
          *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar17 = pcVar11;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar17 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar17;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar17 = pcVar17 + -uVar12;
          pcVar11 = pcVar8;
          for (uVar13 = uVar12 >> 2; pcVar11 = pcVar11 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar11 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(undefined ***)pcVar8 = &PTR_LAB_007eb23c;
          uVar12 = 0xffffffff;
          pcVar11 = &DAT_0085875c;
          do {
            pcVar17 = pcVar11;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar17 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar17;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar11 = pcVar17 + -uVar12;
          pcVar17 = pcVar8 + 8;
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar17 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
        iVar10 = *(int *)((int)puVar15 + 0x32);
        if (iVar10 < *(int *)((int)puVar15 + 0x36)) goto LAB_00599b50;
        FUN_00405ad0();
      }
      else {
        pcVar8 = operator_new(0x104);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = (char *)0x0;
        }
        else {
          uVar12 = 0xffffffff;
          *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar17 = pcVar11;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar17 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar17;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar17 = pcVar17 + -uVar12;
          pcVar11 = pcVar8;
          for (uVar13 = uVar12 >> 2; pcVar11 = pcVar11 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar11 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(undefined ***)pcVar8 = &PTR_LAB_007eb23c;
          uVar12 = 0xffffffff;
          pcVar11 = (char *)&DAT_00858764;
          do {
            pcVar17 = pcVar11;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar17 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar17;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar11 = pcVar17 + -uVar12;
          pcVar17 = pcVar8 + 8;
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar17 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
        iVar10 = *(int *)((int)puVar15 + 0x32);
        if (iVar10 < *(int *)((int)puVar15 + 0x36)) {
LAB_00599b50:
          *(char **)(*(int *)((int)puVar15 + 0x2e) + iVar10 * 4) = pcVar8;
          *(int *)((int)puVar15 + 0x32) = *(int *)((int)puVar15 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
      }
      if (piVar2 == piVar3) {
        pcVar8 = operator_new(0x104);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = (char *)0x0;
        }
        else {
          uVar12 = 0xffffffff;
          *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar17 = pcVar11;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar17 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar17;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar17 = pcVar17 + -uVar12;
          pcVar11 = pcVar8;
          for (uVar13 = uVar12 >> 2; pcVar11 = pcVar11 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar11 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(undefined ***)pcVar8 = &PTR_LAB_007eb23c;
          uVar12 = 0xffffffff;
          pcVar11 = s_Attack_00858754;
          do {
            pcVar17 = pcVar11;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar17 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar17;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar11 = pcVar17 + -uVar12;
          pcVar17 = pcVar8 + 8;
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar17 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
        if (*(int *)((int)puVar15 + 0x32) < *(int *)((int)puVar15 + 0x36)) {
          *(char **)(*(int *)((int)puVar15 + 0x2e) + *(int *)((int)puVar15 + 0x32) * 4) = pcVar8;
          *(int *)((int)puVar15 + 0x32) = *(int *)((int)puVar15 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pvVar7 = operator_new(0x108);
        local_c._0_1_ = 3;
        if (pvVar7 == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_0058eef0();
        }
        iVar10 = *(int *)((int)puVar15 + 0x32);
        local_c = (uint)local_c._1_3_ << 8;
        if (iVar10 < *(int *)((int)puVar15 + 0x36)) {
LAB_00599d33:
          *(undefined4 *)(*(int *)((int)puVar15 + 0x2e) + iVar10 * 4) = uVar9;
          *(int *)((int)puVar15 + 0x32) = *(int *)((int)puVar15 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
      }
      else {
        pcVar8 = operator_new(0x104);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = (char *)0x0;
        }
        else {
          uVar12 = 0xffffffff;
          *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar17 = pcVar11;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar17 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar17;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar17 = pcVar17 + -uVar12;
          pcVar11 = pcVar8;
          for (uVar13 = uVar12 >> 2; pcVar11 = pcVar11 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar11 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(undefined ***)pcVar8 = &PTR_LAB_007eb23c;
          uVar12 = 0xffffffff;
          pcVar11 = s_Defense_0085874c;
          do {
            pcVar17 = pcVar11;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar17 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar17;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar11 = pcVar17 + -uVar12;
          pcVar17 = pcVar8 + 8;
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar17 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
        if (*(int *)((int)puVar15 + 0x32) < *(int *)((int)puVar15 + 0x36)) {
          *(char **)(*(int *)((int)puVar15 + 0x2e) + *(int *)((int)puVar15 + 0x32) * 4) = pcVar8;
          *(int *)((int)puVar15 + 0x32) = *(int *)((int)puVar15 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
        pvVar7 = operator_new(0x108);
        local_c._0_1_ = 4;
        if (pvVar7 == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_0058eef0();
        }
        iVar10 = *(int *)((int)puVar15 + 0x32);
        local_c = (uint)local_c._1_3_ << 8;
        if (iVar10 < *(int *)((int)puVar15 + 0x36)) goto LAB_00599d33;
        FUN_00405ad0();
      }
      pcVar8 = operator_new(0x104);
      local_c._0_1_ = 5;
      if (pcVar8 == (char *)0x0) {
        pcVar8 = (char *)0x0;
      }
      else {
        iVar10 = FUN_00428460();
        if (iVar10 == 0) {
          piVar14 = (int *)0x0;
        }
        else {
          piVar14 = (int *)(iVar10 + -0xc);
        }
        pcVar11 = (char *)(**(code **)(*piVar14 + 0xc))();
        uVar12 = 0xffffffff;
        *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
        pcVar17 = &DAT_0083bf04;
        do {
          pcVar16 = pcVar17;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar16 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar16;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        pcVar16 = pcVar16 + -uVar12;
        pcVar17 = pcVar8;
        for (uVar13 = uVar12 >> 2; pcVar17 = pcVar17 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar17 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar17 = pcVar17 + 1;
        }
        *(undefined ***)pcVar8 = &PTR_LAB_007eb23c;
        if (pcVar11 != (char *)0x0) {
          uVar12 = 0xffffffff;
          do {
            pcVar17 = pcVar11;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar17 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar17;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar11 = pcVar17 + -uVar12;
          pcVar17 = pcVar8 + 8;
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar17 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
      }
      local_c = (uint)local_c._1_3_ << 8;
      if (*(int *)((int)puVar15 + 0x32) < *(int *)((int)puVar15 + 0x36)) {
        *(char **)(*(int *)((int)puVar15 + 0x2e) + *(int *)((int)puVar15 + 0x32) * 4) = pcVar8;
        *(int *)((int)puVar15 + 0x32) = *(int *)((int)puVar15 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      pcVar8 = operator_new(0x108);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = (char *)0x0;
      }
      else {
        uVar12 = 0xffffffff;
        iVar10 = *piVar2;
        *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
        pcVar11 = &DAT_0083bf04;
        do {
          pcVar17 = pcVar11;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar17 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar17;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        pcVar17 = pcVar17 + -uVar12;
        pcVar11 = pcVar8;
        for (uVar13 = uVar12 >> 2; pcVar11 = pcVar11 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar11 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar11 = pcVar11 + 1;
        }
        *(float *)(pcVar8 + 0x104) = (float)iVar10;
        *(undefined ***)pcVar8 = &PTR_LAB_007eb304;
        FUN_007a630a(pcVar8 + 8,&PTR_PTR_0083c9e8,(double)iVar10);
      }
      if (*(int *)((int)puVar15 + 0x32) < *(int *)((int)puVar15 + 0x36)) {
        *(char **)(*(int *)((int)puVar15 + 0x2e) + *(int *)((int)puVar15 + 0x32) * 4) = pcVar8;
        *(int *)((int)puVar15 + 0x32) = *(int *)((int)puVar15 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      if (piVar2 == piVar3) {
        pcVar8 = operator_new(0x108);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = (char *)0x0;
        }
        else {
          iVar10 = piVar3[0x11];
          uVar12 = 0xffffffff;
          *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar17 = pcVar11;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar17 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar17;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar17 = pcVar17 + -uVar12;
          pcVar11 = pcVar8;
          for (uVar13 = uVar12 >> 2; pcVar11 = pcVar11 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar11 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(float *)(pcVar8 + 0x104) = (float)iVar10;
          *(undefined ***)pcVar8 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar8 + 8,&PTR_PTR_0083c9e8,(double)iVar10);
        }
        iVar10 = *(int *)((int)puVar15 + 0x32);
        if (iVar10 < *(int *)((int)puVar15 + 0x36)) {
LAB_00599fbe:
          *(char **)(*(int *)((int)puVar15 + 0x2e) + iVar10 * 4) = pcVar8;
          *(int *)((int)puVar15 + 0x32) = *(int *)((int)puVar15 + 0x32) + 1;
        }
        else {
          FUN_00405ad0();
        }
      }
      else {
        pcVar8 = operator_new(0x108);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = (char *)0x0;
        }
        else {
          uVar12 = 0xffffffff;
          iVar10 = *piVar3;
          *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
          pcVar11 = &DAT_0083bf04;
          do {
            pcVar17 = pcVar11;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar17 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar17;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar17 = pcVar17 + -uVar12;
          pcVar11 = pcVar8;
          for (uVar13 = uVar12 >> 2; pcVar11 = pcVar11 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar11 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(float *)(pcVar8 + 0x104) = (float)iVar10;
          *(undefined ***)pcVar8 = &PTR_LAB_007eb304;
          FUN_007a630a(pcVar8 + 8,&PTR_PTR_0083c9e8,(double)iVar10);
        }
        iVar10 = *(int *)((int)puVar15 + 0x32);
        if (iVar10 < *(int *)((int)puVar15 + 0x36)) goto LAB_00599fbe;
        FUN_00405ad0();
      }
      puVar6 = operator_new(0x108);
      local_c._0_1_ = 6;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_00592190();
        *puVar6 = &PTR_LAB_007eb7d8;
        uVar9 = FUN_0059add0();
        puVar6[0x41] = uVar9;
        FUN_00791b3b(puVar6 + 2);
      }
      local_c._0_1_ = 0;
      if (*(int *)((int)puVar15 + 0x32) < *(int *)((int)puVar15 + 0x36)) {
        *(undefined4 **)(*(int *)((int)puVar15 + 0x2e) + *(int *)((int)puVar15 + 0x32) * 4) = puVar6
        ;
        *(int *)((int)puVar15 + 0x32) = *(int *)((int)puVar15 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      puVar6 = operator_new(0x108);
      local_c._0_1_ = 7;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_00592190();
        *puVar6 = &PTR_LAB_007eb7d8;
        uVar9 = FUN_0059add0();
        puVar6[0x41] = uVar9;
        FUN_00791b3b(puVar6 + 2);
      }
      local_c = (uint)local_c._1_3_ << 8;
      if (*(int *)((int)puVar15 + 0x32) < *(int *)((int)puVar15 + 0x36)) {
        *(undefined4 **)(*(int *)((int)puVar15 + 0x2e) + *(int *)((int)puVar15 + 0x32) * 4) = puVar6
        ;
        *(int *)((int)puVar15 + 0x32) = *(int *)((int)puVar15 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      FUN_00598ca0();
    }
    puVar4 = (undefined4 *)puVar4[2];
  } while( true );
}


