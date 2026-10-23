// FUN_00620430 @ 620430 size=2328

void __fastcall FUN_00620430(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 *puStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d0fd6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00436030();
  iVar5 = *(int *)(param_1 + 0xca);
  piVar6 = *(int **)(iVar5 + 4);
  while (piVar6 != (int *)0x0) {
    piVar9 = (int *)piVar6[2];
    if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar6)(1);
    }
    FUN_00796cd8(piVar6);
    piVar6 = piVar9;
  }
  *(undefined4 *)(iVar5 + 4) = 0;
  *(undefined4 *)(iVar5 + 8) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  iVar5 = FUN_0064ec00();
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_0064ec00();
    cVar4 = (**(code **)(*piVar6 + 0x10))();
    if (cVar4 != '\0') goto LAB_00620d2a;
    piVar6 = (int *)FUN_0064ec00();
    cVar4 = (**(code **)(*piVar6 + 0x1c))();
    if (cVar4 != '\0') goto LAB_00620d2a;
  }
  piVar6 = *(int **)(*(int *)(param_1 + 0x90) + 0x4508);
  while (piVar6 != (int *)0x0) {
    piVar9 = (int *)piVar6[2];
    iVar5 = *(int *)(param_1 + 0x90);
    piVar1 = (int *)*piVar6;
    iVar7 = FUN_00522770();
    piVar6 = piVar9;
    if (iVar7 == iVar5) {
      iVar5 = FUN_0064ec00();
      if (iVar5 != 0) {
        iVar5 = piVar1[3];
        piVar9 = piVar1;
        uVar8 = FUN_0064ec00(iVar5,piVar1);
        cVar4 = FUN_0049fb80(uVar8,iVar5,piVar9);
        if (cVar4 != '\0') {
          bVar13 = false;
          piVar9 = (int *)FUN_0064ec00();
          cVar4 = (**(code **)(*piVar9 + 0x14))();
          if (cVar4 == '\0') {
LAB_006205df:
            bVar13 = true;
          }
          else {
            FUN_0064ec00();
            cVar4 = (**(code **)(*piVar1 + 0x30))();
            if (((cVar4 != '\0') && (cVar4 = FUN_004f3f50(), cVar4 != '\0')) &&
               (iVar5 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))(), iVar5 < DAT_00dc1614)) {
              bVar13 = true;
            }
            cVar4 = (**(code **)(*piVar1 + 0x2c))();
            if ((cVar4 != '\0') && (cVar4 = FUN_004f3fa0(), cVar4 != '\0')) {
              bVar13 = true;
            }
            cVar4 = (**(code **)(*piVar1 + 0x28))();
            if ((cVar4 != '\0') && (cVar4 = FUN_004f3f80(), cVar4 != '\0')) goto LAB_006205df;
          }
          piVar9 = (int *)FUN_0064ec00();
          cVar4 = (**(code **)(*piVar9 + 0x18))();
          if (cVar4 != '\0') {
            *(undefined1 *)(param_1 + 0xc4) = 1;
          }
          if (bVar13) {
            piVar9 = (int *)FUN_0064ec00();
            cVar4 = (**(code **)(*piVar9 + 0x18))();
            if (cVar4 == '\0') {
              puStack_18 = operator_new(0x44);
              uStack_4 = 3;
              if (puStack_18 == (undefined4 *)0x0) {
                puStack_18 = (undefined4 *)0x0;
              }
              else {
                FUN_00433f00();
                *(undefined2 *)((int)puStack_18 + 0x2e) = 0;
                puStack_18[0xc] = 0;
                *(undefined2 *)(puStack_18 + 0xd) = 0;
                *(undefined4 *)((int)puStack_18 + 0x36) = 0;
                *puStack_18 = &PTR_FUN_007ef598;
                puStack_18[2] = &PTR_LAB_007ef594;
                *(int *)((int)puStack_18 + 0x2e) = piVar1[6];
                uStack_4._0_1_ = 4;
                iVar5 = piVar1[7];
                *(undefined1 *)((int)puStack_18 + 0x3a) = 0;
                *(short *)((int)puStack_18 + 0x32) = (short)iVar5;
                pvVar10 = operator_new(0x98);
                uStack_4 = CONCAT31(uStack_4._1_3_,5);
                if (pvVar10 == (void *)0x0) {
                  puStack_18[0x10] = 0;
                  puStack_18[0xf] = 0;
                }
                else {
                  uVar8 = FUN_005c79d0(piVar1,0);
                  puStack_18[0xf] = uVar8;
                  puStack_18[0x10] = 0;
                }
              }
              iVar5 = *(int *)(param_1 + 0xca);
              uStack_4 = 0xffffffff;
              iVar7 = *(int *)(iVar5 + 8);
              puVar11 = operator_new(0xe);
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = (undefined4 *)0x0;
              }
              else {
                puVar11[1] = iVar7;
                *puVar11 = puStack_18;
                puVar11[2] = 0;
                *(undefined1 *)(puVar11 + 3) = 0;
              }
              iVar2 = *(int *)(iVar5 + 0xc);
              *(undefined4 **)(iVar5 + 8) = puVar11;
              *(int *)(iVar5 + 0xc) = iVar2 + 1;
              if (iVar2 == 0) {
                *(undefined4 **)(iVar5 + 4) = puVar11;
              }
              else {
                *(undefined4 **)(iVar7 + 8) = puVar11;
              }
            }
            else {
              *(undefined1 *)(param_1 + 0xc4) = 1;
              piVar9 = *(int **)((int)piVar1 + 0x26);
              while (piVar9 != (int *)0x0) {
                iVar5 = *piVar9;
                piVar9 = (int *)piVar9[2];
                if (*(int *)(iVar5 + 0x88) == 0) {
                  puStack_18 = operator_new(0x44);
                  uStack_4 = 0;
                  if (puStack_18 == (undefined4 *)0x0) {
                    puStack_18 = (undefined4 *)0x0;
                  }
                  else {
                    FUN_00433f00();
                    *(undefined2 *)((int)puStack_18 + 0x2e) = 0;
                    puStack_18[0xc] = 0;
                    *(undefined2 *)(puStack_18 + 0xd) = 0;
                    *(undefined4 *)((int)puStack_18 + 0x36) = 0;
                    *puStack_18 = &PTR_FUN_007ef598;
                    puStack_18[2] = &PTR_LAB_007ef594;
                    puStack_18[0xd] = *(undefined4 *)(iVar5 + 0xc);
                    uStack_4._0_1_ = 1;
                    *(undefined2 *)(puStack_18 + 0xe) = *(undefined2 *)(iVar5 + 0x10);
                    *(undefined1 *)((int)puStack_18 + 0x3a) = 0;
                    puStack_18[0xf] = 0;
                    pvVar10 = operator_new(0x80);
                    uStack_4 = CONCAT31(uStack_4._1_3_,2);
                    if (pvVar10 == (void *)0x0) {
                      puStack_18[0x10] = 0;
                    }
                    else {
                      uVar8 = FUN_005dcb20(iVar5,0);
                      puStack_18[0x10] = uVar8;
                    }
                  }
                  iVar5 = *(int *)(param_1 + 0xca);
                  uStack_4 = 0xffffffff;
                  iVar7 = *(int *)(iVar5 + 8);
                  puVar11 = operator_new(0xe);
                  if (puVar11 == (undefined4 *)0x0) {
                    puVar11 = (undefined4 *)0x0;
                  }
                  else {
                    puVar11[1] = iVar7;
                    *puVar11 = puStack_18;
                    puVar11[2] = 0;
                    *(undefined1 *)(puVar11 + 3) = 0;
                  }
                  iVar2 = *(int *)(iVar5 + 0xc);
                  *(undefined4 **)(iVar5 + 8) = puVar11;
                  *(int *)(iVar5 + 0xc) = iVar2 + 1;
                  if (iVar2 == 0) {
                    *(undefined4 **)(iVar5 + 4) = puVar11;
                  }
                  else {
                    *(undefined4 **)(iVar7 + 8) = puVar11;
                  }
                }
              }
            }
          }
        }
      }
      iVar5 = FUN_0064ec20();
      if (iVar5 != 0) {
        iVar5 = piVar1[3];
        piVar9 = piVar1;
        uVar8 = FUN_0064ec20(iVar5,piVar1);
        cVar4 = FUN_0049fd90(uVar8,iVar5,piVar9);
        if (cVar4 != '\0') {
          iVar5 = FUN_0064ec20();
          if (*(char *)(iVar5 + 0x162) != '\0') {
            *(undefined1 *)(param_1 + 0xc4) = 1;
          }
          bVar13 = false;
          cVar4 = (**(code **)(*piVar1 + 0x30))();
          if (((cVar4 != '\0') && (iVar5 = FUN_0064ec20(), *(char *)(iVar5 + 0x160) != '\0')) &&
             ((*(char *)(param_1 + 0xc4) != '\0' ||
              (iVar5 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))(), iVar5 < DAT_00dc1614)))) {
            bVar13 = true;
          }
          cVar4 = (**(code **)(*piVar1 + 0x2c))();
          if ((cVar4 != '\0') && (iVar5 = FUN_0064ec20(), *(char *)(iVar5 + 0x161) != '\0')) {
            bVar13 = true;
          }
          cVar4 = (**(code **)(*piVar1 + 0x28))();
          if (((cVar4 != '\0') && (iVar5 = FUN_0064ec20(), *(char *)(iVar5 + 0x15f) != '\0')) ||
             (bVar13)) {
            iVar5 = FUN_0064ec20();
            if (*(char *)(iVar5 + 0x162) == '\0') {
              puStack_18 = operator_new(0x44);
              uStack_4 = 9;
              if (puStack_18 == (undefined4 *)0x0) {
                puStack_18 = (undefined4 *)0x0;
              }
              else {
                FUN_00433f00();
                *(undefined2 *)((int)puStack_18 + 0x2e) = 0;
                puStack_18[0xc] = 0;
                *(undefined2 *)(puStack_18 + 0xd) = 0;
                *(undefined4 *)((int)puStack_18 + 0x36) = 0;
                *puStack_18 = &PTR_FUN_007ef598;
                puStack_18[2] = &PTR_LAB_007ef594;
                *(int *)((int)puStack_18 + 0x2e) = piVar1[6];
                uStack_4._0_1_ = 10;
                iVar5 = piVar1[7];
                *(undefined1 *)((int)puStack_18 + 0x3a) = 0;
                *(short *)((int)puStack_18 + 0x32) = (short)iVar5;
                pvVar10 = operator_new(0x98);
                uStack_4 = CONCAT31(uStack_4._1_3_,0xb);
                if (pvVar10 == (void *)0x0) {
                  puStack_18[0x10] = 0;
                  puStack_18[0xf] = 0;
                }
                else {
                  uVar8 = FUN_005c79d0(piVar1,0);
                  puStack_18[0xf] = uVar8;
                  puStack_18[0x10] = 0;
                }
              }
              iVar5 = *(int *)(param_1 + 0xca);
              uStack_4 = 0xffffffff;
              iVar7 = *(int *)(iVar5 + 8);
              puVar11 = operator_new(0xe);
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = (undefined4 *)0x0;
              }
              else {
                puVar11[1] = iVar7;
                *puVar11 = puStack_18;
                puVar11[2] = 0;
                *(undefined1 *)(puVar11 + 3) = 0;
              }
              iVar2 = *(int *)(iVar5 + 0xc);
              *(undefined4 **)(iVar5 + 8) = puVar11;
              *(int *)(iVar5 + 0xc) = iVar2 + 1;
              if (iVar2 == 0) {
                *(undefined4 **)(iVar5 + 4) = puVar11;
              }
              else {
                *(undefined4 **)(iVar7 + 8) = puVar11;
              }
            }
            else {
              *(undefined1 *)(param_1 + 0xc4) = 1;
              piVar9 = *(int **)((int)piVar1 + 0x26);
              while (piVar9 != (int *)0x0) {
                piVar3 = (int *)piVar9[2];
                iVar5 = *piVar9;
                uVar8 = FUN_0064ec20();
                cVar4 = FUN_004a4150(iVar5,uVar8);
                piVar9 = piVar3;
                if (cVar4 != '\0') {
                  puVar11 = operator_new(0x44);
                  uStack_4 = 6;
                  if (puVar11 == (undefined4 *)0x0) {
                    puVar11 = (undefined4 *)0x0;
                  }
                  else {
                    FUN_00433f00();
                    *(undefined2 *)((int)puVar11 + 0x2e) = 0;
                    puVar11[0xc] = 0;
                    *(undefined2 *)(puVar11 + 0xd) = 0;
                    *(undefined4 *)((int)puVar11 + 0x36) = 0;
                    *puVar11 = &PTR_FUN_007ef598;
                    puVar11[2] = &PTR_LAB_007ef594;
                    puVar11[0xd] = *(undefined4 *)(iVar5 + 0xc);
                    uStack_4._0_1_ = 7;
                    *(undefined2 *)(puVar11 + 0xe) = *(undefined2 *)(iVar5 + 0x10);
                    *(undefined1 *)((int)puVar11 + 0x3a) = 0;
                    puVar11[0xf] = 0;
                    pvVar10 = operator_new(0x80);
                    uStack_4 = CONCAT31(uStack_4._1_3_,8);
                    if (pvVar10 == (void *)0x0) {
                      puVar11[0x10] = 0;
                    }
                    else {
                      uVar8 = FUN_005dcb20(iVar5,0);
                      puVar11[0x10] = uVar8;
                    }
                  }
                  uStack_4 = 0xffffffff;
                  iVar5 = *(int *)(param_1 + 0xca);
                  iVar7 = *(int *)(iVar5 + 8);
                  puVar12 = operator_new(0xe);
                  if (puVar12 == (undefined4 *)0x0) {
                    puVar12 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar12 = puVar11;
                    puVar12[1] = iVar7;
                    puVar12[2] = 0;
                    *(undefined1 *)(puVar12 + 3) = 0;
                  }
                  iVar2 = *(int *)(iVar5 + 0xc);
                  *(undefined4 **)(iVar5 + 8) = puVar12;
                  *(int *)(iVar5 + 0xc) = iVar2 + 1;
                  if (iVar2 == 0) {
                    *(undefined4 **)(iVar5 + 4) = puVar12;
                  }
                  else {
                    *(undefined4 **)(iVar7 + 8) = puVar12;
                  }
                }
              }
            }
          }
        }
      }
      iVar5 = FUN_0064ec60();
      if (iVar5 != 0) {
        iVar5 = piVar1[3];
        piVar9 = piVar1;
        uVar8 = FUN_0064ec60(iVar5,piVar1);
        cVar4 = FUN_0049fd90(uVar8,iVar5,piVar9);
        if (cVar4 != '\0') {
          iVar5 = FUN_0064ec60();
          bVar13 = *(char *)(iVar5 + 0x162) != '\0';
          *(bool *)(param_1 + 0xc4) = bVar13;
          if (!bVar13) {
            bVar13 = false;
            iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x90) + 0x21eb0) + 4))();
            cVar4 = (**(code **)(*piVar1 + 0x30))();
            if (((cVar4 != '\0') && (iVar7 = FUN_0064ec60(), *(char *)(iVar7 + 0x160) != '\0')) &&
               (iVar7 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))(),
               iVar7 + iVar5 <= DAT_00dc1614)) {
              bVar13 = true;
            }
            cVar4 = (**(code **)(*piVar1 + 0x2c))();
            if ((cVar4 != '\0') && (iVar5 = FUN_0064ec60(), *(char *)(iVar5 + 0x161) != '\0')) {
              bVar13 = true;
            }
            cVar4 = (**(code **)(*piVar1 + 0x28))();
            if (((cVar4 != '\0') && (iVar5 = FUN_0064ec60(), *(char *)(iVar5 + 0x15f) != '\0')) ||
               (bVar13)) {
              puStack_18 = operator_new(0x44);
              uStack_4 = 0xc;
              if (puStack_18 == (undefined4 *)0x0) {
                puStack_18 = (undefined4 *)0x0;
              }
              else {
                FUN_00433f00();
                *(undefined2 *)((int)puStack_18 + 0x2e) = 0;
                puStack_18[0xc] = 0;
                *(undefined2 *)(puStack_18 + 0xd) = 0;
                *(undefined4 *)((int)puStack_18 + 0x36) = 0;
                *puStack_18 = &PTR_FUN_007ef598;
                puStack_18[2] = &PTR_LAB_007ef594;
                *(int *)((int)puStack_18 + 0x2e) = piVar1[6];
                uStack_4._0_1_ = 0xd;
                iVar5 = piVar1[7];
                *(undefined1 *)((int)puStack_18 + 0x3a) = 0;
                *(short *)((int)puStack_18 + 0x32) = (short)iVar5;
                pvVar10 = operator_new(0x98);
                uStack_4 = CONCAT31(uStack_4._1_3_,0xe);
                if (pvVar10 == (void *)0x0) {
                  puStack_18[0x10] = 0;
                  puStack_18[0xf] = 0;
                }
                else {
                  uVar8 = FUN_005c79d0(piVar1,0);
                  puStack_18[0xf] = uVar8;
                  puStack_18[0x10] = 0;
                }
              }
              iVar5 = *(int *)(param_1 + 0xca);
              uStack_4 = 0xffffffff;
              iVar7 = *(int *)(iVar5 + 8);
              puVar11 = operator_new(0xe);
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = (undefined4 *)0x0;
              }
              else {
                puVar11[1] = iVar7;
                *puVar11 = puStack_18;
                puVar11[2] = 0;
                *(undefined1 *)(puVar11 + 3) = 0;
              }
              iVar2 = *(int *)(iVar5 + 0xc);
              *(undefined4 **)(iVar5 + 8) = puVar11;
              *(int *)(iVar5 + 0xc) = iVar2 + 1;
              if (iVar2 == 0) {
                *(undefined4 **)(iVar5 + 4) = puVar11;
              }
              else {
                *(undefined4 **)(iVar7 + 8) = puVar11;
              }
            }
          }
        }
      }
    }
  }
LAB_00620d2a:
  FUN_004353e0();
  ExceptionList = pvStack_c;
  return;
}


