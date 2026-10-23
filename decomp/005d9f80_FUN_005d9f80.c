// FUN_005d9f80 @ 5d9f80 size=3518

undefined4 __fastcall FUN_005d9f80(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_24;
  undefined4 *puStack_20;
  uint uStack_1c;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cdad4;
  local_c = ExceptionList;
  bVar3 = false;
  ExceptionList = &local_c;
  piVar6 = (int *)FUN_005c5030();
  if (piVar6 == (int *)0x0) {
    ExceptionList = local_c;
    return 3;
  }
  iVar7 = *(int *)(param_1 + 0x8c);
  piVar4 = *(int **)(iVar7 + 4);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar1;
  }
  local_24 = 0;
  *(undefined4 *)(iVar7 + 4) = 0;
  *(undefined4 *)(iVar7 + 8) = 0;
  *(undefined4 *)(iVar7 + 0xc) = 0;
  switch(*(undefined4 *)(param_1 + 0x90)) {
  case 0:
    iVar7 = piVar6[3];
    (**(code **)(*piVar6 + 0x14))();
    iVar12 = FUN_00518b70();
    if (iVar12 != 0) {
      iVar7 = *(int *)((int)piVar6 + 0x212);
    }
    uStack_14 = uStack_14 & 0xff000000;
    uStack_1c = uStack_1c & 0xff000000;
    FUN_0050b600(piVar6,0,iVar7,0x3f800000,1,1,uStack_1c,0,uStack_14,0,1,0xffffffff,0,1,0,0xbf800000
                 ,1);
    ExceptionList = local_c;
    return 1;
  default:
    iVar7 = FUN_004e9370(*(undefined4 *)((int)piVar6 + 0x212));
    pvVar8 = operator_new(0x46);
    uStack_4 = 10;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_005c0ee0(*(undefined4 *)((int)piVar6 + 0x212));
    }
    uStack_4 = 0xffffffff;
    iVar12 = *(int *)(param_1 + 0x8c);
    iVar13 = *(int *)(iVar12 + 8);
    puVar10 = operator_new(0xe);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      *puVar10 = uVar9;
      puVar10[1] = iVar13;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0;
    }
    iVar11 = *(int *)(iVar12 + 0xc);
    *(undefined4 **)(iVar12 + 8) = puVar10;
    *(int *)(iVar12 + 0xc) = iVar11 + 1;
    if (iVar11 == 0) {
      *(undefined4 **)(iVar12 + 4) = puVar10;
    }
    else {
      *(undefined4 **)(iVar13 + 8) = puVar10;
    }
    iVar12 = 0;
    if (0 < *(int *)(iVar7 + 0x290)) {
      iVar13 = 0;
      do {
        iVar11 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar7 + 0x298) + iVar13));
        if ((*(int *)(iVar11 + 0x254) == 8) &&
           (iVar11 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar7 + 0x298) + iVar13)),
           *(char *)(iVar11 + 0x180) == '\0')) {
          pvVar8 = operator_new(0x46);
          uStack_4 = 0xb;
          if (pvVar8 == (void *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_005c0ee0(*(undefined4 *)(*(int *)(iVar7 + 0x298) + iVar13));
          }
          uStack_4 = 0xffffffff;
          FUN_005c46c0(uVar9);
        }
        iVar12 = iVar12 + 1;
        iVar13 = iVar13 + 0xc;
      } while (iVar12 < *(int *)(iVar7 + 0x290));
    }
    goto LAB_005dacc1;
  case 2:
    iVar7 = 0;
    if (0 < DAT_00877690) {
      puVar10 = &DAT_00a61520;
      do {
        iVar12 = FUN_004e9370(iVar7);
        if (*(char *)(iVar12 + 0x180) == '\0') {
          cVar5 = FUN_004a3020(iVar12,0);
          if ((cVar5 == '\0') || (iVar13 = FUN_004ece90(), iVar13 == 0)) {
            *puVar10 = 0;
          }
          else {
            pvVar8 = operator_new(0x46);
            uStack_4 = 0;
            if (pvVar8 == (void *)0x0) {
              uVar9 = 0;
            }
            else {
              uVar9 = FUN_005c0ee0(*(undefined4 *)(iVar12 + 0x12));
            }
            uStack_4 = 0xffffffff;
            FUN_005c46c0(uVar9);
            *puVar10 = 1;
            bVar3 = true;
          }
        }
        iVar7 = iVar7 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar7 < DAT_00877690);
      if (bVar3) {
        FUN_004dcb20(*(undefined4 *)(DAT_00d0ca90 + 6),0x10);
      }
    }
    goto LAB_005dacc1;
  case 0x17:
  case 0x18:
  case 0x19:
    local_24 = 0x1c6;
    puStack_20 = &DAT_008ec358;
    do {
      piVar4 = (int *)*puStack_20;
      do {
        do {
          if (piVar4 == (int *)0x0) goto LAB_005da87e;
          piVar1 = (int *)piVar4[2];
          iVar7 = *piVar4;
          piVar4 = piVar1;
        } while (*(char *)(iVar7 + 0x180) != '\0');
        uVar9 = *(undefined4 *)(param_1 + 0x90);
        (**(code **)(*piVar6 + 0x14))(iVar7,uVar9);
        cVar5 = FUN_00518d60(iVar7,uVar9);
      } while (cVar5 == '\0');
      pvVar8 = operator_new(0x46);
      uStack_4 = 7;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_005c0f60(local_24);
      }
      uStack_4 = 0xffffffff;
      iVar7 = *(int *)(param_1 + 0x8c);
      iVar12 = *(int *)(iVar7 + 8);
      puVar10 = operator_new(0xe);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        *puVar10 = uVar9;
        puVar10[1] = iVar12;
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 0;
      }
      iVar13 = *(int *)(iVar7 + 0xc);
      *(undefined4 **)(iVar7 + 8) = puVar10;
      *(int *)(iVar7 + 0xc) = iVar13 + 1;
      if (iVar13 == 0) {
        *(undefined4 **)(iVar7 + 4) = puVar10;
      }
      else {
        *(undefined4 **)(iVar12 + 8) = puVar10;
      }
      bVar3 = true;
      *(undefined1 *)((int)&DAT_00a6b160 + local_24) = 1;
