// FUN_006fa780 @ 6fa780 size=2444

void __fastcall FUN_006fa780(int param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int unaff_EBP;
  int iVar11;
  int iVar12;
  int unaff_EDI;
  undefined4 uVar13;
  undefined **ppuVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  void *pvVar18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007db224;
  pvStack_c = ExceptionList;
  iVar11 = *(int *)(DAT_00bd1bac + 4) + -0x400 >> 1;
  iVar10 = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
  }
  pvVar2 = operator_new(0x72);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00434930(0x9e,0xde,0,0);
  }
  pvVar2 = (void *)(iVar11 + 0x180);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uStack_4 = 0xffffffff;
  pvVar18 = pvVar2;
  (**(code **)(**(int **)(param_1 + 8) + 0x18))(pvVar2,iVar10 + 0xd0);
  (**(code **)(**(int **)(unaff_EBP + 0x10) + 0x18))(iVar11 + 0x18c,iVar10 + 0x17c);
  iVar12 = iVar11 + 0x2f8;
  (**(code **)(**(int **)(unaff_EDI + 0xc) + 0x18))(iVar12,unaff_EBP);
  iVar6 = **(int **)(unaff_EDI + 0x14);
  iVar4 = FUN_00415bd0(iVar10 + 0x170);
  (**(code **)(iVar6 + 0x18))((int)pvVar2 + (0x110 - iVar4 / 2));
  (**(code **)(**(int **)(unaff_EDI + 4) + 0x34))(iVar11 + 0x188,iVar10 + 0xd4);
  *(undefined1 *)(*(int *)(unaff_EDI + 4) + 0x5e) = 0;
  *(undefined4 *)(unaff_EDI + 0x1a) = 0;
  iVar10 = DAT_00d685a6;
  iVar11 = DAT_00d685a6;
  uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  if ((iVar10 != 0) && (*(int *)(iVar10 + 0x2ce4) == 1)) {
    FUN_006fb600(iVar10);
  }
  iVar10 = *(int *)(*DAT_00d12b40 + 0x36a);
  if (iVar10 < 8) {
    if (iVar10 < 0) {
      iVar10 = 0;
    }
  }
  else {
    iVar10 = 7;
  }
  pvVar2 = operator_new(0xa2);
  if (pvVar2 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    uVar15 = 0;
    ppuVar14 = &PTR_s_FE_DIFFI5_0086fbfc;
    uVar13 = 5;
    uVar8 = *(undefined4 *)(*DAT_00d12b40 + 0x366);
    uVar5 = FUN_0042b6c9(s_FEOPT_DIFFICULTY_0086f7f8);
    iVar6 = FUN_006fb6d0(uVar3,uVar5,uVar8,uVar13,ppuVar14,uVar15);
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + 0x12;
  }
  iVar4 = *(int *)(iVar12 + 4);
  iVar17 = *(int *)(iVar4 + 8);
  piVar7 = operator_new(0xe);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = iVar6;
    piVar7[1] = iVar17;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar6 = *(int *)(iVar4 + 0xc);
  *(int **)(iVar4 + 8) = piVar7;
  *(int *)(iVar4 + 0xc) = iVar6 + 1;
  if (iVar6 == 0) {
    *(int **)(iVar4 + 4) = piVar7;
  }
  else {
    *(int **)(iVar17 + 8) = piVar7;
  }
  pvVar2 = operator_new(0xa2);
  if (pvVar2 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    uVar15 = 1;
    ppuVar14 = &PTR_s_FEOPT_AI_LEVEL1_0086fc10;
    uVar13 = 5;
    uVar8 = *(undefined4 *)(*DAT_00d12b40 + 0x362);
    uVar5 = FUN_0042b6c9(s_FEOPT_AIAGGRE_0086f80c);
    iVar6 = FUN_006fb6d0(uVar3,uVar5,uVar8,uVar13,ppuVar14,uVar15);
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + 0x12;
  }
  iVar4 = *(int *)(iVar12 + 4);
  iVar17 = *(int *)(iVar4 + 8);
  piVar7 = operator_new(0xe);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = iVar6;
    piVar7[1] = iVar17;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar6 = *(int *)(iVar4 + 0xc);
  *(int **)(iVar4 + 8) = piVar7;
  *(int *)(iVar4 + 0xc) = iVar6 + 1;
  if (iVar6 == 0) {
    *(int **)(iVar4 + 4) = piVar7;
  }
  else {
    *(int **)(iVar17 + 8) = piVar7;
  }
  pvVar2 = operator_new(0xa2);
  if (pvVar2 == (void *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar13 = 2;
    ppuVar14 = &PTR_s_FEOPT_GAMESPEED0_0086fc44;
    uVar5 = 8;
    uVar8 = FUN_0042b6c9(s_FEOPT_GAMESPEED_0086b7b4);
    iVar10 = FUN_006fb6d0(uVar3,uVar8,iVar10,uVar5,ppuVar14,uVar13);
  }
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = iVar10 + 0x12;
  }
  iVar6 = *(int *)(iVar12 + 4);
  iVar4 = *(int *)(iVar6 + 8);
  piVar7 = operator_new(0xe);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = iVar10;
    piVar7[1] = iVar4;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar10 = *(int *)(iVar6 + 0xc);
  *(int **)(iVar6 + 8) = piVar7;
  *(int *)(iVar6 + 0xc) = iVar10 + 1;
  if (iVar10 == 0) {
    *(int **)(iVar6 + 4) = piVar7;
  }
  else {
    *(int **)(iVar4 + 8) = piVar7;
  }
  pvVar2 = operator_new(0xa2);
  if (pvVar2 == (void *)0x0) {
    iVar10 = 0;
    uVar8 = uVar3;
  }
  else {
    uVar16 = 3;
    ppuVar14 = &PTR_s_FEOPT_OFF_0086fc64;
    uVar15 = 2;
    uVar5 = *(undefined4 *)(*DAT_00d12b40 + 0x36e);
    uVar13 = FUN_0042b6c9(s_FEOPT_MULTI_0086f7ec);
    uVar8 = uVar3;
    iVar10 = FUN_006fb6d0(uVar3,uVar13,uVar5,uVar15,ppuVar14,uVar16);
  }
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = iVar10 + 0x12;
  }
  iVar6 = *(int *)(iVar12 + 4);
  iVar4 = *(int *)(iVar6 + 8);
  piVar7 = operator_new(0xe);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = iVar10;
    piVar7[1] = iVar4;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar10 = *(int *)(iVar6 + 0xc);
  *(int **)(iVar6 + 8) = piVar7;
  *(int *)(iVar6 + 0xc) = iVar10 + 1;
  if (iVar10 == 0) {
    *(int **)(iVar6 + 4) = piVar7;
  }
  else {
    *(int **)(iVar4 + 8) = piVar7;
  }
  pvVar2 = operator_new(0xa2);
  if (pvVar2 == (void *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar16 = 5;
    ppuVar14 = &PTR_s_FEOPT_AUTOSAVE1_0086fbe8;
    uVar15 = 5;
    uVar5 = *(undefined4 *)(*DAT_00d12b40 + 0x37a);
    uVar13 = FUN_0042b6c9(s_FEOPT_AUTOSAVE_0086b794);
    iVar10 = FUN_006fb6d0(uVar3,uVar13,uVar5,uVar15,ppuVar14,uVar16);
  }
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = iVar10 + 0x12;
  }
  iVar6 = *(int *)(iVar12 + 4);
  iVar4 = *(int *)(iVar6 + 8);
  piVar7 = operator_new(0xe);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = iVar10;
    piVar7[1] = iVar4;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar10 = *(int *)(iVar6 + 0xc);
  *(int **)(iVar6 + 8) = piVar7;
  *(int *)(iVar6 + 0xc) = iVar10 + 1;
  if (iVar10 == 0) {
    *(int **)(iVar6 + 4) = piVar7;
  }
  else {
    *(int **)(iVar4 + 8) = piVar7;
  }
  pvVar2 = operator_new(0xa2);
  if (pvVar2 == (void *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar16 = 4;
    ppuVar14 = &PTR_s_FEOPT_OFF_0086fc64;
    uVar15 = 2;
    uVar5 = *(undefined4 *)(*DAT_00d12b40 + 0x386);
    uVar13 = FUN_0042b6c9(s_FEOPT_COUNTERS_0086b7a4);
    iVar10 = FUN_006fb6d0(uVar3,uVar13,uVar5,uVar15,ppuVar14,uVar16);
  }
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = iVar10 + 0x12;
  }
  iVar6 = *(int *)(iVar12 + 4);
  iVar4 = *(int *)(iVar6 + 8);
  piVar7 = operator_new(0xe);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = iVar10;
    piVar7[1] = iVar4;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar10 = *(int *)(iVar6 + 0xc);
  *(int **)(iVar6 + 8) = piVar7;
  *(int *)(iVar6 + 0xc) = iVar10 + 1;
  if (iVar10 == 0) {
    *(int **)(iVar6 + 4) = piVar7;
  }
  else {
    *(int **)(iVar4 + 8) = piVar7;
  }
  pvVar2 = operator_new(0xa2);
  if (pvVar2 == (void *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar16 = 6;
    ppuVar14 = &PTR_s_FEOPT_OFF_0086fc64;
    uVar15 = 2;
    uVar5 = *(undefined4 *)(*DAT_00d12b40 + 0x3fa);
    uVar13 = FUN_0042b6c9(s_FEOPT_DEMWAR_0086f7dc);
    iVar10 = FUN_006fb6d0(uVar3,uVar13,uVar5,uVar15,ppuVar14,uVar16);
  }
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = iVar10 + 0x12;
  }
  iVar6 = *(int *)(iVar12 + 4);
  iVar4 = *(int *)(iVar6 + 8);
  piVar7 = operator_new(0xe);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = iVar10;
    piVar7[1] = iVar4;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar10 = *(int *)(iVar6 + 0xc);
  *(int **)(iVar6 + 8) = piVar7;
  *(int *)(iVar6 + 0xc) = iVar10 + 1;
  if (iVar10 == 0) {
    *(int **)(iVar6 + 4) = piVar7;
  }
  else {
    *(int **)(iVar4 + 8) = piVar7;
  }
  pvVar2 = operator_new(0xa2);
  if (pvVar2 == (void *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar16 = 7;
    ppuVar14 = &PTR_s_FEOPT_NO_CHANGE_0086fc24;
    uVar15 = 8;
    uVar5 = *(undefined4 *)(*DAT_00d12b40 + 0x3fe);
    uVar13 = FUN_0042b6c9(s_FEOPT_ENDDATE_0086f7cc);
    iVar10 = FUN_006fb6d0(uVar3,uVar13,uVar5,uVar15,ppuVar14,uVar16);
  }
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = iVar10 + 0x12;
  }
  iVar6 = *(int *)(iVar12 + 4);
  iVar4 = *(int *)(iVar6 + 8);
  piVar7 = operator_new(0xe);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = iVar10;
    piVar7[1] = iVar4;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar10 = *(int *)(iVar6 + 0xc);
  *(int **)(iVar6 + 8) = piVar7;
  *(int *)(iVar6 + 0xc) = iVar10 + 1;
  if (iVar10 == 0) {
    *(int **)(iVar6 + 4) = piVar7;
  }
  else {
    *(int **)(iVar4 + 8) = piVar7;
  }
  pvVar2 = operator_new(0xa2);
  if (pvVar2 == (void *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar16 = 8;
    ppuVar14 = &PTR_s_FEOPT_OFF_0086fc64;
    uVar15 = 2;
    uVar5 = *(undefined4 *)(*DAT_00d12b40 + 0x402);
    uVar13 = FUN_0042b6c9(s_FEOPT_ICTAKEOVER_0086f7b8);
    iVar10 = FUN_006fb6d0(uVar3,uVar13,uVar5,uVar15,ppuVar14,uVar16);
  }
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = iVar10 + 0x12;
  }
  iVar6 = *(int *)(iVar12 + 4);
  iVar4 = *(int *)(iVar6 + 8);
  piVar7 = operator_new(0xe);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = iVar10;
    piVar7[1] = iVar4;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar10 = *(int *)(iVar6 + 0xc);
  *(int **)(iVar6 + 8) = piVar7;
  *(int *)(iVar6 + 0xc) = iVar10 + 1;
  if (iVar10 == 0) {
    *(int **)(iVar6 + 4) = piVar7;
  }
  else {
    *(int **)(iVar4 + 8) = piVar7;
  }
  pvVar2 = operator_new(0xa2);
  if (pvVar2 == (void *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar16 = 9;
    ppuVar14 = &PTR_s_FEOPT_OFF_0086fc64;
    uVar15 = 2;
    uVar5 = *(undefined4 *)(*DAT_00d12b40 + 0x406);
    uVar13 = FUN_0042b6c9(s_FEOPT_TECHTEAMTAKEOVER_0086f7a0);
    iVar10 = FUN_006fb6d0(uVar3,uVar13,uVar5,uVar15,ppuVar14,uVar16);
  }
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = iVar10 + 0x12;
  }
  iVar6 = *(int *)(iVar12 + 4);
  iVar4 = *(int *)(iVar6 + 8);
  iVar17 = iVar12;
  piVar7 = operator_new(0xe);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = iVar10;
    piVar7[1] = iVar4;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar10 = *(int *)(iVar6 + 0xc);
  *(int **)(iVar6 + 8) = piVar7;
  *(int *)(iVar6 + 0xc) = iVar10 + 1;
  if (iVar10 == 0) {
    *(int **)(iVar6 + 4) = piVar7;
  }
  else {
    *(int **)(iVar4 + 8) = piVar7;
  }
  if ((iVar11 != 0) && (*(int *)(iVar11 + 0x2ce4) == 1)) {
    piVar7 = *(int **)(*(int *)(iVar12 + 4) + 4);
    while (piVar7 != (int *)0x0) {
      piVar1 = (int *)piVar7[2];
      if (*piVar7 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *piVar7 + -0x12;
      }
      switch(*(undefined4 *)(iVar10 + 0x40)) {
      case 0:
        iVar6 = *(int *)(iVar11 + 0x2cee);
        break;
      case 1:
        iVar6 = *(int *)(iVar11 + 0x2cea);
        break;
      case 2:
        iVar6 = *(int *)(iVar11 + 0x2cf2);
        break;
      case 3:
        iVar6 = *(int *)(iVar11 + 0x2cf6);
        break;
      default:
        goto switchD_006fafd1_caseD_4;
      case 6:
        iVar6 = *(int *)(iVar11 + 0x2cfa);
        break;
      case 7:
        iVar6 = *(int *)(iVar11 + 0x2cfe);
        break;
      case 8:
        iVar6 = *(int *)(iVar11 + 0x2d02);
        break;
      case 9:
        iVar6 = *(int *)(iVar11 + 0x2d06);
      }
      if (iVar6 != -1) {
        *(undefined1 *)(iVar10 + 0xa0) = 0;
      }
switchD_006fafd1_caseD_4:
      piVar7 = piVar1;
    }
  }
  piVar7 = (int *)DAT_00d12b40[2];
  while (piVar7 != (int *)0x0) {
    piVar1 = (int *)piVar7[2];
    iVar10 = *piVar7;
    pvVar2 = operator_new(0xa2);
    if (pvVar2 == (void *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = FUN_006fb6d0(uVar8,iVar10 + 0x100,*(undefined1 *)(iVar10 + 0x200),2,
                            &PTR_s_FEOPT_OFF_0086fc64,0xffffffff);
    }
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = iVar10 + 0x12;
    }
    iVar11 = *(int *)(iVar17 + 4);
    iVar6 = *(int *)(iVar11 + 8);
    piVar9 = operator_new(0xe);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      *piVar9 = iVar10;
      piVar9[1] = iVar6;
      piVar9[2] = 0;
      *(undefined1 *)(piVar9 + 3) = 0;
    }
    iVar10 = *(int *)(iVar11 + 0xc);
    *(int **)(iVar11 + 8) = piVar9;
    *(int *)(iVar11 + 0xc) = iVar10 + 1;
    piVar7 = piVar1;
    if (iVar10 == 0) {
      *(int **)(iVar11 + 4) = piVar9;
    }
    else {
      *(int **)(iVar6 + 8) = piVar9;
    }
  }
  ExceptionList = pvVar18;
  return;
}


