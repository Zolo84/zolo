// FUN_005911c0 @ 5911c0 size=1580

void __fastcall FUN_005911c0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  undefined4 *puVar17;
  float10 fVar18;
  char *pcVar19;
  int iStack_28;
  double dStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007c9e87;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  puVar5 = operator_new(0x50);
  local_c = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x130);
    iVar6 = FUN_0043ffb0();
    *(int *)((int)puVar5 + 0x36) = iVar6;
    *(undefined4 *)((int)puVar5 + 0x32) = 0;
    *(undefined4 *)((int)puVar5 + 0x3a) = 0;
    pvVar7 = operator_new(iVar6 << 2);
    *(void **)((int)puVar5 + 0x2e) = pvVar7;
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00433f00();
    *(undefined4 *)((int)puVar5 + 0x3e) = uVar2;
    *(int *)((int)puVar5 + 0x42) = param_1;
    *(undefined2 *)((int)puVar5 + 0x4a) = 0;
    puVar5[0x13] = 0;
    *puVar5 = &PTR_FUN_007eb380;
    puVar5[2] = &PTR_LAB_007eb37c;
  }
  *(undefined4 **)(param_1 + 0x156) = puVar5;
  local_c = 0xffffffff;
  iVar6 = FUN_0043ffb0();
  puVar8 = operator_new(iVar6 << 2);
  iVar16 = 0;
  iVar6 = FUN_0043ffb0();
  puVar5 = puVar8;
  if (0 < iVar6) {
    do {
      *puVar5 = 0;
      iVar16 = iVar16 + 1;
      iVar6 = FUN_0043ffb0();
      puVar5 = puVar5 + 1;
    } while (iVar16 < iVar6);
  }
  piVar10 = *(int **)(*(int *)(param_1 + 0x15a) + 4);
  while (piVar10 != (int *)0x0) {
    piVar3 = (int *)piVar10[2];
    iVar16 = 0;
    iVar6 = *piVar10;
    piVar10 = piVar3;
    if (0 < *(int *)(iVar6 + 0x32)) {
      do {
        if ((iVar16 < 0) || (*(int *)(iVar6 + 0x36) <= iVar16)) {
          FUN_00405ad0();
          puVar5 = *(undefined4 **)(iVar6 + 0x2e);
        }
        else {
          puVar5 = (undefined4 *)(*(int *)(iVar6 + 0x2e) + iVar16 * 4);
        }
        cVar4 = (**(code **)(*(int *)*puVar5 + 0x14))();
        if (cVar4 == '\0') {
          if ((iVar16 < 0) || (*(int *)(iVar6 + 0x36) <= iVar16)) {
            FUN_00405ad0();
            puVar5 = *(undefined4 **)(iVar6 + 0x2e);
          }
          else {
            puVar5 = (undefined4 *)(*(int *)(iVar6 + 0x2e) + iVar16 * 4);
          }
          fVar18 = (float10)(*(code *)**(undefined4 **)*puVar5)();
          puVar8[iVar16] = (float)(fVar18 + (float10)(float)puVar8[iVar16]);
        }
        else {
          if ((iVar16 < 0) || (*(int *)(iVar6 + 0x36) <= iVar16)) {
            FUN_00405ad0();
            puVar5 = *(undefined4 **)(iVar6 + 0x2e);
          }
          else {
            puVar5 = (undefined4 *)(*(int *)(iVar6 + 0x2e) + iVar16 * 4);
          }
          piVar3 = *(int **)(param_1 + 0x15a);
          fVar18 = (float10)(*(code *)**(undefined4 **)*puVar5)();
          iVar9 = (**(code **)(*piVar3 + 4))();
          puVar8[iVar16] = (float)fVar18 / (float)iVar9 + (float)puVar8[iVar16];
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(iVar6 + 0x32));
    }
  }
  iVar6 = (**(code **)(**(int **)(param_1 + 0x15a) + 4))();
  if (0 < iVar6) {
    iStack_28 = 0;
    iVar6 = **(int **)(*(int *)(param_1 + 0x15a) + 4);
    iVar16 = FUN_0043ffb0();
    if (0 < iVar16) {
      do {
        if ((iStack_28 < 0) || (*(int *)(iVar6 + 0x36) <= iStack_28)) {
          FUN_00405ad0();
          puVar5 = *(undefined4 **)(iVar6 + 0x2e);
        }
        else {
          puVar5 = (undefined4 *)(*(int *)(iVar6 + 0x2e) + iStack_28 * 4);
        }
        cVar4 = (**(code **)(*(int *)*puVar5 + 8))();
        if (cVar4 == '\0') {
          if (iStack_28 == 0) {
            pcVar19 = operator_new(0x104);
            local_c = 4;
            if (pcVar19 == (char *)0x0) {
              pcVar19 = (char *)0x0;
            }
            else {
              pcVar11 = (char *)FUN_0042b6c9();
              uVar12 = 0xffffffff;
              *(undefined ***)pcVar19 = &PTR_LAB_007eb264;
              pcVar14 = &DAT_0083bf04;
              do {
                pcVar15 = pcVar14;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pcVar15 = pcVar14 + 1;
                cVar4 = *pcVar14;
                pcVar14 = pcVar15;
              } while (cVar4 != '\0');
              uVar12 = ~uVar12;
              pcVar15 = pcVar15 + -uVar12;
              pcVar14 = pcVar19;
              for (uVar13 = uVar12 >> 2; pcVar14 = pcVar14 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *pcVar14 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar14 = pcVar14 + 1;
              }
              *(undefined ***)pcVar19 = &PTR_LAB_007eb23c;
              if (pcVar11 != (char *)0x0) {
                uVar12 = 0xffffffff;
                do {
                  pcVar14 = pcVar11;
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  pcVar14 = pcVar11 + 1;
                  cVar4 = *pcVar11;
                  pcVar11 = pcVar14;
                } while (cVar4 != '\0');
                uVar12 = ~uVar12;
                pcVar11 = pcVar14 + -uVar12;
                pcVar14 = pcVar19 + 8;
                for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
                  pcVar11 = pcVar11 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pcVar14 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  pcVar14 = pcVar14 + 1;
                }
              }
            }
            local_c = 0xffffffff;
            iVar9 = *(int *)(param_1 + 0x156);
            iVar16 = *(int *)(iVar9 + 0x32);
            if (iVar16 < *(int *)(iVar9 + 0x36)) goto LAB_00591621;
LAB_005916f6:
            FUN_00405ad0();
          }
          else {
            pcVar19 = operator_new(0x104);
            if (pcVar19 == (char *)0x0) {
              pcVar19 = (char *)0x0;
            }
            else {
              uVar12 = 0xffffffff;
              *(undefined ***)pcVar19 = &PTR_LAB_007eb264;
              pcVar11 = &DAT_0083bf04;
              do {
                pcVar14 = pcVar11;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pcVar14 = pcVar11 + 1;
                cVar4 = *pcVar11;
                pcVar11 = pcVar14;
              } while (cVar4 != '\0');
              uVar12 = ~uVar12;
              pcVar14 = pcVar14 + -uVar12;
              pcVar11 = pcVar19;
              for (uVar13 = uVar12 >> 2; pcVar11 = pcVar11 + 4, uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar14;
                pcVar14 = pcVar14 + 4;
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *pcVar11 = *pcVar14;
                pcVar14 = pcVar14 + 1;
                pcVar11 = pcVar11 + 1;
              }
              *(undefined ***)pcVar19 = &PTR_LAB_007eb23c;
              uVar12 = 0xffffffff;
              pcVar11 = &DAT_0088ebf8;
              do {
                pcVar14 = pcVar11;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pcVar14 = pcVar11 + 1;
                cVar4 = *pcVar11;
                pcVar11 = pcVar14;
              } while (cVar4 != '\0');
              uVar12 = ~uVar12;
              pcVar11 = pcVar14 + -uVar12;
              pcVar14 = pcVar19 + 8;
              for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar14 = pcVar14 + 4;
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *pcVar14 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar14 = pcVar14 + 1;
              }
            }
            iVar16 = *(int *)(param_1 + 0x156);
            piVar10 = (int *)(iVar16 + 0x2e);
            if (*(int *)(iVar16 + 0x32) < *(int *)(iVar16 + 0x36)) {
              *(char **)(*piVar10 + *(int *)(iVar16 + 0x32) * 4) = pcVar19;
              goto LAB_005917b1;
            }
            FUN_00405ad0();
          }
        }
        else {
          if ((iStack_28 < 0) || (*(int *)(iVar6 + 0x36) <= iStack_28)) {
            FUN_00405ad0();
            puVar5 = *(undefined4 **)(iVar6 + 0x2e);
          }
          else {
            puVar5 = (undefined4 *)(*(int *)(iVar6 + 0x2e) + iStack_28 * 4);
          }
          cVar4 = (**(code **)(*(int *)*puVar5 + 0x10))();
          if (cVar4 == '\0') {
            if ((iStack_28 < 0) || (*(int *)(iVar6 + 0x36) <= iStack_28)) {
              FUN_00405ad0();
              puVar5 = *(undefined4 **)(iVar6 + 0x2e);
            }
            else {
              puVar5 = (undefined4 *)(*(int *)(iVar6 + 0x2e) + iStack_28 * 4);
            }
            cVar4 = (**(code **)(*(int *)*puVar5 + 0x14))();
            if (cVar4 == '\0') {
              pcVar19 = operator_new(0x108);
              if (pcVar19 == (char *)0x0) {
                pcVar19 = (char *)0x0;
              }
              else {
                uVar12 = 0xffffffff;
                fVar1 = (float)puVar8[iStack_28];
                *(undefined ***)pcVar19 = &PTR_LAB_007eb264;
                pcVar11 = &DAT_0083bf04;
                do {
                  pcVar14 = pcVar11;
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  pcVar14 = pcVar11 + 1;
                  cVar4 = *pcVar11;
                  pcVar11 = pcVar14;
                } while (cVar4 != '\0');
                uVar12 = ~uVar12;
                pcVar14 = pcVar14 + -uVar12;
                pcVar11 = pcVar19;
                for (uVar13 = uVar12 >> 2; pcVar11 = pcVar11 + 4, uVar13 != 0; uVar13 = uVar13 - 1)
                {
                  *(undefined4 *)pcVar11 = *(undefined4 *)pcVar14;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pcVar11 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                  pcVar11 = pcVar11 + 1;
                }
                *(float *)(pcVar19 + 0x104) = fVar1;
                *(undefined ***)pcVar19 = &PTR_LAB_007eb354;
                FUN_007a630a(pcVar19 + 8,&DAT_00858140,(double)fVar1);
              }
              iVar9 = *(int *)(param_1 + 0x156);
              iVar16 = *(int *)(iVar9 + 0x32);
              if (*(int *)(iVar9 + 0x36) <= iVar16) goto LAB_005916f6;
LAB_00591621:
              *(char **)(*(int *)(iVar9 + 0x2e) + iVar16 * 4) = pcVar19;
              *(int *)(iVar9 + 0x32) = *(int *)(iVar9 + 0x32) + 1;
              goto LAB_005917b4;
            }
            puVar5 = operator_new(0x108);
            local_c = 3;
            if (puVar5 != (undefined4 *)0x0) {
              fVar1 = (float)puVar8[iStack_28];
              FUN_00592190();
              puVar17 = puVar5 + 2;
              dStack_20 = (double)fVar1;
              *puVar5 = &PTR_LAB_007eb354;
              puVar5[0x41] = fVar1;
              FUN_007a630a(puVar17,&DAT_00858140,dStack_20._0_4_);
              *puVar5 = &PTR_LAB_007eb464;
              pcVar19 = s___1f____00858320;
              goto LAB_0059154b;
            }
LAB_00591562:
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = operator_new(0x108);
            local_c = 2;
            if (puVar5 == (undefined4 *)0x0) goto LAB_00591562;
            fVar1 = (float)puVar8[iStack_28];
            FUN_00592190();
            puVar17 = puVar5 + 2;
            dStack_20 = (double)fVar1;
            *puVar5 = &PTR_LAB_007eb354;
            puVar5[0x41] = fVar1;
            FUN_007a630a(puVar17,&DAT_00858140,dStack_20._0_4_);
            *puVar5 = &PTR_LAB_007eb48c;
            pcVar19 = s___2f___00858328;
LAB_0059154b:
            FUN_007a630a(puVar17,pcVar19,dStack_20);
          }
          iVar16 = *(int *)(param_1 + 0x156);
          local_c = 0xffffffff;
          piVar10 = (int *)(iVar16 + 0x2e);
          if (*(int *)(iVar16 + 0x32) < *(int *)(iVar16 + 0x36)) {
            *(undefined4 **)(*piVar10 + *(int *)(iVar16 + 0x32) * 4) = puVar5;
LAB_005917b1:
            piVar10[1] = piVar10[1] + 1;
          }
          else {
            FUN_00405ad0();
          }
        }
LAB_005917b4:
        iStack_28 = iStack_28 + 1;
        iVar16 = FUN_0043ffb0();
      } while (iStack_28 < iVar16);
    }
  }
  FUN_00796cd8();
  ExceptionList = pvStack_14;
  return;
}