LAB_005da87e:
      puStack_20 = (undefined4 *)((int)puStack_20 + 0x12);
      local_24 = local_24 + 1;
    } while ((int)puStack_20 < 0x8ece08);
    if (bVar3) {
      FUN_004dcb20(*(undefined4 *)(DAT_00d0ca90 + 6),0xd);
    }
    goto LAB_005dacc1;
  case 0x1a:
    iVar7 = 0;
    if (DAT_00877690 < 1) goto LAB_005dacc1;
    puVar10 = &DAT_00a61520;
    do {
      iVar12 = FUN_004e9370(iVar7);
      if (((*(char *)(iVar12 + 0x180) == '\0') && (*puVar10 = 0, *(int *)(iVar12 + 0x3d8) != 0)) &&
         (((cVar5 = FUN_0044b280(*(undefined4 *)(piVar6[0x92] + 6)), cVar5 != '\0' ||
           (cVar5 = FUN_0044a690(*(undefined4 *)(piVar6[0x92] + 6)), cVar5 != '\0')) &&
          (*(int *)(iVar12 + 0x182) != 0)))) {
        uVar9 = *(undefined4 *)(param_1 + 0x90);
        iVar13 = iVar12;
        (**(code **)(*piVar6 + 0x14))(iVar12,uVar9);
        cVar5 = FUN_00518d60(iVar13,uVar9);
        if (cVar5 == '\0') {
          *puVar10 = 0;
        }
        else {
          pvVar8 = operator_new(0x46);
          uStack_4 = 4;
          if (pvVar8 == (void *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_005c0ee0(*(undefined4 *)(iVar12 + 0x12));
          }
          uStack_4 = 0xffffffff;
          FUN_005c46c0(uVar9);
          *puVar10 = 1;
          bVar3 = true;
        }
      }
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar7 < DAT_00877690);
    break;
  case 0x1b:
    (**(code **)(*piVar6 + 0x14))();
    iVar7 = FUN_00518b70();
    if (iVar7 != 0) {
      (**(code **)(*piVar6 + 0x14))();
      iVar7 = FUN_00518b70();
      FUN_004e9370(*(undefined4 *)(iVar7 + 0xc));
    }
    iVar7 = 0;
    if (DAT_00877690 < 1) goto LAB_005dacc1;
    puVar10 = &DAT_00a61520;
    do {
      iVar12 = FUN_004e9370(iVar7);
      if (((*(char *)(iVar12 + 0x180) == '\0') && (*puVar10 = 0, *(int *)(iVar12 + 0x3d8) != 0)) &&
         ((cVar5 = FUN_0044b280(*(undefined4 *)(piVar6[0x92] + 6)), cVar5 != '\0' &&
          ((cVar5 = FUN_0044b280(*(undefined4 *)(*(int *)(iVar12 + 0x3d8) + 6)), cVar5 != '\0' &&
           (*(int *)(iVar12 + 0x182) != 0)))))) {
        uVar9 = *(undefined4 *)(param_1 + 0x90);
        iVar13 = iVar12;
        (**(code **)(*piVar6 + 0x14))(iVar12,uVar9);
        cVar5 = FUN_00518d60(iVar13,uVar9);
        if (cVar5 == '\0') {
          *puVar10 = 0;
        }
        else {
          pvVar8 = operator_new(0x46);
          uStack_4 = 1;
          if (pvVar8 == (void *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_005c0ee0(*(undefined4 *)(iVar12 + 0x12));
          }
          uStack_4 = 0xffffffff;
          FUN_005c46c0(uVar9);
          *puVar10 = 1;
          bVar3 = true;
        }
      }
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar7 < DAT_00877690);
    break;
  case 0x1c:
    iVar7 = 0;
    if (DAT_00877690 < 1) goto LAB_005dacc1;
    puVar10 = &DAT_00a61520;
    do {
      iVar12 = FUN_004e9370(iVar7);
      if (((*(char *)(iVar12 + 0x180) == '\0') && (*puVar10 = 0, *(int *)(iVar12 + 0x3d8) != 0)) &&
         (((cVar5 = FUN_0044a690(*(undefined4 *)(piVar6[0x92] + 6)), cVar5 != '\0' ||
           (cVar5 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar12 + 0x3d8) + 6)), cVar5 != '\0')) &&
          (*(int *)(iVar12 + 0x46a) != 0)))) {
        uVar9 = *(undefined4 *)(param_1 + 0x90);
        iVar13 = iVar12;
        (**(code **)(*piVar6 + 0x14))(iVar12,uVar9);
        cVar5 = FUN_00518d60(iVar13,uVar9);
        if (cVar5 == '\0') {
          *puVar10 = 0;
        }
        else {
          pvVar8 = operator_new(0x46);
          uStack_4 = 2;
          if (pvVar8 == (void *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_005c0ee0(*(undefined4 *)(iVar12 + 0x12));
          }
          uStack_4 = 0xffffffff;
          FUN_005c46c0(uVar9);
          *puVar10 = 1;
          bVar3 = true;
        }
      }
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar7 < DAT_00877690);
    break;
  case 0x1d:
    local_24 = 99;
    puStack_20 = &DAT_008e9e72;
    do {
      piVar4 = (int *)*puStack_20;
      do {
        do {
          if (piVar4 == (int *)0x0) goto LAB_005da495;
          piVar1 = (int *)piVar4[2];
          iVar7 = *piVar4;
          piVar4 = piVar1;
        } while (*(char *)(iVar7 + 0x180) != '\0');
        uVar9 = *(undefined4 *)(param_1 + 0x90);
        (**(code **)(*piVar6 + 0x14))(iVar7,uVar9);
        cVar5 = FUN_00518d60(iVar7,uVar9);
      } while (cVar5 == '\0');
      pvVar8 = operator_new(0x46);
      uStack_4 = 3;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_005c0fc0(local_24);
      }
      uStack_4 = 0xffffffff;
      iVar7 = *(int *)(param_1 + 0x8c);
      iVar12 = *(int *)(iVar7 + 8);
      puVar10 = operator_new(0xe);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        *puVar10 = uVar9;
        puVar10[1] = iVar12;
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 0;
      }
      iVar13 = *(int *)(iVar7 + 0xc);
      *(undefined4 **)(iVar7 + 8) = puVar10;
      *(int *)(iVar7 + 0xc) = iVar13 + 1;
      if (iVar13 == 0) {
        *(undefined4 **)(iVar7 + 4) = puVar10;
      }
      else {
        *(undefined4 **)(iVar12 + 8) = puVar10;
      }
      bVar3 = true;
      *(undefined1 *)((int)&DAT_00a4cc38 + local_24) = 1;
