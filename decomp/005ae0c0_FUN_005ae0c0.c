// FUN_005ae0c0 @ 5ae0c0 size=2648

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_005ae0c0(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  int *local_80;
  int *local_78;
  int local_74;
  int local_6c;
  int local_64;
  char local_54 [64];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007cb828;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar5 = FUN_004136a0();
  if (DAT_00877688 < DAT_008776bc) {
    local_64 = 0;
    if (0 < DAT_008776bc) {
      local_80 = &DAT_00dc06ba;
      do {
        local_74 = 0;
        do {
          puVar6 = operator_new(0x50);
          local_c = 4;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            *(undefined4 *)((int)puVar6 + 0x32) = 0;
            *(undefined4 *)((int)puVar6 + 0x36) = 0x12;
            *(undefined4 *)((int)puVar6 + 0x3a) = 0;
            pvVar7 = operator_new(0x48);
            *(void **)((int)puVar6 + 0x2e) = pvVar7;
            local_c = CONCAT31(local_c._1_3_,5);
            FUN_00433f00();
            *(undefined4 *)((int)puVar6 + 0x3e) = uVar5;
            *(int *)((int)puVar6 + 0x42) = param_1;
            *(undefined2 *)((int)puVar6 + 0x4a) = 0;
            puVar6[0x13] = 0;
            *puVar6 = &PTR_FUN_007eb380;
            puVar6[2] = &PTR_LAB_007eb37c;
          }
          local_c = 0xffffffff;
          FUN_004ff3a0();
          FUN_007a630a();
          pcVar8 = operator_new(0x104);
          if (pcVar8 == (char *)0x0) {
            pcVar8 = (char *)0x0;
          }
          else {
            uVar11 = 0xffffffff;
            *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
            pcVar9 = &DAT_0083bf04;
            do {
              pcVar15 = pcVar9;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar15 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar15;
            } while (cVar1 != '\0');
            uVar11 = ~uVar11;
            pcVar15 = pcVar15 + -uVar11;
            pcVar9 = pcVar8;
            for (uVar12 = uVar11 >> 2; pcVar9 = pcVar9 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar9 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar9 = pcVar9 + 1;
            }
            *(undefined ***)pcVar8 = &PTR_LAB_007eb23c;
            if (&stack0x00000000 != (undefined1 *)0x54) {
              uVar11 = 0xffffffff;
              pcVar9 = local_54;
              do {
                pcVar15 = pcVar9;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                pcVar15 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar15;
              } while (cVar1 != '\0');
              uVar11 = ~uVar11;
              pcVar9 = pcVar15 + -uVar11;
              pcVar15 = pcVar8 + 8;
              for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pcVar15 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar15 = pcVar15 + 1;
              }
            }
          }
          if (*(int *)((int)puVar6 + 0x32) < *(int *)((int)puVar6 + 0x36)) {
            *(char **)(*(int *)((int)puVar6 + 0x2e) + *(int *)((int)puVar6 + 0x32) * 4) = pcVar8;
            *(int *)((int)puVar6 + 0x32) = *(int *)((int)puVar6 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
          FUN_0042b6c9();
          FUN_007a630a();
          pcVar8 = operator_new(0x104);
          if (pcVar8 == (char *)0x0) {
            pcVar8 = (char *)0x0;
          }
          else {
            uVar11 = 0xffffffff;
            *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
            pcVar9 = &DAT_0083bf04;
            do {
              pcVar15 = pcVar9;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar15 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar15;
            } while (cVar1 != '\0');
            uVar11 = ~uVar11;
            pcVar15 = pcVar15 + -uVar11;
            pcVar9 = pcVar8;
            for (uVar12 = uVar11 >> 2; pcVar9 = pcVar9 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar9 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar9 = pcVar9 + 1;
            }
            *(undefined ***)pcVar8 = &PTR_LAB_007eb23c;
            if (&stack0x00000000 != (undefined1 *)0x54) {
              uVar11 = 0xffffffff;
              pcVar9 = local_54;
              do {
                pcVar15 = pcVar9;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                pcVar15 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar15;
              } while (cVar1 != '\0');
              uVar11 = ~uVar11;
              pcVar9 = pcVar15 + -uVar11;
              pcVar15 = pcVar8 + 8;
              for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pcVar15 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar15 = pcVar15 + 1;
              }
            }
          }
          if (*(int *)((int)puVar6 + 0x32) < *(int *)((int)puVar6 + 0x36)) {
            *(char **)(*(int *)((int)puVar6 + 0x2e) + *(int *)((int)puVar6 + 0x32) * 4) = pcVar8;
            *(int *)((int)puVar6 + 0x32) = *(int *)((int)puVar6 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
          if (local_74 == 0) {
            local_78 = &DAT_00859048;
            do {
              puVar10 = operator_new(0x108);
              local_c = 6;
              if (puVar10 == (undefined4 *)0x0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                sVar2 = *(short *)(DAT_00d0ca90 + 0xab10 + (*local_80 * 0x33 + *local_78) * 2);
                FUN_00592190();
                *puVar10 = &PTR_LAB_007eb354;
                puVar10[0x41] = (float)(int)sVar2;
                FUN_007a630a();
                *puVar10 = &PTR_LAB_007eb464;
                FUN_007a630a();
              }
              local_c = 0xffffffff;
              if (*(int *)((int)puVar6 + 0x32) < *(int *)((int)puVar6 + 0x36)) {
                *(undefined4 **)(*(int *)((int)puVar6 + 0x2e) + *(int *)((int)puVar6 + 0x32) * 4) =
                     puVar10;
                *(int *)((int)puVar6 + 0x32) = *(int *)((int)puVar6 + 0x32) + 1;
              }
              else {
                FUN_00405ad0();
              }
              local_78 = local_78 + 1;
            } while ((int)local_78 < 0x859088);
          }
          else if (local_74 == 1) {
            local_78 = &DAT_00859088;
            do {
              puVar10 = operator_new(0x108);
              local_c = 7;
              if (puVar10 == (undefined4 *)0x0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                sVar2 = *(short *)(DAT_00d0ca90 + 0xab10 + (*local_80 * 0x33 + *local_78) * 2);
                FUN_00592190();
                *puVar10 = &PTR_LAB_007eb354;
                puVar10[0x41] = (float)(int)sVar2;
                FUN_007a630a();
                *puVar10 = &PTR_LAB_007eb464;
                FUN_007a630a();
              }
              local_c = 0xffffffff;
              if (*(int *)((int)puVar6 + 0x32) < *(int *)((int)puVar6 + 0x36)) {
                *(undefined4 **)(*(int *)((int)puVar6 + 0x2e) + *(int *)((int)puVar6 + 0x32) * 4) =
                     puVar10;
                *(int *)((int)puVar6 + 0x32) = *(int *)((int)puVar6 + 0x32) + 1;
              }
              else {
                FUN_00405ad0();
              }
              local_78 = local_78 + 1;
            } while ((int)local_78 < 0x8590a8);
            FUN_007a630a();
            iVar13 = 8;
            do {
              pcVar8 = operator_new(0x104);
              if (pcVar8 == (char *)0x0) {
                pcVar8 = (char *)0x0;
              }
              else {
                uVar11 = 0xffffffff;
                *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
                pcVar9 = &DAT_0083bf04;
                do {
                  pcVar15 = pcVar9;
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1;
                  pcVar15 = pcVar9 + 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar15;
                } while (cVar1 != '\0');
                uVar11 = ~uVar11;
                pcVar15 = pcVar15 + -uVar11;
                pcVar9 = pcVar8;
                for (uVar12 = uVar11 >> 2; pcVar9 = pcVar9 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar15;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *pcVar9 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                *(undefined ***)pcVar8 = &PTR_LAB_007eb23c;
                if (&stack0x00000000 != (undefined1 *)0x54) {
                  uVar11 = 0xffffffff;
                  pcVar9 = local_54;
                  do {
                    pcVar15 = pcVar9;
                    if (uVar11 == 0) break;
                    uVar11 = uVar11 - 1;
                    pcVar15 = pcVar9 + 1;
                    cVar1 = *pcVar9;
                    pcVar9 = pcVar15;
                  } while (cVar1 != '\0');
                  uVar11 = ~uVar11;
                  pcVar9 = pcVar15 + -uVar11;
                  pcVar15 = pcVar8 + 8;
                  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar9;
                    pcVar9 = pcVar9 + 4;
                    pcVar15 = pcVar15 + 4;
                  }
                  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                    *pcVar15 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                    pcVar15 = pcVar15 + 1;
                  }
                }
              }
              if (*(int *)((int)puVar6 + 0x32) < *(int *)((int)puVar6 + 0x36)) {
                *(char **)(*(int *)((int)puVar6 + 0x2e) + *(int *)((int)puVar6 + 0x32) * 4) = pcVar8
                ;
                *(int *)((int)puVar6 + 0x32) = *(int *)((int)puVar6 + 0x32) + 1;
              }
              else {
                FUN_00405ad0();
              }
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          else if (local_74 == 2) {
            pcVar8 = operator_new(0x108);
            if (pcVar8 == (char *)0x0) {
              pcVar8 = (char *)0x0;
            }
            else {
              sVar2 = *(short *)(DAT_00d0ca90 + 0xab34 + *local_80 * 0x66);
              uVar11 = 0xffffffff;
              *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
              pcVar9 = &DAT_0083bf04;
              do {
                pcVar15 = pcVar9;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                pcVar15 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar15;
              } while (cVar1 != '\0');
              uVar11 = ~uVar11;
              pcVar15 = pcVar15 + -uVar11;
              pcVar9 = pcVar8;
              for (uVar12 = uVar11 >> 2; pcVar9 = pcVar9 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar9 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pcVar9 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar9 = pcVar9 + 1;
              }
              *(float *)(pcVar8 + 0x104) = (float)(int)sVar2;
              *(undefined ***)pcVar8 = &PTR_LAB_007eb354;
              FUN_007a630a();
              *(undefined ***)pcVar8 = &PTR_LAB_007eb464;
              FUN_007a630a();
            }
            if (*(int *)((int)puVar6 + 0x32) < *(int *)((int)puVar6 + 0x36)) {
              *(char **)(*(int *)((int)puVar6 + 0x2e) + *(int *)((int)puVar6 + 0x32) * 4) = pcVar8;
              *(int *)((int)puVar6 + 0x32) = *(int *)((int)puVar6 + 0x32) + 1;
            }
            else {
              FUN_00405ad0();
            }
            FUN_007a630a();
            iVar13 = 0xf;
            do {
              pcVar8 = operator_new(0x104);
              if (pcVar8 == (char *)0x0) {
                pcVar8 = (char *)0x0;
              }
              else {
                uVar11 = 0xffffffff;
                *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
                pcVar9 = &DAT_0083bf04;
                do {
                  pcVar15 = pcVar9;
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1;
                  pcVar15 = pcVar9 + 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar15;
                } while (cVar1 != '\0');
                uVar11 = ~uVar11;
                pcVar15 = pcVar15 + -uVar11;
                pcVar9 = pcVar8;
                for (uVar12 = uVar11 >> 2; pcVar9 = pcVar9 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar15;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *pcVar9 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                *(undefined ***)pcVar8 = &PTR_LAB_007eb23c;
                if (&stack0x00000000 != (undefined1 *)0x54) {
                  uVar11 = 0xffffffff;
                  pcVar9 = local_54;
                  do {
                    pcVar15 = pcVar9;
                    if (uVar11 == 0) break;
                    uVar11 = uVar11 - 1;
                    pcVar15 = pcVar9 + 1;
                    cVar1 = *pcVar9;
                    pcVar9 = pcVar15;
                  } while (cVar1 != '\0');
                  uVar11 = ~uVar11;
                  pcVar9 = pcVar15 + -uVar11;
                  pcVar15 = pcVar8 + 8;
                  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar9;
                    pcVar9 = pcVar9 + 4;
                    pcVar15 = pcVar15 + 4;
                  }
                  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                    *pcVar15 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                    pcVar15 = pcVar15 + 1;
                  }
                }
              }
              if (*(int *)((int)puVar6 + 0x32) < *(int *)((int)puVar6 + 0x36)) {
                *(char **)(*(int *)((int)puVar6 + 0x2e) + *(int *)((int)puVar6 + 0x32) * 4) = pcVar8
                ;
                *(int *)((int)puVar6 + 0x32) = *(int *)((int)puVar6 + 0x32) + 1;
              }
              else {
                FUN_00405ad0();
              }
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          iVar13 = *(int *)(param_1 + 0x15a);
          iVar3 = *(int *)(iVar13 + 8);
          puVar10 = operator_new(0xe);
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            *puVar10 = puVar6;
            puVar10[1] = iVar3;
            puVar10[2] = 0;
            *(undefined1 *)(puVar10 + 3) = 0;
          }
          iVar4 = *(int *)(iVar13 + 0xc);
          *(undefined4 **)(iVar13 + 8) = puVar10;
          *(int *)(iVar13 + 0xc) = iVar4 + 1;
          if (iVar4 == 0) {
            *(undefined4 **)(iVar13 + 4) = puVar10;
          }
          else {
            *(undefined4 **)(iVar3 + 8) = puVar10;
          }
          local_74 = local_74 + 1;
        } while (local_74 < 3);
        local_64 = local_64 + 1;
        local_80 = local_80 + 1;
      } while (local_64 < DAT_008776bc);
    }
    ExceptionList = local_14;
    return;
  }
  local_80 = (int *)0x0;
  do {
    switch(local_80) {
    case (int *)0x10:
    case (int *)0x11:
    case (int *)0x1b:
    case (int *)0x1c:
    case (int *)0x1d:
    case (int *)0x1e:
    case (int *)0x1f:
    case (int *)0x20:
    case (int *)0x21:
    case (int *)0x22:
    case (int *)0x23:
    case (int *)0x24:
    case (int *)0x25:
    case (int *)0x26:
    case (int *)0x27:
    case (int *)0x28:
    case (int *)0x29:
    case (int *)0x2a:
    case (int *)0x2b:
    case (int *)0x2c:
    case (int *)0x2d:
    case (int *)0x2e:
    case (int *)0x2f:
    case (int *)0x30:
    case (int *)0x31:
    case (int *)0x32:
      break;
    default:
      puVar6 = operator_new(0x50);
      iVar13 = DAT_008776bc;
      local_c = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *(undefined4 *)((int)puVar6 + 0x32) = 0;
        *(undefined4 *)((int)puVar6 + 0x3a) = 0;
        *(int *)((int)puVar6 + 0x36) = iVar13 + 1;
        pvVar7 = operator_new((iVar13 + 1) * 4);
        *(void **)((int)puVar6 + 0x2e) = pvVar7;
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_00433f00();
        *(undefined4 *)((int)puVar6 + 0x3e) = uVar5;
        *(int *)((int)puVar6 + 0x42) = param_1;
        *(undefined2 *)((int)puVar6 + 0x4a) = 0;
        puVar6[0x13] = 0;
        *puVar6 = &PTR_FUN_007eb380;
        puVar6[2] = &PTR_LAB_007eb37c;
      }
      local_c = 0xffffffff;
      pcVar8 = operator_new(0x104);
      local_c = 2;
      if (pcVar8 == (char *)0x0) {
        pcVar8 = (char *)0x0;
      }
      else {
        pcVar9 = (char *)FUN_0054e7a0();
        uVar11 = 0xffffffff;
        *(undefined ***)pcVar8 = &PTR_LAB_007eb264;
        pcVar15 = &DAT_0083bf04;
        do {
          pcVar14 = pcVar15;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar14 = pcVar15 + 1;
          cVar1 = *pcVar15;
          pcVar15 = pcVar14;
        } while (cVar1 != '\0');
        uVar11 = ~uVar11;
        pcVar14 = pcVar14 + -uVar11;
        pcVar15 = pcVar8;
        for (uVar12 = uVar11 >> 2; pcVar15 = pcVar15 + 4, uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar15 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar15 = pcVar15 + 1;
        }
        *(undefined ***)pcVar8 = &PTR_LAB_007eb23c;
        if (pcVar9 != (char *)0x0) {
          uVar11 = 0xffffffff;
          do {
            pcVar15 = pcVar9;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar15 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar15;
          } while (cVar1 != '\0');
          uVar11 = ~uVar11;
          pcVar9 = pcVar15 + -uVar11;
          pcVar15 = pcVar8 + 8;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar15 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar15 = pcVar15 + 1;
          }
        }
      }
      local_c = 0xffffffff;
      if (*(int *)((int)puVar6 + 0x32) < *(int *)((int)puVar6 + 0x36)) {
        *(char **)(*(int *)((int)puVar6 + 0x2e) + *(int *)((int)puVar6 + 0x32) * 4) = pcVar8;
        *(int *)((int)puVar6 + 0x32) = *(int *)((int)puVar6 + 0x32) + 1;
      }
      else {
        FUN_00405ad0();
      }
      local_6c = 0;
      if (0 < DAT_008776bc) {
        local_78 = &DAT_00dc06ba;
        do {
          puVar10 = operator_new(0x108);
          local_c = 3;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            sVar2 = *(short *)(DAT_00d0ca90 + 0xab10 + ((int)local_80 + *local_78 * 0x33) * 2);
            FUN_00592190();
            *puVar10 = &PTR_LAB_007eb354;
            puVar10[0x41] = (float)(int)sVar2;
            FUN_007a630a();
            *puVar10 = &PTR_LAB_007eb464;
            FUN_007a630a();
          }
          local_c = 0xffffffff;
          if (*(int *)((int)puVar6 + 0x32) < *(int *)((int)puVar6 + 0x36)) {
            *(undefined4 **)(*(int *)((int)puVar6 + 0x2e) + *(int *)((int)puVar6 + 0x32) * 4) =
                 puVar10;
            *(int *)((int)puVar6 + 0x32) = *(int *)((int)puVar6 + 0x32) + 1;
          }
          else {
            FUN_00405ad0();
          }
          local_6c = local_6c + 1;
          local_78 = local_78 + 1;
        } while (local_6c < DAT_008776bc);
      }
      FUN_00598ca0();
    }
    local_80 = (int *)((int)local_80 + 1);
    if (0x32 < (int)local_80) {
      ExceptionList = local_14;
      return;
    }
  } while( true );
}


