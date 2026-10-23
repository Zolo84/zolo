// FUN_005c6900 @ 5c6900 size=1670

void __fastcall FUN_005c6900(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char cVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
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
  puStack_8 = &LAB_007ccafe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  fVar15 = (float10)FUN_00436060();
  iVar13 = *(int *)(param_1 + 0xbc);
  piVar5 = *(int **)(iVar13 + 4);
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar5)(1);
    }
    FUN_00796cd8(piVar5);
    piVar5 = piVar1;
  }
  *(undefined4 *)(iVar13 + 4) = 0;
  *(undefined4 *)(iVar13 + 8) = 0;
  *(undefined4 *)(iVar13 + 0xc) = 0;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x14))();
  puStack_1c = (undefined4 *)0x0;
  puStack_18 = (undefined4 *)0x0;
  iStack_14 = 0;
  uStack_4._0_1_ = 0;
  uStack_4._1_3_ = 0;
  piVar5 = *(int **)(DAT_00d0ca90 + 0x4508);
  puVar12 = puStack_1c;
  puVar9 = puStack_18;
joined_r0x005c69a0:
  do {
    do {
      puStack_18 = puVar9;
      puStack_1c = puVar12;
      if (piVar5 == (int *)0x0) {
        piStack_34 = &DAT_0089cad8;
        do {
          iVar13 = *piStack_34;
          if ((iVar13 != 0) && (cVar7 = FUN_00444270(), cVar7 != '\0')) {
            piVar5 = *(int **)(iVar13 + 0x4508);
            puVar12 = puStack_1c;
            puVar9 = puStack_18;
joined_r0x005c6a73:
            puStack_18 = puVar9;
            puStack_1c = puVar12;
            if (piVar5 != (int *)0x0) {
              piVar1 = (int *)piVar5[2];
              piVar2 = (int *)*piVar5;
              cVar7 = (**(code **)(*piVar2 + 0x30))();
              piVar5 = piVar1;
              puVar12 = puStack_1c;
              puVar9 = puStack_18;
              if ((cVar7 != '\0') &&
                 (iVar13 = *(int *)((int)piVar2 + 0x212), puVar6 = puStack_1c, iVar13 != 0)) {
                for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)puVar6[2]) {
                  cVar7 = (*(code *)PTR_FUN_007e3798)(*puVar6,iVar13);
                  if (cVar7 != '\0') {
                    if (puVar6 != (undefined4 *)0x0) goto joined_r0x005c6a73;
                    break;
                  }
                }
                uVar11 = *(undefined4 *)((int)piVar2 + 0x212);
                pvVar8 = operator_new(0xe);
                uStack_4._0_1_ = 2;
                if (pvVar8 == (void *)0x0) {
                  puVar9 = (undefined4 *)0x0;
                }
                else {
                  puVar9 = (undefined4 *)FUN_0049a7a0(uVar11,puStack_18,0);
                }
                uStack_4._0_1_ = 0;
                iVar13 = iStack_14 + 1;
                bVar14 = iStack_14 != 0;
                puVar12 = puVar9;
                iStack_14 = iVar13;
                if (bVar14) {
                  puStack_18[2] = puVar9;
                  puVar12 = puStack_1c;
                }
              }
              goto joined_r0x005c6a73;
            }
          }
          piStack_34 = piStack_34 + 1;
        } while ((int)piStack_34 < 0x89d038);
        iVar13 = 0;
        if (0 < DAT_00877690) {
          do {
            iVar10 = FUN_004e9370(iVar13);
            puVar12 = puStack_1c;
            puVar9 = puStack_18;
            if ((*(int *)(iVar10 + 0x3d8) == DAT_00d0ca90) &&
               (iVar10 = FUN_004ece80(), puVar6 = puStack_1c, iVar10 != 0)) {
              for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)puVar6[2]) {
                cVar7 = (*(code *)PTR_FUN_007e3798)(*puVar6,iVar13);
                if (cVar7 != '\0') {
                  if (puVar6 != (undefined4 *)0x0) goto LAB_005c6bd8;
                  break;
                }
              }
              pvVar8 = operator_new(0xe);
              uStack_4._0_1_ = 3;
              if (pvVar8 == (void *)0x0) {
                puVar9 = (undefined4 *)0x0;
              }
              else {
                puVar9 = (undefined4 *)FUN_0049a7a0(iVar13,puStack_18,0);
              }
              uStack_4._0_1_ = 0;
              iVar10 = iStack_14 + 1;
              bVar14 = iStack_14 != 0;
              puVar12 = puVar9;
              iStack_14 = iVar10;
              if (bVar14) {
                puStack_18[2] = puVar9;
                puVar12 = puStack_1c;
              }
            }
LAB_005c6bd8:
            puStack_18 = puVar9;
            puStack_1c = puVar12;
            iVar13 = iVar13 + 1;
          } while (iVar13 < DAT_00877690);
        }
        bVar14 = false;
        puVar12 = puStack_1c;
        while (puVar12 != (undefined4 *)0x0) {
          if (bVar14) {
            puVar9 = operator_new(0x32);
            uStack_4._0_1_ = 4;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              FUN_00433f00();
              *(undefined4 *)((int)puVar9 + 0x2e) = 10;
              *puVar9 = &PTR_FUN_007ec904;
              puVar9[2] = &PTR_LAB_007ec900;
            }
            uStack_4._0_1_ = 0;
            iVar13 = *(int *)(param_1 + 0xbc);
            iVar10 = *(int *)(iVar13 + 8);
            pvVar8 = operator_new(0xe);
            uStack_4._0_1_ = 5;
            if (pvVar8 == (void *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_005926a0(puVar9,iVar10,0);
            }
            iVar3 = *(int *)(iVar13 + 0xc);
            uStack_4._0_1_ = 0;
            *(undefined4 *)(iVar13 + 8) = uVar11;
            *(int *)(iVar13 + 0xc) = iVar3 + 1;
            if (iVar3 == 0) {
              *(undefined4 *)(iVar13 + 4) = uVar11;
            }
            else {
              *(undefined4 *)(iVar10 + 8) = uVar11;
            }
          }
          puVar9 = (undefined4 *)puVar12[2];
          iVar13 = FUN_004e9370(*puVar12);
          puVar12 = operator_new(0x36);
          uStack_4._0_1_ = 6;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            uVar11 = *(undefined4 *)(iVar13 + 0x12);
            FUN_00433f00();
            uStack_4._0_1_ = 7;
            *puVar12 = &PTR_FUN_007ec834;
            puVar12[2] = &PTR_LAB_007ec830;
            *(undefined4 *)((int)puVar12 + 0x2e) = uVar11;
            pvVar8 = operator_new(0xaa);
            uStack_4._0_1_ = 8;
            if (pvVar8 == (void *)0x0) {
              *(undefined4 *)((int)puVar12 + 0x32) = 0;
            }
            else {
              uVar11 = FUN_00433570(s_gfx_interface_plate_prov_bmp_00859d10,0,0xffffffff);
              *(undefined4 *)((int)puVar12 + 0x32) = uVar11;
            }
          }
          uStack_4._0_1_ = 0;
          iVar10 = *(int *)(param_1 + 0xbc);
          iVar3 = *(int *)(iVar10 + 8);
          pvVar8 = operator_new(0xe);
          uStack_4._0_1_ = 9;
          if (pvVar8 == (void *)0x0) {
            uVar11 = 0;
          }
          else {
            uVar11 = FUN_005926a0(puVar12,iVar3,0);
          }
          iVar4 = *(int *)(iVar10 + 0xc);
          uStack_4._0_1_ = 0;
          *(undefined4 *)(iVar10 + 8) = uVar11;
          *(int *)(iVar10 + 0xc) = iVar4 + 1;
          if (iVar4 == 0) {
            *(undefined4 *)(iVar10 + 4) = uVar11;
          }
          else {
            *(undefined4 *)(iVar3 + 8) = uVar11;
          }
          bVar14 = true;
          piVar5 = *(int **)(DAT_00d0ca90 + 0x4508);
          while (piVar5 != (int *)0x0) {
            piVar1 = (int *)piVar5[2];
            piVar2 = (int *)*piVar5;
            cVar7 = (**(code **)(*piVar2 + 0x30))();
            piVar5 = piVar1;
            if ((cVar7 != '\0') && (*(int *)((int)piVar2 + 0x212) == *(int *)(iVar13 + 0x12))) {
              pvVar8 = operator_new(0x98);
              uStack_4._0_1_ = 10;
              if (pvVar8 == (void *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar11 = FUN_005c79d0(piVar2,*(undefined4 *)(param_1 + 0xbc));
              }
              uStack_4._0_1_ = 0;
              iVar10 = *(int *)(param_1 + 0xbc);
              iVar3 = *(int *)(iVar10 + 8);
              puVar12 = operator_new(0xe);
              if (puVar12 == (undefined4 *)0x0) {
                puVar12 = (undefined4 *)0x0;
              }
              else {
                *puVar12 = uVar11;
                puVar12[1] = iVar3;
                puVar12[2] = 0;
                *(undefined1 *)(puVar12 + 3) = 0;
              }
              iVar4 = *(int *)(iVar10 + 0xc);
              *(undefined4 **)(iVar10 + 8) = puVar12;
              *(int *)(iVar10 + 0xc) = iVar4 + 1;
              if (iVar4 == 0) {
                *(undefined4 **)(iVar10 + 4) = puVar12;
              }
              else {
                *(undefined4 **)(iVar3 + 8) = puVar12;
              }
            }
          }
          piStack_30 = &DAT_0089cad8;
          do {
            iVar10 = *piStack_30;
            if ((iVar10 != 0) && (cVar7 = FUN_00444270(), cVar7 != '\0')) {
              piVar5 = *(int **)(iVar10 + 0x4508);
              while (piVar5 != (int *)0x0) {
                piVar1 = (int *)piVar5[2];
                piVar2 = (int *)*piVar5;
                cVar7 = (**(code **)(*piVar2 + 0x30))();
                piVar5 = piVar1;
                if ((cVar7 != '\0') && (*(int *)((int)piVar2 + 0x212) == *(int *)(iVar13 + 0x12))) {
                  pvVar8 = operator_new(0x98);
                  uStack_4._0_1_ = 0xb;
                  if (pvVar8 == (void *)0x0) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = FUN_005c79d0(piVar2,*(undefined4 *)(param_1 + 0xbc));
                  }
                  uStack_4._0_1_ = 0;
                  iVar10 = *(int *)(param_1 + 0xbc);
                  iVar3 = *(int *)(iVar10 + 8);
                  puVar12 = operator_new(0xe);
                  if (puVar12 == (undefined4 *)0x0) {
                    puVar12 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar12 = uVar11;
                    puVar12[1] = iVar3;
                    puVar12[2] = 0;
                    *(undefined1 *)(puVar12 + 3) = 0;
                  }
                  iVar4 = *(int *)(iVar10 + 0xc);
                  *(undefined4 **)(iVar10 + 8) = puVar12;
                  *(int *)(iVar10 + 0xc) = iVar4 + 1;
                  if (iVar4 == 0) {
                    *(undefined4 **)(iVar10 + 4) = puVar12;
                  }
                  else {
                    *(undefined4 **)(iVar3 + 8) = puVar12;
                  }
                }
              }
            }
            piStack_30 = piStack_30 + 1;
            puVar12 = puVar9;
          } while ((int)piStack_30 < 0x89d038);
        }
        FUN_004353e0();
        FUN_00436130((float)fVar15);
        while (puStack_1c != (undefined4 *)0x0) {
          puVar12 = (undefined4 *)puStack_1c[2];
          FUN_00796cd8(puStack_1c);
          puStack_1c = puVar12;
        }
        ExceptionList = pvStack_c;
        return;
      }
      piVar1 = (int *)piVar5[2];
      piVar2 = (int *)*piVar5;
      cVar7 = (**(code **)(*piVar2 + 0x30))();
      piVar5 = piVar1;
      puVar12 = puStack_1c;
      puVar9 = puStack_18;
    } while ((cVar7 == '\0') ||
            (iVar13 = *(int *)((int)piVar2 + 0x212), puVar6 = puStack_1c, iVar13 == 0));
    for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)puVar6[2]) {
      cVar7 = (*(code *)PTR_FUN_007e3798)(*puVar6,iVar13);
      if (cVar7 != '\0') {
        if (puVar6 != (undefined4 *)0x0) goto joined_r0x005c69a0;
        break;
      }
    }
    uVar11 = *(undefined4 *)((int)piVar2 + 0x212);
    pvVar8 = operator_new(0xe);
    uStack_4._0_1_ = 1;
    if (pvVar8 == (void *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = (undefined4 *)FUN_0049a7a0(uVar11,puStack_18,0);
    }
    uStack_4._0_1_ = 0;
    iVar13 = iStack_14 + 1;
    bVar14 = iStack_14 != 0;
    puVar12 = puVar9;
    iStack_14 = iVar13;
    if (bVar14) {
      puStack_18[2] = puVar9;
      puVar12 = puStack_1c;
    }
  } while( true );
}


