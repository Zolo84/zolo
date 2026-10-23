// FUN_00556b70 @ 556b70 size=5265

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_00556b70(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  void *pvVar13;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar14;
  int unaff_EDI;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c565d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x1e);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar1 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *piVar1 = (int)&PTR_FUN_007e3a28;
    piVar1[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  uVar2 = FUN_0054f830();
  FUN_0053ea00(uVar2);
  if (DAT_0087768c == '\0') {
    if (*(int *)(param_1 + 0x11e) != 0x8c) {
      puVar5 = operator_new(0x14);
      local_4 = 0x18;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar4 = operator_new(0x10);
        local_4._0_1_ = 0x19;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          FUN_004252e0(4);
          puVar4[3] = uVar2;
          *puVar4 = &PTR_FUN_007e3978;
        }
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 0x1a;
        pvVar6 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0x1b);
        if (pvVar6 == (void *)0x0) {
LAB_005572d4:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xc1);
          if (iVar14 == 0) goto LAB_005572d4;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        puVar5[3] = iVar14;
        if (puVar4 == (undefined4 *)0x0) {
          *puVar5 = &PTR_FUN_007e3878;
          puVar5[4] = 0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
          puVar5[4] = puVar4;
          *puVar5 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar1 + 0x84))();
      piVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x1c;
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        puVar4 = operator_new(0x10);
        puStack_8._0_1_ = 0x1d;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)(unaff_EBX + 0xf6);
          FUN_004252e0(5);
          *puVar4 = &PTR_FUN_007e48ac;
          puVar4[3] = uVar2;
        }
        piVar3[1] = 0;
        piVar3[2] = 0;
        *piVar3 = (int)&PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x1e;
        pvVar6 = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1f);
        if (pvVar6 == (void *)0x0) {
LAB_005573b4:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xc6);
          if (iVar14 == 0) goto LAB_005573b4;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        piVar3[3] = iVar14;
        if (puVar4 == (undefined4 *)0x0) {
          *piVar3 = (int)&PTR_FUN_007e3878;
          piVar3[4] = 0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
          piVar3[4] = (int)puVar4;
          *piVar3 = (int)&PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*piVar1 + 0x84))();
      piVar7 = operator_new(0x14);
      local_c = (void *)0x20;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        puVar4 = operator_new(0x10);
        local_c._0_1_ = 0x21;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)(unaff_EBP + 0xfa);
          FUN_004252e0(5);
          *puVar4 = &PTR_FUN_007e48ac;
          puVar4[3] = uVar2;
        }
        piVar7[1] = 0;
        piVar7[2] = 0;
        *piVar7 = (int)&PTR_LAB_007e38f8;
        local_c._0_1_ = 0x22;
        pvVar6 = operator_new(0x14);
        local_c = (void *)CONCAT31(local_c._1_3_,0x23);
        if (pvVar6 == (void *)0x0) {
LAB_00557490:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(199);
          if (iVar14 == 0) goto LAB_00557490;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        piVar7[3] = iVar14;
        if (puVar4 == (undefined4 *)0x0) {
          *piVar7 = (int)&PTR_FUN_007e3878;
          piVar7[4] = 0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
          piVar7[4] = (int)puVar4;
          *piVar7 = (int)&PTR_FUN_007e3878;
        }
      }
      local_c = (void *)0xffffffff;
      (**(code **)(*piVar1 + 0x84))();
      piVar8 = operator_new(0x14);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        puVar4 = operator_new(0x10);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)(unaff_ESI + 0x2ba);
          FUN_004252e0(5);
          *puVar4 = &PTR_FUN_007e48ac;
          puVar4[3] = uVar2;
        }
        piVar8[1] = 0;
        piVar8[2] = 0;
        *piVar8 = (int)&PTR_LAB_007e38f8;
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_0055756c:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xd2);
          if (iVar14 == 0) goto LAB_0055756c;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        piVar8[3] = iVar14;
        if (puVar4 == (undefined4 *)0x0) {
          *piVar8 = (int)&PTR_FUN_007e3878;
          piVar8[4] = 0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
          piVar8[4] = (int)puVar4;
          *piVar8 = (int)&PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar1 + 0x84))();
      piVar9 = operator_new(0x14);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        puVar4 = operator_new(0x10);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)(unaff_EDI + 0x2be);
          FUN_004252e0(5);
          *puVar4 = &PTR_FUN_007e48ac;
          puVar4[3] = uVar2;
        }
        piVar9[1] = 0;
        piVar9[2] = 0;
        *piVar9 = (int)&PTR_LAB_007e38f8;
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_00557648:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xd3);
          if (iVar14 == 0) goto LAB_00557648;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        piVar9[3] = iVar14;
        if (puVar4 == (undefined4 *)0x0) {
          *piVar9 = (int)&PTR_FUN_007e3878;
          piVar9[4] = 0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
          piVar9[4] = (int)puVar4;
          *piVar9 = (int)&PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar1 + 0x84))();
      piVar10 = operator_new(0x14);
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        puVar4 = operator_new(0x10);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)((int)puVar5 + 0x2c2);
          FUN_004252e0(5);
          *puVar4 = &PTR_FUN_007e48ac;
          puVar4[3] = uVar2;
        }
        piVar10[1] = 0;
        piVar10[2] = 0;
        *piVar10 = (int)&PTR_LAB_007e38f8;
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_00557724:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xd4);
          if (iVar14 == 0) goto LAB_00557724;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        piVar10[3] = iVar14;
        if (puVar4 == (undefined4 *)0x0) {
          *piVar10 = (int)&PTR_FUN_007e3878;
          piVar10[4] = 0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
          piVar10[4] = (int)puVar4;
          *piVar10 = (int)&PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar1 + 0x84))();
      puVar5 = operator_new(0x14);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar4 = operator_new(0x10);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)((int)piVar3 + 0x2ca);
          FUN_004252e0(5);
          *puVar4 = &PTR_FUN_007e48ac;
          puVar4[3] = uVar2;
        }
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = &PTR_LAB_007e38f8;
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_00557800:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xda);
          if (iVar14 == 0) goto LAB_00557800;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        puVar5[3] = iVar14;
        if (puVar4 == (undefined4 *)0x0) {
          *puVar5 = &PTR_FUN_007e3878;
          puVar5[4] = 0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
          puVar5[4] = puVar4;
          *puVar5 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar1 + 0x84))();
      puVar4 = operator_new(0x14);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar11 = operator_new(0x10);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          piVar1 = piVar3;
          FUN_004252e0(4);
          puVar11[3] = uVar2;
          *puVar11 = &PTR_FUN_007e3978;
        }
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = &PTR_LAB_007e38f8;
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_005578df:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xdb);
          if (iVar14 == 0) goto LAB_005578df;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        puVar4[3] = iVar14;
        if (puVar11 == (undefined4 *)0x0) {
          *puVar4 = &PTR_FUN_007e3878;
          puVar4[4] = 0;
        }
        else {
          puVar11[2] = puVar11[2] + 1;
          puVar4[4] = puVar11;
          *puVar4 = &PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar1 + 0x84))();
      puVar11 = operator_new(0x14);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        puVar12 = operator_new(0x10);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          FUN_00444030(4);
          puVar12[3] = uVar2;
          *puVar12 = &PTR_FUN_007e3978;
        }
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = &PTR_LAB_007e38f8;
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_005579ba:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xcc);
          if (iVar14 == 0) goto LAB_005579ba;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        puVar11[3] = iVar14;
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
      (**(code **)(*piVar7 + 0x84))(puVar11);
      puVar11 = operator_new(0x14);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        puVar12 = operator_new(0x10);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          piVar7 = piVar8;
          FUN_00444030(4);
          puVar12[3] = uVar2;
          *puVar12 = &PTR_FUN_007e3978;
        }
        FUN_004252e0(0);
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_00557a9e:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xdc);
          if (iVar14 == 0) goto LAB_00557a9e;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        puVar11[3] = iVar14;
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
      (**(code **)(*piVar7 + 0x84))(puVar11);
      if (*(float *)((int)piVar10 + 0x2d6) != _DAT_007e3380) {
        puVar11 = operator_new(0x14);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          puVar12 = operator_new(0x10);
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            uVar2 = __ftol();
            FUN_00444030(4);
            puVar12[3] = uVar2;
            *puVar12 = &PTR_FUN_007e3978;
          }
          FUN_004252e0(0);
          pvVar6 = operator_new(0x14);
          if (pvVar6 == (void *)0x0) {
LAB_00557b97:
            iVar14 = 0;
          }
          else {
            iVar14 = FUN_0053e740(0xdd);
            if (iVar14 == 0) goto LAB_00557b97;
            *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
          }
          puVar11[3] = iVar14;
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
        (**(code **)(*piVar9 + 0x84))(puVar11);
      }
      puVar11 = operator_new(0x14);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        puVar12 = operator_new(0x10);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          FUN_00444030(4);
          puVar12[3] = uVar2;
          *puVar12 = &PTR_FUN_007e3978;
        }
        FUN_004252e0(0);
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_00557c77:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xde);
          if (iVar14 == 0) goto LAB_00557c77;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        puVar11[3] = iVar14;
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
      (**(code **)(*piVar9 + 0x84))(puVar11);
      if (*(float *)((int)puVar5 + 0x2de) == _DAT_007e3380) goto LAB_00557db9;
      puVar11 = operator_new(0x14);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
        piVar9 = piVar10;
      }
      else {
        puVar12 = operator_new(0x10);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          FUN_00444030(4);
          puVar12[3] = uVar2;
          *puVar12 = &PTR_FUN_007e3978;
        }
        FUN_004252e0(0);
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_00557d74:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xdf);
          if (iVar14 == 0) goto LAB_00557d74;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        puVar11[3] = iVar14;
        piVar9 = piVar10;
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
      (**(code **)(*piVar9 + 0x84))(puVar11);
      piVar10 = piVar9;
