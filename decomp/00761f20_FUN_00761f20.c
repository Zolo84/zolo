// FUN_00761f20 @ 761f20 size=3917

int * FUN_00761f20(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  int unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar16;
  int *unaff_EDI;
  undefined4 *local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e0a63;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = operator_new(0x1e);
  local_4 = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar3 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  piVar4 = operator_new(0x14);
  local_4 = 2;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    iVar5 = FUN_00427f80();
    piVar4[1] = 0;
    piVar4[2] = 0;
    *piVar4 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar6 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x523), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    piVar4[3] = iVar7;
    if (iVar5 == 0) {
      *piVar4 = (int)&PTR_FUN_007e3878;
      piVar4[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      piVar4[4] = iVar5;
      *piVar4 = (int)&PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x84))();
  piVar8 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    pvVar6 = operator_new(0x10);
    puStack_8._0_1_ = 6;
    if (pvVar6 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar9 = (**(code **)(*(int *)(unaff_EBX + -0x12) + 0xc))();
      iVar5 = FUN_0053ee00(uVar9);
    }
    piVar8[1] = 0;
    piVar8[2] = 0;
    *piVar8 = (int)&PTR_LAB_007e38f8;
    puStack_8._0_1_ = 7;
    pvVar6 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0xe9), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    piVar8[3] = iVar7;
    if (iVar5 == 0) {
      *piVar8 = (int)&PTR_FUN_007e3878;
      piVar8[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      piVar8[4] = iVar5;
      *piVar8 = (int)&PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar3 + 0x84))();
  if (unaff_EBP + 6 != (int *)0x0) {
    puVar10 = operator_new(0x14);
    pvStack_c = (void *)0x9;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      pvVar6 = operator_new(0x10);
      pvStack_c._0_1_ = 10;
      if (pvVar6 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0053ee00(unaff_EBP + 6);
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvStack_c._0_1_ = 0xb;
      pvVar6 = operator_new(0x14);
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0xc);
      if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x199), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (iVar5 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        puVar10[4] = iVar5;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    pvStack_c = (void *)0xffffffff;
    (**(code **)(*piVar3 + 0x84))(puVar10);
  }
  pvVar6 = operator_new(0x14);
  pvStack_c = (void *)0xd;
  if (pvVar6 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    switch(*(undefined4 *)((int)unaff_EBP + 0x6e)) {
    case 0:
      iVar5 = FUN_0053e740(1000);
      break;
    case 1:
      iVar5 = FUN_0053e740(0x3e9);
      break;
    case 2:
      iVar5 = FUN_0053e740(0x3ea);
      break;
    case 3:
      iVar5 = FUN_0053e740(0x3eb);
      break;
    case 4:
      iVar5 = FUN_0053e740(0x3ec);
      break;
    case 5:
      iVar5 = FUN_0053e740(0x3ed);
      break;
    case 6:
      iVar5 = FUN_0053e740(0x3ee);
      break;
    case 7:
      iVar5 = FUN_0053e740(0x3ef);
      break;
    case 8:
      iVar5 = FUN_0053e740(0x3f0);
      break;
    case 9:
      iVar5 = FUN_0053e740(0x3f1);
      break;
    default:
      iVar5 = FUN_0053e740(0x10a);
    }
  }
  pvStack_c = (void *)0xffffffff;
  piVar11 = operator_new(0x14);
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11[1] = 0;
    piVar11[2] = 0;
    *piVar11 = (int)&PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 0xf;
    pvStack_c._1_3_ = 0;
    pvVar6 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x10);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x1c2), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    piVar11[3] = iVar7;
    if (iVar5 == 0) {
      *piVar11 = (int)&PTR_FUN_007e3878;
      piVar11[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      piVar11[4] = iVar5;
      *piVar11 = (int)&PTR_FUN_007e3878;
    }
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar3 + 0x84))();
  pvVar6 = operator_new(0x14);
  if (pvVar6 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    switch(unaff_ESI[5]) {
    case 0:
      iVar5 = FUN_0053e740(0x423);
      break;
    case 1:
      iVar5 = FUN_0053e740(0x409);
      break;
    case 2:
      iVar5 = FUN_0053e740(0x424);
      break;
    case 3:
      iVar5 = FUN_0053e740(0x425);
      break;
    default:
      iVar5 = FUN_0053e740(0x426);
      break;
    case 5:
      iVar5 = FUN_0053e740(0x427);
      break;
    case 6:
      iVar5 = FUN_0053e740(0x428);
      break;
    case 7:
      iVar5 = FUN_0053e740(0x429);
      break;
    case 8:
      iVar5 = FUN_0053e740(0x42a);
      break;
    case 9:
      iVar5 = FUN_0053e740(0x42b);
    }
  }
  local_20 = operator_new(0x14);
  if (local_20 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    local_20[1] = 0;
    local_20[2] = 0;
    *local_20 = &PTR_LAB_007e38f8;
    pvVar6 = operator_new(0x14);
    if ((pvVar6 == (void *)0x0) || (iVar7 = FUN_0053e740(0x19f), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    local_20[3] = iVar7;
    puVar10 = local_20;
    if (iVar5 == 0) {
      *local_20 = &PTR_FUN_007e3878;
      local_20[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      local_20[4] = iVar5;
      *local_20 = &PTR_FUN_007e3878;
    }
  }
  (**(code **)(*unaff_EBP + 0x84))();
  iVar5 = 0;
  do {
    piVar3 = (int *)(**(code **)(unaff_EDI[0x16] + 0x28))(&stack0xffffffdc,iVar5);
    if ((*piVar3 != 0) && (iVar5 != unaff_EDI[5])) {
      puVar12 = operator_new(0x14);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
          iVar7 = 0;
        }
        else {
          switch(iVar5) {
          case 0:
            iVar7 = FUN_0053e740(0x423);
            break;
          case 1:
            iVar7 = FUN_0053e740(0x409);
            break;
          case 2:
            iVar7 = FUN_0053e740(0x424);
            break;
          case 3:
            iVar7 = FUN_0053e740(0x425);
            break;
          default:
            iVar7 = FUN_0053e740(0x426);
            break;
          case 5:
            iVar7 = FUN_0053e740(0x427);
            break;
          case 6:
            iVar7 = FUN_0053e740(0x428);
            break;
          case 7:
            iVar7 = FUN_0053e740(0x429);
            break;
          case 8:
            iVar7 = FUN_0053e740(0x42a);
            break;
          case 9:
            iVar7 = FUN_0053e740(0x42b);
          }
        }
        *puVar12 = &PTR_LAB_007e38f8;
        puVar12[1] = 0;
        puVar12[2] = 0;
        local_20 = operator_new(0x14);
        if ((local_20 == (undefined4 *)0x0) || (iVar13 = FUN_0053e740(0x19f), iVar13 == 0)) {
          iVar13 = 0;
        }
        else {
          *(int *)(iVar13 + 8) = *(int *)(iVar13 + 8) + 1;
        }
        puVar12[3] = iVar13;
        unaff_EBP = unaff_ESI;
        if (iVar7 == 0) {
          puVar12[4] = 0;
          *puVar12 = &PTR_FUN_007e3878;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
          puVar12[4] = iVar7;
          *puVar12 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*unaff_EBP + 0x84))(puVar12);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  puVar12 = *(undefined4 **)((int)unaff_EDI + 0x76);
  do {
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = operator_new(0x14);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        puVar14 = operator_new(0x10);
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          uVar9 = *(undefined4 *)(unaff_EDI[0x2a] + 8);
          puVar14[1] = 4;
          puVar14[2] = 0;
          puVar14[3] = uVar9;
          *puVar14 = &PTR_FUN_007e3978;
        }
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = &PTR_LAB_007e38f8;
        pvVar6 = operator_new(0x14);
        if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x261), iVar5 == 0)) {
          iVar5 = 0;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        }
        puVar12[3] = iVar5;
        if (puVar14 == (undefined4 *)0x0) {
          *puVar12 = &PTR_FUN_007e3878;
          puVar12[4] = 0;
        }
        else {
          puVar14[2] = puVar14[2] + 1;
          puVar12[4] = puVar14;
          *puVar12 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*unaff_ESI + 0x84))(puVar12);
      puVar12 = operator_new(0x14);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
        piVar3 = unaff_ESI;
      }
      else {
        puVar14 = operator_new(0x10);
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          iVar5 = unaff_EDI[2];
          puVar14[1] = 4;
          puVar14[2] = 0;
          puVar14[3] = iVar5;
          *puVar14 = &PTR_FUN_007e3978;
        }
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = &PTR_LAB_007e38f8;
        piVar3 = operator_new(0x14);
        if ((piVar3 == (int *)0x0) || (iVar5 = FUN_0053e740(0xf9), iVar5 == 0)) {
          iVar5 = 0;
        }
        else {
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        }
        puVar12[3] = iVar5;
        unaff_ESI = unaff_EDI;
        if (puVar14 == (undefined4 *)0x0) {
          *puVar12 = &PTR_FUN_007e3878;
          puVar12[4] = 0;
        }
        else {
          puVar14[2] = puVar14[2] + 1;
          puVar12[4] = puVar14;
          *puVar12 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*unaff_ESI + 0x84))(puVar12);
      if ((DAT_00dc195c != '\0') && (unaff_EDI[4] != 3000)) {
        puVar12 = operator_new(0x14);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puVar14 = operator_new(0x10);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            iVar5 = unaff_EDI[4];
            puVar14[1] = 4;
            puVar14[2] = 0;
            puVar14[3] = iVar5;
            *puVar14 = &PTR_FUN_007e3978;
          }
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = &PTR_LAB_007e38f8;
          pvVar6 = operator_new(0x14);
          if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x58a), iVar5 == 0)) {
            iVar5 = 0;
          }
          else {
            *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          }
          puVar12[3] = iVar5;
          if (puVar14 == (undefined4 *)0x0) {
            *puVar12 = &PTR_FUN_007e3878;
            puVar12[4] = 0;
          }
          else {
            puVar14[2] = puVar14[2] + 1;
            puVar12[4] = puVar14;
            *puVar12 = &PTR_FUN_007e3878;
          }
        }
        (**(code **)(*piVar4 + 0x84))(puVar12);
      }
      piVar4 = (int *)((int)piVar8 + 0x72);
      cVar2 = (**(code **)(*(int *)((int)piVar8 + 0x72) + 0x24))(1);
      if (cVar2 != '\0') {
        piVar15 = operator_new(0x1e);
        if (piVar15 == (int *)0x0) {
          piVar15 = (int *)0x0;
        }
        else {
          FUN_00444030(2);
          *piVar15 = (int)&PTR_FUN_007e492c;
          FUN_00444250();
          piVar15[3] = (int)&PTR_LAB_007e39f8;
          *piVar15 = (int)&PTR_FUN_007e3a28;
        }
        puVar12 = (undefined4 *)piVar11[0x22];
        while (puVar12 != (undefined4 *)0x0) {
          puVar14 = operator_new(0x10);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            puVar1 = (undefined4 *)puVar12[2];
            uVar9 = *puVar12;
            puVar14[1] = 4;
            puVar14[2] = 0;
            puVar14[3] = uVar9;
            *puVar14 = &PTR_FUN_007e3978;
            puVar12 = puVar1;
          }
          (**(code **)(*piVar15 + 0x84))(puVar14);
        }
        piVar3 = operator_new(0x14);
        if (piVar3 == (int *)0x0) {
          piVar16 = (int *)0x0;
        }
        else {
          piVar3[1] = 0;
          piVar3[2] = 0;
          *piVar3 = (int)&PTR_LAB_007e38f8;
          pvVar6 = operator_new(0x14);
          if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x1d2), iVar5 == 0)) {
            iVar5 = 0;
          }
          else {
            *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          }
          piVar3[3] = iVar5;
          piVar16 = piVar3;
          if (piVar15 == (int *)0x0) {
            *piVar3 = (int)&PTR_FUN_007e3878;
            piVar3[4] = 0;
          }
          else {
            piVar15[2] = piVar15[2] + 1;
            piVar3[4] = (int)piVar15;
            *piVar3 = (int)&PTR_FUN_007e3878;
          }
        }
        (**(code **)(*piVar8 + 0x84))(piVar16);
      }
      cVar2 = (**(code **)(*piVar4 + 0x24))(2);
      if (cVar2 != '\0') {
        piVar3 = operator_new(0x1e);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          FUN_00444030(2);
          piVar3[4] = 0;
          piVar3[5] = 0;
          piVar3[6] = 0;
          *(undefined1 *)(piVar3 + 7) = 0;
          piVar3[3] = (int)&PTR_LAB_007e3ac0;
          *piVar3 = (int)&PTR_FUN_007e3a28;
          piVar3[3] = (int)&PTR_LAB_007e39f8;
        }
        puVar10 = *(undefined4 **)((int)puVar10 + 0x9a);
        while (puVar10 != (undefined4 *)0x0) {
          puVar12 = operator_new(0x10);
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            puVar14 = (undefined4 *)puVar10[2];
            uVar9 = *puVar10;
            puVar12[1] = 4;
            puVar12[2] = 0;
            puVar12[3] = uVar9;
            *puVar12 = &PTR_FUN_007e3978;
            puVar10 = puVar14;
          }
          (**(code **)(*piVar3 + 0x84))(puVar12);
        }
        puVar10 = operator_new(0x14);
        if (puVar10 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = &PTR_LAB_007e38f8;
          pvVar6 = operator_new(0x14);
          if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x1d3), iVar5 == 0)) {
            iVar5 = 0;
          }
          else {
            *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
          }
          puVar10[3] = iVar5;
          puVar12 = puVar10;
          if (piVar3 == (int *)0x0) {
            *puVar10 = &PTR_FUN_007e3878;
            puVar10[4] = 0;
          }
          else {
            piVar3[2] = piVar3[2] + 1;
            puVar10[4] = piVar3;
            *puVar10 = &PTR_FUN_007e3878;
          }
        }
        (**(code **)(*piVar11 + 0x84))(puVar12);
        ExceptionList = puVar10;
        return piVar11;
      }
      ExceptionList = piVar3;
      return piVar11;
    }
    puVar14 = (undefined4 *)puVar12[2];
    switch(*puVar12) {
    case 0:
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_00762870:
        local_20 = (undefined4 *)0x0;
      }
      else {
        local_20 = (undefined4 *)FUN_0053e740(0x1cf);
      }
      break;
    case 1:
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) goto LAB_00762870;
      local_20 = (undefined4 *)FUN_0053e740(0x1d0);
      break;
    case 2:
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) goto LAB_00762870;
      local_20 = (undefined4 *)FUN_0053e740(0x1d1);
      break;
    case 3:
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) goto LAB_00762870;
      local_20 = (undefined4 *)FUN_0053e740(0x1ca);
      break;
    case 4:
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) goto LAB_00762870;
      local_20 = (undefined4 *)FUN_0053e740(0x1cb);
      break;
    case 5:
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) goto LAB_00762870;
      local_20 = (undefined4 *)FUN_0053e740(0x1cd);
      break;
    case 6:
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) goto LAB_00762870;
      local_20 = (undefined4 *)FUN_0053e740(0x1ce);
      break;
    case 7:
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) goto LAB_00762870;
      local_20 = (undefined4 *)FUN_0053e740(0x1cc);
      break;
    case 8:
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) goto LAB_00762870;
      local_20 = (undefined4 *)FUN_0053e740(0x8a);
    }
    puVar12 = operator_new(0x14);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      *puVar12 = &PTR_LAB_007e38f8;
      puVar12[1] = 0;
      puVar12[2] = 0;
      pvVar6 = operator_new(0x14);
      if ((pvVar6 == (void *)0x0) || (iVar5 = FUN_0053e740(0x1d4), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      }
      puVar12[3] = iVar5;
      if (local_20 == (undefined4 *)0x0) {
        *puVar12 = &PTR_FUN_007e3878;
        puVar12[4] = 0;
      }
      else {
        local_20[2] = local_20[2] + 1;
        puVar12[4] = local_20;
        *puVar12 = &PTR_FUN_007e3878;
      }
    }
    (**(code **)(*unaff_ESI + 0x84))(puVar12);
    puVar12 = puVar14;
  } while( true );
}


