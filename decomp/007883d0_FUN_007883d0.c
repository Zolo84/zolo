// FUN_007883d0 @ 7883d0 size=4348

int * FUN_007883d0(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 uVar15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e131e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar4 = operator_new(0x1e);
  local_4 = 0;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar4 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *piVar4 = (int)&PTR_FUN_007e3a28;
    piVar4[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  piVar5 = operator_new(0x14);
  local_4 = 2;
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    iVar6 = FUN_0054f410();
    piVar5[1] = 0;
    piVar5[2] = 0;
    *piVar5 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar7 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x156), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    piVar5[3] = iVar8;
    if (iVar6 == 0) {
      *piVar5 = (int)&PTR_FUN_007e3878;
      piVar5[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      piVar5[4] = iVar6;
      *piVar5 = (int)&PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar4 + 0x84))();
  piVar9 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    iVar6 = FUN_0054f410();
    piVar9[1] = 0;
    piVar9[2] = 0;
    *piVar9 = (int)&PTR_LAB_007e38f8;
    puStack_8._0_1_ = 6;
    pvVar7 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x157), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    piVar9[3] = iVar8;
    if (iVar6 == 0) {
      *piVar9 = (int)&PTR_FUN_007e3878;
      piVar9[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      piVar9[4] = iVar6;
      *piVar9 = (int)&PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar4 + 0x84))();
  piVar10 = operator_new(0x14);
  pvStack_c = (void *)0x8;
  if (piVar10 == (int *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    iVar6 = FUN_0078f0c0();
    piVar10[1] = 0;
    piVar10[2] = 0;
    *piVar10 = (int)&PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 9;
    pvVar7 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,10);
    if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x133), iVar8 == 0)) {
      iVar8 = 0;
    }
    else {
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    }
    piVar10[3] = iVar8;
    if (iVar6 == 0) {
      *piVar10 = (int)&PTR_FUN_007e3878;
      piVar10[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      piVar10[4] = iVar6;
      *piVar10 = (int)&PTR_FUN_007e3878;
    }
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar4 + 0x84))();
  if (DAT_00d610e2 != '\0') {
    puVar11 = operator_new(0x14);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      pvVar7 = operator_new(0x10);
      if (pvVar7 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0053ee00(s_fantasy_0087b3cc);
      }
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_LAB_007e38f8;
      pvVar7 = operator_new(0x14);
      if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x198), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar11[3] = iVar8;
      if (iVar6 == 0) {
        *puVar11 = &PTR_FUN_007e3878;
        puVar11[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar11[4] = iVar6;
        *puVar11 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*piVar4 + 0x84))(puVar11);
  }
  piVar4 = *(int **)(unaff_EBX + 0x276);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    iVar6 = *piVar4;
    puVar11 = operator_new(0x14);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      iVar6 = (*(code *)**(undefined4 **)(iVar6 + 0x12))();
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_LAB_007e38f8;
      pvVar7 = operator_new(0x14);
      if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x13d), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar11[3] = iVar8;
      if (iVar6 == 0) {
        *puVar11 = &PTR_FUN_007e3878;
        puVar11[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar11[4] = iVar6;
        *puVar11 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_EBP + 0x84))(puVar11);
    piVar4 = piVar1;
  }
  piVar4 = *(int **)(unaff_EBX + 0x252);