LAB_005da495:
      puStack_20 = (undefined4 *)((int)puStack_20 + 0x12);
      local_24 = local_24 + 1;
    } while ((int)puStack_20 < 0x8ea22c);
    if (bVar3) {
      FUN_004dcb20(*(undefined4 *)(DAT_00d0ca90 + 6),0xf);
    }
    goto LAB_005dacc1;
  case 0x1e:
    iVar7 = 0;
    if (DAT_00877690 < 1) goto LAB_005dacc1;
    puVar10 = &DAT_00a61520;
    do {
      iVar12 = FUN_004e9370(iVar7);
      if (((*(char *)(iVar12 + 0x180) == '\0') && (*puVar10 = 0, *(int *)(iVar12 + 0x46a) != 0)) &&
         (cVar5 = FUN_0044b280(*(undefined4 *)(piVar6[0x92] + 6)), cVar5 != '\0')) {
        uVar9 = *(undefined4 *)(param_1 + 0x90);
        iVar13 = iVar12;
        (**(code **)(*piVar6 + 0x14))(iVar12,uVar9);
        cVar5 = FUN_00518d60(iVar13,uVar9);
        if (cVar5 == '\0') {
          *puVar10 = 0;
        }
        else {
          pvVar8 = operator_new(0x46);
          uStack_4 = 5;
          if (pvVar8 == (void *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_005c0ee0(*(undefined4 *)(iVar12 + 0x12));
          }
          uStack_4 = 0xffffffff;
          FUN_005c46c0(uVar9);
          *puVar10 = 1;
          bVar3 = true;
        }
      }
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar7 < DAT_00877690);
    break;
  case 0x1f:
    iVar7 = 0;
    if (DAT_00877690 < 1) goto LAB_005dacc1;
    puVar10 = &DAT_00a61520;
    do {
      iVar12 = FUN_004e9370(iVar7);
      if (((*(char *)(iVar12 + 0x180) == '\0') && (*puVar10 = 0, *(char *)(iVar12 + 0x470) != '\0'))
         && ((iVar13 = FUN_004ece80(), iVar13 != 0 &&
             (cVar5 = FUN_0044b280(*(undefined4 *)(piVar6[0x92] + 6)), cVar5 != '\0')))) {
        uVar9 = *(undefined4 *)(param_1 + 0x90);
        iVar13 = iVar12;
        (**(code **)(*piVar6 + 0x14))(iVar12,uVar9);
        cVar5 = FUN_00518d60(iVar13,uVar9);
        if (cVar5 == '\0') {
          *puVar10 = 0;
        }
        else {
          pvVar8 = operator_new(0x46);
          uStack_4 = 6;
          if (pvVar8 == (void *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_005c0ee0(*(undefined4 *)(iVar12 + 0x12));
          }
          uStack_4 = 0xffffffff;
          FUN_005c46c0(uVar9);
          *puVar10 = 1;
          bVar3 = true;
        }
      }
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar7 < DAT_00877690);
    break;
  case 0x20:
    if (DAT_00877690 < 1) goto LAB_005dacc1;
    puVar10 = &DAT_00a61520;
    do {
      iVar7 = FUN_004e9370(local_24);
      if ((*(char *)(iVar7 + 0x180) == '\0') &&
         ((*puVar10 = 0, *(int *)(iVar7 + 0x254) == 8 ||
          ((*(int *)(iVar7 + 0x3d8) != 0 &&
           (((cVar5 = FUN_0044a690(*(undefined4 *)(piVar6[0x92] + 6)), cVar5 != '\0' ||
             (cVar5 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar7 + 0x3d8) + 6)), cVar5 != '\0')) &&
            (*(int *)(iVar7 + 0x46a) != 0)))))))) {
        uVar9 = *(undefined4 *)(param_1 + 0x90);
        iVar12 = iVar7;
        (**(code **)(*piVar6 + 0x14))(iVar7,uVar9);
        cVar5 = FUN_00518d60(iVar12,uVar9);
        if ((cVar5 == '\0') || (cVar5 = FUN_004ed1c0(piVar6[0x92]), cVar5 != '\0')) {
          *puVar10 = 0;
        }
        else {
          pvVar8 = operator_new(0x46);
          uStack_4 = 9;
          if (pvVar8 == (void *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_005c0ee0(*(undefined4 *)(iVar7 + 0x12));
          }
          uStack_4 = 0xffffffff;
          FUN_005c46c0(uVar9);
          *puVar10 = 1;
          bVar3 = true;
        }
      }
      local_24 = local_24 + 1;
      puVar10 = puVar10 + 1;
    } while (local_24 < DAT_00877690);
    break;
  case 0x21:
    iVar7 = (**(code **)(*piVar6 + 0x14))();
    if (*(int *)(iVar7 + 0x212) != 0) {
      iVar7 = (**(code **)(*piVar6 + 0x14))();
      iVar7 = FUN_004e9370(*(undefined4 *)(iVar7 + 0x212));
      puStack_20 = (undefined4 *)0x0;
      if (0 < *(int *)(iVar7 + 0x290)) {
        local_24 = 0;
        do {
          iVar12 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar7 + 0x298) + local_24));
          if ((*(int *)(iVar12 + 0x254) == 8) &&
             (iVar12 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar7 + 0x298) + local_24)),
             *(char *)(iVar12 + 0x180) == '\0')) {
            iVar12 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar7 + 0x298) + local_24));
            iVar12 = *(int *)(iVar12 + 0x288);
            if (*(char *)((int)&DAT_00a6b160 + iVar12) == '\0') {
              pvVar8 = operator_new(0x46);
              uStack_4 = 8;
              if (pvVar8 == (void *)0x0) {
                uVar9 = 0;
              }
              else {
                uVar9 = FUN_005c0f60(iVar12);
              }
              uStack_4 = 0xffffffff;
              iVar13 = *(int *)(param_1 + 0x8c);
              iVar11 = *(int *)(iVar13 + 8);
              puVar10 = operator_new(0xe);
              if (puVar10 == (undefined4 *)0x0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                *puVar10 = uVar9;
                puVar10[1] = iVar11;
                puVar10[2] = 0;
                *(undefined1 *)(puVar10 + 3) = 0;
              }
              iVar2 = *(int *)(iVar13 + 0xc);
              *(undefined4 **)(iVar13 + 8) = puVar10;
              *(int *)(iVar13 + 0xc) = iVar2 + 1;
              if (iVar2 == 0) {
                *(undefined4 **)(iVar13 + 4) = puVar10;
              }
              else {
                *(undefined4 **)(iVar11 + 8) = puVar10;
              }
              bVar3 = true;
              *(undefined1 *)((int)&DAT_00a6b160 + iVar12) = 1;
            }
          }
          puStack_20 = (undefined4 *)((int)puStack_20 + 1);
          local_24 = local_24 + 0xc;
        } while ((int)puStack_20 < *(int *)(iVar7 + 0x290));
        if (bVar3) {
          FUN_004dcb20(*(undefined4 *)(DAT_00d0ca90 + 6),0xd);
        }
      }
    }
    goto LAB_005dacc1;
  }
  if (bVar3) {
    FUN_004dcb20(*(undefined4 *)(DAT_00d0ca90 + 6),0x10);
  }
LAB_005dacc1:
  iVar7 = (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
  if (iVar7 != 0) {
    piVar6 = *(int **)(param_1 + 0x8c);
    iVar7 = (**(code **)(**(int **)piVar6[1] + 0x18))();
    iVar12 = (**(code **)(*piVar6 + 4))();
    iVar7 = iVar7 * iVar12;
    if (499 < iVar7) {
      iVar7 = 500;
    }
    *(int *)(*(int *)(param_1 + 0x8c) + 0x2a) = iVar7;
  }
  FUN_004353e0();
  FUN_00435fd0();
  *(undefined4 *)(param_1 + 0x98) = 2;
  ExceptionList = local_c;
  return 3;
}


