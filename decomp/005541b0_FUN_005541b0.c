// FUN_005541b0 @ 5541b0 size=5006

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_005541b0(int *param_1)

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
  void *pvVar11;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int iVar12;
  int *unaff_EDI;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c52d4;
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
    if (*(int *)((int)param_1 + 0x11e) != 0x8c) {
      piVar3 = operator_new(0x14);
      local_4 = 0x18;
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        puVar5 = operator_new(0x10);
        local_4._0_1_ = 0x19;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)((int)param_1 + 0xfe);
          FUN_004252e0(5);
          *puVar5 = &PTR_FUN_007e48ac;
          puVar5[3] = uVar2;
        }
        piVar3[1] = 0;
        piVar3[2] = 0;
        *piVar3 = (int)&PTR_LAB_007e38f8;
        local_4._0_1_ = 0x1a;
        pvVar6 = operator_new(0x14);
        local_4 = CONCAT31(local_4._1_3_,0x1b);
        if (pvVar6 == (void *)0x0) {
LAB_00554919:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xc1);
          if (iVar12 == 0) goto LAB_00554919;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        piVar3[3] = iVar12;
        if (puVar5 == (undefined4 *)0x0) {
          *piVar3 = (int)&PTR_FUN_007e3878;
          piVar3[4] = 0;
        }
        else {
          puVar5[2] = puVar5[2] + 1;
          piVar3[4] = (int)puVar5;
          *piVar3 = (int)&PTR_FUN_007e3878;
        }
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar1 + 0x84))();
      piVar7 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x1c;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        puVar5 = operator_new(0x10);
        puStack_8._0_1_ = 0x1d;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)((int)param_1 + 0xf6);
          FUN_004252e0(5);
          *puVar5 = &PTR_FUN_007e48ac;
          puVar5[3] = uVar2;
        }
        piVar7[1] = 0;
        piVar7[2] = 0;
        *piVar7 = (int)&PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x1e;
        pvVar6 = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1f);
        if (pvVar6 == (void *)0x0) {
LAB_005549fa:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xc6);
          if (iVar12 == 0) goto LAB_005549fa;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        piVar7[3] = iVar12;
        piVar1 = param_1;
        if (puVar5 == (undefined4 *)0x0) {
          *piVar7 = (int)&PTR_FUN_007e3878;
          piVar7[4] = 0;
        }
        else {
          puVar5[2] = puVar5[2] + 1;
          piVar7[4] = (int)puVar5;
          *piVar7 = (int)&PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*piVar1 + 0x84))();
      if (*(float *)((int)param_1 + 0xfa) != _DAT_007e3380) {
        puVar5 = operator_new(0x14);
        local_c = (void *)0x20;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar4 = operator_new(0x10);
          local_c._0_1_ = 0x21;
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            uVar2 = *(undefined4 *)((int)param_1 + 0xfa);
            FUN_004252e0(5);
            *puVar4 = &PTR_FUN_007e48ac;
            puVar4[3] = uVar2;
          }
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = &PTR_LAB_007e38f8;
          local_c._0_1_ = 0x22;
          pvVar6 = operator_new(0x14);
          local_c = (void *)CONCAT31(local_c._1_3_,0x23);
          if (pvVar6 == (void *)0x0) {
LAB_00554af2:
            iVar12 = 0;
          }
          else {
            iVar12 = FUN_0053e740(199);
            if (iVar12 == 0) goto LAB_00554af2;
            *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
          }
          puVar5[3] = iVar12;
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
        local_c = (void *)0xffffffff;
        (**(code **)(*unaff_EBX + 0x84))(puVar5);
      }
      piVar1 = operator_new(0x14);
      local_c = (void *)0x24;
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        puVar5 = operator_new(0x10);
        local_c._0_1_ = 0x25;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          FUN_004252e0(4);
          puVar5[3] = uVar2;
          *puVar5 = &PTR_FUN_007e3978;
        }
        piVar1[1] = 0;
        piVar1[2] = 0;
        *piVar1 = (int)&PTR_LAB_007e38f8;
        local_c._0_1_ = 0x26;
        pvVar6 = operator_new(0x14);
        local_c = (void *)CONCAT31(local_c._1_3_,0x27);
        if (pvVar6 == (void *)0x0) {
LAB_00554bcf:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xc9);
          if (iVar12 == 0) goto LAB_00554bcf;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        piVar1[3] = iVar12;
        if (puVar5 == (undefined4 *)0x0) {
          *piVar1 = (int)&PTR_FUN_007e3878;
          piVar1[4] = 0;
        }
        else {
          puVar5[2] = puVar5[2] + 1;
          piVar1[4] = (int)puVar5;
          *piVar1 = (int)&PTR_FUN_007e3878;
        }
      }
      local_c = (void *)0xffffffff;
      (**(code **)(*unaff_EBX + 0x84))();
      piVar8 = operator_new(0x14);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        puVar5 = operator_new(0x10);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          FUN_004252e0(4);
          puVar5[3] = uVar2;
          *puVar5 = &PTR_FUN_007e3978;
          unaff_EBX = unaff_EBP;
        }
        piVar8[1] = 0;
        piVar8[2] = 0;
        *piVar8 = (int)&PTR_LAB_007e38f8;
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_00554cb4:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(200);
          if (iVar12 == 0) goto LAB_00554cb4;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        piVar8[3] = iVar12;
        if (puVar5 == (undefined4 *)0x0) {
          *piVar8 = (int)&PTR_FUN_007e3878;
          piVar8[4] = 0;
        }
        else {
          puVar5[2] = puVar5[2] + 1;
          piVar8[4] = (int)puVar5;
          *piVar8 = (int)&PTR_FUN_007e3878;
        }
      }
      (**(code **)(*unaff_EBX + 0x84))();
      piVar9 = operator_new(0x14);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        puVar5 = operator_new(0x10);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          FUN_004252e0(4);
          puVar5[3] = uVar2;
          *puVar5 = &PTR_FUN_007e3978;
          unaff_EBX = unaff_ESI;
        }
        piVar9[1] = 0;
        piVar9[2] = 0;
        *piVar9 = (int)&PTR_LAB_007e38f8;
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_00554d93:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xca);
          if (iVar12 == 0) goto LAB_00554d93;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        piVar9[3] = iVar12;
        if (puVar5 == (undefined4 *)0x0) {
          *piVar9 = (int)&PTR_FUN_007e3878;
          piVar9[4] = 0;
        }
        else {
          puVar5[2] = puVar5[2] + 1;
          piVar9[4] = (int)puVar5;
          *piVar9 = (int)&PTR_FUN_007e3878;
        }
      }
      (**(code **)(*unaff_EBX + 0x84))();
      piVar10 = operator_new(0x14);
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        puVar5 = operator_new(0x10);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          FUN_004252e0(4);
          puVar5[3] = uVar2;
          *puVar5 = &PTR_FUN_007e3978;
          unaff_EBX = unaff_EDI;
        }
        piVar10[1] = 0;
        piVar10[2] = 0;
        *piVar10 = (int)&PTR_LAB_007e38f8;
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_00554e72:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xcb);
          if (iVar12 == 0) goto LAB_00554e72;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        piVar10[3] = iVar12;
        if (puVar5 == (undefined4 *)0x0) {
          *piVar10 = (int)&PTR_FUN_007e3878;
          piVar10[4] = 0;
        }
        else {
          puVar5[2] = puVar5[2] + 1;
          piVar10[4] = (int)puVar5;
          *piVar10 = (int)&PTR_FUN_007e3878;
        }
      }
      (**(code **)(*unaff_EBX + 0x84))();
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
          uVar2 = __ftol();
          unaff_EBX = piVar3;
          FUN_00444030(4);
          puVar4[3] = uVar2;
          *puVar4 = &PTR_FUN_007e3978;
        }
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = &PTR_LAB_007e38f8;
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_00554f51:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xcc);
          if (iVar12 == 0) goto LAB_00554f51;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        puVar5[3] = iVar12;
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
      (**(code **)(*unaff_EBX + 0x84))(puVar5);
      piVar3 = operator_new(0x14);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        puVar5 = operator_new(0x10);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          FUN_00444030(4);
          puVar5[3] = uVar2;
          *puVar5 = &PTR_FUN_007e3978;
        }
        FUN_004252e0(0);
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_0055502d:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xcd);
          if (iVar12 == 0) goto LAB_0055502d;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        piVar3[3] = iVar12;
        if (puVar5 == (undefined4 *)0x0) {
          *piVar3 = (int)&PTR_FUN_007e3878;
          piVar3[4] = 0;
        }
        else {
          puVar5[2] = puVar5[2] + 1;
          piVar3[4] = (int)puVar5;
          *piVar3 = (int)&PTR_FUN_007e3878;
        }
      }
      (**(code **)(*piVar7 + 0x84))();
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
          uVar2 = __ftol();
          piVar7 = piVar1;
          FUN_00444030(4);
          puVar4[3] = uVar2;
          *puVar4 = &PTR_FUN_007e3978;
        }
        FUN_004252e0(0);
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_00555113:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xce);
          if (iVar12 == 0) goto LAB_00555113;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        puVar5[3] = iVar12;
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
      (**(code **)(*piVar7 + 0x84))(puVar5);
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
          uVar2 = __ftol();
          FUN_00444030(4);
          puVar4[3] = uVar2;
          *puVar4 = &PTR_FUN_007e3978;
        }
        FUN_004252e0(0);
        pvVar6 = operator_new(0x14);
        if (pvVar6 == (void *)0x0) {
LAB_005551f1:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xcf);
          if (iVar12 == 0) goto LAB_005551f1;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        puVar5[3] = iVar12;
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
      (**(code **)(*piVar8 + 0x84))(puVar5);
      puVar5 = operator_new(0x14);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
        goto LAB_00555303;
      }
      puVar4 = operator_new(0x10);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        uVar2 = __ftol();
        piVar8 = piVar9;
        FUN_00444030(4);
        puVar4[3] = uVar2;
        *puVar4 = &PTR_FUN_007e3978;
      }
      FUN_004252e0(0);
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
LAB_005552d7:
        iVar12 = 0;
      }
      else {
        iVar12 = FUN_0053e740(0xd0);
        if (iVar12 == 0) goto LAB_005552d7;
        *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
      }
      puVar5[3] = iVar12;
      if (puVar4 == (undefined4 *)0x0) {
        *puVar5 = &PTR_FUN_007e3878;
        puVar5[4] = 0;
      }
      else {
        puVar4[2] = puVar4[2] + 1;
        puVar5[4] = puVar4;
        *puVar5 = &PTR_FUN_007e3878;
      }