joined_r0x007887cd:
  do {
    if (piVar4 == (int *)0x0) {
      puVar11 = operator_new(0x14);
      if (puVar11 != (undefined4 *)0x0) {
        iVar6 = FUN_0075d2e0();
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = &PTR_LAB_007e38f8;
        pvVar7 = operator_new(0x14);
        if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x18a), iVar8 == 0)) {
          iVar8 = 0;
        }
        else {
          *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
        }
        puVar11[3] = iVar8;
        if (iVar6 == 0) {
          *puVar11 = &PTR_FUN_007e3878;
          puVar11[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar11[4] = iVar6;
          *puVar11 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*unaff_EBP + 0x84))();
      piVar4 = (int *)unaff_EBP[0x99];
      while (piVar4 != (int *)0x0) {
        piVar1 = (int *)piVar4[2];
        iVar6 = *piVar4;
        puVar11 = operator_new(0x14);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          iVar6 = (*(code *)**(undefined4 **)(iVar6 + 0x12))();
          puVar11[1] = 0;
          puVar11[2] = 0;
          *puVar11 = &PTR_LAB_007e38f8;
          pvVar7 = operator_new(0x14);
          if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x137), iVar8 == 0)) {
            iVar8 = 0;
          }
          else {
            *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
          }
          puVar11[3] = iVar8;
          if (iVar6 == 0) {
            *puVar11 = &PTR_FUN_007e3878;
            puVar11[4] = 0;
          }
          else {
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            puVar11[4] = iVar6;
            *puVar11 = &PTR_FUN_007e3878;
          }
        }
        (**(code **)(*unaff_ESI + 0x84))(puVar11);
        piVar4 = piVar1;
      }
      puVar11 = operator_new(0x14);
      if (puVar11 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        iVar6 = (*(code *)**(undefined4 **)(unaff_EBP[0x59fc] + 0x24))();
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = &PTR_LAB_007e38f8;
        pvVar7 = operator_new(0x14);
        if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(499), iVar8 == 0)) {
          iVar8 = 0;
        }
        else {
          *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
        }
        puVar11[3] = iVar8;
        puVar13 = puVar11;
        if (iVar6 == 0) {
          *puVar11 = &PTR_FUN_007e3878;
          puVar11[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar11[4] = iVar6;
          *puVar11 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*unaff_ESI + 0x84))(puVar13);
      for (puVar13 = *(undefined4 **)((int)unaff_ESI + 0x167fa); puVar13 != (undefined4 *)0x0;
          puVar13 = (undefined4 *)puVar13[2]) {
        puVar12 = operator_new(0x14);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          iVar6 = (**(code **)(*(int *)*puVar13 + 0x10))();
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = &PTR_LAB_007e38f8;
          pvVar7 = operator_new(0x14);
          if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x32), iVar8 == 0)) {
            iVar8 = 0;
          }
          else {
            *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
          }
          puVar12[3] = iVar8;
          if (iVar6 == 0) {
            *puVar12 = &PTR_FUN_007e3878;
            puVar12[4] = 0;
          }
          else {
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            puVar12[4] = iVar6;
            *puVar12 = &PTR_FUN_007e3878;
          }
        }
        (**(code **)(*unaff_EDI + 0x84))(puVar12);
      }
      piVar4 = operator_new(0x1e);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_004c0c30(2);
        FUN_00444250();
        *piVar4 = (int)&PTR_FUN_007e3a28;
        piVar4[3] = (int)&PTR_LAB_007e39f8;
      }
      iVar6 = *(int *)(unaff_ESI[0x715b] + 4);
      while (iVar6 != 0) {
        puVar13 = operator_new(0x10);
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          iVar8 = *(int *)(iVar6 + 10);
          uVar15 = *(undefined4 *)(iVar6 + 2);
          FUN_00444030(4);
          puVar13[3] = uVar15;
          *puVar13 = &PTR_FUN_007e3978;
          iVar6 = iVar8;
        }
        (**(code **)(*piVar4 + 0x84))(puVar13);
      }
      puVar13 = operator_new(0x14);
      if (puVar13 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = &PTR_LAB_007e38f8;
        pvVar7 = operator_new(0x14);
        if ((pvVar7 == (void *)0x0) || (iVar6 = FUN_0053e740(0x3e3), iVar6 == 0)) {
          iVar6 = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar13[3] = iVar6;
        puVar12 = puVar13;
        if (piVar4 == (int *)0x0) {
          *puVar13 = &PTR_FUN_007e3878;
          puVar13[4] = 0;
        }
        else {
          piVar4[2] = piVar4[2] + 1;
          puVar13[4] = piVar4;
          *puVar13 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*unaff_EDI + 0x84))(puVar12);
      piVar4 = operator_new(0x1e);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_004c0c30(2);
        FUN_00444250();
        *piVar4 = (int)&PTR_FUN_007e3a28;
        piVar4[3] = (int)&PTR_LAB_007e39f8;
      }
      iVar6 = *(int *)(unaff_EDI[0x715c] + 4);
      while (iVar6 != 0) {
        puVar12 = operator_new(0x10);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          iVar8 = *(int *)(iVar6 + 10);
          uVar15 = *(undefined4 *)(iVar6 + 2);
          FUN_00444030(4);
          puVar12[3] = uVar15;
          *puVar12 = &PTR_FUN_007e3978;
          iVar6 = iVar8;
        }
        (**(code **)(*piVar4 + 0x84))(puVar12);
      }
      puVar12 = operator_new(0x14);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = &PTR_LAB_007e38f8;
        pvVar7 = operator_new(0x14);
        if ((pvVar7 == (void *)0x0) || (iVar6 = FUN_0053e740(0x3e2), iVar6 == 0)) {
          iVar6 = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar12[3] = iVar6;
        if (piVar4 == (int *)0x0) {
          *puVar12 = &PTR_FUN_007e3878;
          puVar12[4] = 0;
        }
        else {
          piVar4[2] = piVar4[2] + 1;
          puVar12[4] = piVar4;
          *puVar12 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar5 + 0x84))(puVar12);
      piVar4 = operator_new(0x1e);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_004c0c30(2);
        FUN_00444250();
        *piVar4 = (int)&PTR_FUN_007e3a28;
        piVar4[3] = (int)&PTR_LAB_007e39f8;
      }
      iVar6 = *(int *)(piVar5[0x715d] + 4);
      while (iVar6 != 0) {
        puVar12 = operator_new(0x10);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          iVar8 = *(int *)(iVar6 + 10);
          uVar15 = *(undefined4 *)(iVar6 + 2);
          FUN_00444030(4);
          puVar12[3] = uVar15;
          *puVar12 = &PTR_FUN_007e3978;
          iVar6 = iVar8;
        }
        (**(code **)(*piVar4 + 0x84))(puVar12);
      }
      puVar12 = operator_new(0x14);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = &PTR_LAB_007e38f8;
        pvVar7 = operator_new(0x14);
        if ((pvVar7 == (void *)0x0) || (iVar6 = FUN_0053e740(0x3e1), iVar6 == 0)) {
          iVar6 = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar12[3] = iVar6;
        if (piVar4 == (int *)0x0) {
          *puVar12 = &PTR_FUN_007e3878;
          puVar12[4] = 0;
        }
        else {
          piVar4[2] = piVar4[2] + 1;
          puVar12[4] = piVar4;
          *puVar12 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar9 + 0x84))(puVar12);
      piVar4 = *(int **)((int)piVar9 + 0x167e2);
      while (piVar4 != (int *)0x0) {
        piVar5 = (int *)piVar4[2];
        piVar1 = (int *)*piVar4;
        piVar4 = piVar5;
        if (*(char *)((int)piVar1 + 0x2d) == '\0') {
          puVar12 = operator_new(0x14);
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            iVar6 = (**(code **)(*piVar1 + 0x10))();
            puVar12[1] = 0;
            puVar12[2] = 0;
            *puVar12 = &PTR_LAB_007e38f8;
            pvVar7 = operator_new(0x14);
            if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x12d), iVar8 == 0)) {
              iVar8 = 0;
            }
            else {
              *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
            }
            puVar12[3] = iVar8;
            if (iVar6 == 0) {
              *puVar12 = &PTR_FUN_007e3878;
              puVar12[4] = 0;
            }
            else {
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
              puVar12[4] = iVar6;
              *puVar12 = &PTR_FUN_007e3878;
            }
          }
          (**(code **)(*piVar10 + 0x84))(puVar12);
        }
      }
      iVar6 = 0;
      do {
        puVar12 = operator_new(0x14);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          iVar8 = FUN_007894d0(iVar6);
          uVar15 = FUN_00505ba0(iVar6);
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = &PTR_LAB_007e38f8;
          pvVar7 = operator_new(0x14);
          if ((pvVar7 == (void *)0x0) || (iVar14 = FUN_0053e740(uVar15), iVar14 == 0)) {
            iVar14 = 0;
          }
          else {
            *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
          }
          puVar12[3] = iVar14;
          if (iVar8 == 0) {
            *puVar12 = &PTR_FUN_007e3878;
            puVar12[4] = 0;
          }
          else {
            *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
            puVar12[4] = iVar8;
            *puVar12 = &PTR_FUN_007e3878;
          }
        }
        (**(code **)(*piVar10 + 0x84))(puVar12);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x25);
      iVar6 = *(int *)((int)piVar9 + 0x356c6);
      while (iVar6 != 0) {
        iVar6 = *(int *)(iVar6 + 8);
        puVar12 = operator_new(0x14);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          iVar8 = FUN_007898d0();
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = &PTR_LAB_007e38f8;
          pvVar7 = operator_new(0x14);
          if ((pvVar7 == (void *)0x0) || (iVar14 = FUN_0053e740(0x572), iVar14 == 0)) {
            iVar14 = 0;
          }
          else {
            *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
          }
          puVar12[3] = iVar14;
          if (iVar8 == 0) {
            *puVar12 = &PTR_FUN_007e3878;
            puVar12[4] = 0;
          }
          else {
            *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
            puVar12[4] = iVar8;
            *puVar12 = &PTR_FUN_007e3878;
          }
        }
        (**(code **)(*piVar10 + 0x84))(puVar12);
      }
      piVar4 = operator_new(0x1e);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_004c0c30(2);
        FUN_00444250();
        *piVar4 = (int)&PTR_FUN_007e3a28;
        piVar4[3] = (int)&PTR_LAB_007e39f8;
      }
      uVar15 = 0;
      piVar5 = (int *)piVar9[0xd5b6];
      if ((int *)piVar9[0xd5b6] != (int *)0x0) {
        do {
          piVar9 = (int *)piVar5[2];
          puVar13 = (undefined4 *)
                    CONCAT22((short)((uint)puVar13 >> 0x10),*(undefined2 *)(*piVar5 + 0xc));
          cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
          if (cVar3 != '\0') {
            puVar12 = operator_new(0x14);
            if (puVar12 == (undefined4 *)0x0) {
              puVar12 = (undefined4 *)0x0;
            }
            else {
              iVar6 = FUN_0078d0d0();
              puVar12[1] = 0;
              puVar12[2] = 0;
              *puVar12 = &PTR_LAB_007e38f8;
              pvVar7 = operator_new(0x14);
              if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x1f7), iVar8 == 0)) {
                iVar8 = 0;
              }
              else {
                *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
              }
              puVar12[3] = iVar8;
              if (iVar6 == 0) {
                *puVar12 = &PTR_FUN_007e3878;
                puVar12[4] = 0;
              }
              else {
                *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
                puVar12[4] = iVar6;
                *puVar12 = &PTR_FUN_007e3878;
              }
            }
            (**(code **)(*piVar4 + 0x84))(puVar12);
            uVar15 = 0x1000000;
          }
          piVar5 = piVar9;
        } while (piVar9 != (int *)0x0);
        if ((char)((uint)uVar15 >> 0x18) != '\0') {
          pvVar7 = operator_new(0x14);
          if (pvVar7 == (void *)0x0) {
            uVar15 = 0;
          }
          else {
            uVar15 = FUN_004441b0(0x581,piVar4);
          }
          (**(code **)(*piVar10 + 0x84))(uVar15);
          ExceptionList = puVar13;
          return piVar10;
        }
      }
      ExceptionList = puVar11;
      return piVar10;
    }
    piVar1 = (int *)piVar4[2];
    piVar2 = (int *)*piVar4;
    cVar3 = (**(code **)(*piVar2 + 0x14))();
    piVar4 = piVar1;
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*piVar2 + 0x18))();
      if (cVar3 != '\0') {
        puVar11 = operator_new(0x14);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          iVar6 = (*(code *)**(undefined4 **)((int)piVar2 + 0x12))();
          puVar11[1] = 0;
          puVar11[2] = 0;
          *puVar11 = &PTR_LAB_007e38f8;
          pvVar7 = operator_new(0x14);
          if ((pvVar7 == (void *)0x0) || (iVar8 = FUN_0053e740(0x22e), iVar8 == 0)) {
            iVar8 = 0;
          }
          else {
            *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
          }
          puVar11[3] = iVar8;
          if (iVar6 == 0) {
            *puVar11 = &PTR_FUN_007e3878;
            puVar11[4] = 0;
          }
          else {
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            puVar11[4] = iVar6;
            *puVar11 = &PTR_FUN_007e3878;
          }
        }
        (**(code **)(*unaff_EBP + 0x84))(puVar11);
        goto joined_r0x007887cd;
      }
      cVar3 = (**(code **)(*piVar2 + 0x1c))();
      if (cVar3 == '\0') {
        puVar11 = operator_new(0x14);
        if (puVar11 != (undefined4 *)0x0) {
          iVar6 = (*(code *)**(undefined4 **)((int)piVar2 + 0x12))();
          puVar11[1] = 0;
          puVar11[2] = 0;
          *puVar11 = &PTR_LAB_007e38f8;
          pvVar7 = operator_new(0x14);
          if (pvVar7 != (void *)0x0) {
            uVar15 = 0x13c;
            goto LAB_0078895d;
          }
          goto LAB_007889cd;
        }
        goto LAB_007889e8;
      }
      puVar11 = operator_new(0x14);
      if (puVar11 == (undefined4 *)0x0) goto LAB_007889e8;
      iVar6 = (*(code *)**(undefined4 **)((int)piVar2 + 0x12))();
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_LAB_007e38f8;
      pvVar7 = operator_new(0x14);
      if (pvVar7 == (void *)0x0) {
LAB_007889cd:
        iVar8 = 0;
      }
      else {
        uVar15 = 0x230;
LAB_0078895d:
        iVar8 = FUN_0053e740(uVar15);
        if (iVar8 == 0) goto LAB_007889cd;
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
      }
      puVar11[3] = iVar8;
      if (iVar6 == 0) {
        puVar11[4] = 0;
        *puVar11 = &PTR_FUN_007e3878;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar11[4] = iVar6;
        *puVar11 = &PTR_FUN_007e3878;
      }
    }
    else {
      puVar11 = operator_new(0x14);
      if (puVar11 != (undefined4 *)0x0) {
        iVar6 = (*(code *)**(undefined4 **)((int)piVar2 + 0x12))();
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = &PTR_LAB_007e38f8;
        pvVar7 = operator_new(0x14);
        if (pvVar7 != (void *)0x0) {
          uVar15 = 0x22f;
          goto LAB_0078895d;
        }
        goto LAB_007889cd;
      }
LAB_007889e8:
      puVar11 = (undefined4 *)0x0;
    }
    (**(code **)(*unaff_EBP + 0x84))(puVar11);
  } while( true );
}


