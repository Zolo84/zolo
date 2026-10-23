// FUN_00693ee0 @ 693ee0 size=3323

void __fastcall FUN_00693ee0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  void *pvVar19;
  undefined4 *puVar20;
  int *piVar21;
  int iStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_30;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d54c9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00449520();
  piVar3 = *(int **)(*(int *)((int)param_1 + 10) + 0x4508);
  while (piVar3 != (int *)0x0) {
    piVar9 = (int *)piVar3[2];
    piVar17 = (int *)*piVar3;
    cVar8 = (**(code **)(*piVar17 + 0x28))();
    piVar3 = piVar9;
    if ((cVar8 != '\0') && (piVar9 = (int *)piVar17[0x7d], piVar9 != (int *)0x0)) {
      if (*(char *)((int)piVar9 + 0xf) == '\0') {
        if (*(char *)((int)piVar9 + 0xe) == '\0') {
          (**(code **)(*param_1 + 0x1a8))(piVar17);
        }
        else {
          piVar9 = (int *)(**(code **)(*piVar9 + 0x1a4))();
          cVar8 = (**(code **)(*piVar9 + 0x24))(piVar17);
          if (cVar8 == '\0') {
            (**(code **)(*(int *)piVar17[0x7d] + 0x1a4))();
            FUN_00459df0(piVar17);
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x1a8))(piVar17);
      }
    }
  }
  FUN_006a9d50();
  cVar8 = FUN_006a8720();
  if (cVar8 == '\0') {
    piVar3 = (int *)param_1[0x9e];
    while (piVar3 != (int *)0x0) {
      piVar9 = (int *)piVar3[2];
      piVar17 = (int *)*piVar3;
      if (*(char *)((int)piVar17 + 0x9e) != '\0') {
        ExceptionList = pvStack_c;
        return;
      }
      iVar10 = (**(code **)(*piVar17 + 4))();
      piVar3 = piVar9;
      if ((iVar10 == 0) || (0x21c0 < *(int *)((int)piVar17 + 0x126))) {
        uVar18 = (**(code **)(*(int *)((int)piVar17 + 0x12) + 0x1a4))();
        FUN_006a9ef0(param_1,uVar18);
        (**(code **)(param_1[0x9d] + 0x18))(piVar17);
        (**(code **)(*(int *)((int)piVar17 + 0x12) + 0xcc))();
      }
      else {
        piVar9 = (int *)piVar17[1];
        piStack_1c = (int *)0x0;
        piStack_18 = (int *)0x0;
        iStack_14 = 0;
        iStack_4 = 0;
        piVar21 = piStack_1c;
        piVar4 = piStack_18;
        iVar10 = iStack_14;
joined_r0x0069400f:
        do {
          if (piVar9 == (int *)0x0) goto LAB_00694337;
          puVar15 = (undefined4 *)*piVar9;
          piVar9 = (int *)piVar9[2];
          iVar11 = FUN_004e9370(puVar15[1]);
          piVar14 = *(int **)(*(int *)((int)param_1 + 10) + 0xe880);
          iStack_38 = 0;
          if (piVar14 != (int *)0x0) {
            do {
              cVar8 = FUN_004ccb10(*(undefined4 *)(iVar11 + 0x482));
              if (cVar8 != '\0') {
                iStack_38 = *piVar14;
              }
              piVar14 = (int *)piVar14[2];
            } while (piVar14 != (int *)0x0);
            if (iStack_38 != 0) {
              iVar16 = FUN_004ccb2c(*(undefined4 *)((int)param_1 + 10));
              iVar12 = FUN_006a9d50();
              if ((iVar16 != iVar12) && (*(char *)((int)piVar17 + 0x9e) == '\0')) {
                uVar18 = (**(code **)(*(int *)((int)piVar17 + 0x12) + 0x1a4))();
                FUN_006a9ef0(param_1,uVar18);
                (**(code **)(param_1[0x9d] + 0x18))(piVar17);
                (**(code **)(*(int *)((int)piVar17 + 0x12) + 0xcc))();
                goto LAB_00694337;
              }
              uVar18 = FUN_0068a080();
              cVar8 = FUN_004ccb10(uVar18);
              if (cVar8 == '\0') {
                iVar16 = 0;
                piVar14 = piVar21;
                if (piVar21 == (int *)0x0) {
LAB_00694125:
                  uVar18 = (**(code **)(*(int *)(*(int *)((int)param_1 + 10) + 0xe) + 0xc))();
                  FUN_00458570(s__s_creates_a_new_front_from_spli_00868000,uVar18);
                  pvVar19 = operator_new(0x13c);
                  iStack_4._0_1_ = 1;
                  if (pvVar19 == (void *)0x0) {
                    iVar16 = 0;
                  }
                  else {
                    iVar16 = FUN_00680d50(param_1);
                  }
                  iStack_4 = (uint)iStack_4._1_3_ << 8;
                  (**(code **)(*(int *)(iVar16 + 0x12) + 0xb4))(param_1);
                  (**(code **)(*(int *)(iVar16 + 0x12) + 0xc4))();
                  *(undefined4 *)(iVar16 + 0x120) = *(undefined4 *)(iVar11 + 0x482);
                  iVar11 = param_1[0x9f];
                  piVar14 = operator_new(0xe);
                  if (piVar14 == (int *)0x0) {
                    piVar14 = (int *)0x0;
                  }
                  else {
                    *piVar14 = iVar16;
                    piVar14[1] = iVar11;
                    piVar14[2] = 0;
                    *(undefined1 *)(piVar14 + 3) = 0;
                  }
                  iVar12 = param_1[0xa0];
                  param_1[0x9f] = (int)piVar14;
                  param_1[0xa0] = iVar12 + 1;
                  if (iVar12 == 0) {
                    param_1[0x9e] = (int)piVar14;
                  }
                  else {
                    *(int **)(iVar11 + 8) = piVar14;
                  }
                  piStack_18 = operator_new(0xe);
                  if (piStack_18 == (int *)0x0) {
                    piStack_18 = (int *)0x0;
                  }
                  else {
                    *piStack_18 = iVar16;
                    piStack_18[1] = (int)piVar4;
                    piStack_18[2] = 0;
                    *(undefined1 *)(piStack_18 + 3) = 0;
                  }
                  iStack_14 = iVar10 + 1;
                  piStack_1c = piStack_18;
                  if (iVar10 != 0) {
                    piVar4[2] = (int)piStack_18;
                    piStack_1c = piVar21;
                  }
                }
                else {
                  do {
                    piVar1 = (int *)piVar14[2];
                    iVar12 = *piVar14;
                    iVar2 = *(int *)(iVar11 + 0x482);
                    iVar13 = FUN_0068a080();
                    if (iVar13 == iVar2) {
                      iVar16 = iVar12;
                    }
                    piVar14 = piVar1;
                  } while (piVar1 != (int *)0x0);
                  piStack_1c = piVar21;
                  piStack_18 = piVar4;
                  iStack_14 = iVar10;
                  if (iVar16 == 0) goto LAB_00694125;
                }
                iVar10 = *(int *)(iVar16 + 8);
                piVar21 = operator_new(0xe);
                if (piVar21 == (int *)0x0) {
                  piVar21 = (int *)0x0;
                }
                else {
                  piVar21[1] = iVar10;
                  *piVar21 = (int)puVar15;
                  piVar21[2] = 0;
                  *(undefined1 *)(piVar21 + 3) = 0;
                }
                *(int **)(iVar16 + 8) = piVar21;
                iVar11 = *(int *)(iVar16 + 0xc);
                *(int *)(iVar16 + 0xc) = iVar11 + 1;
                if (iVar11 == 0) {
                  *(undefined4 *)(iVar16 + 4) = *(undefined4 *)(iVar16 + 8);
                }
                else {
                  *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar16 + 8);
                }
                (**(code **)(*piVar17 + 0x18))(puVar15);
                piVar17[0x12a] = iVar16;
                iVar10 = (**(code **)(*(int *)((int)piVar17 + 0x12) + 0x1a4))();
                piVar14 = *(int **)(iVar10 + 4);
                while (piVar21 = piStack_1c, piVar4 = piStack_18, iVar10 = iStack_14,
                      piVar14 != (int *)0x0) {
                  piVar21 = (int *)piVar14[2];
                  piVar4 = (int *)*piVar14;
                  piVar14 = piVar21;
                  if (piVar4[3] == puVar15[1]) {
                    iVar10 = *(int *)(iVar16 + 0x12);
                    uVar18 = (**(code **)(*piVar4 + 0x10))();
                    (**(code **)(iVar10 + 0x1a8))(uVar18);
                  }
                }
              }
              goto joined_r0x0069400f;
            }
          }
          *(undefined4 *)(iVar11 + 0x4a8) = 0;
          (**(code **)(*piVar17 + 0x18))(puVar15);
          if (puVar15 != (undefined4 *)0x0) {
            (**(code **)*puVar15)(1);
          }
          iVar11 = (**(code **)(*piVar17 + 4))();
        } while (iVar11 != 0);
        uVar18 = (**(code **)(*(int *)((int)piVar17 + 0x12) + 0x1a4))();
        FUN_006a9ef0(param_1,uVar18);
        (**(code **)(param_1[0x9d] + 0x18))(piVar17);
        (**(code **)(*(int *)((int)piVar17 + 0x12) + 0xcc))();
LAB_00694337:
        iStack_4 = 0xffffffff;
        FUN_0069abb0();
      }
    }
    FUN_006a9d50();
    FUN_006a9d50();
    puVar15 = operator_new(0x12);
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      *(undefined1 *)(puVar15 + 4) = 0;
      *puVar15 = &PTR_FUN_007e6eac;
    }
    iVar10 = *(int *)(*(int *)((int)param_1 + 10) + 0xe880);
    while (iVar10 != 0) {
      iVar10 = *(int *)(iVar10 + 8);
      iVar11 = FUN_004ccb2c(*(undefined4 *)((int)param_1 + 10));
      iVar16 = FUN_006a9d50();
      if (iVar11 == iVar16) {
        FUN_004cca88(puVar15);
        piVar3 = (int *)puVar15[1];
joined_r0x00694412:
        if (piVar3 != (int *)0x0) {
          piVar9 = (int *)*piVar3;
          piVar3 = (int *)piVar3[2];
          iVar11 = piVar9[0x12a];
          if (iVar11 == 0) goto LAB_0069447d;
          if (*(char *)(iVar11 + 0x21) != '\0') goto LAB_00694473;
          piVar17 = (int *)(**(code **)(*(int *)(iVar11 + 0x12) + 0xe0))();
          if (piVar17 == param_1) goto LAB_0069447d;
          if (*(char *)(piVar9[0x12a] + 0x9e) == '\0') {
            iVar11 = *(int *)piVar9[0x12a];
            uVar18 = FUN_006813c0(*(undefined4 *)((int)piVar9 + 0x12));
            (**(code **)(iVar11 + 0x18))(uVar18);
LAB_00694473:
            piVar9[0x12a] = 0;
LAB_0069447d:
            iVar11 = 0;
            iStack_38 = 0;
            iStack_48 = 0;
            bVar5 = false;
            bVar6 = false;
            bVar7 = true;
            iStack_40 = 0;
            if (0 < piVar9[0xa4]) {
              iStack_3c = 0;
              do {
                iVar12 = *(int *)(piVar9[0xa6] + iStack_3c);
                iVar16 = DAT_00ab27b4 + iVar12 * 0x4b2;
                iVar12 = *(int *)(DAT_00ab27b4 + 0x254 + iVar12 * 0x4b2);
                if (((iVar12 != 8) && (iVar12 != 9)) &&
                   (*(int *)(piVar9[0xa6] + iStack_3c + 4) != 4)) {
                  iVar12 = *(int *)(iVar16 + 0x4a8);
                  if (((iVar12 != 0) && (*(char *)(iVar12 + 0x20) != '\0')) &&
                     (piVar17 = (int *)(**(code **)(*(int *)(iVar12 + 0x12) + 0xe0))(),
                     piVar17 == param_1)) {
                    if (iVar11 == 0) {
                      iVar11 = *(int *)(iVar16 + 0x4a8);
                    }
                    else if ((iStack_38 == 0) && (*(int *)(iVar16 + 0x4a8) != iVar11)) {
                      bVar6 = true;
                      iStack_38 = *(int *)(iVar16 + 0x4a8);
                    }
                    else if ((iStack_48 == 0) &&
                            ((iVar12 = *(int *)(iVar16 + 0x4a8), iVar12 != iVar11 &&
                             (iVar12 != iStack_38)))) {
                      iStack_48 = iVar12;
                    }
                  }
                  iVar12 = *(int *)(iVar16 + 0x3d8);
                  if ((((iVar12 != 0) && (iVar12 != *(int *)((int)param_1 + 10))) &&
                      (cVar8 = FUN_00586230(*(undefined4 *)(iVar12 + 6)), cVar8 == '\0')) &&
                     (cVar8 = FUN_0044b280(*(undefined4 *)(*(int *)(iVar16 + 0x3d8) + 6)),
                     cVar8 != '\0')) {
                    cVar8 = FUN_004e9500(*(undefined4 *)((int)param_1 + 10));
                    if ((cVar8 == '\0') &&
                       (cVar8 = FUN_004e9500(*(undefined4 *)((int)param_1 + 10)), cVar8 == '\0')) {
                      cVar8 = FUN_004e9500(*(undefined4 *)(iVar16 + 0x3d8));
                      if (((cVar8 == '\0') ||
                          (iVar16 = (**(code **)(**(int **)(iVar16 + 0x1c2) + 4))(), 0 < iVar16)) &&
                         (bVar7 = false, piVar9[0x12a] == 0)) {
                        bVar5 = true;
                      }
                    }
                    else {
                      iVar16 = FUN_006a9d50();
                      if (iVar16 == 7) {
                        FUN_004e9500(*(undefined4 *)((int)param_1 + 10));
                      }
                    }
                  }
                }
                iStack_40 = iStack_40 + 1;
                iStack_3c = iStack_3c + 0xc;
              } while (iStack_40 < piVar9[0xa4]);
              if (bVar5) {
                iStack_40 = iVar11;
                if (iVar11 == 0) {
                  uVar18 = (**(code **)(*(int *)(*(int *)((int)param_1 + 10) + 0xe) + 0xc))();
                  FUN_00458570(s__s_creates_a_new_front__00867fe8,uVar18);
                  pvVar19 = operator_new(0x13c);
                  iStack_4 = 2;
                  if (pvVar19 == (void *)0x0) {
                    iStack_40 = 0;
                  }
                  else {
                    iStack_40 = FUN_00680d50(param_1);
                  }
                  iStack_4 = 0xffffffff;
                  (**(code **)(*(int *)(iStack_40 + 0x12) + 0xb4))(param_1);
                  (**(code **)(*(int *)(iStack_40 + 0x12) + 0xc4))();
                  *(undefined4 *)(iStack_40 + 0x120) = *(undefined4 *)((int)piVar9 + 0x482);
                  iVar11 = param_1[0x9f];
                  piVar17 = operator_new(0xe);
                  if (piVar17 == (int *)0x0) {
                    piVar17 = (int *)0x0;
                  }
                  else {
                    piVar17[1] = iVar11;
                    *piVar17 = iStack_40;
                    piVar17[2] = 0;
                    *(undefined1 *)(piVar17 + 3) = 0;
                  }
                  iVar16 = param_1[0xa0];
                  param_1[0x9f] = (int)piVar17;
                  param_1[0xa0] = iVar16 + 1;
                  if (iVar16 == 0) {
                    param_1[0x9e] = (int)piVar17;
                  }
                  else {
                    *(int **)(iVar11 + 8) = piVar17;
                  }
                }
                pvVar19 = operator_new(0x8e);
                iStack_4 = 3;
                if (pvVar19 == (void *)0x0) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = FUN_006af940();
                }
                *(undefined4 *)(iVar11 + 4) = *(undefined4 *)((int)piVar9 + 0x12);
                iVar16 = *(int *)(iStack_40 + 8);
                iStack_4 = 0xffffffff;
                piVar17 = operator_new(0xe);
                if (piVar17 == (int *)0x0) {
                  piVar17 = (int *)0x0;
                }
                else {
                  *piVar17 = iVar11;
                  piVar17[1] = iVar16;
                  piVar17[2] = 0;
                  *(undefined1 *)(piVar17 + 3) = 0;
                }
                *(int **)(iStack_40 + 8) = piVar17;
                iVar11 = *(int *)(iStack_40 + 0xc);
                *(int *)(iStack_40 + 0xc) = iVar11 + 1;
                if (iVar11 == 0) {
                  *(undefined4 *)(iStack_40 + 4) = *(undefined4 *)(iStack_40 + 8);
                }
                else {
                  *(undefined4 *)(iVar16 + 8) = *(undefined4 *)(iStack_40 + 8);
                }
                piVar9[0x12a] = iStack_40;
                iVar11 = *(int *)((int)param_1 + 10);
                uVar18 = (**(code **)(*piVar9 + 0xc))();
                uVar18 = (**(code **)(*(int *)(iVar11 + 0xe) + 0xc))(uVar18);
                FUN_00458570(s__s_adds_province__s_to_a_front__00867fc8,uVar18);
                iVar11 = FUN_004ccb2c(*(undefined4 *)((int)param_1 + 10));
                iVar16 = FUN_006a9d50();
                if (iVar11 == iVar16) {
                  piVar17 = *(int **)(*(int *)((int)piVar9 + 0x1c2) + 4);
                  while (piVar17 != (int *)0x0) {
                    piVar21 = (int *)*piVar17;
                    piVar17 = (int *)piVar17[2];
                    cVar8 = (**(code **)(*piVar21 + 0x28))();
                    if (((((cVar8 != '\0') && (cVar8 = FUN_00525660(), cVar8 == '\0')) &&
                         (cVar8 = FUN_00525720(), cVar8 == '\0')) &&
                        (piVar21[0x92] == *(int *)((int)param_1 + 10))) &&
                       ((((int *)piVar21[0x7d] == (int *)0x0 ||
                         (cVar8 = (**(code **)(*(int *)piVar21[0x7d] + 0xfc))(), cVar8 == '\0')) &&
                        (cVar8 = FUN_005256c0(), cVar8 == '\0')))) {
                      FUN_006a9d50();
                      iVar11 = *(int *)(iStack_40 + 0x12);
                      uVar18 = (**(code **)(*piVar21 + 0x10))();
                      (**(code **)(iVar11 + 0x1a8))(uVar18);
                      iVar11 = *(int *)((int)param_1 + 10);
                      uVar18 = (**(code **)(*piVar21 + 0xc))();
                      uVar18 = (**(code **)(*(int *)(iVar11 + 0xe) + 0xc))(uVar18);
                      FUN_00458570(s__s_assigns_unit__s_to_a_front__00867fa8,uVar18);
                    }
                  }
                  iStack_30 = 0;
                  if (0 < piVar9[0xa4]) {
                    iStack_3c = 0;
                    do {
                      if (*(int *)(piVar9[0xa6] + 4 + iStack_3c) != 4) {
                        iVar11 = FUN_004e9370(*(undefined4 *)(piVar9[0xa6] + iStack_3c));
                        piVar17 = *(int **)(*(int *)(iVar11 + 0x1c2) + 4);
                        while (piVar17 != (int *)0x0) {
                          piVar21 = (int *)*piVar17;
                          piVar17 = (int *)piVar17[2];
                          cVar8 = (**(code **)(*piVar21 + 0x28))();
                          if (((cVar8 != '\0') && (cVar8 = FUN_00525660(), cVar8 == '\0')) &&
                             (((cVar8 = FUN_00525720(), cVar8 == '\0' &&
                               (piVar21[0x92] == *(int *)((int)param_1 + 10))) &&
                              ((((int *)piVar21[0x7d] == (int *)0x0 ||
                                (cVar8 = (**(code **)(*(int *)piVar21[0x7d] + 0xfc))(),
                                cVar8 == '\0')) && (cVar8 = FUN_005256c0(), cVar8 == '\0')))))) {
                            FUN_006a9d50();
                            iVar11 = *(int *)(iStack_40 + 0x12);
                            uVar18 = (**(code **)(*piVar21 + 0x10))();
                            (**(code **)(iVar11 + 0x1a8))(uVar18);
                            iVar11 = *(int *)((int)param_1 + 10);
                            uVar18 = (**(code **)(*piVar21 + 0xc))();
                            uVar18 = (**(code **)(*(int *)(iVar11 + 0xe) + 0xc))(uVar18);
                            FUN_00458570(s__s_assigns_unit__s_to_a_front__00867fa8,uVar18);
                          }
                        }
                      }
                      iStack_30 = iStack_30 + 1;
                      iStack_3c = iStack_3c + 0xc;
                    } while (iStack_30 < piVar9[0xa4]);
                  }
                }
                if (bVar6) {
                  (**(code **)(*(int *)(iStack_38 + 0x12) + 0x1a4))();
                  iVar11 = FUN_00527b40();
                  (**(code **)(*(int *)(iStack_40 + 0x12) + 0x1a4))();
                  iVar16 = FUN_00527b40();
                  piVar9 = param_1 + 0x9d;
                  if (iVar11 < iVar16) {
                    (**(code **)(*piVar9 + 0x18))(iStack_38);
                    FUN_0068a2b0(iStack_38);
                  }
                  else {
                    (**(code **)(*piVar9 + 0x18))(iStack_40);
                    FUN_0068a2b0(iStack_40);
                    iStack_40 = iStack_38;
                  }
                  if (iStack_48 != 0) {
                    (**(code **)(*(int *)(iStack_48 + 0x12) + 0x1a4))();
                    iVar11 = FUN_00527b40();
                    (**(code **)(*(int *)(iStack_40 + 0x12) + 0x1a4))();
                    iVar16 = FUN_00527b40();
                    if (iVar11 < iVar16) {
                      (**(code **)(*piVar9 + 0x18))(iStack_48);
                      FUN_0068a2b0(iStack_48);
                    }
                    else {
                      (**(code **)(*piVar9 + 0x18))(iStack_40);
                      FUN_0068a2b0(iStack_40);
                    }
                  }
                }
                goto joined_r0x00694412;
              }
              if (!bVar7) goto joined_r0x00694412;
            }
            piVar17 = (int *)param_1[0x9e];
            while (piVar17 != (int *)0x0) {
              piVar21 = (int *)piVar17[2];
              piVar4 = (int *)*piVar17;
              puVar20 = (undefined4 *)FUN_006813c0(*(undefined4 *)((int)piVar9 + 0x12));
              piVar17 = piVar21;
              if (puVar20 != (undefined4 *)0x0) {
                (**(code **)(*piVar4 + 0x18))(puVar20);
                piVar9[0x12a] = 0;
                iVar11 = *(int *)((int)param_1 + 10);
                uVar18 = (**(code **)(*piVar9 + 0xc))();
                FUN_00458570(s__s__Province__s_is_no_longer_in_t_00867f7c,iVar11 + 0x1b,uVar18);
                (**(code **)*puVar20)(1);
                iVar11 = (**(code **)(*piVar4 + 4))();
                if (iVar11 == 0) {
                  (**(code **)(param_1[0x9d] + 0x18))(piVar4);
                  FUN_00458570(s_Front_is_now_of_0_size_and_is_de_00867f50);
                  piVar21 = (int *)(**(code **)(*(int *)((int)piVar4 + 0x12) + 0x1a4))();
                  uVar18 = (**(code **)(*piVar21 + 4))();
                  FUN_00458570(s__d_armies_are_returned_to_the_Ki_00867f28,uVar18);
                  uVar18 = (**(code **)(*(int *)((int)piVar4 + 0x12) + 0x1a4))();
                  FUN_006a9ef0(param_1,uVar18);
                  (**(code **)(*(int *)((int)piVar4 + 0x12) + 0xcc))();
                }
              }
            }
          }
          goto joined_r0x00694412;
        }
      }
    }
    if (puVar15 != (undefined4 *)0x0) {
      (**(code **)*puVar15)(1);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


