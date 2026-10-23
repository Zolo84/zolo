// FUN_00598eb0 @ 598eb0 size=2198

void __fastcall FUN_00598eb0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 uVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ca704;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  piVar3 = DAT_00d77b7a;
  do {
    if (piVar3 == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    piVar2 = (int *)piVar3[2];
    piVar3 = (int *)*piVar3;
    piVar7 = (int *)FUN_004fd5a0();
    puVar8 = operator_new(0x50);
    local_4 = 0;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      FUN_00598ae0(6);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00433f00();
      *(undefined4 *)((int)puVar8 + 0x3e) = uVar6;
      *(int *)((int)puVar8 + 0x42) = param_1;
      *(undefined2 *)((int)puVar8 + 0x4a) = 0;
      puVar8[0x13] = 0;
      *puVar8 = &PTR_FUN_007eb380;
      puVar8[2] = &PTR_LAB_007eb37c;
    }
    local_4 = 0xffffffff;
    pvVar9 = operator_new(0x108);
    local_4 = 2;
    if (pvVar9 == (void *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_0058eef0(piVar3[0x16]);
    }
    local_4 = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(undefined4 *)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = uVar10;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
    }
    pcVar11 = operator_new(0x104);
    local_4 = 3;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar12 = (char *)(**(code **)(*piVar3 + 0xc))();
      uVar14 = 0xffffffff;
      *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
      pcVar17 = &DAT_0083bf04;
      do {
        pcVar16 = pcVar17;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar16 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar16;
      } while (cVar1 != '\0');
      uVar14 = ~uVar14;
      pcVar16 = pcVar16 + -uVar14;
      pcVar17 = pcVar11;
      for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar17 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar17 = pcVar17 + 1;
      }
      *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
      if (pcVar12 != (char *)0x0) {
        uVar14 = 0xffffffff;
        do {
          pcVar17 = pcVar12;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar17;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar12 = pcVar17 + -uVar14;
        pcVar17 = pcVar11 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
    }
    local_4 = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
    }
    pcVar11 = operator_new(0x104);
    local_4 = 4;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar12 = (char *)FUN_004ff320(piVar3[0x4c]);
      uVar14 = 0xffffffff;
      *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
      pcVar17 = &DAT_0083bf04;
      do {
        pcVar16 = pcVar17;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar16 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar16;
      } while (cVar1 != '\0');
      uVar14 = ~uVar14;
      pcVar16 = pcVar16 + -uVar14;
      pcVar17 = pcVar11;
      for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar17 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar17 = pcVar17 + 1;
      }
      *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
      if (pcVar12 != (char *)0x0) {
        uVar14 = 0xffffffff;
        do {
          pcVar17 = pcVar12;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar17;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar12 = pcVar17 + -uVar14;
        pcVar17 = pcVar11 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
    }
    local_4 = 0xffffffff;
    if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
      *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
      *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
    }
    else {
      FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
    }
    if (piVar7 == (int *)0x0) {
      iVar13 = FUN_004fd580();
      if (iVar13 != 0) {
        pcVar11 = operator_new(0x104);
        local_4 = 9;
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          pcVar12 = (char *)FUN_0042b6c9(s_EYRBOMBERSFROM_008586cc);
          uVar14 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar17 = &DAT_0083bf04;
          do {
            pcVar16 = pcVar17;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar16 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar16;
          } while (cVar1 != '\0');
          uVar14 = ~uVar14;
          pcVar16 = pcVar16 + -uVar14;
          pcVar17 = pcVar11;
          for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar17 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar17 = pcVar17 + 1;
          }
          *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
          if (pcVar12 != (char *)0x0) {
            uVar14 = 0xffffffff;
            do {
              pcVar17 = pcVar12;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar17 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar17;
            } while (cVar1 != '\0');
            uVar14 = ~uVar14;
            pcVar12 = pcVar17 + -uVar14;
            pcVar17 = pcVar11 + 8;
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar17 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar17 = pcVar17 + 1;
            }
          }
        }
        local_4 = 0xffffffff;
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
        }
        pcVar11 = operator_new(0x104);
        if (pcVar11 == (char *)0x0) {
          pcVar11 = (char *)0x0;
        }
        else {
          uVar14 = 0xffffffff;
          *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
          pcVar12 = &DAT_0083bf04;
          do {
            pcVar17 = pcVar12;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar17 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar17;
          } while (cVar1 != '\0');
          uVar14 = ~uVar14;
          pcVar17 = pcVar17 + -uVar14;
          pcVar12 = pcVar11;
          for (uVar15 = uVar14 >> 2; pcVar12 = pcVar12 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar12 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar12 = pcVar12 + 1;
          }
          *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
          uVar14 = 0xffffffff;
          pcVar12 = &DAT_0088ebf8;
          do {
            pcVar17 = pcVar12;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar17 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar17;
          } while (cVar1 != '\0');
          uVar14 = ~uVar14;
          pcVar12 = pcVar17 + -uVar14;
          pcVar17 = pcVar11 + 8;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar17 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
        if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
          *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
          *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
        }
        else {
          FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
        }
        pvVar9 = operator_new(0x108);
        local_4 = 10;
        if (pvVar9 == (void *)0x0) goto LAB_005994de;
        iVar13 = FUN_004fd580();
        uVar10 = FUN_0058eef0(*(undefined4 *)(iVar13 + 6));
        goto LAB_005994e0;
      }
      pcVar11 = operator_new(0x104);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x0;
      }
      else {
        uVar14 = 0xffffffff;
        *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
        pcVar12 = &DAT_0083bf04;
        do {
          pcVar17 = pcVar12;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar17;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar17 = pcVar17 + -uVar14;
        pcVar12 = pcVar11;
        for (uVar15 = uVar14 >> 2; pcVar12 = pcVar12 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
        uVar14 = 0xffffffff;
        pcVar12 = &DAT_0088ebf8;
        do {
          pcVar17 = pcVar12;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar17;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar12 = pcVar17 + -uVar14;
        pcVar17 = pcVar11 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
      }
      pcVar11 = operator_new(0x104);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x0;
      }
      else {
        uVar14 = 0xffffffff;
        *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
        pcVar12 = &DAT_0083bf04;
        do {
          pcVar17 = pcVar12;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar17;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar17 = pcVar17 + -uVar14;
        pcVar12 = pcVar11;
        for (uVar15 = uVar14 >> 2; pcVar12 = pcVar12 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
        uVar14 = 0xffffffff;
        pcVar12 = &DAT_0088ebf8;
        do {
          pcVar17 = pcVar12;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar17;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar12 = pcVar17 + -uVar14;
        pcVar17 = pcVar11 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
      }
      pcVar11 = operator_new(0x104);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x0;
      }
      else {
        uVar14 = 0xffffffff;
        *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
        pcVar12 = &DAT_0083bf04;
        do {
          pcVar17 = pcVar12;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar17;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar17 = pcVar17 + -uVar14;
        pcVar12 = pcVar11;
        for (uVar15 = uVar14 >> 2; pcVar12 = pcVar12 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar12 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar12 = pcVar12 + 1;
        }
        *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
        uVar14 = 0xffffffff;
        pcVar12 = &DAT_0088ebf8;
        do {
          pcVar17 = pcVar12;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar17 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar17;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar12 = pcVar17 + -uVar14;
        pcVar17 = pcVar11 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
        goto LAB_005996ce;
      }
      FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
    }
    else {
      pcVar11 = operator_new(0x104);
      local_4 = 5;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x0;
      }
      else {
        pcVar12 = (char *)(**(code **)(*piVar7 + 0xc))();
        uVar14 = 0xffffffff;
        *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
        pcVar17 = &DAT_0083bf04;
        do {
          pcVar16 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar16 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar16;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar16 = pcVar16 + -uVar14;
        pcVar17 = pcVar11;
        for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar17 = pcVar17 + 1;
        }
        *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
        if (pcVar12 != (char *)0x0) {
          uVar14 = 0xffffffff;
          do {
            pcVar17 = pcVar12;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar17 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar17;
          } while (cVar1 != '\0');
          uVar14 = ~uVar14;
          pcVar12 = pcVar17 + -uVar14;
          pcVar17 = pcVar11 + 8;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar17 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
      }
      local_4 = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
      }
      pcVar11 = operator_new(0x104);
      local_4 = 6;
      if (pcVar11 == (char *)0x0) {
        pcVar11 = (char *)0x0;
      }
      else {
        pcVar12 = (char *)FUN_004ff320(piVar7[0x4c]);
        uVar14 = 0xffffffff;
        *(undefined ***)pcVar11 = &PTR_LAB_007eb264;
        pcVar17 = &DAT_0083bf04;
        do {
          pcVar16 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar16 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar16;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pcVar16 = pcVar16 + -uVar14;
        pcVar17 = pcVar11;
        for (uVar15 = uVar14 >> 2; pcVar17 = pcVar17 + 4, uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar17 = pcVar17 + 1;
        }
        *(undefined ***)pcVar11 = &PTR_LAB_007eb23c;
        if (pcVar12 != (char *)0x0) {
          uVar14 = 0xffffffff;
          do {
            pcVar17 = pcVar12;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar17 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar17;
          } while (cVar1 != '\0');
          uVar14 = ~uVar14;
          pcVar12 = pcVar17 + -uVar14;
          pcVar17 = pcVar11 + 8;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar17 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
      }
      local_4 = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(char **)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = pcVar11;
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
      }
      if (piVar7[0x1b] == 0) {
        pvVar9 = operator_new(0x108);
        local_4 = 8;
        if (pvVar9 == (void *)0x0) goto LAB_005994de;
        uVar10 = FUN_0058eef0(piVar7[0x16]);
      }
      else {
        pvVar9 = operator_new(0x108);
        local_4 = 7;
        if (pvVar9 == (void *)0x0) {
LAB_005994de:
          uVar10 = 0;
        }
        else {
          iVar13 = FUN_00522770();
          uVar10 = FUN_0058eef0(*(undefined4 *)(iVar13 + 6));
        }
      }
LAB_005994e0:
      local_4 = 0xffffffff;
      if (*(int *)((int)puVar8 + 0x32) < *(int *)((int)puVar8 + 0x36)) {
        *(undefined4 *)(*(int *)((int)puVar8 + 0x2e) + *(int *)((int)puVar8 + 0x32) * 4) = uVar10;
LAB_005996ce:
        *(int *)((int)puVar8 + 0x32) = *(int *)((int)puVar8 + 0x32) + 1;
      }
      else {
        FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
      }
    }
    iVar13 = *(int *)(param_1 + 0x15a);
    iVar4 = *(int *)(iVar13 + 8);
    pvVar9 = operator_new(0xe);
    local_4 = 0xb;
    if (pvVar9 == (void *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_005926a0(puVar8,iVar4,0);
    }
    iVar5 = *(int *)(iVar13 + 0xc);
    local_4 = 0xffffffff;
    *(undefined4 *)(iVar13 + 8) = uVar10;
    *(int *)(iVar13 + 0xc) = iVar5 + 1;
    piVar3 = piVar2;
    if (iVar5 == 0) {
      *(undefined4 *)(iVar13 + 4) = uVar10;
    }
    else {
      *(undefined4 *)(iVar4 + 8) = uVar10;
    }
  } while( true );
}


