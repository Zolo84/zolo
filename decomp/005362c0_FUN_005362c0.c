// FUN_005362c0 @ 5362c0 size=5219

int __fastcall FUN_005362c0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  void *unaff_EDI;
  int iVar14;
  int iVar15;
  void *local_538;
  int *piStack_534;
  undefined4 local_530;
  int *apiStack_52c [2];
  int *local_524;
  undefined1 auStack_328 [256];
  undefined1 auStack_228 [516];
  void *pvStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c2799;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_530 = param_1;
  piVar2 = operator_new(0x14);
  local_4 = 0;
  local_524 = piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    local_538 = operator_new(0x10);
    local_4._0_1_ = 1;
    if (local_538 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0053ee00(&DAT_00d6139e);
    }
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 2;
    local_538 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((local_538 == (void *)0x0) || (iVar4 = FUN_0053e740(0xe9), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    piVar2[3] = iVar4;
    if (iVar3 == 0) {
      *piVar2 = (int)&PTR_FUN_007e3878;
      piVar2[4] = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      piVar2[4] = iVar3;
      *piVar2 = (int)&PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x70))(param_1,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
  uVar13 = *(undefined4 *)(DAT_00d0ca90 + 6);
  cVar1 = FUN_0042e910();
  if (cVar1 != '\0') {
    uVar13 = 0;
  }
  piVar2 = operator_new(0x14);
  pvStack_c = (void *)0x4;
  apiStack_52c[0] = piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar5 = operator_new(0x1a);
    pvStack_c._0_1_ = 5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      FUN_0053e740(0x523);
      *(undefined2 *)(puVar5 + 5) = 3;
      *(undefined4 *)((int)puVar5 + 0x16) = uVar13;
      *puVar5 = &PTR_FUN_007e3ba4;
    }
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = (int)&PTR_LAB_007e38f8;
    pvStack_c._0_1_ = 6;
    pvVar6 = operator_new(0x14);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,7);
    if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(599), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    piVar2[3] = iVar3;
    if (puVar5 == (undefined4 *)0x0) {
      *piVar2 = (int)&PTR_FUN_007e3878;
      piVar2[4] = 0;
    }
    else {
      puVar5[2] = puVar5[2] + 1;
      piVar2[4] = (int)puVar5;
      *piVar2 = (int)&PTR_FUN_007e3878;
    }
  }
  pvVar6 = local_538;
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar2 + 0x70))(local_538,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
  piVar2 = operator_new(0x14);
  uStack_14 = 8;
  piStack_534 = piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar3 = (**(code **)*DAT_00d685a6)();
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = (int)&PTR_LAB_007e38f8;
    uStack_14._0_1_ = 9;
    unaff_EDI = operator_new(0x14);
    uStack_14 = CONCAT31(uStack_14._1_3_,10);
    if ((unaff_EDI == (void *)0x0) || (iVar4 = FUN_0053e740(0x19c), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    piVar2[3] = iVar4;
    if (iVar3 == 0) {
      *piVar2 = (int)&PTR_FUN_007e3878;
      piVar2[4] = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      piVar2[4] = iVar3;
      *piVar2 = (int)&PTR_FUN_007e3878;
    }
  }
  uStack_14 = 0xffffffff;
  iVar3 = (**(code **)(*piVar2 + 0x70))(pvVar6,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
  if (iVar3 != 0) {
    ExceptionList = pvStack_24;
    return iVar3;
  }
  piVar2 = operator_new(0x14);
  uStack_1c = 0xb;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar3 = FUN_007883d0();
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = (int)&PTR_LAB_007e38f8;
    uStack_1c._0_1_ = 0xc;
    pvVar7 = operator_new(0x14);
    uStack_1c = CONCAT31(uStack_1c._1_3_,0xd);
    if ((pvVar7 == (void *)0x0) || (iVar4 = FUN_0053e740(0xf7), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    }
    piVar2[3] = iVar4;
    if (iVar3 == 0) {
      *piVar2 = (int)&PTR_FUN_007e3878;
      piVar2[4] = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      piVar2[4] = iVar3;
      *piVar2 = (int)&PTR_FUN_007e3878;
    }
  }
  uStack_1c = 0xffffffff;
  uVar13 = FUN_005341fe(0x528);
  FUN_00533df2(0x528,uVar13);
  iVar3 = 2;
  do {
    if (iVar3 == 0) break;
    iVar4 = FUN_00537750(apiStack_52c);
    iVar3 = iVar3 + -1;
  } while (iVar4 == 0);
  iVar3 = (**(code **)(*piVar2 + 0x70))(pvVar6,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
  iVar4 = DAT_00877690;
  if (iVar3 != 0) {
    ExceptionList = pvStack_24;
    return iVar3;
  }
  iVar15 = 0;
  iVar14 = 0;
  iVar3 = 0;
  while (iVar15 < iVar4) {
    iVar8 = iVar14 + DAT_00ab27b4;
    cVar1 = FUN_00561b00();
    if (cVar1 != '\0') {
      piVar2 = operator_new(0x14);
      uStack_1c = 0xe;
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        iVar3 = (*(code *)**(undefined4 **)(iVar8 + 0x16))();
        piVar2[1] = 0;
        piVar2[2] = 0;
        *piVar2 = (int)&PTR_LAB_007e38f8;
        uStack_1c._0_1_ = 0xf;
        pvVar6 = operator_new(0x14);
        uStack_1c = CONCAT31(uStack_1c._1_3_,0x10);
        if ((pvVar6 == (void *)0x0) || (iVar8 = FUN_0053e740(0x1f1), iVar8 == 0)) {
          iVar8 = 0;
        }
        else {
          *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
        }
        piVar2[3] = iVar8;
        if (iVar3 == 0) {
          *piVar2 = (int)&PTR_FUN_007e3878;
          piVar2[4] = 0;
        }
        else {
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
          piVar2[4] = iVar3;
          *piVar2 = (int)&PTR_FUN_007e3878;
        }
      }
      uStack_1c = 0xffffffff;
      uVar13 = FUN_005341fe(0x528);
      FUN_00533df2(0x528,uVar13);
      iVar3 = 2;
      do {
        if (iVar3 == 0) break;
        iVar8 = FUN_00537750(apiStack_52c);
        iVar3 = iVar3 + -1;
      } while (iVar8 == 0);
      iVar3 = (**(code **)(*piVar2 + 0x70))(unaff_EDI,0);
      if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)(1);
      }
    }
    iVar15 = iVar15 + 1;
    iVar14 = iVar14 + 0x4b2;
    if (iVar3 != 0) {
      ExceptionList = pvStack_24;
      return iVar3;
    }
  }
  if (iVar3 != 0) {
    ExceptionList = pvStack_24;
    return iVar3;
  }
  uVar13 = FUN_005341fe(0x528);
  FUN_00533df2(0x528,uVar13);
  iVar3 = FUN_00537750(apiStack_52c);
  if (iVar3 != 0) {
    ExceptionList = pvStack_24;
    return iVar3;
  }
  piVar2 = &DAT_0089cad8;
  iVar3 = 0;
  while ((int)piVar2 < 0x89d038) {
    iVar4 = *piVar2;
    if (iVar4 != 0) {
      piVar9 = operator_new(0x14);
      uStack_1c = 0x11;
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        iVar3 = (*(code *)**(undefined4 **)(iVar4 + 10))();
        piVar9[1] = 0;
        piVar9[2] = 0;
        *piVar9 = (int)&PTR_LAB_007e38f8;
        uStack_1c._0_1_ = 0x12;
        pvVar6 = operator_new(0x14);
        uStack_1c = CONCAT31(uStack_1c._1_3_,0x13);
        if ((pvVar6 == (void *)0x0) || (iVar4 = FUN_0053e740(0xec), iVar4 == 0)) {
          iVar4 = 0;
        }
        else {
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        }
        piVar9[3] = iVar4;
        if (iVar3 == 0) {
          *piVar9 = (int)&PTR_FUN_007e3878;
          piVar9[4] = 0;
        }
        else {
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
          piVar9[4] = iVar3;
          *piVar9 = (int)&PTR_FUN_007e3878;
        }
      }
      uStack_1c = 0xffffffff;
      uVar13 = FUN_005341fe(0x528);
      FUN_00533df2(0x528,uVar13);
      iVar3 = 2;
      do {
        if (iVar3 == 0) break;
        iVar4 = FUN_00537750(apiStack_52c);
        iVar3 = iVar3 + -1;
      } while (iVar4 == 0);
      iVar3 = (**(code **)(*piVar9 + 0x70))(unaff_EDI,0);
      if (piVar9 != (int *)0x0) {
        (**(code **)*piVar9)(1);
      }
    }
    piVar2 = piVar2 + 1;
    if (iVar3 != 0) {
      ExceptionList = pvStack_24;
      return iVar3;
    }
  }
  if (iVar3 != 0) {
    ExceptionList = pvStack_24;
    return iVar3;
  }
  piVar2 = operator_new(0x14);
  uStack_1c = 0x14;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    pvVar6 = operator_new(0x1e);
    uStack_1c._0_1_ = 0x15;
    if (pvVar6 == (void *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)FUN_00538860();
    }
    uStack_1c._0_1_ = 0x14;
    pvVar6 = operator_new(0x14);
    uStack_1c._0_1_ = 0x16;
    if (pvVar6 == (void *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0x28;
      FUN_0064eb30(0x28);
      piVar10 = (int *)FUN_00594290(uVar13);
      uVar13 = (**(code **)(*piVar10 + 0x30))();
      uVar13 = FUN_004441b0(0xe8,uVar13);
    }
    uStack_1c._0_1_ = 0x14;
    (**(code **)(*piVar9 + 0x84))(uVar13);
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = (int)&PTR_LAB_007e38f8;
    uStack_1c._0_1_ = 0x17;
    pvVar6 = operator_new(0x14);
    uStack_1c = CONCAT31(uStack_1c._1_3_,0x18);
    if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(0x236), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    piVar2[3] = iVar3;
    if (piVar9 == (int *)0x0) {
      *piVar2 = (int)&PTR_FUN_007e3878;
      piVar2[4] = 0;
    }
    else {
      piVar9[2] = piVar9[2] + 1;
      piVar2[4] = (int)piVar9;
      *piVar2 = (int)&PTR_FUN_007e3878;
    }
  }
  uStack_1c = 0xffffffff;
  uVar13 = FUN_005341fe(0x528);
  FUN_00533df2(0x528,uVar13);
  iVar3 = 2;
  do {
    if (iVar3 == 0) break;
    iVar4 = FUN_00537750(apiStack_52c);
    iVar3 = iVar3 + -1;
  } while (iVar4 == 0);
  iVar3 = (**(code **)(*piVar2 + 0x70))(unaff_EDI,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
  if (iVar3 == 0) {
    piVar2 = operator_new(0x14);
    uStack_1c = 0x19;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      iVar3 = FUN_004e1ad0();
      piVar2[1] = 0;
      piVar2[2] = 0;
      *piVar2 = (int)&PTR_LAB_007e38f8;
      uStack_1c._0_1_ = 0x1a;
      pvVar6 = operator_new(0x14);
      uStack_1c = CONCAT31(uStack_1c._1_3_,0x1b);
      if ((pvVar6 == (void *)0x0) || (iVar4 = FUN_0053e740(0x249), iVar4 == 0)) {
        iVar4 = 0;
      }
      else {
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
      piVar2[3] = iVar4;
      if (iVar3 == 0) {
        *piVar2 = (int)&PTR_FUN_007e3878;
        piVar2[4] = 0;
      }
      else {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        piVar2[4] = iVar3;
        *piVar2 = (int)&PTR_FUN_007e3878;
      }
    }
    uStack_1c = 0xffffffff;
    uVar13 = FUN_005341fe(0x528);
    FUN_00533df2(0x528,uVar13);
    iVar3 = 2;
    do {
      if (iVar3 == 0) break;
      iVar4 = FUN_00537750(apiStack_52c);
      iVar3 = iVar3 + -1;
    } while (iVar4 == 0);
    iVar3 = (**(code **)(*piVar2 + 0x70))(unaff_EDI,0);
    if (piVar2 != (int *)0x0) {
      (**(code **)*piVar2)(1);
    }
    if (iVar3 == 0) {
      iVar3 = *(int *)(DAT_00d615b2 + 0x1d4fa);
      piVar2 = operator_new(0x1e);
      uStack_1c = 0x1c;
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        FUN_00444030(2);
        *piVar2 = (int)&PTR_FUN_007e492c;
        uStack_1c = CONCAT31(uStack_1c._1_3_,0x1d);
        FUN_00444250();
        *piVar2 = (int)&PTR_FUN_007e3a28;
        piVar2[3] = (int)&PTR_LAB_007e39f8;
      }
      uStack_1c = 0xffffffff;
      while (iVar3 != 0) {
        puVar5 = operator_new(0x10);
        uStack_1c = 0x1e;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          iVar4 = *(int *)(iVar3 + 10);
          uVar13 = *(undefined4 *)(iVar3 + 2);
          FUN_004252e0(4);
          puVar5[3] = uVar13;
          *puVar5 = &PTR_FUN_007e3978;
          iVar3 = iVar4;
        }
        uStack_1c = 0xffffffff;
        (**(code **)(*piVar2 + 0x84))(puVar5);
      }
      piVar9 = operator_new(0x14);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9[1] = 0;
        piVar9[2] = 0;
        *piVar9 = (int)&PTR_LAB_007e38f8;
        uStack_1c._0_1_ = 0x20;
        uStack_1c._1_3_ = 0;
        pvVar6 = operator_new(0x14);
        uStack_1c = CONCAT31(uStack_1c._1_3_,0x21);
        if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(0xe8), iVar3 == 0)) {
          iVar3 = 0;
        }
        else {
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
        }
        piVar9[3] = iVar3;
        if (piVar2 == (int *)0x0) {
          *piVar9 = (int)&PTR_FUN_007e3878;
          piVar9[4] = 0;
        }
        else {
          piVar2[2] = piVar2[2] + 1;
          piVar9[4] = (int)piVar2;
          *piVar9 = (int)&PTR_FUN_007e3878;
        }
      }
      uStack_1c = 0xffffffff;
      uVar13 = FUN_005341fe(0x528);
      FUN_00533df2(0x528,uVar13);
      iVar3 = 2;
      do {
        if (iVar3 == 0) break;
        iVar4 = FUN_00537750(apiStack_52c);
        iVar3 = iVar3 + -1;
      } while (iVar4 == 0);
      iVar3 = (**(code **)(*piVar9 + 0x70))(unaff_EDI,0);
      if (piVar9 != (int *)0x0) {
        (**(code **)*piVar9)(1);
      }
      if (iVar3 == 0) {
        iVar3 = *(int *)(DAT_00d615b2 + 0x1d4e8);
        piVar2 = operator_new(0x1e);
        uStack_1c = 0x22;
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          FUN_00444030(2);
          *piVar2 = (int)&PTR_FUN_007e492c;
          uStack_1c = CONCAT31(uStack_1c._1_3_,0x23);
          FUN_00444250();
          *piVar2 = (int)&PTR_FUN_007e3a28;
          piVar2[3] = (int)&PTR_LAB_007e39f8;
        }
        uStack_1c = 0xffffffff;
        while (iVar3 != 0) {
          puVar5 = operator_new(0x10);
          uStack_1c = 0x24;
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            iVar4 = *(int *)(iVar3 + 10);
            uVar13 = *(undefined4 *)(iVar3 + 2);
            FUN_004252e0(4);
            puVar5[3] = uVar13;
            *puVar5 = &PTR_FUN_007e3978;
            iVar3 = iVar4;
          }
          uStack_1c = 0xffffffff;
          (**(code **)(*piVar2 + 0x84))(puVar5);
        }
        piVar9 = operator_new(0x14);
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9[1] = 0;
          piVar9[2] = 0;
          *piVar9 = (int)&PTR_LAB_007e38f8;
          uStack_1c._0_1_ = 0x26;
          uStack_1c._1_3_ = 0;
          pvVar6 = operator_new(0x14);
          uStack_1c = CONCAT31(uStack_1c._1_3_,0x27);
          if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(0x1f8), iVar3 == 0)) {
            iVar3 = 0;
          }
          else {
            *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
          }
          piVar9[3] = iVar3;
          if (piVar2 == (int *)0x0) {
            *piVar9 = (int)&PTR_FUN_007e3878;
            piVar9[4] = 0;
          }
          else {
            piVar2[2] = piVar2[2] + 1;
            piVar9[4] = (int)piVar2;
            *piVar9 = (int)&PTR_FUN_007e3878;
          }
        }
        uStack_1c = 0xffffffff;
        uVar13 = FUN_005341fe(0x528);
        FUN_00533df2(0x528,uVar13);
        iVar3 = 2;
        do {
          if (iVar3 == 0) break;
          iVar4 = FUN_00537750(apiStack_52c);
          iVar3 = iVar3 + -1;
        } while (iVar4 == 0);
        iVar3 = (**(code **)(*piVar9 + 0x70))(unaff_EDI,0);
        if (piVar9 != (int *)0x0) {
          (**(code **)*piVar9)(1);
        }
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*(int *)(DAT_00d615b2 + 0x1d508) + 4))();
          if (0 < iVar3) {
            piVar2 = operator_new(0x1e);
            uStack_1c = 0x28;
            if (piVar2 == (int *)0x0) {
              piVar2 = (int *)0x0;
            }
            else {
              FUN_00444030(2);
              *piVar2 = (int)&PTR_FUN_007e492c;
              uStack_1c = CONCAT31(uStack_1c._1_3_,0x29);
              FUN_00444250();
              *piVar2 = (int)&PTR_FUN_007e3a28;
              piVar2[3] = (int)&PTR_LAB_007e39f8;
            }
            uStack_1c = 0xffffffff;
            piVar9 = *(int **)(DAT_00d615b2 + 0x1d50c);
            while (piVar9 != (int *)0x0) {
              piVar10 = (int *)piVar9[2];
              puVar5 = (undefined4 *)*piVar9;
              wsprintfA((LPSTR)&local_538,&DAT_008390a0,*puVar5);
              puVar11 = operator_new(0x14);
              uStack_1c = 0x2a;
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = (undefined4 *)0x0;
              }
              else {
                puVar12 = operator_new(0x10);
                uStack_1c._0_1_ = 0x2b;
                if (puVar12 == (undefined4 *)0x0) {
                  puVar12 = (undefined4 *)0x0;
                }
                else {
                  iVar3 = puVar5[1] + DAT_00dc153c;
                  FUN_004252e0(4);
                  puVar12[3] = iVar3;
                  *puVar12 = &PTR_FUN_007e3978;
                }
                uStack_1c._0_1_ = 0x2a;
                pvVar6 = operator_new(0x14);
                uStack_1c = CONCAT31(uStack_1c._1_3_,0x2c);
                if (pvVar6 == (void *)0x0) {
                  iVar3 = 0;
                }
                else {
                  iVar3 = FUN_0053e770(&local_538);
                }
                puVar11[1] = 0xd;
                puVar11[2] = 0;
                *puVar11 = &PTR_LAB_007e38f8;
                if (iVar3 == 0) {
                  iVar3 = 0;
                }
                else {
                  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
                }
                puVar11[3] = iVar3;
                if (puVar12 == (undefined4 *)0x0) {
                  *puVar11 = &PTR_FUN_007e3878;
                  puVar11[4] = 0;
                }
                else {
                  puVar12[2] = puVar12[2] + 1;
                  puVar11[4] = puVar12;
                  *puVar11 = &PTR_FUN_007e3878;
                }
              }
              uStack_1c = 0xffffffff;
              (**(code **)(*piVar2 + 0x84))(puVar11);
              piVar9 = piVar10;
            }
            piVar9 = operator_new(0x14);
            if (piVar9 == (int *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9[1] = 0;
              piVar9[2] = 0;
              *piVar9 = (int)&PTR_LAB_007e38f8;
              uStack_1c._0_1_ = 0x2e;
              uStack_1c._1_3_ = 0;
              pvVar6 = operator_new(0x14);
              uStack_1c = CONCAT31(uStack_1c._1_3_,0x2f);
              if ((pvVar6 == (void *)0x0) || (iVar3 = FUN_0053e740(0x574), iVar3 == 0)) {
                iVar3 = 0;
              }
              else {
                *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
              }
              piVar9[3] = iVar3;
              if (piVar2 == (int *)0x0) {
                *piVar9 = (int)&PTR_FUN_007e3878;
                piVar9[4] = 0;
              }
              else {
                piVar2[2] = piVar2[2] + 1;
                piVar9[4] = (int)piVar2;
                *piVar9 = (int)&PTR_FUN_007e3878;
              }
            }
            uStack_1c = 0xffffffff;
            uVar13 = FUN_005341fe(0x528);
            FUN_00533df2(0x528,uVar13);
            iVar3 = 2;
            do {
              if (iVar3 == 0) break;
              iVar4 = FUN_00537750(apiStack_52c);
              iVar3 = iVar3 + -1;
            } while (iVar4 == 0);
            iVar3 = (**(code **)(*piVar9 + 0x70))(unaff_EDI,0);
            if (piVar9 != (int *)0x0) {
              (**(code **)*piVar9)(1);
            }
            if (iVar3 != 0) {
              ExceptionList = pvStack_24;
              return iVar3;
            }
          }
          puVar5 = *(undefined4 **)(DAT_00d615b2 + 0x1d4d6);
          puVar11 = operator_new(0x1e);
          uStack_1c = 0x30;
          if (puVar11 != (undefined4 *)0x0) {
            FUN_00444030(2);
            *puVar11 = &PTR_FUN_007e492c;
            uStack_1c = CONCAT31(uStack_1c._1_3_,0x31);
            FUN_00444250();
            puVar11[3] = &PTR_LAB_007e39f8;
            *puVar11 = &PTR_FUN_007e3a28;
          }
          uStack_1c = 0xffffffff;
          if (puVar5 != (undefined4 *)0x0) {
            do {
              puVar11 = (undefined4 *)puVar5[2];
              FUN_00429d20(*puVar5,auStack_328);
              piVar2 = operator_new(0x14);
              uStack_1c = 0x32;
              if (piVar2 == (int *)0x0) {
                piVar2 = (int *)0x0;
              }
              else {
                pvVar6 = operator_new(0x10);
                uStack_1c._0_1_ = 0x33;
                if (pvVar6 == (void *)0x0) {
                  iVar3 = 0;
                }
                else {
                  uVar13 = FUN_007a8d6d(auStack_328);
                  iVar3 = FUN_0053ee00(uVar13);
                }
                piVar2[1] = 0;
                piVar2[2] = 0;
                *piVar2 = (int)&PTR_LAB_007e38f8;
                uStack_1c._0_1_ = 0x34;
                pvVar6 = operator_new(0x14);
                uStack_1c = CONCAT31(uStack_1c._1_3_,0x35);
                if ((pvVar6 == (void *)0x0) || (iVar4 = FUN_0053e740(0x1f7), iVar4 == 0)) {
                  iVar4 = 0;
                }
                else {
                  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
                }
                piVar2[3] = iVar4;
                if (iVar3 == 0) {
                  *piVar2 = (int)&PTR_FUN_007e3878;
                  piVar2[4] = 0;
                }
                else {
                  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
                  piVar2[4] = iVar3;
                  *piVar2 = (int)&PTR_FUN_007e3878;
                }
              }
              uStack_1c = 0xffffffff;
              uVar13 = FUN_005341fe(0x528);
              FUN_00533df2(0x528,uVar13);
              iVar3 = 2;
              do {
                if (iVar3 == 0) break;
                iVar4 = FUN_00537750(apiStack_52c);
                iVar3 = iVar3 + -1;
              } while (iVar4 == 0);
              iVar3 = (**(code **)(*piVar2 + 0x70))(unaff_EDI,0);
              if (piVar2 != (int *)0x0) {
                (**(code **)*piVar2)(1);
              }
              puVar5 = puVar11;
            } while (puVar11 != (undefined4 *)0x0);
            if (iVar3 != 0) {
              ExceptionList = pvStack_24;
              return iVar3;
            }
          }
          cVar1 = FUN_0042e910();
          if (cVar1 == '\0') {
            piVar2 = operator_new(0x14);
            uStack_1c = 0x36;
            if (piVar2 == (int *)0x0) {
              piVar2 = (int *)0x0;
            }
            else {
              iVar3 = FUN_00537bc0();
              piVar2[1] = 0;
              piVar2[2] = 0;
              *piVar2 = (int)&PTR_LAB_007e38f8;
              uStack_1c._0_1_ = 0x37;
              pvVar6 = operator_new(0x14);
              uStack_1c = CONCAT31(uStack_1c._1_3_,0x38);
              if ((pvVar6 == (void *)0x0) || (iVar4 = FUN_0053e740(0x246), iVar4 == 0)) {
                iVar4 = 0;
              }
              else {
                *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
              }
              piVar2[3] = iVar4;
              if (iVar3 == 0) {
                *piVar2 = (int)&PTR_FUN_007e3878;
                piVar2[4] = 0;
              }
              else {
                *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
                piVar2[4] = iVar3;
                *piVar2 = (int)&PTR_FUN_007e3878;
              }
            }
            uStack_1c = 0xffffffff;
            uVar13 = FUN_005341fe(0x528);
            FUN_00533df2(0x528,uVar13);
            FUN_005377e0(apiStack_52c,2);
            iVar3 = (**(code **)(*piVar2 + 0x70))(unaff_EDI,0);
            if (piVar2 != (int *)0x0) {
              (**(code **)*piVar2)(1);
            }
            if (iVar3 != 0) {
              ExceptionList = pvStack_24;
              return iVar3;
            }
          }
          iVar3 = 0;
          iVar4 = 1;
          if (1 < DAT_00877690) {
            do {
              iVar14 = FUN_004e9370(iVar4);
              cVar1 = FUN_004e46e0();
              if (cVar1 != '\0') {
                iVar14 = *(int *)(*(int *)(iVar14 + 0x1aa) + 4);
                while ((iVar14 != 0 && (iVar3 == 0))) {
                  piVar2 = operator_new(0x14);
                  uStack_1c = 0x39;
                  if (piVar2 == (int *)0x0) {
                    piVar2 = (int *)0x0;
                  }
                  else {
                    iVar14 = *(int *)(iVar14 + 8);
                    iVar3 = FUN_004ba8e0();
                    piVar2[1] = 0;
                    piVar2[2] = 0;
                    *piVar2 = (int)&PTR_LAB_007e38f8;
                    uStack_1c._0_1_ = 0x3a;
                    pvVar6 = operator_new(0x14);
                    uStack_1c = CONCAT31(uStack_1c._1_3_,0x3b);
                    if ((pvVar6 == (void *)0x0) || (iVar15 = FUN_0053e740(0x24e), iVar15 == 0)) {
                      iVar15 = 0;
                    }
                    else {
                      *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 1;
                    }
                    piVar2[3] = iVar15;
                    if (iVar3 == 0) {
                      *piVar2 = (int)&PTR_FUN_007e3878;
                      piVar2[4] = 0;
                    }
                    else {
                      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
                      piVar2[4] = iVar3;
                      *piVar2 = (int)&PTR_FUN_007e3878;
                    }
                  }
                  uStack_1c = 0xffffffff;
                  uVar13 = FUN_005341fe(0x528);
                  FUN_00533df2(0x528,uVar13);
                  iVar3 = 2;
                  do {
                    if (iVar3 == 0) break;
                    iVar15 = FUN_00537750(apiStack_52c);
                    iVar3 = iVar3 + -1;
                  } while (iVar15 == 0);
                  iVar3 = (**(code **)(*piVar2 + 0x70))(unaff_EDI,0);
                  if (piVar2 != (int *)0x0) {
                    (**(code **)*piVar2)(1);
                  }
                }
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < DAT_00877690);
            if (iVar3 != 0) {
              ExceptionList = pvStack_24;
              return iVar3;
            }
          }
          piVar2 = operator_new(0x14);
          uStack_1c = 0x3c;
          if (piVar2 == (int *)0x0) {
            piVar2 = (int *)0x0;
          }
          else {
            iVar3 = FUN_004b34a0();
            piVar2[1] = 0;
            piVar2[2] = 0;
            *piVar2 = (int)&PTR_LAB_007e38f8;
            uStack_1c._0_1_ = 0x3d;
            pvVar6 = operator_new(0x14);
            uStack_1c = CONCAT31(uStack_1c._1_3_,0x3e);
            if ((pvVar6 == (void *)0x0) || (iVar4 = FUN_0053e740(0x4eb), iVar4 == 0)) {
              iVar4 = 0;
            }
            else {
              *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
            }
            piVar2[3] = iVar4;
            if (iVar3 == 0) {
              *piVar2 = (int)&PTR_FUN_007e3878;
              piVar2[4] = 0;
            }
            else {
              *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
              piVar2[4] = iVar3;
              *piVar2 = (int)&PTR_FUN_007e3878;
            }
          }
          uStack_1c = 0xffffffff;
          uVar13 = FUN_005341fe(0x528);
          FUN_00533df2(0x528,uVar13);
          iVar3 = 2;
          do {
            if (iVar3 == 0) break;
            iVar4 = FUN_00537750(auStack_228);
            iVar3 = iVar3 + -1;
          } while (iVar4 == 0);
          iVar3 = (**(code **)(*piVar2 + 0x70))(unaff_EDI,0);
          if (piVar2 != (int *)0x0) {
            (**(code **)*piVar2)(1);
          }
        }
      }
    }
  }
  ExceptionList = pvStack_24;
  return iVar3;
}