LAB_00555303:
      (**(code **)(*piVar8 + 0x84))(puVar5);
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        puVar5 = operator_new(0x10);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          uVar2 = __ftol();
          FUN_00444030(4);
          puVar5[3] = uVar2;
          *puVar5 = &PTR_FUN_007e3978;
        }
        uVar2 = FUN_004441b0(0xc2,puVar5);
      }
      (**(code **)(*piVar10 + 0x84))(uVar2);
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
        uVar2 = FUN_004441b0(0xc3,uVar2);
      }
      (**(code **)(*piVar10 + 0x84))(uVar2);
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
        uVar2 = FUN_004441b0(0xc5,uVar2);
      }
      (**(code **)(*piVar3 + 0x84))(uVar2);
      pvVar6 = operator_new(0x14);
      if (pvVar6 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        pvVar11 = operator_new(0x10);
        if (pvVar11 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = __ftol();
          uVar2 = FUN_00516850(uVar2);
        }
        uVar2 = FUN_004441b0(0xc4,uVar2);
      }
      (**(code **)(*piVar3 + 0x84))(uVar2);
      ExceptionList = pvVar6;
      return piVar3;
    }
    if (*(float *)((int)param_1 + 0x2ba) != _DAT_007e3380) {
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
LAB_0055444a:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xc9);
          if (iVar12 == 0) goto LAB_0055444a;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        puVar5[3] = iVar12;
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
    if (*(float *)((int)param_1 + 0x102) != _DAT_007e3380) {
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
LAB_0055453a:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xcc);
          if (iVar12 == 0) goto LAB_0055453a;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        puVar5[3] = iVar12;
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
    if (*(float *)((int)param_1 + 0x2ca) != _DAT_007e3380) {
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
LAB_0055462a:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xcd);
          if (iVar12 == 0) goto LAB_0055462a;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        puVar5[3] = iVar12;
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
    if (*(float *)((int)param_1 + 0x2ce) != _DAT_007e3380) {
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
LAB_00554724:
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_0053e740(0xce);
          if (iVar12 == 0) goto LAB_00554724;
          *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
        }
        puVar5[3] = iVar12;
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
    if (*(float *)((int)param_1 + 0x106) == _DAT_007e3380) {
      ExceptionList = local_c;
      return piVar1;
    }
    puVar5 = operator_new(0x14);
    local_4 = 0x14;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
      goto LAB_0055484a;
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
LAB_0055481e:
      iVar12 = 0;
    }
    else {
      iVar12 = FUN_0053e740(0xd0);
      if (iVar12 == 0) goto LAB_0055481e;
      *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
    }
    puVar5[3] = iVar12;
    if (puVar4 == (undefined4 *)0x0) {
      *puVar5 = &PTR_FUN_007e3878;
      puVar5[4] = 0;
    }
    else {
      puVar4[2] = puVar4[2] + 1;
      puVar5[4] = puVar4;
      *puVar5 = &PTR_FUN_007e3878;
    }
LAB_0055484a:
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
  iVar12 = 0xd;
  puVar5 = (undefined4 *)((int)param_1 + 0x2ba);
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
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar5 = operator_new(0x14);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
    goto LAB_00554363;
  }
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_LAB_007e38f8;
  local_4._0_1_ = 5;
  local_4._1_3_ = 0;
  pvVar6 = operator_new(0x14);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (pvVar6 == (void *)0x0) {
LAB_00554337:
    iVar12 = 0;
  }
  else {
    iVar12 = FUN_0053e740(0x145);
    if (iVar12 == 0) goto LAB_00554337;
    *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
  }
  puVar5[3] = iVar12;
  if (piVar3 == (int *)0x0) {
    *puVar5 = &PTR_FUN_007e3878;
    puVar5[4] = 0;
  }
  else {
    piVar3[2] = piVar3[2] + 1;
    puVar5[4] = piVar3;
    *puVar5 = &PTR_FUN_007e3878;
  }
LAB_00554363:
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar5);
  ExceptionList = local_10;
  return piVar1;
}


