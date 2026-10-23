// FUN_005ad630 @ 5ad630 size=1806

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_005ad630(int param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  int *local_88;
  int *local_84;
  undefined4 *local_80;
  int local_7c;
  int *local_78;
  int local_70;
  int local_6c;
  char local_54 [64];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007cb7a2;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar7 = FUN_004136a0();
  if (DAT_00877688 < DAT_008776c0) {
    local_6c = 0;
    if (0 < DAT_008776c0) {
      local_88 = &DAT_00dc08ea;
      do {
        local_84 = (int *)0x0;
        local_78 = &DAT_00859004;
        do {
          local_80 = operator_new(0x50);
          local_c = 4;
          if (local_80 == (undefined4 *)0x0) {
            local_80 = (undefined4 *)0x0;
          }
          else {
            *(undefined4 *)((int)local_80 + 0x32) = 0;
            *(undefined4 *)((int)local_80 + 0x36) = 9;
            *(undefined4 *)((int)local_80 + 0x3a) = 0;
            pvVar8 = operator_new(0x24);
            *(void **)((int)local_80 + 0x2e) = pvVar8;
            local_c = CONCAT31(local_c._1_3_,5);
            FUN_00433f00();
            *(undefined4 *)((int)local_80 + 0x3e) = uVar7;
            *(int *)((int)local_80 + 0x42) = param_1;
            *(undefined2 *)((int)local_80 + 0x4a) = 0;
            local_80[0x13] = 0;
            *local_80 = &PTR_FUN_007eb380;
            local_80[2] = &PTR_LAB_007eb37c;
          }
          local_c = 0xffffffff;
          FUN_004ff3a0();
          FUN_007a630a();
          pcVar9 = operator_new(0x104);
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x0;
          }
          else {
            uVar12 = 0xffffffff;
            *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
            pcVar10 = &DAT_0083bf04;
            do {
              pcVar15 = pcVar10;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar15 = pcVar10 + 1;
              cVar2 = *pcVar10;
              pcVar10 = pcVar15;
            } while (cVar2 != '\0');
            uVar12 = ~uVar12;
            pcVar15 = pcVar15 + -uVar12;
            pcVar10 = pcVar9;
            for (uVar13 = uVar12 >> 2; pcVar10 = pcVar10 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar10 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar10 = pcVar10 + 1;
            }
            *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
            if (&stack0x00000000 != (undefined1 *)0x54) {
              uVar12 = 0xffffffff;
              pcVar10 = local_54;
              do {
                pcVar15 = pcVar10;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pcVar15 = pcVar10 + 1;
                cVar2 = *pcVar10;
                pcVar10 = pcVar15;
              } while (cVar2 != '\0');
              uVar12 = ~uVar12;
              pcVar10 = pcVar15 + -uVar12;
              pcVar15 = pcVar9 + 8;
              for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *pcVar15 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar15 = pcVar15 + 1;
              }
            }
          }
          if (*(int *)((int)local_80 + 0x32) < *(int *)((int)local_80 + 0x36)) {
            *(char **)(*(int *)((int)local_80 + 0x2e) + *(int *)((int)local_80 + 0x32) * 4) = pcVar9
            ;
            *(int *)((int)local_80 + 0x32) = *(int *)((int)local_80 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
          FUN_0042b6c9();
          FUN_007a630a();
          pcVar9 = operator_new(0x104);
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x0;
          }
          else {
            uVar12 = 0xffffffff;
            *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
            pcVar10 = &DAT_0083bf04;
            do {
              pcVar15 = pcVar10;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar15 = pcVar10 + 1;
              cVar2 = *pcVar10;
              pcVar10 = pcVar15;
            } while (cVar2 != '\0');
            uVar12 = ~uVar12;
            pcVar15 = pcVar15 + -uVar12;
            pcVar10 = pcVar9;
            for (uVar13 = uVar12 >> 2; pcVar10 = pcVar10 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar10 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar10 = pcVar10 + 1;
            }
            *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
            if (&stack0x00000000 != (undefined1 *)0x54) {
              uVar12 = 0xffffffff;
              pcVar10 = local_54;
              do {
                pcVar15 = pcVar10;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pcVar15 = pcVar10 + 1;
                cVar2 = *pcVar10;
                pcVar10 = pcVar15;
              } while (cVar2 != '\0');
              uVar12 = ~uVar12;
              pcVar10 = pcVar15 + -uVar12;
              pcVar15 = pcVar9 + 8;
              for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *pcVar15 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar15 = pcVar15 + 1;
              }
            }
          }
          if (*(int *)((int)local_80 + 0x32) < *(int *)((int)local_80 + 0x36)) {
            *(char **)(*(int *)((int)local_80 + 0x2e) + *(int *)((int)local_80 + 0x32) * 4) = pcVar9
            ;
            *(int *)((int)local_80 + 0x32) = *(int *)((int)local_80 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
          iVar1 = (int)local_84 + 7;
          if ((int)local_84 < iVar1) {
            local_70 = iVar1 - (int)local_84;
            local_84 = local_78;
            do {
              pcVar9 = operator_new(0x108);
              if (pcVar9 == (char *)0x0) {
                pcVar9 = (char *)0x0;
              }
              else {
                uVar12 = 0xffffffff;
                sVar3 = *(short *)(DAT_00d0ca90 + 0xab10 + (*local_88 * 0x33 + *local_84) * 2);
                *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
                pcVar10 = &DAT_0083bf04;
                do {
                  pcVar15 = pcVar10;
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  pcVar15 = pcVar10 + 1;
                  cVar2 = *pcVar10;
                  pcVar10 = pcVar15;
                } while (cVar2 != '\0');
                uVar12 = ~uVar12;
                pcVar15 = pcVar15 + -uVar12;
                pcVar10 = pcVar9;
                for (uVar13 = uVar12 >> 2; pcVar10 = pcVar10 + 4, uVar13 != 0; uVar13 = uVar13 - 1)
                {
                  *(undefined4 *)pcVar10 = *(undefined4 *)pcVar15;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pcVar10 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                  pcVar10 = pcVar10 + 1;
                }
                *(float *)(pcVar9 + 0x104) = (float)(int)sVar3;
                *(undefined ***)pcVar9 = &PTR_LAB_007eb354;
                FUN_007a630a();
                *(undefined ***)pcVar9 = &PTR_LAB_007eb464;
                FUN_007a630a();
              }
              if (*(int *)((int)local_80 + 0x32) < *(int *)((int)local_80 + 0x36)) {
                *(char **)(*(int *)((int)local_80 + 0x2e) + *(int *)((int)local_80 + 0x32) * 4) =
                     pcVar9;
                *(int *)((int)local_80 + 0x32) = *(int *)((int)local_80 + 0x32) + 1;
              }
              else {
                FUN_00405ad0();
              }
              local_84 = local_84 + 1;
              local_70 = local_70 + -1;
            } while (local_70 != 0);
          }
          iVar4 = *(int *)(param_1 + 0x15a);
          iVar5 = *(int *)(iVar4 + 8);
          puVar11 = operator_new(0xe);
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = (undefined4 *)0x0;
          }
          else {
            *puVar11 = local_80;
            puVar11[1] = iVar5;
            puVar11[2] = 0;
            *(undefined1 *)(puVar11 + 3) = 0;
          }
          iVar6 = *(int *)(iVar4 + 0xc);
          *(undefined4 **)(iVar4 + 8) = puVar11;
          *(int *)(iVar4 + 0xc) = iVar6 + 1;
          if (iVar6 == 0) {
            *(undefined4 **)(iVar4 + 4) = puVar11;
          }
          else {
            *(undefined4 **)(iVar5 + 8) = puVar11;
          }
          local_78 = local_78 + 7;
          local_84 = (int *)iVar1;
        } while ((int)local_78 < 0x85903c);
        local_88 = local_88 + 1;
        local_6c = local_6c + 1;
      } while (local_6c < DAT_008776c0);
    }
    ExceptionList = local_14;
    return;
  }
  local_80 = (undefined4 *)0x0;
  do {
    switch(local_80) {
    case (undefined4 *)0x6:
    case (undefined4 *)0x8:
    case (undefined4 *)0x9:
    case (undefined4 *)0xa:
    case (undefined4 *)0xb:
    case (undefined4 *)0xc:
    case (undefined4 *)0xd:
    case (undefined4 *)0xe:
    case (undefined4 *)0xf:
    case (undefined4 *)0x10:
    case (undefined4 *)0x11:
    case (undefined4 *)0x12:
    case (undefined4 *)0x19:
    case (undefined4 *)0x1b:
    case (undefined4 *)0x1c:
    case (undefined4 *)0x1d:
    case (undefined4 *)0x1e:
    case (undefined4 *)0x1f:
    case (undefined4 *)0x20:
    case (undefined4 *)0x21:
    case (undefined4 *)0x22:
    case (undefined4 *)0x23:
    case (undefined4 *)0x24:
    case (undefined4 *)0x25:
    case (undefined4 *)0x26:
    case (undefined4 *)0x27:
    case (undefined4 *)0x28:
    case (undefined4 *)0x29:
    case (undefined4 *)0x2a:
    case (undefined4 *)0x2b:
    case (undefined4 *)0x2c:
    case (undefined4 *)0x2d:
    case (undefined4 *)0x2e:
    case (undefined4 *)0x2f:
    case (undefined4 *)0x30:
    case (undefined4 *)0x31:
    case (undefined4 *)0x32:
      break;
    default:
      local_88 = operator_new(0x50);
      iVar1 = DAT_008776c0;
      local_c = 0;
      if (local_88 == (undefined4 *)0x0) {
        local_88 = (undefined4 *)0x0;
      }
      else {
        *(undefined4 *)((int)local_88 + 0x32) = 0;
        *(undefined4 *)((int)local_88 + 0x3a) = 0;
        *(int *)((int)local_88 + 0x36) = iVar1 + 1;
        pvVar8 = operator_new((iVar1 + 1) * 4);
        *(void **)((int)local_88 + 0x2e) = pvVar8;
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_00433f00();
        *(undefined4 *)((int)local_88 + 0x3e) = uVar7;
        *(int *)((int)local_88 + 0x42) = param_1;
        *(undefined2 *)((int)local_88 + 0x4a) = 0;
        local_88[0x13] = 0;
        *local_88 = (int)&PTR_FUN_007eb380;
        local_88[2] = (int)&PTR_LAB_007eb37c;
      }
      local_c = 0xffffffff;
      pcVar9 = operator_new(0x104);
      local_c = 2;
      if (pcVar9 == (char *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        pcVar10 = (char *)FUN_0054e7a0();
        uVar12 = 0xffffffff;
        *(undefined ***)pcVar9 = &PTR_LAB_007eb264;
        pcVar15 = &DAT_0083bf04;
        do {
          pcVar14 = pcVar15;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar15 + 1;
          cVar2 = *pcVar15;
          pcVar15 = pcVar14;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        pcVar14 = pcVar14 + -uVar12;
        pcVar15 = pcVar9;
        for (uVar13 = uVar12 >> 2; pcVar15 = pcVar15 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar15 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar15 = pcVar15 + 1;
        }
        *(undefined ***)pcVar9 = &PTR_LAB_007eb23c;
        if (pcVar10 != (char *)0x0) {
          uVar12 = 0xffffffff;
          do {
            pcVar15 = pcVar10;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar15 = pcVar10 + 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar15;
          } while (cVar2 != '\0');
          uVar12 = ~uVar12;
          pcVar10 = pcVar15 + -uVar12;
          pcVar15 = pcVar9 + 8;
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar15 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar15 = pcVar15 + 1;
          }
        }
      }
      local_c = 0xffffffff;
      if (*(int *)((int)local_88 + 0x32) < *(int *)((int)local_88 + 0x36)) {
        *(char **)(*(int *)((int)local_88 + 0x2e) + *(int *)((int)local_88 + 0x32) * 4) = pcVar9;
        *(int *)((int)local_88 + 0x32) = *(int *)((int)local_88 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      local_7c = 0;
      if (0 < DAT_008776c0) {
        local_84 = &DAT_00dc08ea;
        do {
          puVar11 = operator_new(0x108);
          local_c = 3;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = (undefined4 *)0x0;
          }
          else {
            sVar3 = *(short *)(DAT_00d0ca90 + 0xab10 + ((int)local_80 + *local_84 * 0x33) * 2);
            FUN_00592190();
            *puVar11 = &PTR_LAB_007eb354;
            puVar11[0x41] = (float)(int)sVar3;
            FUN_007a630a();
            *puVar11 = &PTR_LAB_007eb464;
            FUN_007a630a();
          }
          local_c = 0xffffffff;
          if (*(int *)((int)local_88 + 0x32) < *(int *)((int)local_88 + 0x36)) {
            *(undefined4 **)(*(int *)((int)local_88 + 0x2e) + *(int *)((int)local_88 + 0x32) * 4) =
                 puVar11;
            *(int *)((int)local_88 + 0x32) = *(int *)((int)local_88 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
          local_7c = local_7c + 1;
          local_84 = local_84 + 1;
        } while (local_7c < DAT_008776c0);
      }
      FUN_00598ca0();
    }
    local_80 = (undefined4 *)((int)local_80 + 1);
    if (0x32 < (int)local_80) {
      ExceptionList = local_14;
      return;
    }
  } while( true );
}