LAB_00557db9:
      if (*(float *)((int)puVar5 + 0x106) != _DAT_007e3380) {
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          puVar11 = operator_new(0x10);
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = (undefined4 *)0x0;
          }
          else {
            uVar2 = __ftol();
            FUN_00444030(4);
            puVar11[3] = uVar2;
            *puVar11 = &PTR_FUN_007e3978;
          }
          uVar2 = FUN_004441b0(0xd0,puVar11);
        }
        (**(code **)(*piVar9 + 0x84))(uVar2);
      }
      if (*(float *)((int)puVar5 + 0x2e2) != _DAT_007e3380) {
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          pvVar6 = operator_new(0x10);
          if (pvVar6 == (void *)0x0) {
            uVar2 = 0;
          }
          else {
            uVar2 = __ftol();
            uVar2 = FUN_00516850(uVar2);
          }
          uVar2 = FUN_004441b0(0xe0,uVar2);
        }
        (**(code **)(*piVar10 + 0x84))(uVar2);
      }
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        pvVar6 = operator_new(0x10);
        if (pvVar6 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = __ftol();
          uVar2 = FUN_00516850(uVar2);
        }
        uVar2 = FUN_004441b0(0xd8,uVar2);
      }
      (**(code **)(*piVar10 + 0x84))(uVar2);
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        pvVar13 = operator_new(0x10);
        if (pvVar13 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_004440b0(*(undefined4 *)((int)puVar4 + 0x2c6));
        }
        uVar2 = FUN_004441b0(400,uVar2);
      }
      (**(code **)(*piVar10 + 0x84))(uVar2);
      ExceptionList = pvVar6;
      return piVar10;
    }
    if (*(float *)(param_1 + 0x2ce) != _DAT_007e3380) {
      puVar5 = operator_new(0x14);
      local_4 = 7;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar4 = operator_new(0x10);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          puVar4[1] = 4;
          puVar4[2] = 0;
          puVar4[3] = uVar2;
          *puVar4 = &PTR_FUN_007e3978;
        }
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 8;
        pvVar6 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,9);
        if (pvVar6 == (void *)0x0) {
LAB_00556e0a:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xdb);
          if (iVar14 == 0) goto LAB_00556e0a;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        puVar5[3] = iVar14;
        if (puVar4 == (undefined4 *)0x0) {
          *puVar5 = &PTR_FUN_007e3878;
          puVar5[4] = 0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
          puVar5[4] = puVar4;
          *puVar5 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar1 + 0x84))(puVar5);
    }
    if (*(float *)(param_1 + 0x102) != _DAT_007e3380) {
      puVar5 = operator_new(0x14);
      local_4 = 10;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar4 = operator_new(0x10);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          puVar4[1] = 4;
          puVar4[2] = 0;
          puVar4[3] = uVar2;
          *puVar4 = &PTR_FUN_007e3978;
        }
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 0xb;
        pvVar6 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0xc);
        if (pvVar6 == (void *)0x0) {
LAB_00556efa:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xcc);
          if (iVar14 == 0) goto LAB_00556efa;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        puVar5[3] = iVar14;
        if (puVar4 == (undefined4 *)0x0) {
          *puVar5 = &PTR_FUN_007e3878;
          puVar5[4] = 0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
          puVar5[4] = puVar4;
          *puVar5 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar1 + 0x84))(puVar5);
    }
    if (*(float *)(param_1 + 0x2d2) != _DAT_007e3380) {
      puVar5 = operator_new(0x14);
      local_4 = 0xd;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar4 = operator_new(0x10);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          puVar4[1] = 4;
          puVar4[2] = 0;
          puVar4[3] = uVar2;
          *puVar4 = &PTR_FUN_007e3978;
        }
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 0xe;
        pvVar6 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0xf);
        if (pvVar6 == (void *)0x0) {
LAB_00556fea:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xdc);
          if (iVar14 == 0) goto LAB_00556fea;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        puVar5[3] = iVar14;
        if (puVar4 == (undefined4 *)0x0) {
          *puVar5 = &PTR_FUN_007e3878;
          puVar5[4] = 0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
          puVar5[4] = puVar4;
          *puVar5 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar1 + 0x84))(puVar5);
    }
    if (*(float *)(param_1 + 0x106) != _DAT_007e3380) {
      puVar5 = operator_new(0x14);
      local_4 = 0x10;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar4 = operator_new(0x10);
        local_4._0_1_ = 0x11;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          FUN_004252e0(4);
          puVar4[3] = uVar2;
          *puVar4 = &PTR_FUN_007e3978;
        }
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = &PTR_LAB_007e38f8;
        local_4._0_1_ = 0x12;
        pvVar6 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0x13);
        if (pvVar6 == (void *)0x0) {
LAB_005570e4:
          iVar14 = 0;
        }
        else {
          iVar14 = FUN_0053e740(0xd0);
          if (iVar14 == 0) goto LAB_005570e4;
          *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
        }
        puVar5[3] = iVar14;
        if (puVar4 == (undefined4 *)0x0) {
          *puVar5 = &PTR_FUN_007e3878;
          puVar5[4] = 0;
        }
        else {
          puVar4[2] = puVar4[2] + 1;
          puVar5[4] = puVar4;
          *puVar5 = &PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar1 + 0x84))(puVar5);
    }
    if (*(float *)(param_1 + 0x2da) == _DAT_007e3380) {
      ExceptionList = local_c;
      return piVar1;
    }
    puVar5 = operator_new(0x14);
    local_4 = 0x14;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
      goto LAB_0055720a;
    }
    puVar4 = operator_new(0x10);
    local_4._0_1_ = 0x15;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar2 = __ftol();
      FUN_004252e0(4);
      puVar4[3] = uVar2;
      *puVar4 = &PTR_FUN_007e3978;
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 0x16;
    pvVar6 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,0x17);
    if (pvVar6 == (void *)0x0) {
LAB_005571de:
      iVar14 = 0;
    }
    else {
      iVar14 = FUN_0053e740(0xde);
      if (iVar14 == 0) goto LAB_005571de;
      *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
    }
    puVar5[3] = iVar14;
    if (puVar4 == (undefined4 *)0x0) {
      *puVar5 = &PTR_FUN_007e3878;
      puVar5[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      puVar5[4] = puVar4;
      *puVar5 = &PTR_FUN_007e3878;
    }
LAB_0055720a:
    local_4 = 0xffffffff;
    (**(code **)(*piVar1 + 0x84))(puVar5);
    ExceptionList = local_10;
    return piVar1;
  }
  piVar3 = operator_new(0x1e);
  local_4 = 2;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *piVar3 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_00444250();
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  iVar14 = 0xd;
  puVar5 = (undefined4 *)(param_1 + 0x2ba);
  do {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *puVar5;
      puVar4[1] = 5;
      puVar4[2] = 0;
      puVar4[3] = uVar2;
      *puVar4 = &PTR_FUN_007e48ac;
    }
    (**(code **)(*piVar3 + 0x84))(puVar4);
    puVar5 = puVar5 + 1;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  puVar5 = operator_new(0x14);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
    goto LAB_00556d23;
  }
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_LAB_007e38f8;
  local_4._0_1_ = 5;
  local_4._1_3_ = 0;
  pvVar6 = operator_new(0x14);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (pvVar6 == (void *)0x0) {
LAB_00556cf7:
    iVar14 = 0;
  }
  else {
    iVar14 = FUN_0053e740(0x146);
    if (iVar14 == 0) goto LAB_00556cf7;
    *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 1;
  }
  puVar5[3] = iVar14;
  if (piVar3 == (int *)0x0) {
    *puVar5 = &PTR_FUN_007e3878;
    puVar5[4] = 0;
  }
  else {
    piVar3[2] = piVar3[2] + 1;
    puVar5[4] = piVar3;
    *puVar5 = &PTR_FUN_007e3878;
  }
LAB_00556d23:
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar5);
  ExceptionList = local_10;
  return piVar1;
}


