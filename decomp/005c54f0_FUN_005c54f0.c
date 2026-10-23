// FUN_005c54f0 @ 5c54f0 size=3286

undefined4 __fastcall FUN_005c54f0(int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iStack_20;
  int *piStack_1c;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cc9ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar5 = (int *)FUN_005c5030();
  if (piVar5 == (int *)0x0) {
    ExceptionList = local_c;
    return 3;
  }
  iVar9 = *(int *)(param_1 + 0x8c);
  piVar11 = *(int **)(iVar9 + 4);
  while (piVar11 != (int *)0x0) {
    piVar1 = (int *)piVar11[2];
    if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar11)(1);
    }
    FUN_00796cd8(piVar11);
    piVar11 = piVar1;
  }
  *(undefined4 *)(iVar9 + 4) = 0;
  *(undefined4 *)(iVar9 + 8) = 0;
  *(undefined4 *)(iVar9 + 0xc) = 0;
  switch(*(undefined4 *)(param_1 + 0x90)) {
  case 0:
    iVar9 = piVar5[3];
    (**(code **)(*piVar5 + 0x18))();
    iVar10 = FUN_004f0a80();
    if (iVar10 != 0) {
      (**(code **)(*piVar5 + 0x18))();
      iVar9 = FUN_004f0a80();
      iVar9 = *(int *)(iVar9 + 0xc);
    }
    uStack_14 = uStack_14 & 0xff000000;
    piStack_1c = (int *)((uint)piStack_1c & 0xff000000);
    FUN_0050b600(piVar5,0,iVar9,0x3f800000,1,1,piStack_1c,0,uStack_14,0,1,0xffffffff,0,1,0,
                 0xbf800000,1);
    ExceptionList = local_c;
    return 1;
  default:
    goto switchD_005c5576_caseD_1;
  case 2:
    iVar9 = 1;
    bVar2 = false;
    if (DAT_00877690 < 2) goto switchD_005c5576_caseD_1;
    puVar12 = &DAT_00a61524;
    do {
      iVar10 = FUN_004e9370(iVar9);
      if (*(char *)(iVar10 + 0x180) == '\0') {
        cVar4 = FUN_004a3020(iVar10,0);
        if ((cVar4 == '\0') || (iVar8 = FUN_004ece80(), iVar8 == 0)) {
          *puVar12 = 0;
        }
        else {
          pvVar6 = operator_new(0x46);
          uStack_4 = 1;
          if (pvVar6 == (void *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_005c0ee0(*(undefined4 *)(iVar10 + 0x12));
          }
          uStack_4 = 0xffffffff;
          FUN_005c46c0(uVar7);
          *puVar12 = 1;
          bVar2 = true;
        }
      }
      iVar9 = iVar9 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar9 < DAT_00877690);
    if (!bVar2) goto switchD_005c5576_caseD_1;
    uVar13 = 0x10;
    uVar7 = *(undefined4 *)(DAT_00d0ca90 + 6);
    break;
  case 3:
    cVar4 = FUN_005239c0();
    if (cVar4 == '\0') goto switchD_005c5576_caseD_1;
    iVar9 = 1;
    bVar2 = false;
    if (DAT_00877690 < 2) goto switchD_005c5576_caseD_1;
    puVar12 = &DAT_00a61524;
    do {
      iVar10 = FUN_004e9370(iVar9);
      if (*(char *)(iVar10 + 0x180) == '\0') {
        iVar8 = FUN_004ece80();
        if ((iVar8 == 0) ||
           (cVar4 = FUN_00512b20(piVar5,3,*(undefined4 *)(iVar10 + 0x12)), cVar4 == '\0')) {
          *puVar12 = 0;
        }
        else {
          pvVar6 = operator_new(0x46);
          uStack_4 = 0;
          if (pvVar6 == (void *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_005c0ee0(*(undefined4 *)(iVar10 + 0x12));
          }
          uStack_4 = 0xffffffff;
          FUN_005c46c0(uVar7);
          *puVar12 = 1;
          bVar2 = true;
        }
      }
      iVar9 = iVar9 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar9 < DAT_00877690);
    if (!bVar2) goto switchD_005c5576_caseD_1;
    uVar13 = 0x10;
    uVar7 = *(undefined4 *)(DAT_00d0ca90 + 6);
    break;
  case 9:
    bVar2 = false;
    iStack_20 = 1;
    piStack_1c = &DAT_008ea37e;
    do {
      if (piStack_1c != (int *)&DAT_008ec346) {
        bVar3 = false;
        piVar11 = (int *)*piStack_1c;
        if (piVar11 != (int *)0x0) {
          do {
            iVar9 = *piVar11;
            if (*(char *)(iVar9 + 0x180) == '\0') {
              iVar10 = iVar9;
              (**(code **)(*piVar5 + 0x18))(iVar9);
              cVar4 = FUN_004f0300(iVar10);
              if ((cVar4 != '\0') &&
                 (cVar4 = FUN_00512b20(piVar5,*(undefined4 *)(param_1 + 0x90),
                                       *(undefined4 *)(iVar9 + 0x12)), cVar4 != '\0')) {
                bVar3 = true;
              }
            }
            piVar11 = (int *)piVar11[2];
          } while (piVar11 != (int *)0x0);
          if (bVar3) {
            pvVar6 = operator_new(0x46);
            uStack_4 = 7;
            if (pvVar6 == (void *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_005c0f60(iStack_20);
            }
            uStack_4 = 0xffffffff;
            iVar9 = *(int *)(param_1 + 0x8c);
            iVar10 = *(int *)(iVar9 + 8);
            puVar12 = operator_new(0xe);
            if (puVar12 == (undefined4 *)0x0) {
              puVar12 = (undefined4 *)0x0;
            }
            else {
              *puVar12 = uVar7;
              puVar12[1] = iVar10;
              puVar12[2] = 0;
              *(undefined1 *)(puVar12 + 3) = 0;
            }
            iVar8 = *(int *)(iVar9 + 0xc);
            *(undefined4 **)(iVar9 + 8) = puVar12;
            *(int *)(iVar9 + 0xc) = iVar8 + 1;
            if (iVar8 == 0) {
              *(undefined4 **)(iVar9 + 4) = puVar12;
            }
            else {
              *(undefined4 **)(iVar10 + 8) = puVar12;
            }
            bVar2 = true;
            *(undefined1 *)((int)&DAT_00a6b160 + iStack_20) = 1;
          }
        }
      }
      piStack_1c = (int *)((int)piStack_1c + 0x12);
      iStack_20 = iStack_20 + 1;
    } while ((int)piStack_1c < 0x8ece08);
    if (!bVar2) goto switchD_005c5576_caseD_1;
    uVar13 = 0xd;
    uVar7 = *(undefined4 *)(DAT_00d0ca90 + 6);
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x13:
    piStack_1c = &DAT_008ea37e;
    bVar2 = false;
    iStack_20 = 1;
    do {
      piVar11 = (int *)*piStack_1c;
      bVar3 = false;
      if (piVar11 != (int *)0x0) {
        do {
          iVar9 = *piVar11;
          if (*(char *)(iVar9 + 0x180) == '\0') {
            iVar10 = iVar9;
            (**(code **)(*piVar5 + 0x18))(iVar9);
            cVar4 = FUN_004f0300(iVar10);
            if ((cVar4 != '\0') &&
               (cVar4 = FUN_00512b20(piVar5,*(undefined4 *)(param_1 + 0x90),
                                     *(undefined4 *)(iVar9 + 0x12)), cVar4 != '\0')) {
              bVar3 = true;
            }
          }
          piVar11 = (int *)piVar11[2];
        } while (piVar11 != (int *)0x0);
        if (bVar3) {
          pvVar6 = operator_new(0x46);
          uStack_4 = 8;
          if (pvVar6 == (void *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_005c0f60(iStack_20);
          }
          uStack_4 = 0xffffffff;
          iVar9 = *(int *)(param_1 + 0x8c);
          iVar10 = *(int *)(iVar9 + 8);
          puVar12 = operator_new(0xe);
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            *puVar12 = uVar7;
            puVar12[1] = iVar10;
            puVar12[2] = 0;
            *(undefined1 *)(puVar12 + 3) = 0;
          }
          iVar8 = *(int *)(iVar9 + 0xc);
          *(undefined4 **)(iVar9 + 8) = puVar12;
          *(int *)(iVar9 + 0xc) = iVar8 + 1;
          if (iVar8 == 0) {
            *(undefined4 **)(iVar9 + 4) = puVar12;
          }
          else {
            *(undefined4 **)(iVar10 + 8) = puVar12;
          }
          bVar2 = true;
          *(undefined1 *)((int)&DAT_00a6b160 + iStack_20) = 1;
        }
      }
      piStack_1c = (int *)((int)piStack_1c + 0x12);
      iStack_20 = iStack_20 + 1;
    } while ((int)piStack_1c < 0x8ec346);
    if (!bVar2) goto switchD_005c5576_caseD_1;
    uVar13 = 0xd;
    uVar7 = *(undefined4 *)(DAT_00d0ca90 + 6);
    break;
  case 0xe:
    iVar9 = 1;
    bVar2 = false;
    if (DAT_00877690 < 2) goto switchD_005c5576_caseD_1;
    puVar12 = &DAT_00a61524;
    do {
      iVar10 = FUN_004e9370(iVar9);
      if (*(char *)(iVar10 + 0x180) == '\0') {
        iVar8 = FUN_004ece80();
        if (iVar8 != 0) {
          iVar8 = iVar10;
          (**(code **)(*piVar5 + 0x18))(iVar10);
          cVar4 = FUN_004f0300(iVar8);
          if (((cVar4 != '\0') && (*(int *)(iVar10 + 0x3d8) != 0)) &&
             (cVar4 = FUN_0044b280(*(undefined4 *)(piVar5[0x92] + 6)), cVar4 != '\0')) {
            pvVar6 = operator_new(0x46);
            uStack_4 = 5;
            if (pvVar6 == (void *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_005c0ee0(*(undefined4 *)(iVar10 + 0x12));
            }
            uStack_4 = 0xffffffff;
            FUN_005c46c0(uVar7);
            *puVar12 = 1;
            bVar2 = true;
            goto LAB_005c5aee;
          }
        }
        *puVar12 = 0;
      }
LAB_005c5aee:
      iVar9 = iVar9 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar9 < DAT_00877690);
    goto LAB_005c5b03;
  case 0x10:
  case 0x12:
    piStack_1c = &DAT_008ec358;
    bVar2 = false;
    iStack_20 = 0x1c6;
    do {
      piVar11 = (int *)*piStack_1c;
      bVar3 = false;
      if (piVar11 != (int *)0x0) {
        do {
          iVar9 = *piVar11;
          if (*(char *)(iVar9 + 0x180) == '\0') {
            (**(code **)(*piVar5 + 0x18))(iVar9);
            cVar4 = FUN_004f0300(iVar9);
            if (cVar4 != '\0') {
              bVar3 = true;
            }
          }
          piVar11 = (int *)piVar11[2];
        } while (piVar11 != (int *)0x0);
        if (bVar3) {
          pvVar6 = operator_new(0x46);
          uStack_4 = 6;
          if (pvVar6 == (void *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_005c0f60(iStack_20);
          }
          uStack_4 = 0xffffffff;
          iVar9 = *(int *)(param_1 + 0x8c);
          iVar10 = *(int *)(iVar9 + 8);
          puVar12 = operator_new(0xe);
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            *puVar12 = uVar7;
            puVar12[1] = iVar10;
            puVar12[2] = 0;
            *(undefined1 *)(puVar12 + 3) = 0;
          }
          iVar8 = *(int *)(iVar9 + 0xc);
          *(undefined4 **)(iVar9 + 8) = puVar12;
          *(int *)(iVar9 + 0xc) = iVar8 + 1;
          if (iVar8 == 0) {
            *(undefined4 **)(iVar9 + 4) = puVar12;
          }
          else {
            *(undefined4 **)(iVar10 + 8) = puVar12;
          }
          bVar2 = true;
          *(undefined1 *)((int)&DAT_00a6b160 + iStack_20) = 1;
        }
      }
      piStack_1c = (int *)((int)piStack_1c + 0x12);
      iStack_20 = iStack_20 + 1;
    } while ((int)piStack_1c < 0x8ece08);
    if (!bVar2) goto switchD_005c5576_caseD_1;
    uVar13 = 0xd;
    uVar7 = *(undefined4 *)(DAT_00d0ca90 + 6);
    break;
  case 0x11:
    iVar9 = 1;
    bVar2 = false;
    if (DAT_00877690 < 2) goto switchD_005c5576_caseD_1;
    puVar12 = &DAT_00a61524;
    do {
      iVar10 = FUN_004e9370(iVar9);
      if (*(char *)(iVar10 + 0x180) == '\0') {
        if (*(int *)(iVar10 + 0x46a) != 0) {
          iVar8 = iVar10;
          (**(code **)(*piVar5 + 0x18))(iVar10);
          cVar4 = FUN_004f0300(iVar8);
          if (((cVar4 != '\0') && (*(int *)(iVar10 + 0x3d8) != 0)) &&
             (cVar4 = FUN_0044b280(*(undefined4 *)(piVar5[0x92] + 6)), cVar4 != '\0')) {
            pvVar6 = operator_new(0x46);
            uStack_4 = 3;
            if (pvVar6 == (void *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_005c0ee0(*(undefined4 *)(iVar10 + 0x12));
            }
            uStack_4 = 0xffffffff;
            FUN_005c46c0(uVar7);
            *puVar12 = 1;
            bVar2 = true;
            goto LAB_005c5937;
          }
        }
        *puVar12 = 0;
      }
LAB_005c5937:
      iVar9 = iVar9 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar9 < DAT_00877690);
    goto LAB_005c5b03;
  case 0x14:
    iVar9 = 1;
    bVar2 = false;
    if (DAT_00877690 < 2) goto switchD_005c5576_caseD_1;
    puVar12 = &DAT_00a61524;
    do {
      iVar10 = FUN_004e9370(iVar9);
      if (*(char *)(iVar10 + 0x180) == '\0') {
        iVar8 = iVar10;
        (**(code **)(*piVar5 + 0x18))(iVar10);
        cVar4 = FUN_004f0300(iVar8);
        if ((cVar4 == '\0') ||
           (cVar4 = FUN_00512b20(piVar5,0x14,*(undefined4 *)(iVar10 + 0x12)), cVar4 == '\0')) {
          *puVar12 = 0;
        }
        else {
          pvVar6 = operator_new(0x46);
          uStack_4 = 2;
          if (pvVar6 == (void *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_005c0ee0(*(undefined4 *)(iVar10 + 0x12));
          }
          uStack_4 = 0xffffffff;
          FUN_005c46c0(uVar7);
          *puVar12 = 1;
          bVar2 = true;
        }
      }
      iVar9 = iVar9 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar9 < DAT_00877690);
    if (!bVar2) goto switchD_005c5576_caseD_1;
    goto LAB_005c6135;
  case 0x15:
    iVar9 = 1;
    bVar2 = false;
    if (DAT_00877690 < 2) goto switchD_005c5576_caseD_1;
    puVar12 = &DAT_00a61524;
    do {
      iVar10 = FUN_004e9370(iVar9);
      if (*(char *)(iVar10 + 0x180) == '\0') {
        if ((*(int *)(iVar10 + 0x254) != 8) && (*(int *)(iVar10 + 0x254) != 9)) {
          iVar8 = iVar10;
          (**(code **)(*piVar5 + 0x18))(iVar10);
          cVar4 = FUN_004f0300(iVar8);
          if ((cVar4 != '\0') &&
             ((*(int *)(iVar10 + 0x3d8) != 0 &&
              (cVar4 = FUN_0044b280(*(undefined4 *)(piVar5[0x92] + 6)), cVar4 != '\0')))) {
            pvVar6 = operator_new(0x46);
            uStack_4 = 4;
            if (pvVar6 == (void *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_005c0ee0(*(undefined4 *)(iVar10 + 0x12));
            }
            uStack_4 = 0xffffffff;
            FUN_005c46c0(uVar7);
            *puVar12 = 1;
            bVar2 = true;
            goto LAB_005c5a14;
          }
        }
        *puVar12 = 0;
      }
LAB_005c5a14:
      iVar9 = iVar9 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar9 < DAT_00877690);
LAB_005c5b03:
    if (!bVar2) goto switchD_005c5576_caseD_1;
    uVar13 = 0x10;
    uVar7 = *(undefined4 *)(DAT_00d0ca90 + 6);
    break;
  case 0x16:
    iVar9 = 1;
    if (1 < DAT_00877690) {
      puVar12 = &DAT_00a61524;
      do {
        iVar10 = FUN_004e9370(iVar9);
        if (*(char *)(iVar10 + 0x180) == '\0') {
          *puVar12 = 0;
        }
        iVar9 = iVar9 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar9 < DAT_00877690);
    }
    (**(code **)(*piVar5 + 0x18))();
    iVar9 = FUN_004f0a80();
    if (iVar9 == 0) goto switchD_005c5576_caseD_1;
    pvVar6 = operator_new(0x46);
    uStack_4 = 9;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      (**(code **)(*piVar5 + 0x18))();
      iVar9 = FUN_004f0a80();
      uVar7 = FUN_005c0ee0(*(undefined4 *)(iVar9 + 0xc));
    }
    uStack_4 = 0xffffffff;
    FUN_005c46c0(uVar7);
    (**(code **)(*piVar5 + 0x18))();
    iVar9 = FUN_004f0a80();
    (&DAT_00a61520)[*(int *)(iVar9 + 0xc)] = 1;
    (**(code **)(*piVar5 + 0x18))();
    iVar9 = FUN_004f0a80();
    iVar9 = FUN_004e9370(*(undefined4 *)(iVar9 + 0xc));
    piStack_1c = (int *)0x0;
    if (0 < *(int *)(iVar9 + 0x290)) {
      iVar10 = 0;
      do {
        iVar8 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar9 + 0x298)));
        if (*(char *)(iVar8 + 0x180) == '\0') {
          uVar7 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar9 + 0x298)));
          (**(code **)(*piVar5 + 0x18))(uVar7);
          cVar4 = FUN_004f0300(uVar7);
          if (cVar4 == '\0') {
LAB_005c60fb:
            iVar8 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar9 + 0x298)));
            (&DAT_00a61520)[*(int *)(iVar8 + 0x12)] = 0x11;
          }
          else {
            iVar8 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar9 + 0x298)));
            if ((*(int *)(iVar8 + 0x254) != 8) && (*(int *)(iVar8 + 0x254) != 9)) {
              iVar8 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar9 + 0x298)));
              if (*(int *)(iVar8 + 0x3d8) == 0) goto LAB_005c60fb;
              uVar7 = *(undefined4 *)(piVar5[0x92] + 6);
              FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar9 + 0x298)));
              cVar4 = FUN_0044a690(uVar7);
              if (cVar4 == '\0') {
                uVar7 = *(undefined4 *)(piVar5[0x92] + 6);
                FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar9 + 0x298)));
                cVar4 = FUN_0044b280(uVar7);
                if (cVar4 == '\0') {
                  iVar8 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar9 + 0x298)));
                  cVar4 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar8 + 0x3d8) + 6));
                  if (cVar4 == '\0') goto LAB_005c60fb;
                }
              }
            }
            iVar8 = FUN_004e9370(*(undefined4 *)(iVar10 + *(int *)(iVar9 + 0x298)));
            (&DAT_00a61520)[*(int *)(iVar8 + 0x12)] = 1;
          }
        }
        piStack_1c = (int *)((int)piStack_1c + 1);
        iVar10 = iVar10 + 0xc;
      } while ((int)piStack_1c < *(int *)(iVar9 + 0x290));
    }
LAB_005c6135:
    uVar13 = 0x10;
    uVar7 = *(undefined4 *)(DAT_00d0ca90 + 6);
  }
  FUN_004dcb20(uVar7,uVar13);
switchD_005c5576_caseD_1:
  iVar9 = (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
  if (iVar9 != 0) {
    piVar5 = *(int **)(param_1 + 0x8c);
    iVar9 = (**(code **)(**(int **)piVar5[1] + 0x18))();
    iVar10 = (**(code **)(*piVar5 + 4))();
    iVar9 = iVar9 * iVar10;
    if (499 < iVar9) {
      iVar9 = 500;
    }
    *(int *)(*(int *)(param_1 + 0x8c) + 0x2a) = iVar9;
  }
  FUN_004353e0();
  FUN_00435fd0();
  *(undefined4 *)(param_1 + 0x98) = 2;
  ExceptionList = local_c;
  return 3;
}


