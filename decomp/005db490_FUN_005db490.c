// FUN_005db490 @ 5db490 size=1730

void __fastcall FUN_005db490(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  bool bVar14;
  float10 fVar15;
  int *piStack_34;
  int *piStack_30;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cdbde;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  fVar15 = (float10)FUN_00436060();
  iVar8 = *(int *)(param_1 + 0xbc);
  piVar5 = *(int **)(iVar8 + 4);
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar5)(1);
    }
    FUN_00796cd8(piVar5);
    piVar5 = piVar1;
  }
  *(undefined4 *)(iVar8 + 4) = 0;
  *(undefined4 *)(iVar8 + 8) = 0;
  *(undefined4 *)(iVar8 + 0xc) = 0;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x14))();
  puStack_1c = (undefined4 *)0x0;
  puStack_18 = (undefined4 *)0x0;
  iStack_14 = 0;
  uStack_4._0_1_ = 0;
  uStack_4._1_3_ = 0;
  piVar5 = *(int **)(DAT_00d0ca90 + 0x4508);
  puVar13 = puStack_1c;
  puVar10 = puStack_18;
joined_r0x005db530:
  do {
    do {
      puStack_18 = puVar10;
      puStack_1c = puVar13;
      if (piVar5 == (int *)0x0) {
        piStack_34 = &DAT_0089cad8;
        do {
          iVar8 = *piStack_34;
          if ((iVar8 != 0) && (cVar7 = FUN_00444270(), cVar7 != '\0')) {
            piVar5 = *(int **)(iVar8 + 0x4508);
            puVar13 = puStack_1c;
            puVar10 = puStack_18;
joined_r0x005db621:
            puStack_18 = puVar10;
            puStack_1c = puVar13;
            if (piVar5 != (int *)0x0) {
              piVar1 = (int *)piVar5[2];
              piVar2 = (int *)*piVar5;
              cVar7 = (**(code **)(*piVar2 + 0x2c))();
              piVar5 = piVar1;
              puVar13 = puStack_1c;
              puVar10 = puStack_18;
              if ((cVar7 != '\0') &&
                 (iVar8 = *(int *)((int)piVar2 + 0x212), puVar6 = puStack_1c, iVar8 != 0)) {
                for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)puVar6[2]) {
                  cVar7 = (*(code *)PTR_FUN_007e3798)(*puVar6,iVar8);
                  if (cVar7 != '\0') {
                    if (puVar6 != (undefined4 *)0x0) goto joined_r0x005db621;
                    break;
                  }
                }
                FUN_004e9370(*(undefined4 *)((int)piVar2 + 0x212));
                iVar8 = FUN_004ece90();
                if (iVar8 != 0) {
                  uVar12 = *(undefined4 *)((int)piVar2 + 0x212);
                  pvVar9 = operator_new(0xe);
                  uStack_4._0_1_ = 2;
                  if (pvVar9 == (void *)0x0) {
                    puVar10 = (undefined4 *)0x0;
                  }
                  else {
                    puVar10 = (undefined4 *)FUN_0049a7a0(uVar12,puStack_18,0);
                  }
                  uStack_4._0_1_ = 0;
                  iVar8 = iStack_14 + 1;
                  bVar14 = iStack_14 != 0;
                  puVar13 = puVar10;
                  iStack_14 = iVar8;
                  if (bVar14) {
                    puStack_18[2] = puVar10;
                    puVar13 = puStack_1c;
                  }
                }
              }
              goto joined_r0x005db621;
            }
          }
          piStack_34 = piStack_34 + 1;
        } while ((int)piStack_34 < 0x89d038);
        iVar8 = 0;
        if (0 < DAT_00877690) {
          do {
            iVar11 = FUN_004e9370(iVar8);
            puVar13 = puStack_1c;
            puVar10 = puStack_18;
            if ((*(int *)(iVar11 + 0x3d8) == DAT_00d0ca90) &&
               (iVar11 = FUN_004ece90(), puVar6 = puStack_1c, iVar11 != 0)) {
              for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)puVar6[2]) {
                cVar7 = (*(code *)PTR_FUN_007e3798)(*puVar6,iVar8);
                if (cVar7 != '\0') {
                  if (puVar6 != (undefined4 *)0x0) goto LAB_005db7a4;
                  break;
                }
              }
              pvVar9 = operator_new(0xe);
              uStack_4._0_1_ = 3;
              if (pvVar9 == (void *)0x0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                puVar10 = (undefined4 *)FUN_0049a7a0(iVar8,puStack_18,0);
              }
              uStack_4._0_1_ = 0;
              iVar11 = iStack_14 + 1;
              bVar14 = iStack_14 != 0;
              puVar13 = puVar10;
              iStack_14 = iVar11;
              if (bVar14) {
                puStack_18[2] = puVar10;
                puVar13 = puStack_1c;
              }
            }
LAB_005db7a4:
            puStack_18 = puVar10;
            puStack_1c = puVar13;
            iVar8 = iVar8 + 1;
          } while (iVar8 < DAT_00877690);
        }
        bVar14 = false;
        puVar13 = puStack_1c;
        while (puVar13 != (undefined4 *)0x0) {
          if (bVar14) {
            puVar10 = operator_new(0x32);
            uStack_4._0_1_ = 4;
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              FUN_00433f00();
              *(undefined4 *)((int)puVar10 + 0x2e) = 10;
              *puVar10 = &PTR_FUN_007ec904;
              puVar10[2] = &PTR_LAB_007ec900;
            }
            uStack_4._0_1_ = 0;
            iVar8 = *(int *)(param_1 + 0xbc);
            iVar11 = *(int *)(iVar8 + 8);
            pvVar9 = operator_new(0xe);
            uStack_4._0_1_ = 5;
            if (pvVar9 == (void *)0x0) {
              uVar12 = 0;
            }
            else {
              uVar12 = FUN_005926a0(puVar10,iVar11,0);
            }
            iVar3 = *(int *)(iVar8 + 0xc);
            uStack_4._0_1_ = 0;
            *(undefined4 *)(iVar8 + 8) = uVar12;
            *(int *)(iVar8 + 0xc) = iVar3 + 1;
            if (iVar3 == 0) {
              *(undefined4 *)(iVar8 + 4) = uVar12;
            }
            else {
              *(undefined4 *)(iVar11 + 8) = uVar12;
            }
          }
          puVar10 = (undefined4 *)puVar13[2];
          iVar8 = FUN_004e9370(*puVar13);
          puVar13 = operator_new(0x36);
          uStack_4._0_1_ = 6;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = (undefined4 *)0x0;
          }
          else {
            uVar12 = *(undefined4 *)(iVar8 + 0x12);
            FUN_00433f00();
            uStack_4._0_1_ = 7;
            *puVar13 = &PTR_FUN_007ecf70;
            puVar13[2] = &PTR_LAB_007ecf6c;
            *(undefined4 *)((int)puVar13 + 0x2e) = uVar12;
            pvVar9 = operator_new(0xaa);
            uStack_4._0_1_ = 8;
            if (pvVar9 == (void *)0x0) {
              *(undefined4 *)((int)puVar13 + 0x32) = 0;
            }
            else {
              uVar12 = FUN_00433570(s_gfx_interface_plate_prov_bmp_00859d10,0,0xffffffff);
              *(undefined4 *)((int)puVar13 + 0x32) = uVar12;
            }
          }
          uStack_4._0_1_ = 0;
          iVar11 = *(int *)(param_1 + 0xbc);
          iVar3 = *(int *)(iVar11 + 8);
          pvVar9 = operator_new(0xe);
          uStack_4._0_1_ = 9;
          if (pvVar9 == (void *)0x0) {
            uVar12 = 0;
          }
          else {
            uVar12 = FUN_005926a0(puVar13,iVar3,0);
          }
          iVar4 = *(int *)(iVar11 + 0xc);
          uStack_4._0_1_ = 0;
          *(undefined4 *)(iVar11 + 8) = uVar12;
          *(int *)(iVar11 + 0xc) = iVar4 + 1;
          if (iVar4 == 0) {
            *(undefined4 *)(iVar11 + 4) = uVar12;
          }
          else {
            *(undefined4 *)(iVar3 + 8) = uVar12;
          }
          bVar14 = true;
          piVar5 = *(int **)(DAT_00d0ca90 + 0x4508);
          while (piVar5 != (int *)0x0) {
            piVar1 = (int *)piVar5[2];
            piVar2 = (int *)*piVar5;
            cVar7 = (**(code **)(*piVar2 + 0x2c))();
            piVar5 = piVar1;
            if ((cVar7 != '\0') && (*(int *)((int)piVar2 + 0x212) == *(int *)(iVar8 + 0x12))) {
              pvVar9 = operator_new(0x98);
              uStack_4._0_1_ = 10;
              if (pvVar9 == (void *)0x0) {
                uVar12 = 0;
              }
              else {
                uVar12 = FUN_005c79d0(piVar2,*(undefined4 *)(param_1 + 0xbc));
              }
              uStack_4._0_1_ = 0;
              iVar11 = *(int *)(param_1 + 0xbc);
              iVar3 = *(int *)(iVar11 + 8);
              puVar13 = operator_new(0xe);
              if (puVar13 == (undefined4 *)0x0) {
                puVar13 = (undefined4 *)0x0;
              }
              else {
                *puVar13 = uVar12;
                puVar13[1] = iVar3;
                puVar13[2] = 0;
                *(undefined1 *)(puVar13 + 3) = 0;
              }
              iVar4 = *(int *)(iVar11 + 0xc);
              *(undefined4 **)(iVar11 + 8) = puVar13;
              *(int *)(iVar11 + 0xc) = iVar4 + 1;
              if (iVar4 == 0) {
                *(undefined4 **)(iVar11 + 4) = puVar13;
              }
              else {
                *(undefined4 **)(iVar3 + 8) = puVar13;
              }
            }
          }
          piStack_30 = &DAT_0089cad8;
          do {
            iVar11 = *piStack_30;
            if ((iVar11 != 0) && (cVar7 = FUN_00444270(), cVar7 != '\0')) {
              piVar5 = *(int **)(iVar11 + 0x4508);
              while (piVar5 != (int *)0x0) {
                piVar1 = (int *)piVar5[2];
                piVar2 = (int *)*piVar5;
                cVar7 = (**(code **)(*piVar2 + 0x2c))();
                piVar5 = piVar1;
                if ((cVar7 != '\0') && (*(int *)((int)piVar2 + 0x212) == *(int *)(iVar8 + 0x12))) {
                  pvVar9 = operator_new(0x98);
                  uStack_4._0_1_ = 0xb;
                  if (pvVar9 == (void *)0x0) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = FUN_005c79d0(piVar2,*(undefined4 *)(param_1 + 0xbc));
                  }
                  uStack_4._0_1_ = 0;
                  iVar11 = *(int *)(param_1 + 0xbc);
                  iVar3 = *(int *)(iVar11 + 8);
                  puVar13 = operator_new(0xe);
                  if (puVar13 == (undefined4 *)0x0) {
                    puVar13 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar13 = uVar12;
                    puVar13[1] = iVar3;
                    puVar13[2] = 0;
                    *(undefined1 *)(puVar13 + 3) = 0;
                  }
                  iVar4 = *(int *)(iVar11 + 0xc);
                  *(undefined4 **)(iVar11 + 8) = puVar13;
                  *(int *)(iVar11 + 0xc) = iVar4 + 1;
                  if (iVar4 == 0) {
                    *(undefined4 **)(iVar11 + 4) = puVar13;
                  }
                  else {
                    *(undefined4 **)(iVar3 + 8) = puVar13;
                  }
                }
              }
            }
            piStack_30 = piStack_30 + 1;
            puVar13 = puVar10;
          } while ((int)piStack_30 < 0x89d038);
        }
        FUN_004353e0();
        FUN_00436130((float)fVar15);
        while (puStack_1c != (undefined4 *)0x0) {
          puVar13 = (undefined4 *)puStack_1c[2];
          FUN_00796cd8(puStack_1c);
          puStack_1c = puVar13;
        }
        ExceptionList = pvStack_c;
        return;
      }
      piVar1 = (int *)piVar5[2];
      piVar2 = (int *)*piVar5;
      cVar7 = (**(code **)(*piVar2 + 0x2c))();
      piVar5 = piVar1;
      puVar13 = puStack_1c;
      puVar10 = puStack_18;
    } while ((cVar7 == '\0') ||
            (iVar8 = *(int *)((int)piVar2 + 0x212), puVar6 = puStack_1c, iVar8 == 0));
    for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)puVar6[2]) {
      cVar7 = (*(code *)PTR_FUN_007e3798)(*puVar6,iVar8);
      if (cVar7 != '\0') {
        if (puVar6 != (undefined4 *)0x0) goto joined_r0x005db530;
        break;
      }
    }
    FUN_004e9370(*(undefined4 *)((int)piVar2 + 0x212));
    iVar8 = FUN_004ece90();
    if (iVar8 != 0) {
      uVar12 = *(undefined4 *)((int)piVar2 + 0x212);
      pvVar9 = operator_new(0xe);
      uStack_4._0_1_ = 1;
      if (pvVar9 == (void *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        puVar10 = (undefined4 *)FUN_0049a7a0(uVar12,puStack_18,0);
      }
      uStack_4._0_1_ = 0;
      iVar8 = iStack_14 + 1;
      bVar14 = iStack_14 != 0;
      puVar13 = puVar10;
      iStack_14 = iVar8;
      if (bVar14) {
        puStack_18[2] = puVar10;
        puVar13 = puStack_1c;
      }
    }
  } while( true );
}


